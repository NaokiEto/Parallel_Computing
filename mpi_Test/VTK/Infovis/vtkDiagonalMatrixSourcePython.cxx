// python wrapper for vtkDiagonalMatrixSource
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
#include "vtkDiagonalMatrixSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDiagonalMatrixSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDiagonalMatrixSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDiagonalMatrixSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDiagonalMatrixSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkDiagonalMatrixSource_Doc();


static PyObject *
PyvtkDiagonalMatrixSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

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
      tempr = op->vtkDiagonalMatrixSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

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
      tempr = op->vtkDiagonalMatrixSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  vtkDiagonalMatrixSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::NewInstance();
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
PyvtkDiagonalMatrixSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDiagonalMatrixSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDiagonalMatrixSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayType();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetArrayType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayType(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetArrayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtents();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtents(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiagonal();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiagonal(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetSuperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSuperDiagonal();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetSuperDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetSuperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSuperDiagonal(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetSuperDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetSubDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubDiagonal();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetSubDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetSubDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubDiagonal(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetSubDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetRowLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRowLabel();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetRowLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetRowLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRowLabel(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetRowLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_GetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnLabel();
      }
    else
      {
      tempr = op->vtkDiagonalMatrixSource::GetColumnLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiagonalMatrixSource_SetColumnLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiagonalMatrixSource *op = static_cast<vtkDiagonalMatrixSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColumnLabel(temp0);
      }
    else
      {
      op->vtkDiagonalMatrixSource::SetColumnLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDiagonalMatrixSource_Methods[] = {
  {(char*)"GetClassName", PyvtkDiagonalMatrixSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDiagonalMatrixSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDiagonalMatrixSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDiagonalMatrixSource\nC++: vtkDiagonalMatrixSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDiagonalMatrixSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDiagonalMatrixSource\nC++: vtkDiagonalMatrixSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetArrayType", PyvtkDiagonalMatrixSource_GetArrayType, 1,
   (char*)"V.GetArrayType() -> int\nC++: int GetArrayType()\n\n"},
  {(char*)"SetArrayType", PyvtkDiagonalMatrixSource_SetArrayType, 1,
   (char*)"V.SetArrayType(int)\nC++: void SetArrayType(int a)\n\n"},
  {(char*)"GetExtents", PyvtkDiagonalMatrixSource_GetExtents, 1,
   (char*)"V.GetExtents() -> int\nC++: vtkIdType GetExtents()\n\nStores the extents of the output matrix (which is square)\n"},
  {(char*)"SetExtents", PyvtkDiagonalMatrixSource_SetExtents, 1,
   (char*)"V.SetExtents(int)\nC++: void SetExtents(vtkIdType a)\n\nStores the extents of the output matrix (which is square)\n"},
  {(char*)"GetDiagonal", PyvtkDiagonalMatrixSource_GetDiagonal, 1,
   (char*)"V.GetDiagonal() -> float\nC++: double GetDiagonal()\n\nStores the value that will be assigned to diagonal elements\n(default: 1)\n"},
  {(char*)"SetDiagonal", PyvtkDiagonalMatrixSource_SetDiagonal, 1,
   (char*)"V.SetDiagonal(float)\nC++: void SetDiagonal(double a)\n\nStores the value that will be assigned to diagonal elements\n(default: 1)\n"},
  {(char*)"GetSuperDiagonal", PyvtkDiagonalMatrixSource_GetSuperDiagonal, 1,
   (char*)"V.GetSuperDiagonal() -> float\nC++: double GetSuperDiagonal()\n\nStores the value that will be assigned to superdiagonal elements\n(default: 0)\n"},
  {(char*)"SetSuperDiagonal", PyvtkDiagonalMatrixSource_SetSuperDiagonal, 1,
   (char*)"V.SetSuperDiagonal(float)\nC++: void SetSuperDiagonal(double a)\n\nStores the value that will be assigned to superdiagonal elements\n(default: 0)\n"},
  {(char*)"GetSubDiagonal", PyvtkDiagonalMatrixSource_GetSubDiagonal, 1,
   (char*)"V.GetSubDiagonal() -> float\nC++: double GetSubDiagonal()\n\nStores the value that will be assigned to subdiagonal elements\n(default: 0)\n"},
  {(char*)"SetSubDiagonal", PyvtkDiagonalMatrixSource_SetSubDiagonal, 1,
   (char*)"V.SetSubDiagonal(float)\nC++: void SetSubDiagonal(double a)\n\nStores the value that will be assigned to subdiagonal elements\n(default: 0)\n"},
  {(char*)"GetRowLabel", PyvtkDiagonalMatrixSource_GetRowLabel, 1,
   (char*)"V.GetRowLabel() -> string\nC++: char *GetRowLabel()\n\nControls the output matrix row dimension label. Default: \"rows\"\n"},
  {(char*)"SetRowLabel", PyvtkDiagonalMatrixSource_SetRowLabel, 1,
   (char*)"V.SetRowLabel(string)\nC++: void SetRowLabel(char *)\n\nControls the output matrix row dimension label. Default: \"rows\"\n"},
  {(char*)"GetColumnLabel", PyvtkDiagonalMatrixSource_GetColumnLabel, 1,
   (char*)"V.GetColumnLabel() -> string\nC++: char *GetColumnLabel()\n\nControls the output matrix column dimension label. Default:\n\"columns\"\n"},
  {(char*)"SetColumnLabel", PyvtkDiagonalMatrixSource_SetColumnLabel, 1,
   (char*)"V.SetColumnLabel(string)\nC++: void SetColumnLabel(char *)\n\nControls the output matrix column dimension label. Default:\n\"columns\"\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDiagonalMatrixSource_StaticNew()
{
  return vtkDiagonalMatrixSource::New();
}

PyObject *PyVTKClass_vtkDiagonalMatrixSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDiagonalMatrixSource_StaticNew,
    PyvtkDiagonalMatrixSource_Methods,
    "vtkDiagonalMatrixSource", modulename,
    NULL, NULL,
    PyvtkDiagonalMatrixSource_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DENSE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SPARSE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkDiagonalMatrixSource_Doc()
{
  static const char *docstring[] = {
    "vtkDiagonalMatrixSource - generates a sparse or dense square matrix\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDiagonalMatrixSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDiagonalMatrixSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDiagonalMatrixSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

