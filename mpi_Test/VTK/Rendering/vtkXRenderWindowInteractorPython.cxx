// python wrapper for vtkXRenderWindowInteractor
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
#include "vtkXRenderWindowInteractor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXRenderWindowInteractor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXRenderWindowInteractor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXRenderWindowInteractorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXRenderWindowInteractorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
#endif

static const char **PyvtkXRenderWindowInteractor_Doc();


static PyObject *
PyvtkXRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

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
      tempr = op->vtkXRenderWindowInteractor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

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
      tempr = op->vtkXRenderWindowInteractor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  vtkXRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXRenderWindowInteractor::NewInstance();
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
PyvtkXRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TerminateApp();
      }
    else
      {
      op->vtkXRenderWindowInteractor::TerminateApp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_GetBreakLoopFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBreakLoopFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBreakLoopFlag();
      }
    else
      {
      tempr = op->vtkXRenderWindowInteractor::GetBreakLoopFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_SetBreakLoopFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBreakLoopFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBreakLoopFlag(temp0);
      }
    else
      {
      op->vtkXRenderWindowInteractor::SetBreakLoopFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_BreakLoopFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BreakLoopFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BreakLoopFlagOff();
      }
    else
      {
      op->vtkXRenderWindowInteractor::BreakLoopFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_BreakLoopFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BreakLoopFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BreakLoopFlagOn();
      }
    else
      {
      op->vtkXRenderWindowInteractor::BreakLoopFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Enable();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Enable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Disable();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Disable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkXRenderWindowInteractor::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateSize(temp0, temp1);
      }
    else
      {
      op->vtkXRenderWindowInteractor::UpdateSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkXRenderWindowInteractor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXRenderWindowInteractor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXRenderWindowInteractor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXRenderWindowInteractor\nC++: vtkXRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXRenderWindowInteractor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXRenderWindowInteractor\nC++: vtkXRenderWindowInteractor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkXRenderWindowInteractor_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitializes the event handlers without an XtAppContext.  This is\ngood for when you don't have a user interface, but you still want\nto have mouse interaction.\n"},
  {(char*)"TerminateApp", PyvtkXRenderWindowInteractor_TerminateApp, 1,
   (char*)"V.TerminateApp()\nC++: void TerminateApp()\n\nBreak the event loop on 'q','e' keypress. Want more ???\n"},
  {(char*)"GetBreakLoopFlag", PyvtkXRenderWindowInteractor_GetBreakLoopFlag, 1,
   (char*)"V.GetBreakLoopFlag() -> int\nC++: int GetBreakLoopFlag()\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"SetBreakLoopFlag", PyvtkXRenderWindowInteractor_SetBreakLoopFlag, 1,
   (char*)"V.SetBreakLoopFlag(int)\nC++: void SetBreakLoopFlag(int)\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"BreakLoopFlagOff", PyvtkXRenderWindowInteractor_BreakLoopFlagOff, 1,
   (char*)"V.BreakLoopFlagOff()\nC++: void BreakLoopFlagOff()\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"BreakLoopFlagOn", PyvtkXRenderWindowInteractor_BreakLoopFlagOn, 1,
   (char*)"V.BreakLoopFlagOn()\nC++: void BreakLoopFlagOn()\n\nThe BreakLoopFlag is checked in the Start() method. Setting it to\nanything other than zero will cause the interactor loop to\nterminate and return to the calling function.\n"},
  {(char*)"Enable", PyvtkXRenderWindowInteractor_Enable, 1,
   (char*)"V.Enable()\nC++: virtual void Enable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"Disable", PyvtkXRenderWindowInteractor_Disable, 1,
   (char*)"V.Disable()\nC++: virtual void Disable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"Start", PyvtkXRenderWindowInteractor_Start, 1,
   (char*)"V.Start()\nC++: virtual void Start()\n\nThis will start up the X event loop and never return. If you call\nthis method it will loop processing X events until the\napplication is exited.\n"},
  {(char*)"UpdateSize", PyvtkXRenderWindowInteractor_UpdateSize, 1,
   (char*)"V.UpdateSize(int, int)\nC++: virtual void UpdateSize(int, int)\n\nUpdate the Size data member and set the associated RenderWindow's\nsize.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXRenderWindowInteractor_StaticNew()
{
  return vtkXRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkXRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXRenderWindowInteractor_StaticNew,
    PyvtkXRenderWindowInteractor_Methods,
    "vtkXRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkXRenderWindowInteractor_Doc(),
    PyVTKClass_vtkRenderWindowInteractorNew(modulename));
  return cls;
}

const char **PyvtkXRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkXRenderWindowInteractor - an X event driven interface for a\nRenderWindow\n\n",
    "Superclass: vtkRenderWindowInteractor\n\n",
    "vtkXRenderWindowInteractor is a convenience object that provides\nevent bindings to common graphics functions. For example, camera and\nactor functions such as zoom-in/zoom-out, azimuth, roll, and pan. IT\nis one of the window system specific subclasses of\nvtkRenderWindowInteractor. Please see vtkRenderWindowInteractor\ndocumentation for event bindings.\n\nSee Also:\n\nvtkRenderWindowInteractor vtkXRender",
    "Window\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

