// python wrapper for vtkType
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
#include "vtkType.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkType(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkType(PyObject *, const char *); }
#endif
void PyVTKAddFile_vtkType(
  PyObject *dict, const char *)
{
  PyObject *o;
  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CHAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(15);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIGNED_CHAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_CHAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SHORT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_SHORT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_INT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLOAT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(11);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DOUBLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ID_TYPE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(13);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STRING", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(14);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OPAQUE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LONG_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(17);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_LONG_LONG", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(18);
  if (o && PyDict_SetItemString(dict, (char *)"VTK___INT64", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(19);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED___INT64", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(20);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VARIANT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(21);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OBJECT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(22);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNICODE_STRING", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POLY_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STRUCTURED_POINTS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_STRUCTURED_GRID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RECTILINEAR_GRID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSTRUCTURED_GRID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PIECEWISE_FUNCTION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_IMAGE_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DATA_OBJECT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POINT_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNIFORM_GRID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(11);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COMPOSITE_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MULTIGROUP_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(13);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MULTIBLOCK_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(14);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIERARCHICAL_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(15);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIERARCHICAL_BOX_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GENERIC_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(17);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HYPER_OCTREE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(18);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TEMPORAL_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(19);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TABLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(20);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GRAPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(21);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TREE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(22);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SELECTION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(23);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DIRECTED_GRAPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(24);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNDIRECTED_GRAPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(25);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MULTIPIECE_DATA_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(26);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DIRECTED_ACYCLIC_GRAPH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(27);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ARRAY_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIT_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIT_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(char, 0x80));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CHAR_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(char, 0x7f));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CHAR_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(signed char, 0x80));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIGNED_CHAR_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(signed char, 0x7f));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIGNED_CHAR_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(unsigned char, 0u));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_CHAR_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(unsigned char, 0xffu));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_CHAR_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(short, 0x8000));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SHORT_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(short, 0x7fff));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SHORT_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(unsigned short, 0u));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_SHORT_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(unsigned short, 0xffffu));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_SHORT_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(int, ~(~0u >> 1)));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INT_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_TYPE_CAST(int, ~0u >> 1));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INT_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(VTK_TYPE_CAST(unsigned int, 0));
#else
  o = PyLong_FromUnsignedLong(VTK_TYPE_CAST(unsigned int, 0));
#endif
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_INT_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
  o = PyInt_FromLong(VTK_TYPE_CAST(unsigned int, ~0u));
#else
  o = PyLong_FromUnsignedLong(VTK_TYPE_CAST(unsigned int, ~0u));
#endif
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_INT_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromLongLong(VTK_TYPE_CAST(long, ~(~0ul >> 1)));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LONG_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromLongLong(VTK_TYPE_CAST(long, ~0ul >> 1));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LONG_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromUnsignedLongLong(VTK_TYPE_CAST(unsigned long, 0ul));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_LONG_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromUnsignedLongLong(VTK_TYPE_CAST(unsigned long, ~0ul));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_LONG_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(VTK_TYPE_CAST(float, -1.0e+38f));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLOAT_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(VTK_TYPE_CAST(float,  1.0e+38f));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLOAT_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(VTK_TYPE_CAST(double, -1.0e+299));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DOUBLE_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(VTK_TYPE_CAST(double,  1.0e+299));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DOUBLE_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromLongLong(VTK_TYPE_CAST(long long, ~(~0ull >> 1)));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LONG_LONG_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromLongLong(VTK_TYPE_CAST(long long, ~0ull >> 1));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LONG_LONG_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromUnsignedLongLong(VTK_TYPE_CAST(unsigned long long, 0ull));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_LONG_LONG_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromUnsignedLongLong(VTK_TYPE_CAST(unsigned long long, ~0ull));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNSIGNED_LONG_LONG_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_INT_MAX);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LARGE_INTEGER", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(VTK_FLOAT_MAX);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LARGE_FLOAT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_UNSIGNED_CHAR);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_UINT8", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_CHAR);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_INT8", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_UNSIGNED_SHORT);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_UINT16", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_SHORT);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_INT16", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_UNSIGNED_INT);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_UINT32", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_INT);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_INT32", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_UNSIGNED_LONG_LONG);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_UINT64", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_LONG_LONG);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_INT64", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_FLOAT);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_FLOAT32", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_DOUBLE);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TYPE_FLOAT64", o) != 0)
    {
    Py_DECREF(o);
    }

  Py_INCREF(Py_None);
  o = Py_None;
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HAS_ID_TYPE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(VTK_SIZEOF_LONG_LONG);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SIZEOF_ID_TYPE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyLong_FromLongLong(VTK_LONG_LONG_MAX);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LARGE_ID", o) != 0)
    {
    Py_DECREF(o);
    }

}

