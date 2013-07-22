// python wrapper for vtkInformationVector
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
#include "vtkInformationVector.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInformationVector(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInformationVector(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInformationVectorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInformationVectorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInformationVector_Doc();


static PyObject *
PyvtkInformationVector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

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
      tempr = op->vtkInformationVector::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

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
      tempr = op->vtkInformationVector::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformationVector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInformationVector::NewInstance();
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
PyvtkInformationVector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInformationVector *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInformationVector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_GetNumberOfInformationObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInformationObjects();
      }
    else
      {
      tempr = op->vtkInformationVector::GetNumberOfInformationObjects();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_SetNumberOfInformationObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInformationObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfInformationObjects(temp0);
      }
    else
      {
      op->vtkInformationVector::SetNumberOfInformationObjects(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_SetInformationObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInformationObject(temp0, temp1);
      }
    else
      {
      op->vtkInformationVector::SetInformationObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_GetInformationObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInformationObject(temp0);
      }
    else
      {
      tempr = op->vtkInformationVector::GetInformationObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Append(temp0);
      }
    else
      {
      op->vtkInformationVector::Append(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_Remove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformationVector::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationVector_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0, temp1);
      }
    else
      {
      op->vtkInformationVector::Copy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationVector_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationVector_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationVector_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationVector_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInformationVector\nC++: vtkInformationVector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationVector_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationVector\nC++: vtkInformationVector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfInformationObjects", PyvtkInformationVector_GetNumberOfInformationObjects, 1,
   (char*)"V.GetNumberOfInformationObjects() -> int\nC++: int GetNumberOfInformationObjects()\n\nGet/Set the number of information objects in the vector.  Setting\nthe number to larger than the current number will create empty\nvtkInformation instances.  Setting the number to smaller than the\ncurrent number will remove entries from higher indices.\n"},
  {(char*)"SetNumberOfInformationObjects", PyvtkInformationVector_SetNumberOfInformationObjects, 1,
   (char*)"V.SetNumberOfInformationObjects(int)\nC++: void SetNumberOfInformationObjects(int n)\n\nGet/Set the number of information objects in the vector.  Setting\nthe number to larger than the current number will create empty\nvtkInformation instances.  Setting the number to smaller than the\ncurrent number will remove entries from higher indices.\n"},
  {(char*)"SetInformationObject", PyvtkInformationVector_SetInformationObject, 1,
   (char*)"V.SetInformationObject(int, vtkInformation)\nC++: void SetInformationObject(int index, vtkInformation *info)\n\nGet/Set the vtkInformation instance stored at the given index in\nthe vector.  The vector will automatically expand to include the\nindex given if necessary.  Missing entries in-between will be\nfilled with empty vtkInformation instances.\n"},
  {(char*)"GetInformationObject", PyvtkInformationVector_GetInformationObject, 1,
   (char*)"V.GetInformationObject(int) -> vtkInformation\nC++: vtkInformation *GetInformationObject(int index)\n\nGet/Set the vtkInformation instance stored at the given index in\nthe vector.  The vector will automatically expand to include the\nindex given if necessary.  Missing entries in-between will be\nfilled with empty vtkInformation instances.\n"},
  {(char*)"Append", PyvtkInformationVector_Append, 1,
   (char*)"V.Append(vtkInformation)\nC++: void Append(vtkInformation *info)\n\nAppend/Remove an information object.\n"},
  {(char*)"Remove", PyvtkInformationVector_Remove, 1,
   (char*)"V.Remove(vtkInformation)\nC++: void Remove(vtkInformation *info)\n\nAppend/Remove an information object.\n"},
  {(char*)"Copy", PyvtkInformationVector_Copy, 1,
   (char*)"V.Copy(vtkInformationVector, int)\nC++: void Copy(vtkInformationVector *from, int deep=0)\n\nCopy all information entries from the given vtkInformation\ninstance.  Any previously existing entries are removed.  If\ndeep==1, a deep copy of the information structure is performed\n(new instances of any contained vtkInformation and\nvtkInformationVector objects are created).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInformationVector_StaticNew()
{
  return vtkInformationVector::New();
}

PyObject *PyVTKClass_vtkInformationVectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInformationVector_StaticNew,
    PyvtkInformationVector_Methods,
    "vtkInformationVector", modulename,
    NULL, NULL,
    PyvtkInformationVector_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInformationVector_Doc()
{
  static const char *docstring[] = {
    "vtkInformationVector - Store zero or more vtkInformation instances.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationVector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationVectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationVector", o) != 0)
    {
    Py_DECREF(o);
    }

}

