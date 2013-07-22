// python wrapper for vtkCoincidentPoints
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
#include "vtkCoincidentPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCoincidentPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCoincidentPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCoincidentPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCoincidentPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCoincidentPoints_Doc();


static PyObject *
PyvtkCoincidentPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

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
      tempr = op->vtkCoincidentPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

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
      tempr = op->vtkCoincidentPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  vtkCoincidentPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCoincidentPoints::NewInstance();
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
PyvtkCoincidentPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCoincidentPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCoincidentPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  vtkIdType temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->AddPoint(temp0, temp1);
      }
    else
      {
      op->vtkCoincidentPoints::AddPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetCoincidentPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoincidentPointIds(temp0);
      }
    else
      {
      tempr = op->vtkCoincidentPoints::GetCoincidentPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_GetNextCoincidentPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCoincidentPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextCoincidentPointIds();
      }
    else
      {
      tempr = op->vtkCoincidentPoints::GetNextCoincidentPointIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCoincidentPoints::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_RemoveNonCoincidentPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNonCoincidentPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveNonCoincidentPoints();
      }
    else
      {
      op->vtkCoincidentPoints::RemoveNonCoincidentPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoincidentPoints *op = static_cast<vtkCoincidentPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkCoincidentPoints::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoincidentPoints_SpiralPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SpiralPoints");

  vtkIdType temp0;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    vtkCoincidentPoints::SpiralPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCoincidentPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkCoincidentPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCoincidentPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCoincidentPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCoincidentPoints\nC++: vtkCoincidentPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCoincidentPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCoincidentPoints\nC++: vtkCoincidentPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPoint", PyvtkCoincidentPoints_AddPoint, 1,
   (char*)"V.AddPoint(int, (float, float, float))\nC++: void AddPoint(vtkIdType Id, const double point[3])\n\nAccumulates a set of Ids in a map where the point coordinate is\nthe key. All Ids in a given map entry are thus coincident.\n@param Id - a unique Id for the given point that will be stored\n    in an vtkIdList.\n@param[in] point - the point coordinate that we will store in the\nmap to test if any other points are\ncoincident with it.\n"},
  {(char*)"GetCoincidentPointIds", PyvtkCoincidentPoints_GetCoincidentPointIds, 1,
   (char*)"V.GetCoincidentPointIds((float, float, float)) -> vtkIdList\nC++: vtkIdList *GetCoincidentPointIds(const double point[3])\n\nRetrieve the list of point Ids that are coincident with the given\npoint.\n@param[in] point - the coordinate of coincident points we want to\nretrieve.\n"},
  {(char*)"GetNextCoincidentPointIds", PyvtkCoincidentPoints_GetNextCoincidentPointIds, 1,
   (char*)"V.GetNextCoincidentPointIds() -> vtkIdList\nC++: vtkIdList *GetNextCoincidentPointIds()\n\nUsed to iterate the sets of coincident points within the map.\nInitTraversal must be called first or NULL will always be\nreturned.\n"},
  {(char*)"InitTraversal", PyvtkCoincidentPoints_InitTraversal, 1,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\n"},
  {(char*)"RemoveNonCoincidentPoints", PyvtkCoincidentPoints_RemoveNonCoincidentPoints, 1,
   (char*)"V.RemoveNonCoincidentPoints()\nC++: void RemoveNonCoincidentPoints()\n\n"},
  {(char*)"Clear", PyvtkCoincidentPoints_Clear, 1,
   (char*)"V.Clear()\nC++: void Clear()\n\n"},
  {(char*)"SpiralPoints", PyvtkCoincidentPoints_SpiralPoints, 1,
   (char*)"V.SpiralPoints(int, vtkPoints)\nC++: static void SpiralPoints(vtkIdType num, vtkPoints *offsets)\n\nCalculate num points, at a regular interval, along a parametric\nspiral. Note this spiral is only in two dimensions having a\nconstant z value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCoincidentPoints_StaticNew()
{
  return vtkCoincidentPoints::New();
}

PyObject *PyVTKClass_vtkCoincidentPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCoincidentPoints_StaticNew,
    PyvtkCoincidentPoints_Methods,
    "vtkCoincidentPoints", modulename,
    NULL, NULL,
    PyvtkCoincidentPoints_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCoincidentPoints_Doc()
{
  static const char *docstring[] = {
    "vtkCoincidentPoints - contains an octree of labels\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides a collection of points that is organized such\nthat each coordinate is stored with a set of point id's of points\nthat are all coincident.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCoincidentPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCoincidentPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCoincidentPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

