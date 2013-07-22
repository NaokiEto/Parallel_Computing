// python wrapper for vtkGeoProjection
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
#include "vtkGeoProjection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoProjection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoProjection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoProjectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoProjectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoProjection_Doc();


static PyObject *
PyvtkGeoProjection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

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
      tempr = op->vtkGeoProjection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

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
      tempr = op->vtkGeoProjection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  vtkGeoProjection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoProjection::NewInstance();
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
PyvtkGeoProjection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoProjection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoProjection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetNumberOfProjections(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfProjections");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkGeoProjection::GetNumberOfProjections();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetProjectionName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProjectionName");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGeoProjection::GetProjectionName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetProjectionDescription(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProjectionDescription");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGeoProjection::GetProjectionDescription(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetName(temp0);
      }
    else
      {
      op->vtkGeoProjection::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetName();
      }
    else
      {
      tempr = op->vtkGeoProjection::GetName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndex();
      }
    else
      {
      tempr = op->vtkGeoProjection::GetIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescription();
      }
    else
      {
      tempr = op->vtkGeoProjection::GetDescription();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_SetCentralMeridian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCentralMeridian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCentralMeridian(temp0);
      }
    else
      {
      op->vtkGeoProjection::SetCentralMeridian(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjection_GetCentralMeridian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentralMeridian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjection *op = static_cast<vtkGeoProjection *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCentralMeridian();
      }
    else
      {
      tempr = op->vtkGeoProjection::GetCentralMeridian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoProjection_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoProjection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoProjection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoProjection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoProjection\nC++: vtkGeoProjection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoProjection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoProjection\nC++: vtkGeoProjection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfProjections", PyvtkGeoProjection_GetNumberOfProjections, 1,
   (char*)"V.GetNumberOfProjections() -> int\nC++: static int GetNumberOfProjections()\n\nReturns the number of projections that this class offers.\n"},
  {(char*)"GetProjectionName", PyvtkGeoProjection_GetProjectionName, 1,
   (char*)"V.GetProjectionName(int) -> string\nC++: static const char *GetProjectionName(int projection)\n\nReturns the name of one of the projections supported by this\nclass. You can pass these strings to SetName(char*).\n@param projection the index of a projection, must be in\n    [0,GetNumberOfProjections()[.\n"},
  {(char*)"GetProjectionDescription", PyvtkGeoProjection_GetProjectionDescription, 1,
   (char*)"V.GetProjectionDescription(int) -> string\nC++: static const char *GetProjectionDescription(int projection)\n\nReturns a description of one of the projections supported by this\nclass.\n@param projection the index of a projection, must be in\n    [0,GetNumberOfProjections()[.\n"},
  {(char*)"SetName", PyvtkGeoProjection_SetName, 1,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nSet/get the short name describing the projection you wish to use.\nThis defaults to \"rpoly\" for no reason other than I like it. To\nget a list of valid values, use the GetNumberOfProjections() and\nGetProjectionName(int) static methods.\n"},
  {(char*)"GetName", PyvtkGeoProjection_GetName, 1,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nSet/get the short name describing the projection you wish to use.\nThis defaults to \"rpoly\" for no reason other than I like it. To\nget a list of valid values, use the GetNumberOfProjections() and\nGetProjectionName(int) static methods.\n"},
  {(char*)"GetIndex", PyvtkGeoProjection_GetIndex, 1,
   (char*)"V.GetIndex() -> int\nC++: int GetIndex()\n\nReturn the index of the current projection's type in the list of\nall projection types. On error, this will return -1. On success,\nit returns a number in [0,GetNumberOfProjections()[.\n"},
  {(char*)"GetDescription", PyvtkGeoProjection_GetDescription, 1,
   (char*)"V.GetDescription() -> string\nC++: const char *GetDescription()\n\nGet the description of a projection. This will return NULL if the\nprojection name is invalid.\n"},
  {(char*)"SetCentralMeridian", PyvtkGeoProjection_SetCentralMeridian, 1,
   (char*)"V.SetCentralMeridian(float)\nC++: void SetCentralMeridian(double a)\n\nSet/get the longitude which corresponds to the central meridian\nof the projection. This defaults to 0, the Greenwich Meridian.\n"},
  {(char*)"GetCentralMeridian", PyvtkGeoProjection_GetCentralMeridian, 1,
   (char*)"V.GetCentralMeridian() -> float\nC++: double GetCentralMeridian()\n\nSet/get the longitude which corresponds to the central meridian\nof the projection. This defaults to 0, the Greenwich Meridian.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoProjection_StaticNew()
{
  return vtkGeoProjection::New();
}

PyObject *PyVTKClass_vtkGeoProjectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoProjection_StaticNew,
    PyvtkGeoProjection_Methods,
    "vtkGeoProjection", modulename,
    NULL, NULL,
    PyvtkGeoProjection_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGeoProjection_Doc()
{
  static const char *docstring[] = {
    "vtkGeoProjection - Represent a projection from a sphere to a plane\n\n",
    "Superclass: vtkObject\n\n",
    "This class uses the PROJ.4 library to represent geographic coordinate\nprojections.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoProjection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoProjectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoProjection", o) != 0)
    {
    Py_DECREF(o);
    }

}

