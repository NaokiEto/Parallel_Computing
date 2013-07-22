// python wrapper for vtkInformationObjectBaseVectorKey
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
#include "vtkInformationObjectBaseVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationObjectBaseVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationObjectBaseVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationObjectBaseVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationObjectBaseVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationObjectBaseVectorKey_Doc();


static PyObject *
PyvtkInformationObjectBaseVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

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
      tempr = op->vtkInformationObjectBaseVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

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
      tempr = op->vtkInformationObjectBaseVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformationObjectBaseVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationObjectBaseVectorKey::NewInstance();
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
PyvtkInformationObjectBaseVectorKey_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Clear(temp0);
      }
    else
      {
      op->vtkInformationObjectBaseVectorKey::Clear(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Resize(temp0, temp1);
      }
    else
      {
      op->vtkInformationObjectBaseVectorKey::Resize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Size");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->Size(temp0);
      }
    else
      {
      tempr = op->vtkInformationObjectBaseVectorKey::Size(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->Length(temp0);
      }
    else
      {
      tempr = op->vtkInformationObjectBaseVectorKey::Length(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkObjectBase *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformationObjectBaseVectorKey::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkObjectBase *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkObjectBase") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationObjectBaseVectorKey::Set(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  vtkObjectBase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Get(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInformationObjectBaseVectorKey::Get(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationObjectBaseVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationObjectBaseVectorKey *op = static_cast<vtkInformationObjectBaseVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationObjectBaseVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationObjectBaseVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationObjectBaseVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationObjectBaseVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationObjectBaseVectorKey_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationObjectBaseVectorKey\nC++: vtkInformationObjectBaseVectorKey *NewInstance()\n\n"},
  {(char*)"Clear", PyvtkInformationObjectBaseVectorKey_Clear, 1,
   (char*)"V.Clear(vtkInformation)\nC++: void Clear(vtkInformation *info)\n\nClear the vector.\n"},
  {(char*)"Resize", PyvtkInformationObjectBaseVectorKey_Resize, 1,
   (char*)"V.Resize(vtkInformation, int)\nC++: void Resize(vtkInformation *info, int n)\n\nResize (extend) the vector to hold n objects. Any new elements\ncreated will be null initialized.\n"},
  {(char*)"Size", PyvtkInformationObjectBaseVectorKey_Size, 1,
   (char*)"V.Size(vtkInformation) -> int\nC++: int Size(vtkInformation *info)\n\nGet the vector's length.\n"},
  {(char*)"Length", PyvtkInformationObjectBaseVectorKey_Length, 1,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet the vector's length.\n"},
  {(char*)"Append", PyvtkInformationObjectBaseVectorKey_Append, 1,
   (char*)"V.Append(vtkInformation, vtkObjectBase)\nC++: void Append(vtkInformation *info, vtkObjectBase *value)\n\nPut the value on the back of the vector, with ref counting.\n"},
  {(char*)"Set", PyvtkInformationObjectBaseVectorKey_Set, 1,
   (char*)"V.Set(vtkInformation, vtkObjectBase, int)\nC++: void Set(vtkInformation *info, vtkObjectBase *value, int i)\n\nSet element i of the vector to value. Resizes the vector if\nneeded.\n"},
  {(char*)"Get", PyvtkInformationObjectBaseVectorKey_Get, 1,
   (char*)"V.Get(vtkInformation, int) -> vtkObjectBase\nC++: vtkObjectBase *Get(vtkInformation *info, int idx)\n\nGet the vtkObjectBase at a specific location in the vector.\n"},
  {(char*)"ShallowCopy", PyvtkInformationObjectBaseVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationObjectBaseVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationObjectBaseVectorKey_Methods,
    "vtkInformationObjectBaseVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationObjectBaseVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationObjectBaseVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationObjectBaseVectorKey - Key for vtkObjectBase vector\nvalues.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationObjectBaseVectorKey is used to represent keys for\ndouble vector values in vtkInformation.h. NOTE the interface in this\nkey differs from that in other similar keys because of our internal\nuse of smart pointers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationObjectBaseVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationObjectBaseVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationObjectBaseVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

