// python wrapper for vtkCellType
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
#include "vtkCellType.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellType(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellType(PyObject *, const char *); }
#endif
void PyVTKAddFile_vtkCellType(
  PyObject *dict, const char *)
{
  PyObject *o;
  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EMPTY_CELL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VERTEX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POLY_VERTEX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POLY_LINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TRIANGLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TRIANGLE_STRIP", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POLYGON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PIXEL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TETRA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(11);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOXEL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HEXAHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(13);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WEDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(14);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PYRAMID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(15);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PENTAGONAL_PRISM", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HEXAGONAL_PRISM", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(21);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_EDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(22);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_TRIANGLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(23);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_QUAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(24);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_TETRA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(25);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_HEXAHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(26);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_WEDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(27);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_PYRAMID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(28);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIQUADRATIC_QUAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(29);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TRIQUADRATIC_HEXAHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(30);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_LINEAR_QUAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(31);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUADRATIC_LINEAR_WEDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(32);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIQUADRATIC_QUADRATIC_WEDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(33);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIQUADRATIC_QUADRATIC_HEXAHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(34);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BIQUADRATIC_TRIANGLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(35);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CUBIC_LINE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(41);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CONVEX_POINT_SET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(42);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POLYHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(51);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PARAMETRIC_CURVE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(52);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PARAMETRIC_SURFACE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(53);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PARAMETRIC_TRI_SURFACE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(54);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PARAMETRIC_QUAD_SURFACE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(55);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PARAMETRIC_TETRA_REGION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(56);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PARAMETRIC_HEX_REGION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(60);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_EDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(61);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_TRIANGLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(62);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_QUAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(63);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_POLYGON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(64);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_TETRAHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(65);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_WEDGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(66);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_PYRAMID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(67);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_HIGHER_ORDER_HEXAHEDRON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(68);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NUMBER_OF_CELL_TYPES", o) != 0)
    {
    Py_DECREF(o);
    }

}

