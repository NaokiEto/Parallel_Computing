// python wrapper for vtkImageDataLIC2DExtentTranslator
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
#include "vtkImageDataLIC2DExtentTranslator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDataLIC2DExtentTranslator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDataLIC2DExtentTranslator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDataLIC2DExtentTranslatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDataLIC2DExtentTranslatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtentTranslatorNew
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtentTranslatorNew
#endif

static const char **PyvtkImageDataLIC2DExtentTranslator_Doc();


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

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
      tempr = op->vtkImageDataLIC2DExtentTranslator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

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
      tempr = op->vtkImageDataLIC2DExtentTranslator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  vtkImageDataLIC2DExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDataLIC2DExtentTranslator::NewInstance();
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
PyvtkImageDataLIC2DExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDataLIC2DExtentTranslator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDataLIC2DExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_SetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  vtkImageDataLIC2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageDataLIC2D"))
    {
    if (ap.IsBound())
      {
      op->SetAlgorithm(temp0);
      }
    else
      {
      op->vtkImageDataLIC2DExtentTranslator::SetAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  vtkImageDataLIC2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlgorithm();
      }
    else
      {
      tempr = op->vtkImageDataLIC2DExtentTranslator::GetAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_SetInputExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      op->SetInputExtentTranslator(temp0);
      }
    else
      {
      op->vtkImageDataLIC2DExtentTranslator::SetInputExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_GetInputExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputExtentTranslator();
      }
    else
      {
      tempr = op->vtkImageDataLIC2DExtentTranslator::GetInputExtentTranslator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2DExtentTranslator_SetInputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetInputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageDataLIC2DExtentTranslator::SetInputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageDataLIC2DExtentTranslator_SetInputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetInputWholeExtent(temp0);
      }
    else
      {
      op->vtkImageDataLIC2DExtentTranslator::SetInputWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageDataLIC2DExtentTranslator_SetInputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageDataLIC2DExtentTranslator_SetInputWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageDataLIC2DExtentTranslator_SetInputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageDataLIC2DExtentTranslator_GetInputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2DExtentTranslator *op = static_cast<vtkImageDataLIC2DExtentTranslator *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputWholeExtent();
      }
    else
      {
      tempr = op->vtkImageDataLIC2DExtentTranslator::GetInputWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataLIC2DExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataLIC2DExtentTranslator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataLIC2DExtentTranslator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataLIC2DExtentTranslator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDataLIC2DExtentTranslator\nC++: vtkImageDataLIC2DExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataLIC2DExtentTranslator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataLIC2DExtentTranslator\nC++: vtkImageDataLIC2DExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAlgorithm", PyvtkImageDataLIC2DExtentTranslator_SetAlgorithm, 1,
   (char*)"V.SetAlgorithm(vtkImageDataLIC2D)\nC++: void SetAlgorithm(vtkImageDataLIC2D *)\n\nSet the vtkImageDataLIC2D algorithm for which this extent\ntranslator is being used.\n"},
  {(char*)"GetAlgorithm", PyvtkImageDataLIC2DExtentTranslator_GetAlgorithm, 1,
   (char*)"V.GetAlgorithm() -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *GetAlgorithm()\n\nSet the vtkImageDataLIC2D algorithm for which this extent\ntranslator is being used.\n"},
  {(char*)"SetInputExtentTranslator", PyvtkImageDataLIC2DExtentTranslator_SetInputExtentTranslator, 1,
   (char*)"V.SetInputExtentTranslator(vtkExtentTranslator)\nC++: void SetInputExtentTranslator(vtkExtentTranslator *)\n\n"},
  {(char*)"GetInputExtentTranslator", PyvtkImageDataLIC2DExtentTranslator_GetInputExtentTranslator, 1,
   (char*)"V.GetInputExtentTranslator() -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetInputExtentTranslator()\n\n"},
  {(char*)"SetInputWholeExtent", PyvtkImageDataLIC2DExtentTranslator_SetInputWholeExtent, 1,
   (char*)"V.SetInputWholeExtent(int, int, int, int, int, int)\nC++: void SetInputWholeExtent(int, int, int, int, int, int)\nV.SetInputWholeExtent((int, int, int, int, int, int))\nC++: void SetInputWholeExtent(int a[6])\n\n"},
  {(char*)"GetInputWholeExtent", PyvtkImageDataLIC2DExtentTranslator_GetInputWholeExtent, 1,
   (char*)"V.GetInputWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetInputWholeExtent()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataLIC2DExtentTranslator_StaticNew()
{
  return vtkImageDataLIC2DExtentTranslator::New();
}

PyObject *PyVTKClass_vtkImageDataLIC2DExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataLIC2DExtentTranslator_StaticNew,
    PyvtkImageDataLIC2DExtentTranslator_Methods,
    "vtkImageDataLIC2DExtentTranslator", modulename,
    NULL, NULL,
    PyvtkImageDataLIC2DExtentTranslator_Doc(),
    PyVTKClass_vtkExtentTranslatorNew(modulename));
  return cls;
}

const char **PyvtkImageDataLIC2DExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataLIC2DExtentTranslator \n\n",
    "Superclass: vtkExtentTranslator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataLIC2DExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataLIC2DExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataLIC2DExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

