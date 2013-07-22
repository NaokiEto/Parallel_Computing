// python wrapper for vtkAppendPoints
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
#include "vtkAppendPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAppendPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAppendPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAppendPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAppendPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkAppendPoints_Doc();


static PyObject *
PyvtkAppendPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

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
      tempr = op->vtkAppendPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

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
      tempr = op->vtkAppendPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  vtkAppendPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAppendPoints::NewInstance();
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
PyvtkAppendPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAppendPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAppendPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_SetInputIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputIdArrayName(temp0);
      }
    else
      {
      op->vtkAppendPoints::SetInputIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPoints_GetInputIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPoints *op = static_cast<vtkAppendPoints *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputIdArrayName();
      }
    else
      {
      tempr = op->vtkAppendPoints::GetInputIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAppendPoints\nC++: vtkAppendPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendPoints\nC++: vtkAppendPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputIdArrayName", PyvtkAppendPoints_SetInputIdArrayName, 1,
   (char*)"V.SetInputIdArrayName(string)\nC++: void SetInputIdArrayName(char *)\n\nSets the output array name to fill with the input connection\nindex for each point. This provides a way to trace a point back\nto a particular input. If this is NULL (the default), the array\nis not generated.\n"},
  {(char*)"GetInputIdArrayName", PyvtkAppendPoints_GetInputIdArrayName, 1,
   (char*)"V.GetInputIdArrayName() -> string\nC++: char *GetInputIdArrayName()\n\nSets the output array name to fill with the input connection\nindex for each point. This provides a way to trace a point back\nto a particular input. If this is NULL (the default), the array\nis not generated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendPoints_StaticNew()
{
  return vtkAppendPoints::New();
}

PyObject *PyVTKClass_vtkAppendPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendPoints_StaticNew,
    PyvtkAppendPoints_Methods,
    "vtkAppendPoints", modulename,
    NULL, NULL,
    PyvtkAppendPoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendPoints_Doc()
{
  static const char *docstring[] = {
    "vtkAppendPoints - appends points of one or more vtkPolyData data sets\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkAppendPoints is a filter that appends the points and assoicated\ndata of one or more polygonal (vtkPolyData) datasets. This filter can\noptionally add a new array marking the input index that the point\ncame from.\n\nSee Also:\n\nvtkAppendFilter vtkAppendPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

