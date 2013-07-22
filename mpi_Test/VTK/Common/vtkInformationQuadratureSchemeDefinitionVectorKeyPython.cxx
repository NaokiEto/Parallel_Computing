// python wrapper for vtkInformationQuadratureSchemeDefinitionVectorKey
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
#include "vtkInformationQuadratureSchemeDefinitionVectorKey.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationQuadratureSchemeDefinitionVectorKey(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationQuadratureSchemeDefinitionVectorKey(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationQuadratureSchemeDefinitionVectorKeyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationQuadratureSchemeDefinitionVectorKeyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationQuadratureSchemeDefinitionVectorKey_Doc();


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformationQuadratureSchemeDefinitionVectorKey *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::NewInstance();
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
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Clear(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Resize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Size");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::Size(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::Length(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkQuadratureSchemeDefinition *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkQuadratureSchemeDefinition"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0, temp1);
      }
    else
      {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Append(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkQuadratureSchemeDefinition *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkQuadratureSchemeDefinition") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::Set(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  vtkQuadratureSchemeDefinition *tempr;
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
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::Get(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

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
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationQuadratureSchemeDefinitionVectorKey::DeepCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkXMLDataElement *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      tempr = op->SaveState(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::SaveState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationQuadratureSchemeDefinitionVectorKey_RestoreState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationQuadratureSchemeDefinitionVectorKey *op = static_cast<vtkInformationQuadratureSchemeDefinitionVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkXMLDataElement *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      tempr = op->RestoreState(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInformationQuadratureSchemeDefinitionVectorKey::RestoreState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationQuadratureSchemeDefinitionVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationQuadratureSchemeDefinitionVectorKey_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationQuadratureSchemeDefinitionVectorKey_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationQuadratureSchemeDefinitionVectorKey_NewInstance, 1,
   (char*)"V.NewInstance()\n    -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: vtkInformationQuadratureSchemeDefinitionVectorKey *NewInstance(\n    )\n\n"},
  {(char*)"Clear", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Clear, 1,
   (char*)"V.Clear(vtkInformation)\nC++: void Clear(vtkInformation *info)\n\nClear the vector.\n"},
  {(char*)"Resize", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Resize, 1,
   (char*)"V.Resize(vtkInformation, int)\nC++: void Resize(vtkInformation *info, int n)\n\nResize (extend) the vector to hold n objects. Any new elements\ncreated will be null initialized.\n"},
  {(char*)"Size", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Size, 1,
   (char*)"V.Size(vtkInformation) -> int\nC++: int Size(vtkInformation *info)\n\nGet the vector's length.\n"},
  {(char*)"Length", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Length, 1,
   (char*)"V.Length(vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\nGet the vector's length.\n"},
  {(char*)"Append", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Append, 1,
   (char*)"V.Append(vtkInformation, vtkQuadratureSchemeDefinition)\nC++: void Append(vtkInformation *info,\n    vtkQuadratureSchemeDefinition *value)\n\nPut the value on the back of the vector, with reference counting.\n"},
  {(char*)"Set", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Set, 1,
   (char*)"V.Set(vtkInformation, vtkQuadratureSchemeDefinition, int)\nC++: void Set(vtkInformation *info,\n    vtkQuadratureSchemeDefinition *value, int i)\n\nSet element i of the vector to value. Resizes the vector if\nneeded.\n"},
  {(char*)"Get", PyvtkInformationQuadratureSchemeDefinitionVectorKey_Get, 1,
   (char*)"V.Get(vtkInformation, int) -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *Get(vtkInformation *info,\n    int idx)\n\nGet the vtkQuadratureSchemeDefinition at a specific location in\nthe vector.\n"},
  {(char*)"ShallowCopy", PyvtkInformationQuadratureSchemeDefinitionVectorKey_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"DeepCopy", PyvtkInformationQuadratureSchemeDefinitionVectorKey_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkInformation, vtkInformation)\nC++: virtual void DeepCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"SaveState", PyvtkInformationQuadratureSchemeDefinitionVectorKey_SaveState, 1,
   (char*)"V.SaveState(vtkInformation, vtkXMLDataElement) -> int\nC++: int SaveState(vtkInformation *info,\n    vtkXMLDataElement *element)\n\nGenerate an XML representation of the object. Each key/value pair\nwill be nested in the resulting XML hierarchy. The element passed\nin is assumed to be empty.\n"},
  {(char*)"RestoreState", PyvtkInformationQuadratureSchemeDefinitionVectorKey_RestoreState, 1,
   (char*)"V.RestoreState(vtkInformation, vtkXMLDataElement) -> int\nC++: int RestoreState(vtkInformation *info,\n    vtkXMLDataElement *element)\n\nLoad key/value pairs from an XML state representation created\nwith SaveState. Duplicate keys will generate a fatal error.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationQuadratureSchemeDefinitionVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationQuadratureSchemeDefinitionVectorKey_Methods,
    "vtkInformationQuadratureSchemeDefinitionVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationQuadratureSchemeDefinitionVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationQuadratureSchemeDefinitionVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationQuadratureSchemeDefinitionVectorKey - Key for\nvtkQuadratureSchemeDefinition vector values.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationQuadratureSchemeDefinitionVectorKey is used to\nrepresent keys for double vector values in vtkInformation.h. NOTE the\ninterface in this key differs from that in other similar keys because\nof our internal use of smart pointers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationQuadratureSchemeDefinitionVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationQuadratureSchemeDefinitionVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationQuadratureSchemeDefinitionVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

