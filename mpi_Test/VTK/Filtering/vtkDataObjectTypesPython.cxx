// python wrapper for vtkDataObjectTypes
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
#include "vtkDataObjectTypes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataObjectTypes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataObjectTypes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataObjectTypesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataObjectTypesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataObjectTypes_Doc();


static PyObject *
PyvtkDataObjectTypes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTypes *op = static_cast<vtkDataObjectTypes *>(vp);

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
      tempr = op->vtkDataObjectTypes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTypes *op = static_cast<vtkDataObjectTypes *>(vp);

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
      tempr = op->vtkDataObjectTypes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTypes *op = static_cast<vtkDataObjectTypes *>(vp);

  vtkDataObjectTypes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataObjectTypes::NewInstance();
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
PyvtkDataObjectTypes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataObjectTypes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataObjectTypes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_GetClassNameFromTypeId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClassNameFromTypeId");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDataObjectTypes::GetClassNameFromTypeId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_GetTypeIdFromClassName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeIdFromClassName");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDataObjectTypes::GetTypeIdFromClassName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectTypes_NewDataObject_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewDataObject");

  char *temp0 = NULL;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDataObjectTypes::NewDataObject(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectTypes_NewDataObject_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewDataObject");

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDataObjectTypes::NewDataObject(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectTypes_NewDataObject_Methods[] = {
  {NULL, PyvtkDataObjectTypes_NewDataObject_s1, 1,
   (char*)"z"},
  {NULL, PyvtkDataObjectTypes_NewDataObject_s2, 1,
   (char*)"i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataObjectTypes_NewDataObject(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObjectTypes_NewDataObject_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "NewDataObject");
  return NULL;
}


static PyMethodDef PyvtkDataObjectTypes_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectTypes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectTypes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectTypes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataObjectTypes\nC++: vtkDataObjectTypes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectTypes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectTypes\nC++: vtkDataObjectTypes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetClassNameFromTypeId", PyvtkDataObjectTypes_GetClassNameFromTypeId, 1,
   (char*)"V.GetClassNameFromTypeId(int) -> string\nC++: static const char *GetClassNameFromTypeId(int typeId)\n\nGiven an int (as defined in vtkType.h) identifier for a class\nreturn it's classname.\n"},
  {(char*)"GetTypeIdFromClassName", PyvtkDataObjectTypes_GetTypeIdFromClassName, 1,
   (char*)"V.GetTypeIdFromClassName(string) -> int\nC++: static int GetTypeIdFromClassName(const char *classname)\n\nGiven a data object classname, return it's int identified (as\ndefined in vtkType.h)\n"},
  {(char*)"NewDataObject", PyvtkDataObjectTypes_NewDataObject, 1,
   (char*)"V.NewDataObject(string) -> vtkDataObject\nC++: static vtkDataObject *NewDataObject(const char *classname)\nV.NewDataObject(int) -> vtkDataObject\nC++: static vtkDataObject *NewDataObject(int typeId)\n\nCreate (New) and return a data object of the given classname.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectTypes_StaticNew()
{
  return vtkDataObjectTypes::New();
}

PyObject *PyVTKClass_vtkDataObjectTypesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectTypes_StaticNew,
    PyvtkDataObjectTypes_Methods,
    "vtkDataObjectTypes", modulename,
    NULL, NULL,
    PyvtkDataObjectTypes_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataObjectTypes_Doc()
{
  static const char *docstring[] = {
    "vtkDataObject - helper class to get VTK data object types as string\nand instantiate them\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataObjectTypes is a helper class that supports conversion between\ninteger types defined in vtkType.h and string names as well as\ncreation of data objects from either integer or string types. This\nclass has to be updated every time a new data type is added to VTK.\n\nSee Also:\n\nvtkDataObject\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectTypes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectTypesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectTypes", o) != 0)
    {
    Py_DECREF(o);
    }

}

