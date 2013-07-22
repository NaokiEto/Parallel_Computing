// python wrapper for vtkGenericPointIterator
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
#include "vtkGenericPointIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericPointIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericPointIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericPointIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericPointIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericPointIterator_Doc();


static PyObject *
PyvtkGenericPointIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

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
      tempr = op->vtkGenericPointIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

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
      tempr = op->vtkGenericPointIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  vtkGenericPointIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericPointIterator::NewInstance();
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
PyvtkGenericPointIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Begin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->IsAtEnd();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Next();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPosition(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericPointIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericPointIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK construction and type macros.\n"},
  {(char*)"IsA", PyvtkGenericPointIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK construction and type macros.\n"},
  {(char*)"NewInstance", PyvtkGenericPointIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericPointIterator\nC++: vtkGenericPointIterator *NewInstance()\n\nStandard VTK construction and type macros.\n"},
  {(char*)"Begin", PyvtkGenericPointIterator_Begin, 1,
   (char*)"V.Begin()\nC++: virtual void Begin()\n\nMove iterator to first position if any (loop initialization).\n"},
  {(char*)"IsAtEnd", PyvtkGenericPointIterator_IsAtEnd, 1,
   (char*)"V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nIs the iterator at the end of traversal?\n"},
  {(char*)"Next", PyvtkGenericPointIterator_Next, 1,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove the iterator to the next position in the list.\n\\pre not_off: !IsAtEnd()\n"},
  {(char*)"GetPosition", PyvtkGenericPointIterator_GetPosition, 1,
   (char*)"V.GetPosition([float, float, float])\nC++: virtual void GetPosition(double x[3])\n\nGet the coordinates of the point at the current iterator\nposition.\n\\pre not_off: !IsAtEnd()\n\\pre x_exists: x!=0\n"},
  {(char*)"GetId", PyvtkGenericPointIterator_GetId, 1,
   (char*)"V.GetId() -> int\nC++: virtual vtkIdType GetId()\n\nReturn the unique identifier for the point, could be\nnon-contiguous.\n\\pre not_off: !IsAtEnd()\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericPointIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericPointIterator_Methods,
    "vtkGenericPointIterator", modulename,
    NULL, NULL,
    PyvtkGenericPointIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericPointIterator_Doc()
{
  static const char *docstring[] = {
    "vtkGenericPointIterator - iterator used to traverse points\n\n",
    "Superclass: vtkObject\n\n",
    "This class (and subclasses) are used to iterate over points. Use it\nonly in conjunction with vtkGenericDataSet (i.e., the adaptor\nframework).\n\nTypical use is:\n\nvtkGenericDataSet *dataset; vtkGenericPointIterator *it =\ndataset->NewPointIterator(); for (it->Begin(); !it->IsAtEnd();\nit->Next());\n  {\n  x=it->GetPosition();\n  } \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericPointIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericPointIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericPointIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

