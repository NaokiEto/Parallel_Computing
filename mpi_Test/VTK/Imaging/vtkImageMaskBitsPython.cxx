// python wrapper for vtkImageMaskBits
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
#include "vtkImageMaskBits.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMaskBits(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMaskBits(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMaskBitsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMaskBitsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMaskBits_Doc();


static PyObject *
PyvtkImageMaskBits_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

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
      tempr = op->vtkImageMaskBits::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

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
      tempr = op->vtkImageMaskBits::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  vtkImageMaskBits *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMaskBits::NewInstance();
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
PyvtkImageMaskBits_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMaskBits *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMaskBits::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetMasks_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMasks(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageMaskBits::SetMasks(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMasks(temp0);
      }
    else
      {
      op->vtkImageMaskBits::SetMasks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMasks(temp0, temp1);
      }
    else
      {
      op->vtkImageMaskBits::SetMasks(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMasks(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageMaskBits::SetMasks(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageMaskBits_SetMasks_s1(self, args);
    case 1:
      return PyvtkImageMaskBits_SetMasks_s2(self, args);
    case 2:
      return PyvtkImageMaskBits_SetMasks_s3(self, args);
    case 3:
      return PyvtkImageMaskBits_SetMasks_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMasks");
  return NULL;
}



static PyObject *
PyvtkImageMaskBits_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMask(temp0);
      }
    else
      {
      op->vtkImageMaskBits::SetMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_GetMasks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMasks();
      }
    else
      {
      tempr = op->vtkImageMaskBits::GetMasks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkImageMaskBits::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperation();
      }
    else
      {
      tempr = op->vtkImageMaskBits::GetOperation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToAnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToAnd();
      }
    else
      {
      op->vtkImageMaskBits::SetOperationToAnd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToOr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToOr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToOr();
      }
    else
      {
      op->vtkImageMaskBits::SetOperationToOr();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToXor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToXor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToXor();
      }
    else
      {
      op->vtkImageMaskBits::SetOperationToXor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToNand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToNand();
      }
    else
      {
      op->vtkImageMaskBits::SetOperationToNand();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToNor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToNor();
      }
    else
      {
      op->vtkImageMaskBits::SetOperationToNor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMaskBits_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMaskBits_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMaskBits_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMaskBits_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMaskBits\nC++: vtkImageMaskBits *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMaskBits_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMaskBits\nC++: vtkImageMaskBits *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMasks", PyvtkImageMaskBits_SetMasks, 1,
   (char*)"V.SetMasks(int, int, int, int)\nC++: void SetMasks(unsigned int, unsigned int, unsigned int,\n    unsigned int)\nV.SetMasks((int, int, int, int))\nC++: void SetMasks(unsigned int a[4])\nV.SetMasks(int, int)\nC++: void SetMasks(unsigned int mask1, unsigned int mask2)\nV.SetMasks(int, int, int)\nC++: void SetMasks(unsigned int mask1, unsigned int mask2,\n    unsigned int mask3)\n\n"},
  {(char*)"SetMask", PyvtkImageMaskBits_SetMask, 1,
   (char*)"V.SetMask(int)\nC++: void SetMask(unsigned int mask)\n\nSet/Get the bit-masks. Default is 0xffffffff.\n"},
  {(char*)"GetMasks", PyvtkImageMaskBits_GetMasks, 1,
   (char*)"V.GetMasks() -> (int, int, int, int)\nC++: unsigned int *GetMasks()\n\n"},
  {(char*)"SetOperation", PyvtkImageMaskBits_SetOperation, 1,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int a)\n\nSet/Get the boolean operator. Default is AND.\n"},
  {(char*)"GetOperation", PyvtkImageMaskBits_GetOperation, 1,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {(char*)"SetOperationToAnd", PyvtkImageMaskBits_SetOperationToAnd, 1,
   (char*)"V.SetOperationToAnd()\nC++: void SetOperationToAnd()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {(char*)"SetOperationToOr", PyvtkImageMaskBits_SetOperationToOr, 1,
   (char*)"V.SetOperationToOr()\nC++: void SetOperationToOr()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {(char*)"SetOperationToXor", PyvtkImageMaskBits_SetOperationToXor, 1,
   (char*)"V.SetOperationToXor()\nC++: void SetOperationToXor()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {(char*)"SetOperationToNand", PyvtkImageMaskBits_SetOperationToNand, 1,
   (char*)"V.SetOperationToNand()\nC++: void SetOperationToNand()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {(char*)"SetOperationToNor", PyvtkImageMaskBits_SetOperationToNor, 1,
   (char*)"V.SetOperationToNor()\nC++: void SetOperationToNor()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMaskBits_StaticNew()
{
  return vtkImageMaskBits::New();
}

PyObject *PyVTKClass_vtkImageMaskBitsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMaskBits_StaticNew,
    PyvtkImageMaskBits_Methods,
    "vtkImageMaskBits", modulename,
    NULL, NULL,
    PyvtkImageMaskBits_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMaskBits_Doc()
{
  static const char *docstring[] = {
    "vtkImageMaskBits - applies a bit-mask pattern to each component.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageMaskBits applies a bit-mask pattern to each component.  The\nbit-mask can be applied using a variety of boolean bitwise operators.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMaskBits(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMaskBitsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMaskBits", o) != 0)
    {
    Py_DECREF(o);
    }

}

