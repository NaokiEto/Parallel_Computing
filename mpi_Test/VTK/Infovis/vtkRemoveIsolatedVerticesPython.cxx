// python wrapper for vtkRemoveIsolatedVertices
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
#include "vtkRemoveIsolatedVertices.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRemoveIsolatedVertices(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRemoveIsolatedVertices(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRemoveIsolatedVerticesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRemoveIsolatedVerticesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkRemoveIsolatedVertices_Doc();


static PyObject *
PyvtkRemoveIsolatedVertices_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveIsolatedVertices *op = static_cast<vtkRemoveIsolatedVertices *>(vp);

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
      tempr = op->vtkRemoveIsolatedVertices::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRemoveIsolatedVertices_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveIsolatedVertices *op = static_cast<vtkRemoveIsolatedVertices *>(vp);

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
      tempr = op->vtkRemoveIsolatedVertices::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRemoveIsolatedVertices_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveIsolatedVertices *op = static_cast<vtkRemoveIsolatedVertices *>(vp);

  vtkRemoveIsolatedVertices *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRemoveIsolatedVertices::NewInstance();
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
PyvtkRemoveIsolatedVertices_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRemoveIsolatedVertices *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRemoveIsolatedVertices::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRemoveIsolatedVertices_Methods[] = {
  {(char*)"GetClassName", PyvtkRemoveIsolatedVertices_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRemoveIsolatedVertices_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRemoveIsolatedVertices_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRemoveIsolatedVertices\nC++: vtkRemoveIsolatedVertices *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRemoveIsolatedVertices_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRemoveIsolatedVertices\nC++: vtkRemoveIsolatedVertices *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRemoveIsolatedVertices_StaticNew()
{
  return vtkRemoveIsolatedVertices::New();
}

PyObject *PyVTKClass_vtkRemoveIsolatedVerticesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRemoveIsolatedVertices_StaticNew,
    PyvtkRemoveIsolatedVertices_Methods,
    "vtkRemoveIsolatedVertices", modulename,
    NULL, NULL,
    PyvtkRemoveIsolatedVertices_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRemoveIsolatedVertices_Doc()
{
  static const char *docstring[] = {
    "vtkRemoveIsolatedVertices - remove vertices of a vtkGraph with \n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRemoveIsolatedVertices(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRemoveIsolatedVerticesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRemoveIsolatedVertices", o) != 0)
    {
    Py_DECREF(o);
    }

}

