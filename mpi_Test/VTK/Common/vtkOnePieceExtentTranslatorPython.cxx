// python wrapper for vtkOnePieceExtentTranslator
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
#include "vtkOnePieceExtentTranslator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOnePieceExtentTranslator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOnePieceExtentTranslator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOnePieceExtentTranslatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOnePieceExtentTranslatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtentTranslatorNew
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtentTranslatorNew
#endif

static const char **PyvtkOnePieceExtentTranslator_Doc();


static PyObject *
PyvtkOnePieceExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOnePieceExtentTranslator *op = static_cast<vtkOnePieceExtentTranslator *>(vp);

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
      tempr = op->vtkOnePieceExtentTranslator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOnePieceExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOnePieceExtentTranslator *op = static_cast<vtkOnePieceExtentTranslator *>(vp);

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
      tempr = op->vtkOnePieceExtentTranslator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOnePieceExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOnePieceExtentTranslator *op = static_cast<vtkOnePieceExtentTranslator *>(vp);

  vtkOnePieceExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOnePieceExtentTranslator::NewInstance();
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
PyvtkOnePieceExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOnePieceExtentTranslator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOnePieceExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOnePieceExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkOnePieceExtentTranslator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOnePieceExtentTranslator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOnePieceExtentTranslator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOnePieceExtentTranslator\nC++: vtkOnePieceExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOnePieceExtentTranslator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOnePieceExtentTranslator\nC++: vtkOnePieceExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOnePieceExtentTranslator_StaticNew()
{
  return vtkOnePieceExtentTranslator::New();
}

PyObject *PyVTKClass_vtkOnePieceExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOnePieceExtentTranslator_StaticNew,
    PyvtkOnePieceExtentTranslator_Methods,
    "vtkOnePieceExtentTranslator", modulename,
    NULL, NULL,
    PyvtkOnePieceExtentTranslator_Doc(),
    PyVTKClass_vtkExtentTranslatorNew(modulename));
  return cls;
}

const char **PyvtkOnePieceExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkOnePieceExtentTranslator - Returns the whole extent for any piece..\n\n",
    "Superclass: vtkExtentTranslator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOnePieceExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOnePieceExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOnePieceExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

