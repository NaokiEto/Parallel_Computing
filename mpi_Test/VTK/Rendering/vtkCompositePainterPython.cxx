// python wrapper for vtkCompositePainter
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
#include "vtkCompositePainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositePainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositePainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositePainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositePainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkCompositePainter_Doc();


static PyObject *
PyvtkCompositePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

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
      tempr = op->vtkCompositePainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

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
      tempr = op->vtkCompositePainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  vtkCompositePainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositePainter::NewInstance();
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
PyvtkCompositePainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositePainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositePainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkCompositePainter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositePainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositePainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositePainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositePainter\nC++: vtkCompositePainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositePainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositePainter\nC++: vtkCompositePainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkCompositePainter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: virtual vtkDataObject *GetOutput()\n\nGet the output data object from this painter. The default\nimplementation simply forwards the input data object as the\noutput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositePainter_StaticNew()
{
  return vtkCompositePainter::New();
}

PyObject *PyVTKClass_vtkCompositePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositePainter_StaticNew,
    PyvtkCompositePainter_Methods,
    "vtkCompositePainter", modulename,
    NULL, NULL,
    PyvtkCompositePainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkCompositePainter_Doc()
{
  static const char *docstring[] = {
    "vtkCompositePainter - painter that can be inserted before any\n\n",
    "Superclass: vtkPainter\n\n",
    "vtkCompositePainter iterates over the leaves in a composite datasets.\nThis painter can also handle the case when the dataset is not a\ncomposite dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

