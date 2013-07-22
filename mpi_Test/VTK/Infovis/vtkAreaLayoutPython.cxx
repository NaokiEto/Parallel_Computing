// python wrapper for vtkAreaLayout
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
#include "vtkAreaLayout.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAreaLayout(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAreaLayout(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAreaLayoutNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAreaLayoutNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkAreaLayout_Doc();


static PyObject *
PyvtkAreaLayout_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

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
      tempr = op->vtkAreaLayout::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

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
      tempr = op->vtkAreaLayout::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  vtkAreaLayout *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAreaLayout::NewInstance();
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
PyvtkAreaLayout_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAreaLayout *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAreaLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSizeArrayName(temp0);
      }
    else
      {
      op->vtkAreaLayout::SetSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaArrayName();
      }
    else
      {
      tempr = op->vtkAreaLayout::GetAreaArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaArrayName(temp0);
      }
    else
      {
      op->vtkAreaLayout::SetAreaArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetEdgeRoutingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeRoutingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeRoutingPoints();
      }
    else
      {
      tempr = op->vtkAreaLayout::GetEdgeRoutingPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetEdgeRoutingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeRoutingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeRoutingPoints(temp0);
      }
    else
      {
      op->vtkAreaLayout::SetEdgeRoutingPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_EdgeRoutingPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeRoutingPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeRoutingPointsOn();
      }
    else
      {
      op->vtkAreaLayout::EdgeRoutingPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_EdgeRoutingPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeRoutingPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeRoutingPointsOff();
      }
    else
      {
      op->vtkAreaLayout::EdgeRoutingPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  vtkAreaLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategy();
      }
    else
      {
      tempr = op->vtkAreaLayout::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  vtkAreaLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkAreaLayout::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

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
      tempr = op->vtkAreaLayout::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayout_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayout *op = static_cast<vtkAreaLayout *>(vp);

  float temp0[2];
  float save0[2];
  const int size0 = 2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->FindVertex(temp0);
      }
    else
      {
      tempr = op->vtkAreaLayout::FindVertex(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAreaLayout_Methods[] = {
  {(char*)"GetClassName", PyvtkAreaLayout_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAreaLayout_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAreaLayout_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAreaLayout\nC++: vtkAreaLayout *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAreaLayout_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAreaLayout\nC++: vtkAreaLayout *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSizeArrayName", PyvtkAreaLayout_SetSizeArrayName, 1,
   (char*)"V.SetSizeArrayName(string)\nC++: virtual void SetSizeArrayName(const char *name)\n\nThe array name to use for retrieving the relative size of each\nvertex. If this array is not found, use constant size for each\nvertex.\n"},
  {(char*)"GetAreaArrayName", PyvtkAreaLayout_GetAreaArrayName, 1,
   (char*)"V.GetAreaArrayName() -> string\nC++: char *GetAreaArrayName()\n\nThe name for the array created for the area for each vertex. The\nrectangles are stored in a quadruple float array (startAngle,\nendAngle, innerRadius, outerRadius). For rectangular layouts,\nthis is (minx, maxx, miny, maxy).\n"},
  {(char*)"SetAreaArrayName", PyvtkAreaLayout_SetAreaArrayName, 1,
   (char*)"V.SetAreaArrayName(string)\nC++: void SetAreaArrayName(char *)\n\nThe name for the array created for the area for each vertex. The\nrectangles are stored in a quadruple float array (startAngle,\nendAngle, innerRadius, outerRadius). For rectangular layouts,\nthis is (minx, maxx, miny, maxy).\n"},
  {(char*)"GetEdgeRoutingPoints", PyvtkAreaLayout_GetEdgeRoutingPoints, 1,
   (char*)"V.GetEdgeRoutingPoints() -> bool\nC++: bool GetEdgeRoutingPoints()\n\nWhether to output a second output tree with vertex locations\nappropriate for routing bundled edges. Default is on.\n"},
  {(char*)"SetEdgeRoutingPoints", PyvtkAreaLayout_SetEdgeRoutingPoints, 1,
   (char*)"V.SetEdgeRoutingPoints(bool)\nC++: void SetEdgeRoutingPoints(bool a)\n\nWhether to output a second output tree with vertex locations\nappropriate for routing bundled edges. Default is on.\n"},
  {(char*)"EdgeRoutingPointsOn", PyvtkAreaLayout_EdgeRoutingPointsOn, 1,
   (char*)"V.EdgeRoutingPointsOn()\nC++: void EdgeRoutingPointsOn()\n\nWhether to output a second output tree with vertex locations\nappropriate for routing bundled edges. Default is on.\n"},
  {(char*)"EdgeRoutingPointsOff", PyvtkAreaLayout_EdgeRoutingPointsOff, 1,
   (char*)"V.EdgeRoutingPointsOff()\nC++: void EdgeRoutingPointsOff()\n\nWhether to output a second output tree with vertex locations\nappropriate for routing bundled edges. Default is on.\n"},
  {(char*)"GetLayoutStrategy", PyvtkAreaLayout_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkAreaLayoutStrategy\nC++: vtkAreaLayoutStrategy *GetLayoutStrategy()\n\nThe strategy to use when laying out the tree map.\n"},
  {(char*)"SetLayoutStrategy", PyvtkAreaLayout_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkAreaLayoutStrategy)\nC++: void SetLayoutStrategy(vtkAreaLayoutStrategy *strategy)\n\nThe strategy to use when laying out the tree map.\n"},
  {(char*)"GetMTime", PyvtkAreaLayout_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the modification time of the layout algorithm.\n"},
  {(char*)"FindVertex", PyvtkAreaLayout_FindVertex, 1,
   (char*)"V.FindVertex([float, float]) -> int\nC++: vtkIdType FindVertex(float pnt[2])\n\nGet the vertex whose area contains the point, or return -1 if no\nvertex area covers the point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAreaLayout_StaticNew()
{
  return vtkAreaLayout::New();
}

PyObject *PyVTKClass_vtkAreaLayoutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAreaLayout_StaticNew,
    PyvtkAreaLayout_Methods,
    "vtkAreaLayout", modulename,
    NULL, NULL,
    PyvtkAreaLayout_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAreaLayout_Doc()
{
  static const char *docstring[] = {
    "vtkAreaLayout - layout a vtkTree into a tree map\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "vtkAreaLayout assigns sector regions to each vertex in the tree,\ncreating a tree ring.  The data is added as a data array with four\ncomponents per tuple representing the location and size of the sector\nusing the format (StartAngle, EndAngle, innerRadius, outerRadius).\n\nThis algorithm relies on a helper class to perform the actual layout.\nThis helper class is a subclass of vtkAreaLayoutStrategy.\n\nT",
    "hanks:\n\nThanks to Jason Shepherd from Sandia National Laboratories for help\ndeveloping this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAreaLayout(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAreaLayoutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAreaLayout", o) != 0)
    {
    Py_DECREF(o);
    }

}

