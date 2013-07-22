// python wrapper for vtkPassThrough
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
#include "vtkPassThrough.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPassThrough(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPassThrough(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPassThroughNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPassThroughNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkPassThrough_Doc();


static PyObject *
PyvtkPassThrough_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

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
      tempr = op->vtkPassThrough::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

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
      tempr = op->vtkPassThrough::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  vtkPassThrough *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPassThrough::NewInstance();
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
PyvtkPassThrough_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPassThrough *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPassThrough::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPassThrough::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_SetDeepCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeepCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeepCopyInput(temp0);
      }
    else
      {
      op->vtkPassThrough::SetDeepCopyInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_GetDeepCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeepCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeepCopyInput();
      }
    else
      {
      tempr = op->vtkPassThrough::GetDeepCopyInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_DeepCopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeepCopyInputOn();
      }
    else
      {
      op->vtkPassThrough::DeepCopyInputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPassThrough_DeepCopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassThrough *op = static_cast<vtkPassThrough *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeepCopyInputOff();
      }
    else
      {
      op->vtkPassThrough::DeepCopyInputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPassThrough_Methods[] = {
  {(char*)"GetClassName", PyvtkPassThrough_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPassThrough_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPassThrough_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPassThrough\nC++: vtkPassThrough *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPassThrough_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPassThrough\nC++: vtkPassThrough *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FillInputPortInformation", PyvtkPassThrough_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSpecify the first input port as optional\n"},
  {(char*)"SetDeepCopyInput", PyvtkPassThrough_SetDeepCopyInput, 1,
   (char*)"V.SetDeepCopyInput(int)\nC++: void SetDeepCopyInput(int a)\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {(char*)"GetDeepCopyInput", PyvtkPassThrough_GetDeepCopyInput, 1,
   (char*)"V.GetDeepCopyInput() -> int\nC++: int GetDeepCopyInput()\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {(char*)"DeepCopyInputOn", PyvtkPassThrough_DeepCopyInputOn, 1,
   (char*)"V.DeepCopyInputOn()\nC++: void DeepCopyInputOn()\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {(char*)"DeepCopyInputOff", PyvtkPassThrough_DeepCopyInputOff, 1,
   (char*)"V.DeepCopyInputOff()\nC++: void DeepCopyInputOff()\n\nWhether or not to deep copy the input. This can be useful if you\nwant to create a copy of a data object. You can then disconnect\nthis filter's input connections and it will act like a source.\nDefaults to OFF.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPassThrough_StaticNew()
{
  return vtkPassThrough::New();
}

PyObject *PyVTKClass_vtkPassThroughNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPassThrough_StaticNew,
    PyvtkPassThrough_Methods,
    "vtkPassThrough", modulename,
    NULL, NULL,
    PyvtkPassThrough_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPassThrough_Doc()
{
  static const char *docstring[] = {
    "vtkPassThrough - Shallow copies the input into the output\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "The output type is always the same as the input object type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPassThrough(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPassThroughNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPassThrough", o) != 0)
    {
    Py_DECREF(o);
    }

}

