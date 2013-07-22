// python wrapper for vtkSplitColumnComponents
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
#include "vtkSplitColumnComponents.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplitColumnComponents(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplitColumnComponents(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplitColumnComponentsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplitColumnComponentsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSplitColumnComponents_Doc();


static PyObject *
PyvtkSplitColumnComponents_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

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
      tempr = op->vtkSplitColumnComponents::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

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
      tempr = op->vtkSplitColumnComponents::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  vtkSplitColumnComponents *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplitColumnComponents::NewInstance();
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
PyvtkSplitColumnComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplitColumnComponents *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplitColumnComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalculateMagnitudes(temp0);
      }
    else
      {
      op->vtkSplitColumnComponents::SetCalculateMagnitudes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCalculateMagnitudes();
      }
    else
      {
      tempr = op->vtkSplitColumnComponents::GetCalculateMagnitudes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSplitColumnComponents_Methods[] = {
  {(char*)"GetClassName", PyvtkSplitColumnComponents_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplitColumnComponents_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplitColumnComponents_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplitColumnComponents\nC++: vtkSplitColumnComponents *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplitColumnComponents_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplitColumnComponents\nC++: vtkSplitColumnComponents *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCalculateMagnitudes", PyvtkSplitColumnComponents_SetCalculateMagnitudes, 1,
   (char*)"V.SetCalculateMagnitudes(bool)\nC++: void SetCalculateMagnitudes(bool a)\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {(char*)"GetCalculateMagnitudes", PyvtkSplitColumnComponents_GetCalculateMagnitudes, 1,
   (char*)"V.GetCalculateMagnitudes() -> bool\nC++: bool GetCalculateMagnitudes()\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplitColumnComponents_StaticNew()
{
  return vtkSplitColumnComponents::New();
}

PyObject *PyVTKClass_vtkSplitColumnComponentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplitColumnComponents_StaticNew,
    PyvtkSplitColumnComponents_Methods,
    "vtkSplitColumnComponents", modulename,
    NULL, NULL,
    PyvtkSplitColumnComponents_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSplitColumnComponents_Doc()
{
  static const char *docstring[] = {
    "vtkSplitColumnComponents - split multicomponent table columns\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Splits any columns in a table that have more than one component into\nindividual columns. Single component columns are passed through\nwithout any data duplication. So if column names \"Points\" had three\ncomponents this column would be split into \"Points (0)\", \"Points (1)\"\nand Points (2)\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplitColumnComponents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplitColumnComponentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplitColumnComponents", o) != 0)
    {
    Py_DECREF(o);
    }

}

