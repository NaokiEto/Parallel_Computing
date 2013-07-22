// python wrapper for vtkRearrangeFields
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
#include "vtkRearrangeFields.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRearrangeFields(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRearrangeFields(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRearrangeFieldsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRearrangeFieldsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkRearrangeFields_Doc();


static PyObject *
PyvtkRearrangeFields_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

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
      tempr = op->vtkRearrangeFields::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRearrangeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

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
      tempr = op->vtkRearrangeFields::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRearrangeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  vtkRearrangeFields *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRearrangeFields::NewInstance();
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
PyvtkRearrangeFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRearrangeFields *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRearrangeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRearrangeFields_AddOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddOperation(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddOperation(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddOperation(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_AddOperation_Methods[] = {
  {NULL, PyvtkRearrangeFields_AddOperation_s1, 1,
   (char*)"@iiii"},
  {NULL, PyvtkRearrangeFields_AddOperation_s2, 1,
   (char*)"@izii"},
  {NULL, PyvtkRearrangeFields_AddOperation_s3, 1,
   (char*)"@zzzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRearrangeFields_AddOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_AddOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddOperation");
  return NULL;
}



static PyObject *
PyvtkRearrangeFields_RemoveOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveOperation(temp0);
      }
    else
      {
      tempr = op->vtkRearrangeFields::RemoveOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveOperation(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveOperation(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveOperation(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_RemoveOperation_Methods[] = {
  {NULL, PyvtkRearrangeFields_RemoveOperation_s2, 1,
   (char*)"@iiii"},
  {NULL, PyvtkRearrangeFields_RemoveOperation_s3, 1,
   (char*)"@izii"},
  {NULL, PyvtkRearrangeFields_RemoveOperation_s4, 1,
   (char*)"@zzzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRearrangeFields_RemoveOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_RemoveOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRearrangeFields_RemoveOperation_s1(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveOperation");
  return NULL;
}



static PyObject *
PyvtkRearrangeFields_RemoveAllOperations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllOperations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllOperations();
      }
    else
      {
      op->vtkRearrangeFields::RemoveAllOperations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_Methods[] = {
  {(char*)"GetClassName", PyvtkRearrangeFields_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRearrangeFields_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRearrangeFields_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRearrangeFields\nC++: vtkRearrangeFields *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRearrangeFields_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRearrangeFields\nC++: vtkRearrangeFields *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddOperation", PyvtkRearrangeFields_AddOperation, 1,
   (char*)"V.AddOperation(int, int, int, int) -> int\nC++: int AddOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nV.AddOperation(int, string, int, int) -> int\nC++: int AddOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nV.AddOperation(string, string, string, string) -> int\nC++: int AddOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nAdd an operation which copies an attribute's field (data array)\nfrom one field data to another. Returns an operation id which can\nlater be used to remove the operation.\n"},
  {(char*)"RemoveOperation", PyvtkRearrangeFields_RemoveOperation, 1,
   (char*)"V.RemoveOperation(int) -> int\nC++: int RemoveOperation(int operationId)\nV.RemoveOperation(int, int, int, int) -> int\nC++: int RemoveOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nV.RemoveOperation(int, string, int, int) -> int\nC++: int RemoveOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nV.RemoveOperation(string, string, string, string) -> int\nC++: int RemoveOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nRemove an operation with the given id.\n"},
  {(char*)"RemoveAllOperations", PyvtkRearrangeFields_RemoveAllOperations, 1,
   (char*)"V.RemoveAllOperations()\nC++: void RemoveAllOperations()\n\nRemove all operations.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRearrangeFields_StaticNew()
{
  return vtkRearrangeFields::New();
}

PyObject *PyVTKClass_vtkRearrangeFieldsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRearrangeFields_StaticNew,
    PyvtkRearrangeFields_Methods,
    "vtkRearrangeFields", modulename,
    NULL, NULL,
    PyvtkRearrangeFields_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"COPY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"MOVE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DATA_OBJECT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"POINT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CELL_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NAME", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ATTRIBUTE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkRearrangeFields_Doc()
{
  static const char *docstring[] = {
    "vtkRearrangeFields - Move/copy fields between field data, point data\nand cell data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkRearrangeFields is used to copy/move fields (vtkDataArrays)\nbetween data object's field data, point data and cell data. To\nspecify which fields are copied/moved, the user adds operations.\nThere are two types of operations: 1. the type which copies/moves an\nattribute's data (i.e. the field will be copied but will not be an\nattribute in the target), 2. the type which copies/moves fields by\nname. ",
    "For example:\n rf->AddOperation(vtkRearrangeFields::COPY, \"foo\", \n                  vtkRearrangeFields::DATA_OBJECT, \n                  vtkRearrangeFields::POINT_DATA);\n  adds an operation which copies a field (data array) called foo from\nthe data object's field data to point data. From Tcl, the same\noperation can be added as follows:\n rf AddOperation COPY foo DATA_OBJECT POINT_DATA\n  The same can ",
    "be done using Python and Java bindings by passing\nstrings as arguments.\n Operation types: COPY, MOVE\n AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n Field data locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n \n\nCaveats:\n\nWhen using Tcl, Java, Python or Visual Basic bindings, the array name\ncan not be one of the  AttributeTypes when calling AddOperation()\nwhich takes strings as argument",
    "s. The Tcl (Java etc.) command will\nalways assume the string corresponds to an attribute type when the\nargument is one of the AttributeTypes. In this situation, use the\nAddOperation() which takes enums.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkAssignAttribute vtkSplitField\nvtkMergeFields\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRearrangeFields(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRearrangeFieldsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRearrangeFields", o) != 0)
    {
    Py_DECREF(o);
    }

}

