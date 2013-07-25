// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {PyObject *PyVTKAddFile_vtkCompassRepresentation(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkCompassWidget(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoAdaptiveArcs(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoAlignedImageRepresentation(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoAlignedImageSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoArcs(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoAssignCoordinates(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoCamera(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoFileImageSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoFileTerrainSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoGlobeSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoGraticule(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoImageNode(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoInteractorStyle(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoProjectionSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoProjection(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoRandomGraphSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoSampleArcs(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoSource(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoSphereTransform(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoTerrain(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoTerrain2D(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoTerrainNode(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoTransform(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoTreeNode(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoTreeNodeCache(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoView(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGeoView2D(PyObject *, const char *); }
extern  "C" {PyObject *PyVTKAddFile_vtkGlobeSource(PyObject *, const char *); }

static PyMethodDef PyvtkGeovisPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

static void real_initvtkGeovisPython(const char *modulename);

extern  "C" { void initvtkGeovisPython(); }

void initvtkGeovisPython()
{
  static const char modulename[] = "vtkGeovisPython";
  real_initvtkGeovisPython(modulename);
}

extern  "C" { void initlibvtkGeovisPython(); }

void initlibvtkGeovisPython()
{
  static const char modulename[] = "libvtkGeovisPython";
  real_initvtkGeovisPython(modulename);
}

void real_initvtkGeovisPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkGeovisPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkGeovisPython");
    }
  PyVTKAddFile_vtkCompassRepresentation(d, modulename);
  PyVTKAddFile_vtkCompassWidget(d, modulename);
  PyVTKAddFile_vtkGeoAdaptiveArcs(d, modulename);
  PyVTKAddFile_vtkGeoAlignedImageRepresentation(d, modulename);
  PyVTKAddFile_vtkGeoAlignedImageSource(d, modulename);
  PyVTKAddFile_vtkGeoArcs(d, modulename);
  PyVTKAddFile_vtkGeoAssignCoordinates(d, modulename);
  PyVTKAddFile_vtkGeoCamera(d, modulename);
  PyVTKAddFile_vtkGeoFileImageSource(d, modulename);
  PyVTKAddFile_vtkGeoFileTerrainSource(d, modulename);
  PyVTKAddFile_vtkGeoGlobeSource(d, modulename);
  PyVTKAddFile_vtkGeoGraticule(d, modulename);
  PyVTKAddFile_vtkGeoImageNode(d, modulename);
  PyVTKAddFile_vtkGeoInteractorStyle(d, modulename);
  PyVTKAddFile_vtkGeoProjectionSource(d, modulename);
  PyVTKAddFile_vtkGeoProjection(d, modulename);
  PyVTKAddFile_vtkGeoRandomGraphSource(d, modulename);
  PyVTKAddFile_vtkGeoSampleArcs(d, modulename);
  PyVTKAddFile_vtkGeoSource(d, modulename);
  PyVTKAddFile_vtkGeoSphereTransform(d, modulename);
  PyVTKAddFile_vtkGeoTerrain(d, modulename);
  PyVTKAddFile_vtkGeoTerrain2D(d, modulename);
  PyVTKAddFile_vtkGeoTerrainNode(d, modulename);
  PyVTKAddFile_vtkGeoTransform(d, modulename);
  PyVTKAddFile_vtkGeoTreeNode(d, modulename);
  PyVTKAddFile_vtkGeoTreeNodeCache(d, modulename);
  PyVTKAddFile_vtkGeoView(d, modulename);
  PyVTKAddFile_vtkGeoView2D(d, modulename);
  PyVTKAddFile_vtkGlobeSource(d, modulename);
}
