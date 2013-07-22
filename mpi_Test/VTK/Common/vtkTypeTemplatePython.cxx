// python wrapper for vtkTypeTemplate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#if !defined(__APPLE__)
#include "vtkPython.h"
#undef _XOPEN_SOURCE /* Conflicts with standards.h.  */
#undef _THREAD_SAFE /* Conflicts with pthread.h.  */
#endif
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <vtksys/ios/sstream>
#include "vtkTypeTemplate.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTypeTemplate(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTypeTemplate(PyObject *, const char *); }
#endif
void PyVTKAddFile_vtkTypeTemplate(
  PyObject *, const char *)
{
}

