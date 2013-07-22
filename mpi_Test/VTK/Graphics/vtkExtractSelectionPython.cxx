// python wrapper for vtkExtractSelection
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
#include "vtkExtractSelection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelection_Doc();


static PyObject *
PyvtkExtractSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

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
      tempr = op->vtkExtractSelection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

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
      tempr = op->vtkExtractSelection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  vtkExtractSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelection::NewInstance();
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
PyvtkExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowBounds(temp0);
      }
    else
      {
      op->vtkExtractSelection::SetShowBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowBounds();
      }
    else
      {
      tempr = op->vtkExtractSelection::GetShowBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_ShowBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowBoundsOn();
      }
    else
      {
      op->vtkExtractSelection::ShowBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_ShowBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowBoundsOff();
      }
    else
      {
      op->vtkExtractSelection::ShowBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseProbeForLocations(temp0);
      }
    else
      {
      op->vtkExtractSelection::SetUseProbeForLocations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseProbeForLocations();
      }
    else
      {
      tempr = op->vtkExtractSelection::GetUseProbeForLocations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_UseProbeForLocationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseProbeForLocationsOn();
      }
    else
      {
      op->vtkExtractSelection::UseProbeForLocationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_UseProbeForLocationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseProbeForLocationsOff();
      }
    else
      {
      op->vtkExtractSelection::UseProbeForLocationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelection\nC++: vtkExtractSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelection\nC++: vtkExtractSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShowBounds", PyvtkExtractSelection_SetShowBounds, 1,
   (char*)"V.SetShowBounds(int)\nC++: void SetShowBounds(int a)\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"GetShowBounds", PyvtkExtractSelection_GetShowBounds, 1,
   (char*)"V.GetShowBounds() -> int\nC++: int GetShowBounds()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"ShowBoundsOn", PyvtkExtractSelection_ShowBoundsOn, 1,
   (char*)"V.ShowBoundsOn()\nC++: void ShowBoundsOn()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"ShowBoundsOff", PyvtkExtractSelection_ShowBoundsOff, 1,
   (char*)"V.ShowBoundsOff()\nC++: void ShowBoundsOff()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"SetUseProbeForLocations", PyvtkExtractSelection_SetUseProbeForLocations, 1,
   (char*)"V.SetUseProbeForLocations(int)\nC++: void SetUseProbeForLocations(int a)\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {(char*)"GetUseProbeForLocations", PyvtkExtractSelection_GetUseProbeForLocations, 1,
   (char*)"V.GetUseProbeForLocations() -> int\nC++: int GetUseProbeForLocations()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {(char*)"UseProbeForLocationsOn", PyvtkExtractSelection_UseProbeForLocationsOn, 1,
   (char*)"V.UseProbeForLocationsOn()\nC++: void UseProbeForLocationsOn()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {(char*)"UseProbeForLocationsOff", PyvtkExtractSelection_UseProbeForLocationsOff, 1,
   (char*)"V.UseProbeForLocationsOff()\nC++: void UseProbeForLocationsOff()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelection_StaticNew()
{
  return vtkExtractSelection::New();
}

PyObject *PyVTKClass_vtkExtractSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelection_StaticNew,
    PyvtkExtractSelection_Methods,
    "vtkExtractSelection", modulename,
    NULL, NULL,
    PyvtkExtractSelection_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelection_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelection - extract a subset from a vtkDataSet.\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelection extracts some subset of cells and points from its\ninput dataset. The dataset is given on its first input port. The\nsubset is described by the contents of the vtkSelection on its second\ninput port. Depending on the content of the vtkSelection, this will\nuse either a vtkExtractSelectedIds, vtkExtractSelectedFrustum\nvtkExtractSelectedLocations or a vtkExtractSelectedThreshold to\np",
    "erform the extraction.\n\nSee Also:\n\nvtkSelection vtkExtractSelectedIds vtkExtractSelectedFrustum\nvtkExtractSelectedLocations vtkExtractSelectedThresholds\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

