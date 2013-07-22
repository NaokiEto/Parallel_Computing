// python wrapper for vtkStringToTimePoint
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
#include "vtkStringToTimePoint.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStringToTimePoint(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStringToTimePoint(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStringToTimePointNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStringToTimePointNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkStringToTimePoint_Doc();


static PyObject *
PyvtkStringToTimePoint_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToTimePoint *op = static_cast<vtkStringToTimePoint *>(vp);

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
      tempr = op->vtkStringToTimePoint::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToTimePoint_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToTimePoint *op = static_cast<vtkStringToTimePoint *>(vp);

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
      tempr = op->vtkStringToTimePoint::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToTimePoint_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToTimePoint *op = static_cast<vtkStringToTimePoint *>(vp);

  vtkStringToTimePoint *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStringToTimePoint::NewInstance();
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
PyvtkStringToTimePoint_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStringToTimePoint *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStringToTimePoint::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToTimePoint_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToTimePoint *op = static_cast<vtkStringToTimePoint *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkStringToTimePoint::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToTimePoint_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToTimePoint *op = static_cast<vtkStringToTimePoint *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputArrayName();
      }
    else
      {
      tempr = op->vtkStringToTimePoint::GetOutputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToTimePoint_Methods[] = {
  {(char*)"GetClassName", PyvtkStringToTimePoint_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringToTimePoint_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringToTimePoint_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStringToTimePoint\nC++: vtkStringToTimePoint *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringToTimePoint_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringToTimePoint\nC++: vtkStringToTimePoint *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputArrayName", PyvtkStringToTimePoint_SetOutputArrayName, 1,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nThe name of the output array. If this is not specified, the name\nwill be the same as the input array name with either \" [to\ndatetime]\", \" [to date]\", or \" [to time]\" appended.\n"},
  {(char*)"GetOutputArrayName", PyvtkStringToTimePoint_GetOutputArrayName, 1,
   (char*)"V.GetOutputArrayName() -> string\nC++: char *GetOutputArrayName()\n\nThe name of the output array. If this is not specified, the name\nwill be the same as the input array name with either \" [to\ndatetime]\", \" [to date]\", or \" [to time]\" appended.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStringToTimePoint_StaticNew()
{
  return vtkStringToTimePoint::New();
}

PyObject *PyVTKClass_vtkStringToTimePointNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStringToTimePoint_StaticNew,
    PyvtkStringToTimePoint_Methods,
    "vtkStringToTimePoint", modulename,
    NULL, NULL,
    PyvtkStringToTimePoint_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStringToTimePoint_Doc()
{
  static const char *docstring[] = {
    "vtkStringToTimePoint - Converts a string array to a integral time\narray\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkStringToTimePoint is a filter for converting a string array into a\ndatetime, time or date array.  The input strings must conform to one\nof the ISO8601 formats defined in vtkTimePointUtility.\n\nThe input array specified by SetInputArrayToProcess(...) indicates\nthe array to process.  This array must be of type vtkStringArray.\n\nThe output array will be of type vtkTypeUInt64Array.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringToTimePoint(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringToTimePointNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringToTimePoint", o) != 0)
    {
    Py_DECREF(o);
    }

}

