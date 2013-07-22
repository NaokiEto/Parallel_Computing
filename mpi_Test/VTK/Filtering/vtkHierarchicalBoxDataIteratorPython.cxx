// python wrapper for vtkHierarchicalBoxDataIterator
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
#include "vtkHierarchicalBoxDataIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalBoxDataIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalBoxDataIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalBoxDataIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalBoxDataIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataIteratorNew
#endif

static const char **PyvtkHierarchicalBoxDataIterator_Doc();


static PyObject *
PyvtkHierarchicalBoxDataIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

  vtkHierarchicalBoxDataIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataIterator::NewInstance();
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
PyvtkHierarchicalBoxDataIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalBoxDataIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalBoxDataIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataIterator_GetCurrentLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentLevel();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataIterator::GetCurrentLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataIterator_GetCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentIndex();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataIterator::GetCurrentIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalBoxDataIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalBoxDataIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalBoxDataIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalBoxDataIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalBoxDataIterator\nC++: vtkHierarchicalBoxDataIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalBoxDataIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalBoxDataIterator\nC++: vtkHierarchicalBoxDataIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCurrentLevel", PyvtkHierarchicalBoxDataIterator_GetCurrentLevel, 1,
   (char*)"V.GetCurrentLevel() -> int\nC++: unsigned int GetCurrentLevel()\n\nReturns the level for the current dataset.\n"},
  {(char*)"GetCurrentIndex", PyvtkHierarchicalBoxDataIterator_GetCurrentIndex, 1,
   (char*)"V.GetCurrentIndex() -> int\nC++: unsigned int GetCurrentIndex()\n\nReturns the dataset index for the current data object. Valid only\nif the current data is a leaf node i.e. no a composite dataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalBoxDataIterator_StaticNew()
{
  return vtkHierarchicalBoxDataIterator::New();
}

PyObject *PyVTKClass_vtkHierarchicalBoxDataIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalBoxDataIterator_StaticNew,
    PyvtkHierarchicalBoxDataIterator_Methods,
    "vtkHierarchicalBoxDataIterator", modulename,
    NULL, NULL,
    PyvtkHierarchicalBoxDataIterator_Doc(),
    PyVTKClass_vtkCompositeDataIteratorNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalBoxDataIterator_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalBoxDataIterator - subclass of vtkCompositeDataIterator\n\n",
    "Superclass: vtkCompositeDataIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalBoxDataIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalBoxDataIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalBoxDataIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

