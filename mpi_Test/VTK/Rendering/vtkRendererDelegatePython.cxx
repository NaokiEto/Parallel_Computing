// python wrapper for vtkRendererDelegate
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
#include "vtkRendererDelegate.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRendererDelegate(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRendererDelegate(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRendererDelegateNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRendererDelegateNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRendererDelegate_Doc();


static PyObject *
PyvtkRendererDelegate_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

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
      tempr = op->vtkRendererDelegate::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererDelegate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

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
      tempr = op->vtkRendererDelegate::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererDelegate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  vtkRendererDelegate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRendererDelegate::NewInstance();
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
PyvtkRendererDelegate_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    op->Render(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererDelegate_SetUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUsed(temp0);
      }
    else
      {
      op->vtkRendererDelegate::SetUsed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererDelegate_GetUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUsed();
      }
    else
      {
      tempr = op->vtkRendererDelegate::GetUsed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererDelegate_UsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UsedOn();
      }
    else
      {
      op->vtkRendererDelegate::UsedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererDelegate_UsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UsedOff();
      }
    else
      {
      op->vtkRendererDelegate::UsedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRendererDelegate_Methods[] = {
  {(char*)"GetClassName", PyvtkRendererDelegate_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRendererDelegate_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRendererDelegate_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRendererDelegate\nC++: vtkRendererDelegate *NewInstance()\n\n"},
  {(char*)"Render", PyvtkRendererDelegate_Render, 1,
   (char*)"V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *r)\n\nRender the props of vtkRenderer if Used is on.\n"},
  {(char*)"SetUsed", PyvtkRendererDelegate_SetUsed, 1,
   (char*)"V.SetUsed(bool)\nC++: void SetUsed(bool a)\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {(char*)"GetUsed", PyvtkRendererDelegate_GetUsed, 1,
   (char*)"V.GetUsed() -> bool\nC++: bool GetUsed()\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {(char*)"UsedOn", PyvtkRendererDelegate_UsedOn, 1,
   (char*)"V.UsedOn()\nC++: void UsedOn()\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {(char*)"UsedOff", PyvtkRendererDelegate_UsedOff, 1,
   (char*)"V.UsedOff()\nC++: void UsedOff()\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkRendererDelegateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkRendererDelegate_Methods,
    "vtkRendererDelegate", modulename,
    NULL, NULL,
    PyvtkRendererDelegate_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRendererDelegate_Doc()
{
  static const char *docstring[] = {
    "vtkRendererDelegate - Render the props of a vtkRenderer\n\n",
    "Superclass: vtkObject\n\n",
    "vtkRendererDelegate is an abstract class with a pure virtual method\nRender. This method replaces the Render method of vtkRenderer to\nallow custom rendering from an external project. A RendererDelegate\nis connected to a vtkRenderer with method SetDelegate(). An external\nproject just has to provide a concrete implementation of\nvtkRendererDelegate.\n\nSee Also:\n\nvtkRenderer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRendererDelegate(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRendererDelegateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRendererDelegate", o) != 0)
    {
    Py_DECREF(o);
    }

}
