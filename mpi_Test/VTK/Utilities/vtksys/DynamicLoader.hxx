/*============================================================================
  KWSys - Kitware System Library
  Copyright 2000-2009 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#ifndef vtksys_DynamicLoader_hxx
#define vtksys_DynamicLoader_hxx

#include <vtksys/Configure.h>

#if defined(__hpux)
  #include <dl.h>
#elif defined(_WIN32) && !defined(__CYGWIN__)
  #include <windows.h>
#elif defined(__APPLE__)
  #include <AvailabilityMacros.h>
  #if MAC_OS_X_VERSION_MAX_ALLOWED < 1030
    #include <mach-o/dyld.h>
  #endif
#elif defined(__BEOS__)
  #include <be/kernel/image.h>
#endif

namespace vtksys
{
/** \class DynamicLoader
 * \brief Portable loading of dynamic libraries or dll's.
 *
 * DynamicLoader provides a portable interface to loading dynamic
 * libraries or dll's into a process.
 *
 * Directory currently works with Windows, Apple, HP-UX and Unix (POSIX)
 * operating systems
 *
 * \warning dlopen on *nix system works the following way:
 * If filename contains a slash ("/"), then it is interpreted as a (relative
 * or absolute) pathname.  Otherwise, the dynamic linker searches for the
 * library as follows : see ld.so(8) for further details):
 * Whereas this distinction does not exist on Win32. Therefore ideally you
 * should be doing full path to garantee to have a consistent way of dealing
 * with dynamic loading of shared library.
 *
 * \warning the Cygwin implementation do not use the Win32 HMODULE. Put extra
 * condition so that we can include the correct declaration (POSIX)
 */

class vtksys_EXPORT DynamicLoader
{
public:
// Ugly stuff for library handles
// They are different on several different OS's
#if defined(__hpux)
  typedef shl_t LibraryHandle;
#elif defined(_WIN32) && !defined(__CYGWIN__)
  typedef HMODULE LibraryHandle;
#elif defined(__APPLE__)
  #if MAC_OS_X_VERSION_MAX_ALLOWED < 1030
    typedef NSModule LibraryHandle;
  #else
    typedef void* LibraryHandle;
  #endif
#elif defined(__BEOS__)
  typedef image_id LibraryHandle;
#else  // POSIX
  typedef void* LibraryHandle;
#endif

  // Return type from DynamicLoader::GetSymbolAddress.
  typedef void (*SymbolPointer)();

  /** Load a dynamic library into the current process.
   * The returned LibraryHandle can be used to access the symbols in the
   * library. */
  static LibraryHandle OpenLibrary(const char*);

  /** Attempt to detach a dynamic library from the
   * process.  A value of true is returned if it is sucessful. */
  static int CloseLibrary(LibraryHandle);

  /** Find the address of the symbol in the given library. */
  static SymbolPointer GetSymbolAddress(LibraryHandle, const char*);

  /** Return the default module prefix for the current platform.  */
  static const char* LibPrefix() { return "lib"; }

  /** Return the default module suffix for the current platform.  */
  static const char* LibExtension() { return ".so"; }

  /** Return the last error produced from a calls made on this class. */
  static const char* LastError();
}; // End Class: DynamicLoader

} // namespace vtksys

#endif
