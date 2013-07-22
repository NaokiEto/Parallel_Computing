// python wrapper for vtkMaskFields
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
#include "vtkMaskFields.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMaskFields(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMaskFields(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMaskFieldsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMaskFieldsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMaskFields_Doc();


static PyObject *
PyvtkMaskFields_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

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
      tempr = op->vtkMaskFields::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

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
      tempr = op->vtkMaskFields::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  vtkMaskFields *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMaskFields::NewInstance();
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
PyvtkMaskFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMaskFields *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMaskFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyFieldOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyFieldOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyFieldOn_Methods[] = {
  {NULL, PyvtkMaskFields_CopyFieldOn_s1, 1,
   (char*)"@iz"},
  {NULL, PyvtkMaskFields_CopyFieldOn_s2, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyFieldOn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyFieldOn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyFieldOn");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyFieldOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyFieldOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyFieldOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyFieldOff_Methods[] = {
  {NULL, PyvtkMaskFields_CopyFieldOff_s1, 1,
   (char*)"@iz"},
  {NULL, PyvtkMaskFields_CopyFieldOff_s2, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyFieldOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyFieldOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyFieldOff");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyAttributeOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyAttributeOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOn(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyAttributeOn_Methods[] = {
  {NULL, PyvtkMaskFields_CopyAttributeOn_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkMaskFields_CopyAttributeOn_s2, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyAttributeOn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyAttributeOn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyAttributeOn");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyAttributeOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyAttributeOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyAttributeOff(temp0, temp1);
      }
    else
      {
      op->vtkMaskFields::CopyAttributeOff(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyAttributeOff_Methods[] = {
  {NULL, PyvtkMaskFields_CopyAttributeOff_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkMaskFields_CopyAttributeOff_s2, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaskFields_CopyAttributeOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyAttributeOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyAttributeOff");
  return NULL;
}



static PyObject *
PyvtkMaskFields_CopyFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyFieldsOff();
      }
    else
      {
      op->vtkMaskFields::CopyFieldsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAttributesOff();
      }
    else
      {
      op->vtkMaskFields::CopyAttributesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyFieldsOn();
      }
    else
      {
      op->vtkMaskFields::CopyFieldsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAttributesOn();
      }
    else
      {
      op->vtkMaskFields::CopyAttributesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAllOn();
      }
    else
      {
      op->vtkMaskFields::CopyAllOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyAllOff();
      }
    else
      {
      op->vtkMaskFields::CopyAllOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskFields_Methods[] = {
  {(char*)"GetClassName", PyvtkMaskFields_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaskFields_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaskFields_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMaskFields\nC++: vtkMaskFields *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaskFields_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaskFields\nC++: vtkMaskFields *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFieldOn", PyvtkMaskFields_CopyFieldOn, 1,
   (char*)"V.CopyFieldOn(int, string)\nC++: void CopyFieldOn(int fieldLocation, const char *name)\nV.CopyFieldOn(string, string)\nC++: void CopyFieldOn(const char *fieldLoc, const char *name)\n\nTurn on/off the copying of the field or specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array A field name and a location must be\n   specified. For example:\n maskFields->CopyFieldOff(vtkMaskFields::CELL_DATA, \"foo\");\n  causes the field \"foo\" on the input cell data to not get copied\n   to the output.\n"},
  {(char*)"CopyFieldOff", PyvtkMaskFields_CopyFieldOff, 1,
   (char*)"V.CopyFieldOff(int, string)\nC++: void CopyFieldOff(int fieldLocation, const char *name)\nV.CopyFieldOff(string, string)\nC++: void CopyFieldOff(const char *fieldLoc, const char *name)\n\nTurn on/off the copying of the field or specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array A field name and a location must be\n   specified. For example:\n maskFields->CopyFieldOff(vtkMaskFields::CELL_DATA, \"foo\");\n  causes the field \"foo\" on the input cell data to not get copied\n   to the output.\n"},
  {(char*)"CopyAttributeOn", PyvtkMaskFields_CopyAttributeOn, 1,
   (char*)"V.CopyAttributeOn(int, int)\nC++: void CopyAttributeOn(int attributeLocation,\n    int attributeType)\nV.CopyAttributeOn(string, string)\nC++: void CopyAttributeOn(const char *attributeLoc,\n    const char *attributeType)\n\nTurn on/off the copying of the attribute or specified by\nvtkDataSetAttributes:AttributeTypes. During the copying/passing,\nthe following rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array An attribute type and a location must be\n   specified. For example:\n maskFields->CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS);\n  causes the scalars on the input point data to not get copied to\nthe output.\n"},
  {(char*)"CopyAttributeOff", PyvtkMaskFields_CopyAttributeOff, 1,
   (char*)"V.CopyAttributeOff(int, int)\nC++: void CopyAttributeOff(int attributeLocation,\n    int attributeType)\nV.CopyAttributeOff(string, string)\nC++: void CopyAttributeOff(const char *attributeLoc,\n    const char *attributeType)\n\nTurn on/off the copying of the attribute or specified by\nvtkDataSetAttributes:AttributeTypes. During the copying/passing,\nthe following rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array An attribute type and a location must be\n   specified. For example:\n maskFields->CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS);\n  causes the scalars on the input point data to not get copied to\nthe output.\n"},
  {(char*)"CopyFieldsOff", PyvtkMaskFields_CopyFieldsOff, 1,
   (char*)"V.CopyFieldsOff()\nC++: void CopyFieldsOff()\n\nConvenience methods which operate on all field data or attribute\ndata.  More specific than CopyAllOn or CopyAllOff\n"},
  {(char*)"CopyAttributesOff", PyvtkMaskFields_CopyAttributesOff, 1,
   (char*)"V.CopyAttributesOff()\nC++: void CopyAttributesOff()\n\nConvenience methods which operate on all field data or attribute\ndata.  More specific than CopyAllOn or CopyAllOff\n"},
  {(char*)"CopyFieldsOn", PyvtkMaskFields_CopyFieldsOn, 1,
   (char*)"V.CopyFieldsOn()\nC++: void CopyFieldsOn()\n\n"},
  {(char*)"CopyAttributesOn", PyvtkMaskFields_CopyAttributesOn, 1,
   (char*)"V.CopyAttributesOn()\nC++: void CopyAttributesOn()\n\n"},
  {(char*)"CopyAllOn", PyvtkMaskFields_CopyAllOn, 1,
   (char*)"V.CopyAllOn()\nC++: virtual void CopyAllOn()\n\nTurn on copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyAllOff", PyvtkMaskFields_CopyAllOff, 1,
   (char*)"V.CopyAllOff()\nC++: virtual void CopyAllOff()\n\nTurn off copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaskFields_StaticNew()
{
  return vtkMaskFields::New();
}

PyObject *PyVTKClass_vtkMaskFieldsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaskFields_StaticNew,
    PyvtkMaskFields_Methods,
    "vtkMaskFields", modulename,
    NULL, NULL,
    PyvtkMaskFields_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"OBJECT_DATA", o) != 0)
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

const char **PyvtkMaskFields_Doc()
{
  static const char *docstring[] = {
    "vtkMaskFields - Allow control of which fields get passed\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMaskFields is used to mark which fields in the input dataset get\ncopied to the output.  The output will contain only those fields\nmarked as on by the filter.\n\nSee Also:\n\nvtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\nvtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\nvtkMergeFields vtkAssignAttribute\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaskFields(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaskFieldsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaskFields", o) != 0)
    {
    Py_DECREF(o);
    }

}

