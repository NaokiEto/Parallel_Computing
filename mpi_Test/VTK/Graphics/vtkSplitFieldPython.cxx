// python wrapper for vtkSplitField
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
#include "vtkSplitField.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplitField(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplitField(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplitFieldNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplitFieldNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkSplitField_Doc();


static PyObject *
PyvtkSplitField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

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
      tempr = op->vtkSplitField::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

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
      tempr = op->vtkSplitField::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  vtkSplitField *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplitField::NewInstance();
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
PyvtkSplitField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplitField *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplitField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitField_SetInputField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::SetInputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplitField_SetInputField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::SetInputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplitField_SetInputField_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputField(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::SetInputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplitField_SetInputField_Methods[] = {
  {NULL, PyvtkSplitField_SetInputField_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkSplitField_SetInputField_s2, 1,
   (char*)"@zi"},
  {NULL, PyvtkSplitField_SetInputField_s3, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSplitField_SetInputField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSplitField_SetInputField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputField");
  return NULL;
}



static PyObject *
PyvtkSplitField_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Split(temp0, temp1);
      }
    else
      {
      op->vtkSplitField::Split(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplitField_Methods[] = {
  {(char*)"GetClassName", PyvtkSplitField_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplitField_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplitField_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplitField\nC++: vtkSplitField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplitField_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplitField\nC++: vtkSplitField *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputField", PyvtkSplitField_SetInputField, 1,
   (char*)"V.SetInputField(int, int)\nC++: void SetInputField(int attributeType, int fieldLoc)\nV.SetInputField(string, int)\nC++: void SetInputField(const char *name, int fieldLoc)\nV.SetInputField(string, string)\nC++: void SetInputField(const char *name, const char *fieldLoc)\n\nUse the  given attribute in the field data given by fieldLoc as\ninput.\n"},
  {(char*)"Split", PyvtkSplitField_Split, 1,
   (char*)"V.Split(int, string)\nC++: void Split(int component, const char *arrayName)\n\nCreate a new array with the given component.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplitField_StaticNew()
{
  return vtkSplitField::New();
}

PyObject *PyVTKClass_vtkSplitFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplitField_StaticNew,
    PyvtkSplitField_Methods,
    "vtkSplitField", modulename,
    NULL, NULL,
    PyvtkSplitField_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

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

    }

  return cls;
}

const char **PyvtkSplitField_Doc()
{
  static const char *docstring[] = {
    "vtkSplitField - Split a field into single component fields\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkSplitField is used to split a multi-component field (vtkDataArray)\ninto multiple single component fields. The new fields are put in the\nsame field data as the original field. The output arrays are of the\nsame type as the input array. Example:\n sf->SetInputField(\"gradient\", vtkSplitField::POINT_DATA);\n sf->Split(0, \"firstcomponent\");\n  tells vtkSplitField to extract the first component of the fi",
    "eld\ncalled gradient and create an array called firstcomponent (the new\nfield will be in the output's point data). The same can be done from\nTcl:\n sf SetInputField gradient POINT_DATA\n sf Split 0 firstcomponent\n\n AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n Field locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n  Note that, by default, the original array is also passed through.\n\nCaveat",
    "s:\n\nWhen using Tcl, Java, Python or Visual Basic bindings, the array name\ncan not be one of the  AttributeTypes when calling Split() which\ntakes strings as arguments. The Tcl (Java etc.) command will always\nassume the string corresponds to an attribute type when the argument\nis one of the AttributeTypes. In this situation, use the Split()\nwhich takes enums.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkD",
    "ataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields\nvtkAssignAttribute vtkMergeFields\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplitField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplitFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplitField", o) != 0)
    {
    Py_DECREF(o);
    }

}

