// python wrapper for vtkMergeFields
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
#include "vtkMergeFields.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMergeFields(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMergeFields(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMergeFieldsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMergeFieldsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMergeFields_Doc();


static PyObject *
PyvtkMergeFields_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

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
      tempr = op->vtkMergeFields::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

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
      tempr = op->vtkMergeFields::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  vtkMergeFields *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMergeFields::NewInstance();
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
PyvtkMergeFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMergeFields *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMergeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_SetOutputField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutputField(temp0, temp1);
      }
    else
      {
      op->vtkMergeFields::SetOutputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMergeFields_SetOutputField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutputField(temp0, temp1);
      }
    else
      {
      op->vtkMergeFields::SetOutputField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeFields_SetOutputField_Methods[] = {
  {NULL, PyvtkMergeFields_SetOutputField_s1, 1,
   (char*)"@zi"},
  {NULL, PyvtkMergeFields_SetOutputField_s2, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMergeFields_SetOutputField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMergeFields_SetOutputField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputField");
  return NULL;
}



static PyObject *
PyvtkMergeFields_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Merge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMergeFields::Merge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkMergeFields::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFields_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponents();
      }
    else
      {
      tempr = op->vtkMergeFields::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeFields_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeFields_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeFields_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeFields_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMergeFields\nC++: vtkMergeFields *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeFields_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeFields\nC++: vtkMergeFields *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputField", PyvtkMergeFields_SetOutputField, 1,
   (char*)"V.SetOutputField(string, int)\nC++: void SetOutputField(const char *name, int fieldLoc)\nV.SetOutputField(string, string)\nC++: void SetOutputField(const char *name, const char *fieldLoc)\n\nThe output field will have the given name and it will be in\nfieldLoc (the input fields also have to be in fieldLoc).\n"},
  {(char*)"Merge", PyvtkMergeFields_Merge, 1,
   (char*)"V.Merge(int, string, int)\nC++: void Merge(int component, const char *arrayName,\n    int sourceComp)\n\nAdd a component (arrayName,sourceComp) to the output field.\n"},
  {(char*)"SetNumberOfComponents", PyvtkMergeFields_SetNumberOfComponents, 1,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int a)\n\nSet the number of the components in the output field. This has to\nbe set before execution. Default value is 0.\n"},
  {(char*)"GetNumberOfComponents", PyvtkMergeFields_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nSet the number of the components in the output field. This has to\nbe set before execution. Default value is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeFields_StaticNew()
{
  return vtkMergeFields::New();
}

PyObject *PyVTKClass_vtkMergeFieldsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeFields_StaticNew,
    PyvtkMergeFields_Methods,
    "vtkMergeFields", modulename,
    NULL, NULL,
    PyvtkMergeFields_Doc(),
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

const char **PyvtkMergeFields_Doc()
{
  static const char *docstring[] = {
    "vtkMergeFields - Merge multiple fields into one.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMergeFields is used to merge mutliple field into one. The new\nfield is put in the same field data as the original field. For\nexample\n mf->SetOutputField(\"foo\", vtkMergeFields::POINT_DATA);\n mf->SetNumberOfComponents(2);\n mf->Merge(0, \"array1\", 1);\n mf->Merge(1, \"array2\", 0);\n  will tell vtkMergeFields to use the 2nd component of array1 and the\n1st component of array2 to create a 2 component fie",
    "ld called foo. The\nsame can be done using Tcl:\n mf SetOutputField foo POINT_DATA\n mf Merge 0 array1 1\n mf Merge 1 array2 0\n\n Field locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n \n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\nvtkAssignAttribute\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeFields(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeFieldsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeFields", o) != 0)
    {
    Py_DECREF(o);
    }

}

