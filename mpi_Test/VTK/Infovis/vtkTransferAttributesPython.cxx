// python wrapper for vtkTransferAttributes
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
#include "vtkVariant.h"
#include "vtkTransferAttributes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransferAttributes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransferAttributes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransferAttributesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransferAttributesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkTransferAttributes_Doc();


static PyObject *
PyvtkTransferAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

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
      tempr = op->vtkTransferAttributes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

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
      tempr = op->vtkTransferAttributes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  vtkTransferAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransferAttributes::NewInstance();
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
PyvtkTransferAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransferAttributes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransferAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirectMapping(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetDirectMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirectMapping();
      }
    else
      {
      tempr = op->vtkTransferAttributes::GetDirectMapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOn();
      }
    else
      {
      op->vtkTransferAttributes::DirectMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOff();
      }
    else
      {
      op->vtkTransferAttributes::DirectMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceArrayName();
      }
    else
      {
      tempr = op->vtkTransferAttributes::GetSourceArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceArrayName(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetSourceArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetArrayName();
      }
    else
      {
      tempr = op->vtkTransferAttributes::GetTargetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetArrayName(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetTargetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceFieldType();
      }
    else
      {
      tempr = op->vtkTransferAttributes::GetSourceFieldType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceFieldType(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetSourceFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetFieldType();
      }
    else
      {
      tempr = op->vtkTransferAttributes::GetTargetFieldType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetFieldType(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetTargetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultValue();
      }
    else
      {
      tempr = op->vtkTransferAttributes::GetDefaultValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetDefaultValue(*temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetDefaultValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkTransferAttributes_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

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
      tempr = op->vtkTransferAttributes::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransferAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkTransferAttributes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransferAttributes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransferAttributes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransferAttributes\nC++: vtkTransferAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransferAttributes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransferAttributes\nC++: vtkTransferAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDirectMapping", PyvtkTransferAttributes_SetDirectMapping, 1,
   (char*)"V.SetDirectMapping(bool)\nC++: void SetDirectMapping(bool a)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"GetDirectMapping", PyvtkTransferAttributes_GetDirectMapping, 1,
   (char*)"V.GetDirectMapping() -> bool\nC++: bool GetDirectMapping()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOn", PyvtkTransferAttributes_DirectMappingOn, 1,
   (char*)"V.DirectMappingOn()\nC++: void DirectMappingOn()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOff", PyvtkTransferAttributes_DirectMappingOff, 1,
   (char*)"V.DirectMappingOff()\nC++: void DirectMappingOff()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"GetSourceArrayName", PyvtkTransferAttributes_GetSourceArrayName, 1,
   (char*)"V.GetSourceArrayName() -> string\nC++: char *GetSourceArrayName()\n\nThe field name to use for storing the source array.\n"},
  {(char*)"SetSourceArrayName", PyvtkTransferAttributes_SetSourceArrayName, 1,
   (char*)"V.SetSourceArrayName(string)\nC++: void SetSourceArrayName(char *)\n\nThe field name to use for storing the source array.\n"},
  {(char*)"GetTargetArrayName", PyvtkTransferAttributes_GetTargetArrayName, 1,
   (char*)"V.GetTargetArrayName() -> string\nC++: char *GetTargetArrayName()\n\nThe field name to use for storing the source array.\n"},
  {(char*)"SetTargetArrayName", PyvtkTransferAttributes_SetTargetArrayName, 1,
   (char*)"V.SetTargetArrayName(string)\nC++: void SetTargetArrayName(char *)\n\nThe field name to use for storing the source array.\n"},
  {(char*)"GetSourceFieldType", PyvtkTransferAttributes_GetSourceFieldType, 1,
   (char*)"V.GetSourceFieldType() -> int\nC++: int GetSourceFieldType()\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"SetSourceFieldType", PyvtkTransferAttributes_SetSourceFieldType, 1,
   (char*)"V.SetSourceFieldType(int)\nC++: void SetSourceFieldType(int a)\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"GetTargetFieldType", PyvtkTransferAttributes_GetTargetFieldType, 1,
   (char*)"V.GetTargetFieldType() -> int\nC++: int GetTargetFieldType()\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"SetTargetFieldType", PyvtkTransferAttributes_SetTargetFieldType, 1,
   (char*)"V.SetTargetFieldType(int)\nC++: void SetTargetFieldType(int a)\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"GetDefaultValue", PyvtkTransferAttributes_GetDefaultValue, 1,
   (char*)"V.GetDefaultValue() -> vtkVariant\nC++: vtkVariant GetDefaultValue()\n\nMethod to get/set the default value.\n"},
  {(char*)"SetDefaultValue", PyvtkTransferAttributes_SetDefaultValue, 1,
   (char*)"V.SetDefaultValue(vtkVariant)\nC++: void SetDefaultValue(vtkVariant value)\n\nMethod to get/set the default value.\n"},
  {(char*)"FillInputPortInformation", PyvtkTransferAttributes_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransferAttributes_StaticNew()
{
  return vtkTransferAttributes::New();
}

PyObject *PyVTKClass_vtkTransferAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransferAttributes_StaticNew,
    PyvtkTransferAttributes_Methods,
    "vtkTransferAttributes", modulename,
    NULL, NULL,
    PyvtkTransferAttributes_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransferAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkTransferAttributes - transfer data from a graph representation\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "The filter requires both a vtkGraph and vtkTree as input.  The tree\nvertices must be a superset of the graph vertices.  A common example\nis when the graph vertices correspond to the leaves of the tree, but\nthe internal vertices of the tree represent groupings of graph\nvertices.  The algorithm matches the vertices using the array\n\"PedigreeId\".  The user may alternately set the DirectMapping flag to",
    "\nindicate that the two structures must have directly corresponding\noffsets (i.e. node i in the graph must correspond to node i in the\ntree).\n\nThanks:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransferAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransferAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransferAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

