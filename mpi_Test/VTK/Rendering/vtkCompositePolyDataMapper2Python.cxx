// python wrapper for vtkCompositePolyDataMapper2
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
#include "vtkCompositePolyDataMapper2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositePolyDataMapper2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositePolyDataMapper2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositePolyDataMapper2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositePolyDataMapper2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPainterPolyDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkPainterPolyDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterPolyDataMapperNew
#endif

static const char **PyvtkCompositePolyDataMapper2_Doc();


static PyObject *
PyvtkCompositePolyDataMapper2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      tempr = op->vtkCompositePolyDataMapper2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      tempr = op->vtkCompositePolyDataMapper2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  vtkCompositePolyDataMapper2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositePolyDataMapper2::NewInstance();
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
PyvtkCompositePolyDataMapper2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositePolyDataMapper2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositePolyDataMapper2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper2_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositePolyDataMapper2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositePolyDataMapper2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositePolyDataMapper2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositePolyDataMapper2\nC++: vtkCompositePolyDataMapper2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositePolyDataMapper2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositePolyDataMapper2\nC++: vtkCompositePolyDataMapper2 *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositePolyDataMapper2_StaticNew()
{
  return vtkCompositePolyDataMapper2::New();
}

PyObject *PyVTKClass_vtkCompositePolyDataMapper2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositePolyDataMapper2_StaticNew,
    PyvtkCompositePolyDataMapper2_Methods,
    "vtkCompositePolyDataMapper2", modulename,
    NULL, NULL,
    PyvtkCompositePolyDataMapper2_Doc(),
    PyVTKClass_vtkPainterPolyDataMapperNew(modulename));
  return cls;
}

const char **PyvtkCompositePolyDataMapper2_Doc()
{
  static const char *docstring[] = {
    "vtkCompositePolyDataMapper2 - mapper for composite dataset consisting\n\n",
    "Superclass: vtkPainterPolyDataMapper\n\n",
    "vtkCompositePolyDataMapper2 is similar to vtkCompositePolyDataMapper\nexcept that instead of creating individual mapper for each block in\nthe composite dataset, it iterates over the blocks internally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositePolyDataMapper2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositePolyDataMapper2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositePolyDataMapper2", o) != 0)
    {
    Py_DECREF(o);
    }

}

