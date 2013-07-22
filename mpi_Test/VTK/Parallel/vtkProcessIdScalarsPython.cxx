// python wrapper for vtkProcessIdScalars
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
#include "vtkProcessIdScalars.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProcessIdScalars(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProcessIdScalars(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProcessIdScalarsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProcessIdScalarsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProcessIdScalars_Doc();


static PyObject *
PyvtkProcessIdScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

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
      tempr = op->vtkProcessIdScalars::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

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
      tempr = op->vtkProcessIdScalars::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  vtkProcessIdScalars *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProcessIdScalars::NewInstance();
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
PyvtkProcessIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProcessIdScalars *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProcessIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetScalarModeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToCellData();
      }
    else
      {
      op->vtkProcessIdScalars::SetScalarModeToCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetScalarModeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToPointData();
      }
    else
      {
      op->vtkProcessIdScalars::SetScalarModeToPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMode();
      }
    else
      {
      tempr = op->vtkProcessIdScalars::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomMode(temp0);
      }
    else
      {
      op->vtkProcessIdScalars::SetRandomMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomMode();
      }
    else
      {
      tempr = op->vtkProcessIdScalars::GetRandomMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOn();
      }
    else
      {
      op->vtkProcessIdScalars::RandomModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOff();
      }
    else
      {
      op->vtkProcessIdScalars::RandomModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkProcessIdScalars::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkProcessIdScalars::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessIdScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkProcessIdScalars_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcessIdScalars_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcessIdScalars_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProcessIdScalars\nC++: vtkProcessIdScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProcessIdScalars_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProcessIdScalars\nC++: vtkProcessIdScalars *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarModeToCellData", PyvtkProcessIdScalars_SetScalarModeToCellData, 1,
   (char*)"V.SetScalarModeToCellData()\nC++: void SetScalarModeToCellData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"SetScalarModeToPointData", PyvtkProcessIdScalars_SetScalarModeToPointData, 1,
   (char*)"V.SetScalarModeToPointData()\nC++: void SetScalarModeToPointData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"GetScalarMode", PyvtkProcessIdScalars_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"SetRandomMode", PyvtkProcessIdScalars_SetRandomMode, 1,
   (char*)"V.SetRandomMode(int)\nC++: void SetRandomMode(int a)\n\n"},
  {(char*)"GetRandomMode", PyvtkProcessIdScalars_GetRandomMode, 1,
   (char*)"V.GetRandomMode() -> int\nC++: int GetRandomMode()\n\n"},
  {(char*)"RandomModeOn", PyvtkProcessIdScalars_RandomModeOn, 1,
   (char*)"V.RandomModeOn()\nC++: void RandomModeOn()\n\n"},
  {(char*)"RandomModeOff", PyvtkProcessIdScalars_RandomModeOff, 1,
   (char*)"V.RandomModeOff()\nC++: void RandomModeOff()\n\n"},
  {(char*)"SetController", PyvtkProcessIdScalars_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkProcessIdScalars_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProcessIdScalars_StaticNew()
{
  return vtkProcessIdScalars::New();
}

PyObject *PyVTKClass_vtkProcessIdScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProcessIdScalars_StaticNew,
    PyvtkProcessIdScalars_Methods,
    "vtkProcessIdScalars", modulename,
    NULL, NULL,
    PyvtkProcessIdScalars_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProcessIdScalars_Doc()
{
  static const char *docstring[] = {
    "vtkProcessIdScalars - Sets cell or point scalars to the processor\nrank.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProcessIdScalars is meant to display which processor owns which\ncells and points.  It is useful for visualizing the partitioning for\nstreaming or distributed pipelines.\n\nSee Also:\n\nvtkPolyDataStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcessIdScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcessIdScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcessIdScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

