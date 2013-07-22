// python wrapper for vtkPLinearExtrusionFilter
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
#include "vtkPLinearExtrusionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPLinearExtrusionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPLinearExtrusionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPLinearExtrusionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPLinearExtrusionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLinearExtrusionFilterNew
extern "C" { PyObject *PyVTKClass_vtkLinearExtrusionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearExtrusionFilterNew
#endif

static const char **PyvtkPLinearExtrusionFilter_Doc();


static PyObject *
PyvtkPLinearExtrusionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

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
      tempr = op->vtkPLinearExtrusionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLinearExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

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
      tempr = op->vtkPLinearExtrusionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLinearExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

  vtkPLinearExtrusionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPLinearExtrusionFilter::NewInstance();
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
PyvtkPLinearExtrusionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPLinearExtrusionFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPLinearExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLinearExtrusionFilter_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkPLinearExtrusionFilter::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLinearExtrusionFilter_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceInvariant();
      }
    else
      {
      tempr = op->vtkPLinearExtrusionFilter::GetPieceInvariant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLinearExtrusionFilter_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOn();
      }
    else
      {
      op->vtkPLinearExtrusionFilter::PieceInvariantOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLinearExtrusionFilter_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLinearExtrusionFilter *op = static_cast<vtkPLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOff();
      }
    else
      {
      op->vtkPLinearExtrusionFilter::PieceInvariantOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPLinearExtrusionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPLinearExtrusionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPLinearExtrusionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPLinearExtrusionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPLinearExtrusionFilter\nC++: vtkPLinearExtrusionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPLinearExtrusionFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPLinearExtrusionFilter\nC++: vtkPLinearExtrusionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPieceInvariant", PyvtkPLinearExtrusionFilter_SetPieceInvariant, 1,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\n"},
  {(char*)"GetPieceInvariant", PyvtkPLinearExtrusionFilter_GetPieceInvariant, 1,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\n"},
  {(char*)"PieceInvariantOn", PyvtkPLinearExtrusionFilter_PieceInvariantOn, 1,
   (char*)"V.PieceInvariantOn()\nC++: void PieceInvariantOn()\n\n"},
  {(char*)"PieceInvariantOff", PyvtkPLinearExtrusionFilter_PieceInvariantOff, 1,
   (char*)"V.PieceInvariantOff()\nC++: void PieceInvariantOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPLinearExtrusionFilter_StaticNew()
{
  return vtkPLinearExtrusionFilter::New();
}

PyObject *PyVTKClass_vtkPLinearExtrusionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPLinearExtrusionFilter_StaticNew,
    PyvtkPLinearExtrusionFilter_Methods,
    "vtkPLinearExtrusionFilter", modulename,
    NULL, NULL,
    PyvtkPLinearExtrusionFilter_Doc(),
    PyVTKClass_vtkLinearExtrusionFilterNew(modulename));
  return cls;
}

const char **PyvtkPLinearExtrusionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPLinearExtrusionFilter - Subclass that handles piece invariance.\n\n",
    "Superclass: vtkLinearExtrusionFilter\n\n",
    "vtkPLinearExtrusionFilter is a parallel version of\nvtkLinearExtrusionFilter.\n\nSee Also:\n\nvtkLinearExtrusionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPLinearExtrusionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPLinearExtrusionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPLinearExtrusionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

