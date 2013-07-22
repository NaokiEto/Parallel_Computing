// python wrapper for vtkVolumePicker
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
#include "vtkVolumePicker.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumePicker(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumePicker(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumePickerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumePickerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCellPickerNew
extern "C" { PyObject *PyVTKClass_vtkCellPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellPickerNew
#endif

static const char **PyvtkVolumePicker_Doc();


static PyObject *
PyvtkVolumePicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

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
      tempr = op->vtkVolumePicker::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

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
      tempr = op->vtkVolumePicker::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  vtkVolumePicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumePicker::NewInstance();
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
PyvtkVolumePicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumePicker *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumePicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_SetPickCroppingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickCroppingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickCroppingPlanes(temp0);
      }
    else
      {
      op->vtkVolumePicker::SetPickCroppingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_PickCroppingPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCroppingPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickCroppingPlanesOn();
      }
    else
      {
      op->vtkVolumePicker::PickCroppingPlanesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_PickCroppingPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCroppingPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickCroppingPlanesOff();
      }
    else
      {
      op->vtkVolumePicker::PickCroppingPlanesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_GetPickCroppingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickCroppingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickCroppingPlanes();
      }
    else
      {
      tempr = op->vtkVolumePicker::GetPickCroppingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumePicker_GetCroppingPlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingPlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCroppingPlaneId();
      }
    else
      {
      tempr = op->vtkVolumePicker::GetCroppingPlaneId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumePicker_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumePicker_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumePicker_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumePicker_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumePicker\nC++: vtkVolumePicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumePicker_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumePicker\nC++: vtkVolumePicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPickCroppingPlanes", PyvtkVolumePicker_SetPickCroppingPlanes, 1,
   (char*)"V.SetPickCroppingPlanes(int)\nC++: void SetPickCroppingPlanes(int a)\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {(char*)"PickCroppingPlanesOn", PyvtkVolumePicker_PickCroppingPlanesOn, 1,
   (char*)"V.PickCroppingPlanesOn()\nC++: void PickCroppingPlanesOn()\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {(char*)"PickCroppingPlanesOff", PyvtkVolumePicker_PickCroppingPlanesOff, 1,
   (char*)"V.PickCroppingPlanesOff()\nC++: void PickCroppingPlanesOff()\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {(char*)"GetPickCroppingPlanes", PyvtkVolumePicker_GetPickCroppingPlanes, 1,
   (char*)"V.GetPickCroppingPlanes() -> int\nC++: int GetPickCroppingPlanes()\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {(char*)"GetCroppingPlaneId", PyvtkVolumePicker_GetCroppingPlaneId, 1,
   (char*)"V.GetCroppingPlaneId() -> int\nC++: int GetCroppingPlaneId()\n\nGet the index of the cropping plane that the pick ray passed\nthrough on its way to the prop. This will be set regardless of\nwhether PickCroppingPlanes is on.  The crop planes are ordered as\nfollows: xmin, xmax, ymin, ymax, zmin, zmax.  If the volume is\nnot cropped, the value will bet set to -1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumePicker_StaticNew()
{
  return vtkVolumePicker::New();
}

PyObject *PyVTKClass_vtkVolumePickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumePicker_StaticNew,
    PyvtkVolumePicker_Methods,
    "vtkVolumePicker", modulename,
    NULL, NULL,
    PyvtkVolumePicker_Doc(),
    PyVTKClass_vtkCellPickerNew(modulename));
  return cls;
}

const char **PyvtkVolumePicker_Doc()
{
  static const char *docstring[] = {
    "vtkVolumePicker - ray-cast picker enhanced for volumes\n\n",
    "Superclass: vtkCellPicker\n\n",
    "vtkVolumePicker is a subclass of vtkCellPicker.  It has one advantage\nover vtkCellPicker for volumes: it will be able to correctly perform\npicking when CroppingPlanes are present.  This isn't possible for vtkCellPicker since it\ndoesn't link to the VolumeRendering classes and hence cannot access\ninformation about the CroppingPlanes.\n\nSee Also:\n\nvtkPicker vtkPointPicker vtkCellPicker\n\nThanks:\n\nThis ",
    "class was contributed to VTK by David Gobbi on behalf of Atamai\nInc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumePicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumePickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumePicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

