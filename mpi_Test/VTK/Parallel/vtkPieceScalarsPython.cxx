// python wrapper for vtkPieceScalars
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
#include "vtkPieceScalars.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPieceScalars(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPieceScalars(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPieceScalarsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPieceScalarsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkPieceScalars_Doc();


static PyObject *
PyvtkPieceScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

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
      tempr = op->vtkPieceScalars::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

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
      tempr = op->vtkPieceScalars::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  vtkPieceScalars *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPieceScalars::NewInstance();
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
PyvtkPieceScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPieceScalars *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPieceScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_SetScalarModeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToCellData();
      }
    else
      {
      op->vtkPieceScalars::SetScalarModeToCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_SetScalarModeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToPointData();
      }
    else
      {
      op->vtkPieceScalars::SetScalarModeToPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

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
      tempr = op->vtkPieceScalars::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

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
      op->vtkPieceScalars::SetRandomMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

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
      tempr = op->vtkPieceScalars::GetRandomMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOn();
      }
    else
      {
      op->vtkPieceScalars::RandomModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceScalars_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceScalars *op = static_cast<vtkPieceScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOff();
      }
    else
      {
      op->vtkPieceScalars::RandomModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPieceScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkPieceScalars_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPieceScalars_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPieceScalars_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPieceScalars\nC++: vtkPieceScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPieceScalars_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPieceScalars\nC++: vtkPieceScalars *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarModeToCellData", PyvtkPieceScalars_SetScalarModeToCellData, 1,
   (char*)"V.SetScalarModeToCellData()\nC++: void SetScalarModeToCellData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"SetScalarModeToPointData", PyvtkPieceScalars_SetScalarModeToPointData, 1,
   (char*)"V.SetScalarModeToPointData()\nC++: void SetScalarModeToPointData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"GetScalarMode", PyvtkPieceScalars_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"SetRandomMode", PyvtkPieceScalars_SetRandomMode, 1,
   (char*)"V.SetRandomMode(int)\nC++: void SetRandomMode(int a)\n\n"},
  {(char*)"GetRandomMode", PyvtkPieceScalars_GetRandomMode, 1,
   (char*)"V.GetRandomMode() -> int\nC++: int GetRandomMode()\n\n"},
  {(char*)"RandomModeOn", PyvtkPieceScalars_RandomModeOn, 1,
   (char*)"V.RandomModeOn()\nC++: void RandomModeOn()\n\n"},
  {(char*)"RandomModeOff", PyvtkPieceScalars_RandomModeOff, 1,
   (char*)"V.RandomModeOff()\nC++: void RandomModeOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPieceScalars_StaticNew()
{
  return vtkPieceScalars::New();
}

PyObject *PyVTKClass_vtkPieceScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPieceScalars_StaticNew,
    PyvtkPieceScalars_Methods,
    "vtkPieceScalars", modulename,
    NULL, NULL,
    PyvtkPieceScalars_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPieceScalars_Doc()
{
  static const char *docstring[] = {
    "vtkPieceScalars - Sets all cell scalars from the update piece.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkPieceScalars is meant to display which piece is being requested as\nscalar values.  It is useful for visualizing the partitioning for\nstreaming or distributed pipelines.\n\nSee Also:\n\nvtkPolyDataStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPieceScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPieceScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPieceScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

