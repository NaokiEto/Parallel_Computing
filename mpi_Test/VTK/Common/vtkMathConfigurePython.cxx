// python wrapper for vtkMathConfigure
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
#include "vtkMathConfigure.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMathConfigure(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMathConfigure(PyObject *, const char *); }
#endif
void PyVTKAddFile_vtkMathConfigure(
  PyObject *dict, const char *)
{
  PyObject *o;
  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HAS_ISNAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HAS_ISINF", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HAS_STD_NUMERIC_LIMITS", o) != 0)
    {
    Py_DECREF(o);
    }

}

