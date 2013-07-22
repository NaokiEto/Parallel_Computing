// python wrapper for vtkArrayIterator
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
#include "vtkArrayIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrayIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrayIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkArrayIterator_Doc();


static PyObject *
PyvtkArrayIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIterator *op = static_cast<vtkArrayIterator *>(vp);

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
      tempr = op->vtkArrayIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIterator *op = static_cast<vtkArrayIterator *>(vp);

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
      tempr = op->vtkArrayIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIterator *op = static_cast<vtkArrayIterator *>(vp);

  vtkArrayIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrayIterator::NewInstance();
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
PyvtkArrayIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIterator *op = static_cast<vtkArrayIterator *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayIterator_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIterator *op = static_cast<vtkArrayIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDataType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrayIterator\nC++: vtkArrayIterator *NewInstance()\n\n"},
  {(char*)"Initialize", PyvtkArrayIterator_Initialize, 1,
   (char*)"V.Initialize(vtkAbstractArray)\nC++: virtual void Initialize(vtkAbstractArray *array)\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-intialized.\n"},
  {(char*)"GetDataType", PyvtkArrayIterator_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkArrayIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkArrayIterator_Methods,
    "vtkArrayIterator", modulename,
    NULL, NULL,
    PyvtkArrayIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkArrayIterator_Doc()
{
  static const char *docstring[] = {
    "vtkArrayIterator - Abstract superclass to iterate over elements\n\n",
    "Superclass: vtkObject\n\n",
    "vtkArrayIterator is used to iterate over elements in any\nvtkAbstractArray subclass.  The vtkArrayIteratorTemplateMacro is used\nto centralize the set of types supported by Execute methods.  It also\navoids duplication of long switch statement case lists.\n\nNote that in this macro VTK_TT is defined to be the type of the\niterator for the given type of array. One must include the\nvtkArrayIteratorInclude",
    "s.h header file to provide for extending of\nthis macro by addition of new iterators.\n\nExample usage:vtkArrayIter* iter = array->NewIterator();\nswitch(array->GetDataType())\n  {\n  vtkArrayIteratorTemplateMacro(myFunc(static_cast<VTK_TT*>(iter),\narg2));\n  }\niter->Delete();\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

