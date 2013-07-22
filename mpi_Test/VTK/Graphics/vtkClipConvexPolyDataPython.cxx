// python wrapper for vtkClipConvexPolyData
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
#include "vtkClipConvexPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClipConvexPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClipConvexPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClipConvexPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClipConvexPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkClipConvexPolyData_Doc();


static PyObject *
PyvtkClipConvexPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

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
      tempr = op->vtkClipConvexPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

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
      tempr = op->vtkClipConvexPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  vtkClipConvexPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClipConvexPolyData::NewInstance();
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
PyvtkClipConvexPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClipConvexPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClipConvexPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_SetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetPlanes(temp0);
      }
    else
      {
      op->vtkClipConvexPolyData::SetPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  vtkPlaneCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlanes();
      }
    else
      {
      tempr = op->vtkClipConvexPolyData::GetPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkClipConvexPolyData::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipConvexPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkClipConvexPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipConvexPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipConvexPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClipConvexPolyData\nC++: vtkClipConvexPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipConvexPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipConvexPolyData\nC++: vtkClipConvexPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlanes", PyvtkClipConvexPolyData_SetPlanes, 1,
   (char*)"V.SetPlanes(vtkPlaneCollection)\nC++: void SetPlanes(vtkPlaneCollection *planes)\n\nSet all the planes at once using a vtkPlanes implicit function.\nThis also sets the D value.\n"},
  {(char*)"GetPlanes", PyvtkClipConvexPolyData_GetPlanes, 1,
   (char*)"V.GetPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetPlanes()\n\nSet all the planes at once using a vtkPlanes implicit function.\nThis also sets the D value.\n"},
  {(char*)"GetMTime", PyvtkClipConvexPolyData_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nRedefines this method, as this filter depends on time of its\ncomponents (planes)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipConvexPolyData_StaticNew()
{
  return vtkClipConvexPolyData::New();
}

PyObject *PyVTKClass_vtkClipConvexPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipConvexPolyData_StaticNew,
    PyvtkClipConvexPolyData_Methods,
    "vtkClipConvexPolyData", modulename,
    NULL, NULL,
    PyvtkClipConvexPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkClipConvexPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkClipConvexPolyData - clip any dataset with user-specified implicit\nfunction or input scalar data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkClipConvexPolyData is a filter that clips a convex polydata with a\nset of planes. Its main usage is for clipping a bounding volume with\nfrustum planes (used later one in volume rendering).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipConvexPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipConvexPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipConvexPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

