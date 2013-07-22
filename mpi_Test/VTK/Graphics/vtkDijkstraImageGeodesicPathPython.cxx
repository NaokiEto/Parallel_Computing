// python wrapper for vtkDijkstraImageGeodesicPath
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
#include "vtkDijkstraImageGeodesicPath.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDijkstraImageGeodesicPath(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDijkstraImageGeodesicPath(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDijkstraImageGeodesicPathNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDijkstraImageGeodesicPathNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDijkstraGraphGeodesicPathNew
extern "C" { PyObject *PyVTKClass_vtkDijkstraGraphGeodesicPathNew(const char *); }
#define DECLARED_PyVTKClass_vtkDijkstraGraphGeodesicPathNew
#endif

static const char **PyvtkDijkstraImageGeodesicPath_Doc();


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

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
      tempr = op->vtkDijkstraImageGeodesicPath::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

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
      tempr = op->vtkDijkstraImageGeodesicPath::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  vtkDijkstraImageGeodesicPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::NewInstance();
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
PyvtkDijkstraImageGeodesicPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDijkstraImageGeodesicPath *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDijkstraImageGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkDijkstraImageGeodesicPath::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetInputAsImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAsImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputAsImageData();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::GetInputAsImageData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetImageWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageWeight(temp0);
      }
    else
      {
      op->vtkDijkstraImageGeodesicPath::SetImageWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetImageWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageWeight();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::GetImageWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetEdgeLengthWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLengthWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeLengthWeight(temp0);
      }
    else
      {
      op->vtkDijkstraImageGeodesicPath::SetEdgeLengthWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetEdgeLengthWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLengthWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeLengthWeight();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::GetEdgeLengthWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetCurvatureWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurvatureWeight(temp0);
      }
    else
      {
      op->vtkDijkstraImageGeodesicPath::SetCurvatureWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureWeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurvatureWeightMinValue();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::GetCurvatureWeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureWeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurvatureWeightMaxValue();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::GetCurvatureWeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetCurvatureWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurvatureWeight();
      }
    else
      {
      tempr = op->vtkDijkstraImageGeodesicPath::GetCurvatureWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDijkstraImageGeodesicPath_Methods[] = {
  {(char*)"GetClassName", PyvtkDijkstraImageGeodesicPath_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"IsA", PyvtkDijkstraImageGeodesicPath_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"NewInstance", PyvtkDijkstraImageGeodesicPath_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDijkstraImageGeodesicPath\nC++: vtkDijkstraImageGeodesicPath *NewInstance()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SafeDownCast", PyvtkDijkstraImageGeodesicPath_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDijkstraImageGeodesicPath\nC++: vtkDijkstraImageGeodesicPath *SafeDownCast(vtkObject* o)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SetInput", PyvtkDijkstraImageGeodesicPath_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\n\nSpecify the image object which is used as a cost function.\n"},
  {(char*)"GetInputAsImageData", PyvtkDijkstraImageGeodesicPath_GetInputAsImageData, 1,
   (char*)"V.GetInputAsImageData() -> vtkImageData\nC++: vtkImageData *GetInputAsImageData()\n\nSpecify the image object which is used as a cost function.\n"},
  {(char*)"SetImageWeight", PyvtkDijkstraImageGeodesicPath_SetImageWeight, 1,
   (char*)"V.SetImageWeight(float)\nC++: void SetImageWeight(double)\n\nImage cost weight.\n"},
  {(char*)"GetImageWeight", PyvtkDijkstraImageGeodesicPath_GetImageWeight, 1,
   (char*)"V.GetImageWeight() -> float\nC++: double GetImageWeight()\n\nImage cost weight.\n"},
  {(char*)"SetEdgeLengthWeight", PyvtkDijkstraImageGeodesicPath_SetEdgeLengthWeight, 1,
   (char*)"V.SetEdgeLengthWeight(float)\nC++: void SetEdgeLengthWeight(double)\n\nEdge length cost weight.\n"},
  {(char*)"GetEdgeLengthWeight", PyvtkDijkstraImageGeodesicPath_GetEdgeLengthWeight, 1,
   (char*)"V.GetEdgeLengthWeight() -> float\nC++: double GetEdgeLengthWeight()\n\nEdge length cost weight.\n"},
  {(char*)"SetCurvatureWeight", PyvtkDijkstraImageGeodesicPath_SetCurvatureWeight, 1,
   (char*)"V.SetCurvatureWeight(float)\nC++: void SetCurvatureWeight(double)\n\nCurvature cost weight.\n"},
  {(char*)"GetCurvatureWeightMinValue", PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMinValue, 1,
   (char*)"V.GetCurvatureWeightMinValue() -> float\nC++: double GetCurvatureWeightMinValue()\n\nCurvature cost weight.\n"},
  {(char*)"GetCurvatureWeightMaxValue", PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMaxValue, 1,
   (char*)"V.GetCurvatureWeightMaxValue() -> float\nC++: double GetCurvatureWeightMaxValue()\n\nCurvature cost weight.\n"},
  {(char*)"GetCurvatureWeight", PyvtkDijkstraImageGeodesicPath_GetCurvatureWeight, 1,
   (char*)"V.GetCurvatureWeight() -> float\nC++: double GetCurvatureWeight()\n\nCurvature cost weight.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDijkstraImageGeodesicPath_StaticNew()
{
  return vtkDijkstraImageGeodesicPath::New();
}

PyObject *PyVTKClass_vtkDijkstraImageGeodesicPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDijkstraImageGeodesicPath_StaticNew,
    PyvtkDijkstraImageGeodesicPath_Methods,
    "vtkDijkstraImageGeodesicPath", modulename,
    NULL, NULL,
    PyvtkDijkstraImageGeodesicPath_Doc(),
    PyVTKClass_vtkDijkstraGraphGeodesicPathNew(modulename));
  return cls;
}

const char **PyvtkDijkstraImageGeodesicPath_Doc()
{
  static const char *docstring[] = {
    "vtkDijkstraImageGeodesicPath - Dijkstra algorithm to compute the\ngraph geodesic.\n\n",
    "Superclass: vtkDijkstraGraphGeodesicPath\n\n",
    "Takes as input a polyline and an image representing a 2D cost\nfunction and performs a single source shortest path calculation.\nDijkstra's algorithm is used. The implementation is similar to the\none described in Introduction to Algorithms (Second Edition) by\nThomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Cliff\nStein, published by MIT Press and McGraw-Hill. Some minor enhancement\nare ",
    "added though. All vertices are not pushed on the heap at start,\ninstead a front set is maintained. The heap is implemented as a\nbinary heap. The output of the filter is a set of lines describing\nthe shortest path from StartVertex to EndVertex.  See parent class\nvtkDijkstraGraphGeodesicPath for the implementation.\n\nCaveats:\n\nThe input cost image must have only VTK_PIXEL cells: i.e., a 2D image\nor s",
    "lice of a 3D volume. A cost function for a gray scale image might\nbe generated by the following pipeline:\nvtkImageData->vtkImageGradientMagnitude->vtkImageShiftScale wherein\nthe gradient magnitude image is inverted so that strong edges have\nlow cost value.  Costs in moving from a vertex v to a vertex u are\ncalculated using a weighted additive sheme: cost = Iw*f(I) +\nEw*f(u,v) + Cw*f(t,u,v) where I",
    "w is the weight associated with f(I):\nthe normalized image cost, Ew is the weight associated with f(u,v):\nthe normalized distance between vertices u and v, and Cw is the\nweight associated with f(t,u,v): the normalized curvature calculated\nfrom the vertex t which precedes vertex u, and vertices u and v.  All\nweights range from 0 to 1.\n\nThanks:\n\nThe class was contributed by Dean Inglis.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDijkstraImageGeodesicPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDijkstraImageGeodesicPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDijkstraImageGeodesicPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

