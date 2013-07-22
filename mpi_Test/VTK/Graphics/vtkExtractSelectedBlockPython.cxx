// python wrapper for vtkExtractSelectedBlock
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
#include "vtkExtractSelectedBlock.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectedBlock(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectedBlock(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectedBlockNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectedBlockNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedBlock_Doc();


static PyObject *
PyvtkExtractSelectedBlock_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedBlock *op = static_cast<vtkExtractSelectedBlock *>(vp);

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
      tempr = op->vtkExtractSelectedBlock::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedBlock *op = static_cast<vtkExtractSelectedBlock *>(vp);

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
      tempr = op->vtkExtractSelectedBlock::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedBlock *op = static_cast<vtkExtractSelectedBlock *>(vp);

  vtkExtractSelectedBlock *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectedBlock::NewInstance();
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
PyvtkExtractSelectedBlock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelectedBlock *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelectedBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedBlock_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedBlock_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedBlock_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedBlock_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectedBlock\nC++: vtkExtractSelectedBlock *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedBlock_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedBlock\nC++: vtkExtractSelectedBlock *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedBlock_StaticNew()
{
  return vtkExtractSelectedBlock::New();
}

PyObject *PyVTKClass_vtkExtractSelectedBlockNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedBlock_StaticNew,
    PyvtkExtractSelectedBlock_Methods,
    "vtkExtractSelectedBlock", modulename,
    NULL, NULL,
    PyvtkExtractSelectedBlock_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedBlock_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedBlock \n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedBlock(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedBlockNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedBlock", o) != 0)
    {
    Py_DECREF(o);
    }

}

