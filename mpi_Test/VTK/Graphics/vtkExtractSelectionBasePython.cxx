// python wrapper for vtkExtractSelectionBase
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
#include "vtkExtractSelectionBase.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectionBase(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectionBase(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkExtractSelectionBase_Doc();


static PyObject *
PyvtkExtractSelectionBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

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
      tempr = op->vtkExtractSelectionBase::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

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
      tempr = op->vtkExtractSelectionBase::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  vtkExtractSelectionBase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectionBase::NewInstance();
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
PyvtkExtractSelectionBase_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkExtractSelectionBase::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_SetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreserveTopology(temp0);
      }
    else
      {
      op->vtkExtractSelectionBase::SetPreserveTopology(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_GetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreserveTopology();
      }
    else
      {
      tempr = op->vtkExtractSelectionBase::GetPreserveTopology();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_PreserveTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveTopologyOn();
      }
    else
      {
      op->vtkExtractSelectionBase::PreserveTopologyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectionBase_PreserveTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionBase *op = static_cast<vtkExtractSelectionBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveTopologyOff();
      }
    else
      {
      op->vtkExtractSelectionBase::PreserveTopologyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectionBase_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectionBase_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectionBase_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectionBase_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectionBase\nC++: vtkExtractSelectionBase *NewInstance()\n\n"},
  {(char*)"SetSelectionConnection", PyvtkExtractSelectionBase_SetSelectionConnection, 1,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {(char*)"SetPreserveTopology", PyvtkExtractSelectionBase_SetPreserveTopology, 1,
   (char*)"V.SetPreserveTopology(int)\nC++: void SetPreserveTopology(int a)\n\nThis flag tells the extraction filter not to convert the selected\noutput into an unstructured grid, but instead to produce a\nvtkInsidedness array and add it to the input dataset. Default\nvalue is false(0).\n"},
  {(char*)"GetPreserveTopology", PyvtkExtractSelectionBase_GetPreserveTopology, 1,
   (char*)"V.GetPreserveTopology() -> int\nC++: int GetPreserveTopology()\n\nThis flag tells the extraction filter not to convert the selected\noutput into an unstructured grid, but instead to produce a\nvtkInsidedness array and add it to the input dataset. Default\nvalue is false(0).\n"},
  {(char*)"PreserveTopologyOn", PyvtkExtractSelectionBase_PreserveTopologyOn, 1,
   (char*)"V.PreserveTopologyOn()\nC++: void PreserveTopologyOn()\n\nThis flag tells the extraction filter not to convert the selected\noutput into an unstructured grid, but instead to produce a\nvtkInsidedness array and add it to the input dataset. Default\nvalue is false(0).\n"},
  {(char*)"PreserveTopologyOff", PyvtkExtractSelectionBase_PreserveTopologyOff, 1,
   (char*)"V.PreserveTopologyOff()\nC++: void PreserveTopologyOff()\n\nThis flag tells the extraction filter not to convert the selected\noutput into an unstructured grid, but instead to produce a\nvtkInsidedness array and add it to the input dataset. Default\nvalue is false(0).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkExtractSelectionBase_Methods,
    "vtkExtractSelectionBase", modulename,
    NULL, NULL,
    PyvtkExtractSelectionBase_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectionBase_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectionBase - abstract base class for all extract\nselection\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkExtractSelectionBase is an abstract base class for all extract\nselection filters. It defines some properties common to all extract\nselection filters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectionBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectionBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectionBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

