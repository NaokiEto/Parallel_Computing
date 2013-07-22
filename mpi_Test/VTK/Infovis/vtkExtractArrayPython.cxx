// python wrapper for vtkExtractArray
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
#include "vtkExtractArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkExtractArray_Doc();


static PyObject *
PyvtkExtractArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

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
      tempr = op->vtkExtractArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

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
      tempr = op->vtkExtractArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  vtkExtractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractArray::NewInstance();
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
PyvtkExtractArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndex();
      }
    else
      {
      tempr = op->vtkExtractArray::GetIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArray_SetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArray *op = static_cast<vtkExtractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndex(temp0);
      }
    else
      {
      op->vtkExtractArray::SetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractArray_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractArray\nC++: vtkExtractArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractArray\nC++: vtkExtractArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetIndex", PyvtkExtractArray_GetIndex, 1,
   (char*)"V.GetIndex() -> int\nC++: vtkIdType GetIndex()\n\nControls which array will be extracted.\n"},
  {(char*)"SetIndex", PyvtkExtractArray_SetIndex, 1,
   (char*)"V.SetIndex(int)\nC++: void SetIndex(vtkIdType a)\n\nControls which array will be extracted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractArray_StaticNew()
{
  return vtkExtractArray::New();
}

PyObject *PyVTKClass_vtkExtractArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractArray_StaticNew,
    PyvtkExtractArray_Methods,
    "vtkExtractArray", modulename,
    NULL, NULL,
    PyvtkExtractArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractArray_Doc()
{
  static const char *docstring[] = {
    "vtkExtractArray - Given a vtkArrayData object containing one-or-more\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

