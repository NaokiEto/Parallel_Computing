// python wrapper for vtkFileOutputWindow
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
#include "vtkFileOutputWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFileOutputWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFileOutputWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFileOutputWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFileOutputWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkOutputWindowNew
extern "C" { PyObject *PyVTKClass_vtkOutputWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkOutputWindowNew
#endif

static const char **PyvtkFileOutputWindow_Doc();


static PyObject *
PyvtkFileOutputWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

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
      tempr = op->vtkFileOutputWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

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
      tempr = op->vtkFileOutputWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  vtkFileOutputWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFileOutputWindow::NewInstance();
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
PyvtkFileOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFileOutputWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFileOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayText(temp0);
      }
    else
      {
      op->vtkFileOutputWindow::DisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkFileOutputWindow::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkFileOutputWindow::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SetFlush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlush(temp0);
      }
    else
      {
      op->vtkFileOutputWindow::SetFlush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetFlush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlush();
      }
    else
      {
      tempr = op->vtkFileOutputWindow::GetFlush();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_FlushOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlushOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlushOn();
      }
    else
      {
      op->vtkFileOutputWindow::FlushOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_FlushOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlushOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlushOff();
      }
    else
      {
      op->vtkFileOutputWindow::FlushOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAppend(temp0);
      }
    else
      {
      op->vtkFileOutputWindow::SetAppend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAppend();
      }
    else
      {
      tempr = op->vtkFileOutputWindow::GetAppend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_AppendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendOn();
      }
    else
      {
      op->vtkFileOutputWindow::AppendOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_AppendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendOff();
      }
    else
      {
      op->vtkFileOutputWindow::AppendOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFileOutputWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkFileOutputWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFileOutputWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFileOutputWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFileOutputWindow\nC++: vtkFileOutputWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFileOutputWindow_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFileOutputWindow\nC++: vtkFileOutputWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DisplayText", PyvtkFileOutputWindow_DisplayText, 1,
   (char*)"V.DisplayText(string)\nC++: virtual void DisplayText(const char *)\n\nPut the text into the log file. New lines are converted to\ncarriage return new lines.\n"},
  {(char*)"SetFileName", PyvtkFileOutputWindow_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSets the name for the log file.\n"},
  {(char*)"GetFileName", PyvtkFileOutputWindow_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSets the name for the log file.\n"},
  {(char*)"SetFlush", PyvtkFileOutputWindow_SetFlush, 1,
   (char*)"V.SetFlush(int)\nC++: void SetFlush(int a)\n\nTurns on buffer flushing for the output to the log file.\n"},
  {(char*)"GetFlush", PyvtkFileOutputWindow_GetFlush, 1,
   (char*)"V.GetFlush() -> int\nC++: int GetFlush()\n\nTurns on buffer flushing for the output to the log file.\n"},
  {(char*)"FlushOn", PyvtkFileOutputWindow_FlushOn, 1,
   (char*)"V.FlushOn()\nC++: void FlushOn()\n\nTurns on buffer flushing for the output to the log file.\n"},
  {(char*)"FlushOff", PyvtkFileOutputWindow_FlushOff, 1,
   (char*)"V.FlushOff()\nC++: void FlushOff()\n\nTurns on buffer flushing for the output to the log file.\n"},
  {(char*)"SetAppend", PyvtkFileOutputWindow_SetAppend, 1,
   (char*)"V.SetAppend(int)\nC++: void SetAppend(int a)\n\nSetting append will cause the log file to be opened in append\nmode.  Otherwise, if the log file exists, it will be overwritten\neach time the vtkFileOutputWindow is created.\n"},
  {(char*)"GetAppend", PyvtkFileOutputWindow_GetAppend, 1,
   (char*)"V.GetAppend() -> int\nC++: int GetAppend()\n\nSetting append will cause the log file to be opened in append\nmode.  Otherwise, if the log file exists, it will be overwritten\neach time the vtkFileOutputWindow is created.\n"},
  {(char*)"AppendOn", PyvtkFileOutputWindow_AppendOn, 1,
   (char*)"V.AppendOn()\nC++: void AppendOn()\n\nSetting append will cause the log file to be opened in append\nmode.  Otherwise, if the log file exists, it will be overwritten\neach time the vtkFileOutputWindow is created.\n"},
  {(char*)"AppendOff", PyvtkFileOutputWindow_AppendOff, 1,
   (char*)"V.AppendOff()\nC++: void AppendOff()\n\nSetting append will cause the log file to be opened in append\nmode.  Otherwise, if the log file exists, it will be overwritten\neach time the vtkFileOutputWindow is created.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFileOutputWindow_StaticNew()
{
  return vtkFileOutputWindow::New();
}

PyObject *PyVTKClass_vtkFileOutputWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFileOutputWindow_StaticNew,
    PyvtkFileOutputWindow_Methods,
    "vtkFileOutputWindow", modulename,
    NULL, NULL,
    PyvtkFileOutputWindow_Doc(),
    PyVTKClass_vtkOutputWindowNew(modulename));
  return cls;
}

const char **PyvtkFileOutputWindow_Doc()
{
  static const char *docstring[] = {
    "vtkFileOutputWindow - File Specific output window class\n\n",
    "Superclass: vtkOutputWindow\n\n",
    "Writes debug/warning/error output to a log file instead of the\nconsole. To use this class, instantiate it and then call\nSetInstance(this).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFileOutputWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFileOutputWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFileOutputWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

