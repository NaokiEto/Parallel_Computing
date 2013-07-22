// python wrapper for vtkTreeMapLayout
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
#include "vtkTreeMapLayout.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeMapLayout(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeMapLayout(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeMapLayoutNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeMapLayoutNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkTreeMapLayout_Doc();


static PyObject *
PyvtkTreeMapLayout_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

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
      tempr = op->vtkTreeMapLayout::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

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
      tempr = op->vtkTreeMapLayout::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  vtkTreeMapLayout *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeMapLayout::NewInstance();
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
PyvtkTreeMapLayout_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeMapLayout *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeMapLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_GetRectanglesFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectanglesFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectanglesFieldName();
      }
    else
      {
      tempr = op->vtkTreeMapLayout::GetRectanglesFieldName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SetRectanglesFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectanglesFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRectanglesFieldName(temp0);
      }
    else
      {
      op->vtkTreeMapLayout::SetRectanglesFieldName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

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
      op->vtkTreeMapLayout::SetSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  vtkTreeMapLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategy();
      }
    else
      {
      tempr = op->vtkTreeMapLayout::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

  vtkTreeMapLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTreeMapLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkTreeMapLayout::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapLayout *op = static_cast<vtkTreeMapLayout *>(vp);

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
      tempr = op->vtkTreeMapLayout::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeMapLayout_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeMapLayout_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeMapLayout_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeMapLayout_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeMapLayout\nC++: vtkTreeMapLayout *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeMapLayout_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeMapLayout\nC++: vtkTreeMapLayout *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRectanglesFieldName", PyvtkTreeMapLayout_GetRectanglesFieldName, 1,
   (char*)"V.GetRectanglesFieldName() -> string\nC++: char *GetRectanglesFieldName()\n\nThe field name to use for storing the rectangles for each vertex.\nThe rectangles are stored in a quadruple float array (minX, maxX,\nminY, maxY).\n"},
  {(char*)"SetRectanglesFieldName", PyvtkTreeMapLayout_SetRectanglesFieldName, 1,
   (char*)"V.SetRectanglesFieldName(string)\nC++: void SetRectanglesFieldName(char *)\n\nThe field name to use for storing the rectangles for each vertex.\nThe rectangles are stored in a quadruple float array (minX, maxX,\nminY, maxY).\n"},
  {(char*)"SetSizeArrayName", PyvtkTreeMapLayout_SetSizeArrayName, 1,
   (char*)"V.SetSizeArrayName(string)\nC++: virtual void SetSizeArrayName(const char *name)\n\nThe array to use for the size of each vertex.\n"},
  {(char*)"GetLayoutStrategy", PyvtkTreeMapLayout_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkTreeMapLayoutStrategy\nC++: vtkTreeMapLayoutStrategy *GetLayoutStrategy()\n\nThe strategy to use when laying out the tree map.\n"},
  {(char*)"SetLayoutStrategy", PyvtkTreeMapLayout_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkTreeMapLayoutStrategy)\nC++: void SetLayoutStrategy(vtkTreeMapLayoutStrategy *strategy)\n\nThe strategy to use when laying out the tree map.\n"},
  {(char*)"GetMTime", PyvtkTreeMapLayout_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the modification time of the layout algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeMapLayout_StaticNew()
{
  return vtkTreeMapLayout::New();
}

PyObject *PyVTKClass_vtkTreeMapLayoutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeMapLayout_StaticNew,
    PyvtkTreeMapLayout_Methods,
    "vtkTreeMapLayout", modulename,
    NULL, NULL,
    PyvtkTreeMapLayout_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTreeMapLayout_Doc()
{
  static const char *docstring[] = {
    "vtkTreeMapLayout - layout a vtkTree into a tree map\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "vtkTreeMapLayout assigns rectangular regions to each vertex in the\ntree, creating a tree map.  The data is added as a data array with\nfour components per tuple representing the location and size of the\nrectangle using the format (Xmin, Xmax, Ymin, Ymax).\n\nThis algorithm relies on a helper class to perform the actual layout.\nThis helper class is a subclass of vtkTreeMapLayoutStrategy.\n\nThanks:\n\nTha",
    "nks to Brian Wylie and Ken Moreland from Sandia National\nLaboratories for help developing this class.\n\nTree map concept comes from: Shneiderman, B. 1992. Tree visualization\nwith tree-maps: 2-d space-filling approach. ACM Trans. Graph. 11, 1\n(Jan. 1992), 92-99.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeMapLayout(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeMapLayoutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeMapLayout", o) != 0)
    {
    Py_DECREF(o);
    }

}

