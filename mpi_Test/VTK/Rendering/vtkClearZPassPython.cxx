// python wrapper for vtkClearZPass
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
#include "vtkClearZPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClearZPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClearZPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClearZPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClearZPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkClearZPass_Doc();


static PyObject *
PyvtkClearZPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

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
      tempr = op->vtkClearZPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

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
      tempr = op->vtkClearZPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  vtkClearZPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClearZPass::NewInstance();
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
PyvtkClearZPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClearZPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClearZPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkClearZPass::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthMinValue();
      }
    else
      {
      tempr = op->vtkClearZPass::GetDepthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthMaxValue();
      }
    else
      {
      tempr = op->vtkClearZPass::GetDepthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClearZPass_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClearZPass *op = static_cast<vtkClearZPass *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepth();
      }
    else
      {
      tempr = op->vtkClearZPass::GetDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClearZPass_Methods[] = {
  {(char*)"GetClassName", PyvtkClearZPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClearZPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClearZPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClearZPass\nC++: vtkClearZPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClearZPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClearZPass\nC++: vtkClearZPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDepth", PyvtkClearZPass_SetDepth, 1,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double)\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {(char*)"GetDepthMinValue", PyvtkClearZPass_GetDepthMinValue, 1,
   (char*)"V.GetDepthMinValue() -> float\nC++: double GetDepthMinValue()\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {(char*)"GetDepthMaxValue", PyvtkClearZPass_GetDepthMaxValue, 1,
   (char*)"V.GetDepthMaxValue() -> float\nC++: double GetDepthMaxValue()\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {(char*)"GetDepth", PyvtkClearZPass_GetDepth, 1,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nSet/Get the depth value. Initial value is 1.0 (farest).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClearZPass_StaticNew()
{
  return vtkClearZPass::New();
}

PyObject *PyVTKClass_vtkClearZPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClearZPass_StaticNew,
    PyvtkClearZPass_Methods,
    "vtkClearZPass", modulename,
    NULL, NULL,
    PyvtkClearZPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkClearZPass_Doc()
{
  static const char *docstring[] = {
    "vtkClearZPass - Clear the depth buffer with a given value.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Clear the depth buffer with a given value.\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClearZPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClearZPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClearZPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

