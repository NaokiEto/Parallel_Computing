// python wrapper for vtkConeLayoutStrategy
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
#include "vtkConeLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkConeLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkConeLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkConeLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkConeLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkConeLayoutStrategy_Doc();


static PyObject *
PyvtkConeLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

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
      tempr = op->vtkConeLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

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
      tempr = op->vtkConeLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  vtkConeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkConeLayoutStrategy::NewInstance();
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
PyvtkConeLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkConeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkConeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_SetCompactness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompactness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompactness(temp0);
      }
    else
      {
      op->vtkConeLayoutStrategy::SetCompactness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_GetCompactness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompactness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompactness();
      }
    else
      {
      tempr = op->vtkConeLayoutStrategy::GetCompactness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompression(temp0);
      }
    else
      {
      op->vtkConeLayoutStrategy::SetCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompression();
      }
    else
      {
      tempr = op->vtkConeLayoutStrategy::GetCompression();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_CompressionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompressionOn();
      }
    else
      {
      op->vtkConeLayoutStrategy::CompressionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_CompressionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompressionOff();
      }
    else
      {
      op->vtkConeLayoutStrategy::CompressionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_SetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0);
      }
    else
      {
      op->vtkConeLayoutStrategy::SetSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpacing();
      }
    else
      {
      tempr = op->vtkConeLayoutStrategy::GetSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConeLayoutStrategy *op = static_cast<vtkConeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkConeLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkConeLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkConeLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConeLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConeLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkConeLayoutStrategy\nC++: vtkConeLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConeLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConeLayoutStrategy\nC++: vtkConeLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompactness", PyvtkConeLayoutStrategy_SetCompactness, 1,
   (char*)"V.SetCompactness(float)\nC++: void SetCompactness(float a)\n\nDetermine the compactness, the ratio between the average width of\na cone in the tree, and the height of the cone.  The default\nsetting is 0.75 which (empirically) seems reasonable, but this\nwill need adapting depending on the data.\n"},
  {(char*)"GetCompactness", PyvtkConeLayoutStrategy_GetCompactness, 1,
   (char*)"V.GetCompactness() -> float\nC++: float GetCompactness()\n\nDetermine the compactness, the ratio between the average width of\na cone in the tree, and the height of the cone.  The default\nsetting is 0.75 which (empirically) seems reasonable, but this\nwill need adapting depending on the data.\n"},
  {(char*)"SetCompression", PyvtkConeLayoutStrategy_SetCompression, 1,
   (char*)"V.SetCompression(int)\nC++: void SetCompression(int a)\n\nDetermine if layout should be compressed, i.e. the layout puts\nchildren closer together, possibly allowing sub-trees to overlap.\n This is useful if the tree is actually the spanning tree of a\ngraph.  For \"real\" trees, non-compressed layout is best, and is\nthe default.\n"},
  {(char*)"GetCompression", PyvtkConeLayoutStrategy_GetCompression, 1,
   (char*)"V.GetCompression() -> int\nC++: int GetCompression()\n\nDetermine if layout should be compressed, i.e. the layout puts\nchildren closer together, possibly allowing sub-trees to overlap.\n This is useful if the tree is actually the spanning tree of a\ngraph.  For \"real\" trees, non-compressed layout is best, and is\nthe default.\n"},
  {(char*)"CompressionOn", PyvtkConeLayoutStrategy_CompressionOn, 1,
   (char*)"V.CompressionOn()\nC++: void CompressionOn()\n\nDetermine if layout should be compressed, i.e. the layout puts\nchildren closer together, possibly allowing sub-trees to overlap.\n This is useful if the tree is actually the spanning tree of a\ngraph.  For \"real\" trees, non-compressed layout is best, and is\nthe default.\n"},
  {(char*)"CompressionOff", PyvtkConeLayoutStrategy_CompressionOff, 1,
   (char*)"V.CompressionOff()\nC++: void CompressionOff()\n\nDetermine if layout should be compressed, i.e. the layout puts\nchildren closer together, possibly allowing sub-trees to overlap.\n This is useful if the tree is actually the spanning tree of a\ngraph.  For \"real\" trees, non-compressed layout is best, and is\nthe default.\n"},
  {(char*)"SetSpacing", PyvtkConeLayoutStrategy_SetSpacing, 1,
   (char*)"V.SetSpacing(float)\nC++: void SetSpacing(float a)\n\nSet the spacing parameter that affects space between layers of\nthe tree.  If compression is on, Spacing is the actual distance\nbetween layers.  If compression is off, actual distance also\nincludes a factor of the compactness and maximum cone radius.\n"},
  {(char*)"GetSpacing", PyvtkConeLayoutStrategy_GetSpacing, 1,
   (char*)"V.GetSpacing() -> float\nC++: float GetSpacing()\n\nSet the spacing parameter that affects space between layers of\nthe tree.  If compression is on, Spacing is the actual distance\nbetween layers.  If compression is off, actual distance also\nincludes a factor of the compactness and maximum cone radius.\n"},
  {(char*)"Layout", PyvtkConeLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: void Layout()\n\nPerform the layout.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConeLayoutStrategy_StaticNew()
{
  return vtkConeLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkConeLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConeLayoutStrategy_StaticNew,
    PyvtkConeLayoutStrategy_Methods,
    "vtkConeLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkConeLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkConeLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkConeLayoutStrategy - produce a cone-tree layout for a forest\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "vtkConeLayoutStrategy positions the nodes of a tree(forest) in 3D\nspace based on the cone-tree approach first described by Robertson,\nMackinlay and Card in Proc. CHI'91.  This implementation incorporates\nrefinements to the layout developed by Carriere and Kazman, and by\nAuber.\n\nThe input graph must be a forest (i.e. a set of trees, or a single\ntree); in the case of a forest, the input will be conv",
    "erted to a\nsingle tree by introducing a new root node, and connecting each root\nin the input forest to the meta-root. The tree is then laid out,\nafter which the meta-root is removed.\n\nThe cones are positioned so that children lie in planes parallel to\nthe X-Y plane, with the axis of cones parallel to Z, and with Z\ncoordinate increasing with distance of nodes from the root.\n\nThanks:\n\nThanks to Davi",
    "d Duke from the University of Leeds for providing this\nimplementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConeLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConeLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConeLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

