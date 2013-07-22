// python wrapper for vtkTDxInteractorStyle
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
#include "vtkTDxInteractorStyle.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTDxInteractorStyle(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTDxInteractorStyle(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTDxInteractorStyle_Doc();


static PyObject *
PyvtkTDxInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

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
      tempr = op->vtkTDxInteractorStyle::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

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
      tempr = op->vtkTDxInteractorStyle::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxInteractorStyle *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTDxInteractorStyle::NewInstance();
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
PyvtkTDxInteractorStyle_OnMotionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMotionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxMotionEventInfo *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxMotionEventInfo"))
    {
    if (ap.IsBound())
      {
      op->OnMotionEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::OnMotionEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonPressedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPressedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->OnButtonPressedEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::OnButtonPressedEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonReleasedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonReleasedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->OnButtonReleasedEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::OnButtonReleasedEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_ProcessEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkRenderer *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ProcessEvent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTDxInteractorStyle::ProcessEvent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_GetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxInteractorStyleSettings *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSettings();
      }
    else
      {
      tempr = op->vtkTDxInteractorStyle::GetSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_SetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxInteractorStyleSettings *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxInteractorStyleSettings"))
    {
    if (ap.IsBound())
      {
      op->SetSettings(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::SetSettings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkTDxInteractorStyle_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTDxInteractorStyle_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTDxInteractorStyle_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTDxInteractorStyle\nC++: vtkTDxInteractorStyle *NewInstance()\n\n"},
  {(char*)"OnMotionEvent", PyvtkTDxInteractorStyle_OnMotionEvent, 1,
   (char*)"V.OnMotionEvent(vtkTDxMotionEventInfo)\nC++: virtual void OnMotionEvent(vtkTDxMotionEventInfo *motionInfo)\n\nAction on motion event. Default implementation is empty.\n\\pre: motionInfo_exist: motionInfo!=0\n"},
  {(char*)"OnButtonPressedEvent", PyvtkTDxInteractorStyle_OnButtonPressedEvent, 1,
   (char*)"V.OnButtonPressedEvent(int)\nC++: virtual void OnButtonPressedEvent(int button)\n\nAction on button pressed event. Default implementation is empty.\n"},
  {(char*)"OnButtonReleasedEvent", PyvtkTDxInteractorStyle_OnButtonReleasedEvent, 1,
   (char*)"V.OnButtonReleasedEvent(int)\nC++: virtual void OnButtonReleasedEvent(int button)\n\nAction on button released event. Default implementation is empty.\n"},
  {(char*)"ProcessEvent", PyvtkTDxInteractorStyle_ProcessEvent, 1,
   (char*)"V.ProcessEvent(vtkRenderer, int, )\nC++: virtual void ProcessEvent(vtkRenderer *renderer,\n    unsigned long event, void *calldata)\n\nDispatch the events TDxMotionEvent, TDxButtonPressEvent and\nTDxButtonReleaseEvent to OnMotionEvent(), OnButtonPressedEvent()\nand OnButtonReleasedEvent() respectively. It is called by the\nvtkInteractorStyle. This method is virtual for convenient but you\nshould really override the On*Event() methods only.\n\\pre renderer can be null.\n"},
  {(char*)"GetSettings", PyvtkTDxInteractorStyle_GetSettings, 1,
   (char*)"V.GetSettings() -> vtkTDxInteractorStyleSettings\nC++: vtkTDxInteractorStyleSettings *GetSettings()\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {(char*)"SetSettings", PyvtkTDxInteractorStyle_SetSettings, 1,
   (char*)"V.SetSettings(vtkTDxInteractorStyleSettings)\nC++: virtual void SetSettings(\n    vtkTDxInteractorStyleSettings *settings)\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTDxInteractorStyle_Methods,
    "vtkTDxInteractorStyle", modulename,
    NULL, NULL,
    PyvtkTDxInteractorStyle_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTDxInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkTDxInteractorStyle - provide 3DConnexion device event-driven\ninterface to the rendering window\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTDxInteractorStyle is an abstract class defining an event-driven\ninterface to support 3DConnexion device events send by\nvtkRenderWindowInteractor. vtkRenderWindowInteractor forwards events\nin a platform independent form to vtkInteractorStyle which can then\ndelegate some processing to vtkTDxInteractorStyle.\n\nSee Also:\n\nvtkInteractorStyle vtkRenderWindowInteractor\nvtkTDxInteractorStyleCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTDxInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTDxInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTDxInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

}

