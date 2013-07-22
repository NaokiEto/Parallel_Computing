// python wrapper for vtkStructuredGridClip
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
#include "vtkStructuredGridClip.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGridClip(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGridClip(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridClipNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridClipNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkStructuredGridClip_Doc();


static PyObject *
PyvtkStructuredGridClip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

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
      tempr = op->vtkStructuredGridClip::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

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
      tempr = op->vtkStructuredGridClip::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  vtkStructuredGridClip *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGridClip::NewInstance();
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
PyvtkStructuredGridClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredGridClip *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredGridClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  vtkInformation *temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0, temp1);
      }
    else
      {
      op->vtkStructuredGridClip::SetOutputWholeExtent(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridClip_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkStructuredGridClip::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredGridClip_SetOutputWholeExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0, temp1);
      }
    else
      {
      op->vtkStructuredGridClip::SetOutputWholeExtent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridClip_SetOutputWholeExtent_Methods[] = {
  {NULL, PyvtkStructuredGridClip_SetOutputWholeExtent_s1, 1,
   (char*)"@O|O *i *vtkInformation"},
  {NULL, PyvtkStructuredGridClip_SetOutputWholeExtent_s3, 1,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStructuredGridClip_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredGridClip_SetOutputWholeExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkStructuredGridClip_SetOutputWholeExtent_s1(self, args);
    case 6:
      return PyvtkStructuredGridClip_SetOutputWholeExtent_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkStructuredGridClip_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetOutputWholeExtent(temp0);
      }
    else
      {
      op->vtkStructuredGridClip::GetOutputWholeExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_ResetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetOutputWholeExtent();
      }
    else
      {
      op->vtkStructuredGridClip::ResetOutputWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_SetClipData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClipData(temp0);
      }
    else
      {
      op->vtkStructuredGridClip::SetClipData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_GetClipData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipData();
      }
    else
      {
      tempr = op->vtkStructuredGridClip::GetClipData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_ClipDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClipDataOn();
      }
    else
      {
      op->vtkStructuredGridClip::ClipDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridClip_ClipDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridClip *op = static_cast<vtkStructuredGridClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClipDataOff();
      }
    else
      {
      op->vtkStructuredGridClip::ClipDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridClip_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridClip_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridClip_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridClip_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGridClip\nC++: vtkStructuredGridClip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridClip_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridClip\nC++: vtkStructuredGridClip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputWholeExtent", PyvtkStructuredGridClip_SetOutputWholeExtent, 1,
   (char*)"V.SetOutputWholeExtent([int, int, int, int, int, int],\n    vtkInformation)\nC++: void SetOutputWholeExtent(int extent[6],\n    vtkInformation *outInfo=0)\nV.SetOutputWholeExtent(int, int, int, int, int, int)\nC++: void SetOutputWholeExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\nV.SetOutputWholeExtent(int, int)\nC++: void SetOutputWholeExtent(int piece, int numPieces)\n\nThe whole extent of the output has to be set explicitly.\n"},
  {(char*)"GetOutputWholeExtent", PyvtkStructuredGridClip_GetOutputWholeExtent, 1,
   (char*)"V.GetOutputWholeExtent([int, int, int, int, int, int])\nC++: void GetOutputWholeExtent(int extent[6])\n\nThe whole extent of the output has to be set explicitly.\n"},
  {(char*)"ResetOutputWholeExtent", PyvtkStructuredGridClip_ResetOutputWholeExtent, 1,
   (char*)"V.ResetOutputWholeExtent()\nC++: void ResetOutputWholeExtent()\n\n"},
  {(char*)"SetClipData", PyvtkStructuredGridClip_SetClipData, 1,
   (char*)"V.SetClipData(int)\nC++: void SetClipData(int a)\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {(char*)"GetClipData", PyvtkStructuredGridClip_GetClipData, 1,
   (char*)"V.GetClipData() -> int\nC++: int GetClipData()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {(char*)"ClipDataOn", PyvtkStructuredGridClip_ClipDataOn, 1,
   (char*)"V.ClipDataOn()\nC++: void ClipDataOn()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {(char*)"ClipDataOff", PyvtkStructuredGridClip_ClipDataOff, 1,
   (char*)"V.ClipDataOff()\nC++: void ClipDataOff()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridClip_StaticNew()
{
  return vtkStructuredGridClip::New();
}

PyObject *PyVTKClass_vtkStructuredGridClipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridClip_StaticNew,
    PyvtkStructuredGridClip_Methods,
    "vtkStructuredGridClip", modulename,
    NULL, NULL,
    PyvtkStructuredGridClip_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridClip_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridClip - Reduces the image extent of the input.\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkStructuredGridClip  will make an image smaller.  The output must\nhave an image extent which is the subset of the input.  The filter\nhas two modes of operation: 1: By default, the data is not copied in\nthis filter. Only the whole extent is modified. 2: If ClipDataOn is\nset, then you will get no more that the clipped extent.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridClip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridClipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridClip", o) != 0)
    {
    Py_DECREF(o);
    }

}

