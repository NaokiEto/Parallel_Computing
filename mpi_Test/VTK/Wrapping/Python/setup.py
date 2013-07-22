#!/usr/bin/env python

"""
setup.py for installing the VTK-Python bindings using distutils.

Created by Prabhu Ramachandran, June 2002.

Updated for install with configuration types by Brad King, August 2005.

"""

import sys
import string
import os
import os.path
from types import StringType
from distutils.core import setup
from distutils.command.install_data import install_data
from distutils.sysconfig import get_config_var

# Support for Python Eggs:
#  http://peak.telecommunity.com/DevCenter/PythonEggs
#  http://peak.telecommunity.com/DevCenter/EasyInstall
has_setup_tools = 0
try:
    from setuptools import setup
except ImportError:
    pass
else:
    has_setup_tools = 1

# VTK build configuration settings.
vtk_version = "5.8.0"
vtk_lib_dir = "/home/lakers/Downloads/VTK/bin"
vtk_bin_dir = "/home/lakers/Downloads/VTK/bin"
vtk_use_rendering = 1
vtk_use_parallel = 1
vtk_use_charts = 1
vtk_use_geovis = 1
vtk_use_infovis = 1
vtk_use_text_analysis = 0
vtk_use_views = 1
vtk_use_mpi = 1
vtk_has_configuration_types = 0
vtk_use_sip = 0
vtk_use_qt = 0

# The build type ('Release', 'Debug' etc.).  If vtk_has_configuration_types
# is true this must be set.  It may be set on the command line by something
# like 'BUILD_TYPE=Release'.  For example::
#   python setup.py install --prefix=D:\\Python23 BUILD_TYPE=Release
vtk_build_type = []

# Construct the list of kit names to be installed.
vtk_kit_names = ['Common', 'Filtering', 'IO', 'Graphics',
                 'GenericFiltering', 'Imaging']
vtk_kit_names2 = []
vtk_kit_names3 = []
if vtk_use_rendering:
    vtk_kit_names.extend(['Rendering', 'VolumeRendering', 'Hybrid', 'Widgets'])
if vtk_use_parallel:
    vtk_kit_names.extend(['Parallel'])
if vtk_use_charts:
    vtk_kit_names.extend(['Charts'])
if vtk_use_geovis:
    vtk_kit_names.extend(['Geovis'])
if vtk_use_infovis:
    vtk_kit_names.extend(['Infovis'])
if vtk_use_text_analysis:
    vtk_kit_names.extend(['TextAnalysis'])
if vtk_use_views:
    vtk_kit_names.extend(['Views'])
if vtk_use_qt:
    vtk_kit_names2.extend(['Qt'])
    vtk_kit_names3.extend(['QVTK'])

# Construct the list of executable names to be installed.
vtk_exe_names = ['vtkpython']
if vtk_use_parallel and vtk_use_mpi:
    vtk_exe_names.extend(['pvtkpython'])

def get_libs():
    """Returns a list of libraries to be installed.  """
    libs = []

    # Select platform-specific components of the module file names.
    if os.name == 'posix':
        dir = vtk_lib_dir
        prefix = 'vtk'
        suffix = get_config_var('SO')
    else:
        dir = vtk_bin_dir.replace('/', '\\')
        prefix = 'vtk'
        suffix = '.pyd'

    # If this build has configuration types append the selected configuration.
    if vtk_has_configuration_types:
        dir = os.path.join(dir, vtk_build_type)

    # Enumerate ths list of module files.
    for kit in vtk_kit_names:
        libs.append(os.path.abspath(os.path.join(dir, prefix+kit+'Python'+suffix)))
        if vtk_use_sip:
          libs.append(os.path.abspath(os.path.join(dir, 'vtk'+kit+'PythonSIP'+suffix)))

    for kit in vtk_kit_names2:
        libs.append(os.path.abspath(os.path.join(dir, prefix+kit+'Python'+suffix)))

    for kit in vtk_kit_names3:
        libs.append(os.path.abspath(os.path.join(dir, kit+'Python'+suffix)))

    return libs


def get_scripts():
    """Returns the appropriate vtkpython executable and pvtkpython
    that is to be installed."""
    scripts = []

    # Select platform-specific components of the executable file names.
    if os.name == 'posix':
        dir = vtk_lib_dir
        suffix = ''
    else:
        dir = vtk_bin_dir.replace('/', '\\')
        suffix = '.exe'

    # If this build has configuration types append the selected configuration.
    if vtk_has_configuration_types:
        dir = os.path.join(dir, vtk_build_type)

    # Enumerate ths list of executable files.
    for exe in vtk_exe_names:
        scripts.append(os.path.abspath(os.path.join(dir, exe+suffix)))

    return scripts


class my_install_data (install_data):
    def finalize_options (self):
        """Needed to make this thing work properly."""
        self.set_undefined_options ('install',
                                    ('install_lib', 'install_dir'),
                                    ('root', 'root'),
                                    ('force', 'force'),
                                    )

if __name__ == '__main__':
    # Get the optional build type argument.
    for x in sys.argv[:]:
        if string.find(x, 'BUILD_TYPE') > -1:
            vtk_build_type = string.strip(string.split(x, '=')[1])
            sys.argv.remove(x)
            break

    # Make sure a build type was specified if it is required.
    if vtk_has_configuration_types:
        if not vtk_build_type:
            raise "ERROR: Must specify BUILD_TYPE=<config-name> on command line."

    def mk_dict(**kw):
        # Unnecessary in recent Pythons but handy for earlier
        # versions.
        return kw

    # The options for setup.
    opts = mk_dict(name              = "VTK",
                   version           = vtk_version,
                   description       = "The Visualization Toolkit",
                   maintainer        = "VTK Developers",
                   maintainer_email  = "vtk-developers@vtk.org",
                   license           = "BSD",
                   long_description  = "A high level visualization library",
                   url               = "http://www.vtk.org/",
                   platforms         = ['Any'],
                   cmdclass          = {'install_data': my_install_data},
                   packages          = ['vtk', 'vtk.gtk', 'vtk.qt', 'vtk.qt4',
                                        'vtk.tk', 'vtk.util', 'vtk.wx',
                                        'vtk.test'],
                   #scripts           = get_scripts(),
                   data_files        = [('vtk', get_libs())]
                   )
    # If setup_tools is available, then add an extra option to disable
    # creation of a ZIP file.
    if has_setup_tools:
        opts['zip_safe'] = 0

    setup(**opts)
