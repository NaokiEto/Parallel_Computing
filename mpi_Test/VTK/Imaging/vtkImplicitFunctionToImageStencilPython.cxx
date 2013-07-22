// python wrapper for vtkImplicitFunctionToImageStencil
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
#include "vtkImplicitFunctionToImageStencil.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitFunctionToImageStencil(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitFunctionToImageStencil(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitFunctionToImageStencilNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionToImageStencilNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageStencilSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageStencilSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageStencilSourceNew
#endif

static const char **PyvtkImplicitFunctionToImageStencil_Doc();


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

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
      tempr = op->vtkImplicitFunctionToImageStencil::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

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
      tempr = op->vtkImplicitFunctionToImageStencil::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  vtkImplicitFunctionToImageStencil *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitFunctionToImageStencil::NewInstance();
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
PyvtkImplicitFunctionToImageStencil_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitFunctionToImageStencil *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitFunctionToImageStencil::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImplicitFunctionToImageStencil::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImplicitFunctionToImageStencil::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreshold(temp0);
      }
    else
      {
      op->vtkImplicitFunctionToImageStencil::SetThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThreshold();
      }
    else
      {
      tempr = op->vtkImplicitFunctionToImageStencil::GetThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitFunctionToImageStencil_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitFunctionToImageStencil_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitFunctionToImageStencil_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitFunctionToImageStencil_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitFunctionToImageStencil\nC++: vtkImplicitFunctionToImageStencil *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitFunctionToImageStencil_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitFunctionToImageStencil\nC++: vtkImplicitFunctionToImageStencil *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkImplicitFunctionToImageStencil_SetInput, 1,
   (char*)"V.SetInput(vtkImplicitFunction)\nC++: virtual void SetInput(vtkImplicitFunction *)\n\nSpecify the implicit function to convert into a stencil.\n"},
  {(char*)"GetInput", PyvtkImplicitFunctionToImageStencil_GetInput, 1,
   (char*)"V.GetInput() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetInput()\n\nSpecify the implicit function to convert into a stencil.\n"},
  {(char*)"SetThreshold", PyvtkImplicitFunctionToImageStencil_SetThreshold, 1,
   (char*)"V.SetThreshold(float)\nC++: void SetThreshold(double a)\n\nSet the threshold value for the implicit function.\n"},
  {(char*)"GetThreshold", PyvtkImplicitFunctionToImageStencil_GetThreshold, 1,
   (char*)"V.GetThreshold() -> float\nC++: double GetThreshold()\n\nSet the threshold value for the implicit function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitFunctionToImageStencil_StaticNew()
{
  return vtkImplicitFunctionToImageStencil::New();
}

PyObject *PyVTKClass_vtkImplicitFunctionToImageStencilNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitFunctionToImageStencil_StaticNew,
    PyvtkImplicitFunctionToImageStencil_Methods,
    "vtkImplicitFunctionToImageStencil", modulename,
    NULL, NULL,
    PyvtkImplicitFunctionToImageStencil_Doc(),
    PyVTKClass_vtkImageStencilSourceNew(modulename));
  return cls;
}

const char **PyvtkImplicitFunctionToImageStencil_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitFunctionToImageStencil - clip an image with a function\n\n",
    "Superclass: vtkImageStencilSource\n\n",
    "vtkImplicitFunctionToImageStencil will convert a vtkImplicitFunction\ninto a stencil that can be used with vtkImageStencil or with other\nclasses that apply a stencil to an image.\n\nSee Also:\n\nvtkImplicitFunction vtkImageStencil vtkPolyDataToImageStencil\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitFunctionToImageStencil(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitFunctionToImageStencilNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitFunctionToImageStencil", o) != 0)
    {
    Py_DECREF(o);
    }

}

