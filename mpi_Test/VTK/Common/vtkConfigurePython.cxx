// python wrapper for vtkConfigure
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
#include "vtkConfigure.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkConfigure(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkConfigure(PyObject *, const char *); }
#endif
void PyVTKAddFile_vtkConfigure(
  PyObject *dict, const char *)
{
  PyObject *o;
  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_PTHREADS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(64);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_THREADS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_CHAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_SHORT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_INT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_FLOAT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_DOUBLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_VOID_P", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_LONG_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_USE_LONG_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_CHAR_IS_SIGNED", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COMPILER_HAS_BOOL", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OSTREAM_SUPPORTS_LONG_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HAVE_GETSOCKNAME_WITH_SOCKLEN_T", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_REQUIRE_LARGE_FILE_SUPPORT", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CONST_REVERSE_ITERATOR_COMPARISON", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TARGET_SUPPORTS_SHARED_LIBS", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BUILD_SHARED_LIBS", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_ANSI_STDLIB", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_N_WAY_ARRAYS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAJOR_VERSION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MINOR_VERSION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BUILD_VERSION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("5.8.0"));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VERSION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("/usr/bin/mpiCC"));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CXX_COMPILER", o) != 0)
    {
    Py_DECREF(o);
    }


  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_IOSTREAM_NEED_OPERATORS_LL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)(""));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_R_HOME", o) != 0)
    {
    Py_DECREF(o);
    }

}

