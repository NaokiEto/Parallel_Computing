// python wrapper for vtkQuadratureSchemeDefinition
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
#include "vtkQuadratureSchemeDefinition.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkQuadratureSchemeDefinition(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkQuadratureSchemeDefinition(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkQuadratureSchemeDefinitionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkQuadratureSchemeDefinitionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkQuadratureSchemeDefinition_Doc();


static PyObject *
PyvtkQuadratureSchemeDefinition_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

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
      tempr = op->vtkQuadratureSchemeDefinition::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

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
      tempr = op->vtkQuadratureSchemeDefinition::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkQuadratureSchemeDefinition *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::NewInstance();
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
PyvtkQuadratureSchemeDefinition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkQuadratureSchemeDefinition *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkQuadratureSchemeDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DICTIONARY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DICTIONARY");

  vtkInformationQuadratureSchemeDefinitionVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkQuadratureSchemeDefinition::DICTIONARY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QUADRATURE_OFFSET_ARRAY_NAME");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkQuadratureSchemeDefinition::QUADRATURE_OFFSET_ARRAY_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkQuadratureSchemeDefinition *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadratureSchemeDefinition"))
    {
    if (ap.IsBound())
      {
      tempr = op->DeepCopy(temp0);
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      tempr = op->SaveState(temp0);
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::SaveState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_RestoreState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      tempr = op->RestoreState(temp0);
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::RestoreState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkQuadratureSchemeDefinition::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellType();
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::GetCellType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetQuadratureKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadratureKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuadratureKey();
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::GetQuadratureKey();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodes();
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuadraturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDefinition *op = static_cast<vtkQuadratureSchemeDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfQuadraturePoints();
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDefinition::GetNumberOfQuadraturePoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadratureSchemeDefinition_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadratureSchemeDefinition_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadratureSchemeDefinition_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadratureSchemeDefinition_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadratureSchemeDefinition_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadratureSchemeDefinition\nC++: vtkQuadratureSchemeDefinition *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DICTIONARY", PyvtkQuadratureSchemeDefinition_DICTIONARY, 1,
   (char*)"V.DICTIONARY()\n    -> vtkInformationQuadratureSchemeDefinitionVectorKey\nC++: static vtkInformationQuadratureSchemeDefinitionVectorKey *DICTIONARY(\n    )\n\n"},
  {(char*)"QUADRATURE_OFFSET_ARRAY_NAME", PyvtkQuadratureSchemeDefinition_QUADRATURE_OFFSET_ARRAY_NAME, 1,
   (char*)"V.QUADRATURE_OFFSET_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *QUADRATURE_OFFSET_ARRAY_NAME(\n    )\n\n"},
  {(char*)"DeepCopy", PyvtkQuadratureSchemeDefinition_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkQuadratureSchemeDefinition) -> int\nC++: int DeepCopy(const vtkQuadratureSchemeDefinition *other)\n\nDeep copy.\n"},
  {(char*)"SaveState", PyvtkQuadratureSchemeDefinition_SaveState, 1,
   (char*)"V.SaveState(vtkXMLDataElement) -> int\nC++: int SaveState(vtkXMLDataElement *e)\n\nPut the object into an XML representation. The element passed in\nis assumed to be empty.\n"},
  {(char*)"RestoreState", PyvtkQuadratureSchemeDefinition_RestoreState, 1,
   (char*)"V.RestoreState(vtkXMLDataElement) -> int\nC++: int RestoreState(vtkXMLDataElement *e)\n\nRestore the object from an XML representation.\n"},
  {(char*)"Clear", PyvtkQuadratureSchemeDefinition_Clear, 1,
   (char*)"V.Clear()\nC++: void Clear()\n\nRelease all allocated resources and set the object to an\nunitialized state.\n"},
  {(char*)"GetCellType", PyvtkQuadratureSchemeDefinition_GetCellType, 1,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nAccess the VTK cell type id.\n"},
  {(char*)"GetQuadratureKey", PyvtkQuadratureSchemeDefinition_GetQuadratureKey, 1,
   (char*)"V.GetQuadratureKey() -> int\nC++: int GetQuadratureKey()\n\nAccess to an alternative key.\n"},
  {(char*)"GetNumberOfNodes", PyvtkQuadratureSchemeDefinition_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nGet the number of nodes associated with the interpolation.\n"},
  {(char*)"GetNumberOfQuadraturePoints", PyvtkQuadratureSchemeDefinition_GetNumberOfQuadraturePoints, 1,
   (char*)"V.GetNumberOfQuadraturePoints() -> int\nC++: int GetNumberOfQuadraturePoints()\n\nGet the number of quadrature points associated with the scheme.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadratureSchemeDefinition_StaticNew()
{
  return vtkQuadratureSchemeDefinition::New();
}

PyObject *PyVTKClass_vtkQuadratureSchemeDefinitionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadratureSchemeDefinition_StaticNew,
    PyvtkQuadratureSchemeDefinition_Methods,
    "vtkQuadratureSchemeDefinition", modulename,
    NULL, NULL,
    PyvtkQuadratureSchemeDefinition_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkQuadratureSchemeDefinition_Doc()
{
  static const char *docstring[] = {
    "vtkQuadratureSchemeDefinition\n\n",
    "Superclass: vtkObject\n\n",
    "An Elemental data type that holds a definition of a numerical\nquadrature scheme. The definition contains the requisite information\nto interpolate to the so called quadrature points of the specific\nscheme. namely:\n\n1) A matrix of shape function weights(shape functions evaluated at\nparametric coordinates of the quadrature points).\n\n2) The number of quadrature points and cell nodes. These parameters\n",
    "size the matrix, and allow for convinent evaluation by users of the\ndefinition. \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadratureSchemeDefinition(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadratureSchemeDefinitionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadratureSchemeDefinition", o) != 0)
    {
    Py_DECREF(o);
    }

}

