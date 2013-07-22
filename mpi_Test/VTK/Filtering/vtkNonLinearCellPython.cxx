// python wrapper for vtkNonLinearCell
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
#include "vtkNonLinearCell.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkNonLinearCell(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkNonLinearCell(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCellNew
extern "C" { PyObject *PyVTKClass_vtkCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellNew
#endif

static const char **PyvtkNonLinearCell_Doc();


static PyObject *
PyvtkNonLinearCell_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassName();
      }
    else
      {
      tempr = op->vtkNonLinearCell::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonLinearCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsA(temp0);
      }
    else
      {
      tempr = op->vtkNonLinearCell::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonLinearCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  vtkNonLinearCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkNonLinearCell::NewInstance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkNonLinearCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLinear();
      }
    else
      {
      tempr = op->vtkNonLinearCell::IsLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNonLinearCell_Methods[] = {
  {(char*)"GetClassName", PyvtkNonLinearCell_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNonLinearCell_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNonLinearCell_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkNonLinearCell\nC++: vtkNonLinearCell *NewInstance()\n\n"},
  {(char*)"IsLinear", PyvtkNonLinearCell_IsLinear, 1,
   (char*)"V.IsLinear() -> int\nC++: virtual int IsLinear()\n\nNon-linear cells require special treatment (tessellation) when\nconverting to graphics primitives (during mapping). The vtkCell\nAPI IsLinear() is modified to indicate this requirement.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkNonLinearCellNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkNonLinearCell_Methods,
    "vtkNonLinearCell", modulename,
    NULL, NULL,
    PyvtkNonLinearCell_Doc(),
    PyVTKClass_vtkCellNew(modulename));
  return cls;
}

const char **PyvtkNonLinearCell_Doc()
{
  static const char *docstring[] = {
    "vtkNonLinearCell - abstract superclass for non-linear cells\n\n",
    "Superclass: vtkCell\n\n",
    "vtkNonLinearCell is an abstract superclass for non-linear cell types.\nCells that are a direct subclass of vtkCell or vtkCell3D are linear;\ncells that are a subclass of vtkNonLinearCell have non-linear\ninterpolation functions. Non-linear cells require special treatment\nwhen tessellating or converting to graphics primitives. Note that the\nlinearity of the cell is a function of whether the cell needs",
    "\ntessellation, which does not strictly correlate with interpolation\norder (e.g., vtkHexahedron has non-linear interpolation functions (a\nproduct of three linear functions in r-s-t) even thought\nvtkHexahedron is considered linear.)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNonLinearCell(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNonLinearCellNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNonLinearCell", o) != 0)
    {
    Py_DECREF(o);
    }

}

