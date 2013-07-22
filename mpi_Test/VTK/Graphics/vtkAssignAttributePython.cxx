// python wrapper for vtkAssignAttribute
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
#include "vtkAssignAttribute.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAssignAttribute(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAssignAttribute(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAssignAttributeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAssignAttributeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkAssignAttribute_Doc();


static PyObject *
PyvtkAssignAttribute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

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
      tempr = op->vtkAssignAttribute::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

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
      tempr = op->vtkAssignAttribute::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  vtkAssignAttribute *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAssignAttribute::NewInstance();
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
PyvtkAssignAttribute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAssignAttribute *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAssignAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignAttribute_Assign_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Assign(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Assign(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Assign(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAssignAttribute_Assign_Methods[] = {
  {NULL, PyvtkAssignAttribute_Assign_s1, 1,
   (char*)"@iii"},
  {NULL, PyvtkAssignAttribute_Assign_s2, 1,
   (char*)"@zii"},
  {NULL, PyvtkAssignAttribute_Assign_s3, 1,
   (char*)"@zzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAssignAttribute_Assign(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAssignAttribute_Assign_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Assign");
  return NULL;
}


static PyMethodDef PyvtkAssignAttribute_Methods[] = {
  {(char*)"GetClassName", PyvtkAssignAttribute_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssignAttribute_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssignAttribute_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAssignAttribute\nC++: vtkAssignAttribute *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssignAttribute_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssignAttribute\nC++: vtkAssignAttribute *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Assign", PyvtkAssignAttribute_Assign, 1,
   (char*)"V.Assign(int, int, int)\nC++: void Assign(int inputAttributeType, int attributeType,\n    int attributeLoc)\nV.Assign(string, int, int)\nC++: void Assign(const char *fieldName, int attributeType,\n    int attributeLoc)\nV.Assign(string, string, string)\nC++: void Assign(const char *name, const char *attributeType,\n    const char *attributeLoc)\n\nLabel an attribute as another attribute.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssignAttribute_StaticNew()
{
  return vtkAssignAttribute::New();
}

PyObject *PyVTKClass_vtkAssignAttributeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssignAttribute_StaticNew,
    PyvtkAssignAttribute_Methods,
    "vtkAssignAttribute", modulename,
    NULL, NULL,
    PyvtkAssignAttribute_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"POINT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CELL_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VERTEX_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"NUM_ATTRIBUTE_LOCS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAssignAttribute_Doc()
{
  static const char *docstring[] = {
    "vtkAssignAttribute - Labels a field as an attribute\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkAssignAttribute is use to label a field (vtkDataArray) as an\nattribute. A field name or an attribute to labeled can be specified.\nFor example:\n aa->Assign(\"foo\", vtkDataSetAttributes::SCALARS, \n            vtkAssignAttribute::POINT_DATA);\n  tells vtkAssignAttribute to make the array in the point data called\n\"foo\" the active scalars. On the other hand,\n aa->Assign(vtkDataSetAttributes::VECTORS, ",
    "vtkDataSetAttributes::SCALARS, \n            vtkAssignAttribute::POINT_DATA);\n  tells vtkAssignAttribute to make the active vectors also the active\nscalars. The same can be done more easily from Tcl by using the\nAssign() method which takes strings:\n aa Assign \"foo\" SCALARS POINT_DATA \n or\n aa Assign SCALARS VECTORS POINT_DATA\n\n AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n Attribute ",
    "locations: POINT_DATA, CELL_DATA\n \n\nCaveats:\n\nWhen using Tcl, Java, Python or Visual Basic bindings, the array name\ncan not be one of the  AttributeTypes when calling Assign() which\ntakes strings as arguments. The Tcl (Java etc.) command will always\nassume the string corresponds to an attribute type when the argument\nis one of the AttributeTypes. In this situation, use the Assign()\nwhich takes enu",
    "ms.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\nvtkMergeFields\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssignAttribute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssignAttributeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssignAttribute", o) != 0)
    {
    Py_DECREF(o);
    }

}

