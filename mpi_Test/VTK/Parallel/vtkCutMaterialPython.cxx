// python wrapper for vtkCutMaterial
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
#include "vtkCutMaterial.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCutMaterial(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCutMaterial(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCutMaterialNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCutMaterialNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCutMaterial_Doc();


static PyObject *
PyvtkCutMaterial_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

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
      tempr = op->vtkCutMaterial::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

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
      tempr = op->vtkCutMaterial::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  vtkCutMaterial *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCutMaterial::NewInstance();
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
PyvtkCutMaterial_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCutMaterial *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCutMaterial::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrayName(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetMaterialArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterialArrayName();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetMaterialArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaterial(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterial();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetUpVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCutMaterial::SetUpVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUpVector(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCutMaterial_SetUpVector_s1(self, args);
    case 1:
      return PyvtkCutMaterial_SetUpVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpVector");
  return NULL;
}



static PyObject *
PyvtkCutMaterial_GetUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpVector();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetUpVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaximumPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPoint();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetMaximumPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetCenterPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenterPoint();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetCenterPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormal();
      }
    else
      {
      tempr = op->vtkCutMaterial::GetNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkCutMaterial_Methods[] = {
  {(char*)"GetClassName", PyvtkCutMaterial_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCutMaterial_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCutMaterial_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCutMaterial\nC++: vtkCutMaterial *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCutMaterial_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCutMaterial\nC++: vtkCutMaterial *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaterialArrayName", PyvtkCutMaterial_SetMaterialArrayName, 1,
   (char*)"V.SetMaterialArrayName(string)\nC++: void SetMaterialArrayName(char *)\n\nCell array that contains the material values.\n"},
  {(char*)"GetMaterialArrayName", PyvtkCutMaterial_GetMaterialArrayName, 1,
   (char*)"V.GetMaterialArrayName() -> string\nC++: char *GetMaterialArrayName()\n\nCell array that contains the material values.\n"},
  {(char*)"SetMaterial", PyvtkCutMaterial_SetMaterial, 1,
   (char*)"V.SetMaterial(int)\nC++: void SetMaterial(int a)\n\nMaterial to probe.\n"},
  {(char*)"GetMaterial", PyvtkCutMaterial_GetMaterial, 1,
   (char*)"V.GetMaterial() -> int\nC++: int GetMaterial()\n\nMaterial to probe.\n"},
  {(char*)"SetArrayName", PyvtkCutMaterial_SetArrayName, 1,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {(char*)"GetArrayName", PyvtkCutMaterial_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {(char*)"SetUpVector", PyvtkCutMaterial_SetUpVector, 1,
   (char*)"V.SetUpVector(float, float, float)\nC++: void SetUpVector(double, double, double)\nV.SetUpVector((float, float, float))\nC++: void SetUpVector(double a[3])\n\n"},
  {(char*)"GetUpVector", PyvtkCutMaterial_GetUpVector, 1,
   (char*)"V.GetUpVector() -> (float, float, float)\nC++: double *GetUpVector()\n\n"},
  {(char*)"GetMaximumPoint", PyvtkCutMaterial_GetMaximumPoint, 1,
   (char*)"V.GetMaximumPoint() -> (float, float, float)\nC++: double *GetMaximumPoint()\n\n"},
  {(char*)"GetCenterPoint", PyvtkCutMaterial_GetCenterPoint, 1,
   (char*)"V.GetCenterPoint() -> (float, float, float)\nC++: double *GetCenterPoint()\n\n"},
  {(char*)"GetNormal", PyvtkCutMaterial_GetNormal, 1,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCutMaterial_StaticNew()
{
  return vtkCutMaterial::New();
}

PyObject *PyVTKClass_vtkCutMaterialNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCutMaterial_StaticNew,
    PyvtkCutMaterial_Methods,
    "vtkCutMaterial", modulename,
    NULL, NULL,
    PyvtkCutMaterial_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCutMaterial_Doc()
{
  static const char *docstring[] = {
    "vtkCutMaterial - Automatically computes the cut plane for a material\narray pair.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCutMaterial computes a cut plane based on an up vector, center of\nthe bounding box and the location of the maximum variable value.\n These computed values are available so that they can be used to set\nthe camera for the best view of the plane.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCutMaterial(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCutMaterialNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCutMaterial", o) != 0)
    {
    Py_DECREF(o);
    }

}

