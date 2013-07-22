// python wrapper for vtkXMLFileOutputWindow
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
#include "vtkXMLFileOutputWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLFileOutputWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLFileOutputWindow(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLFileOutputWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLFileOutputWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFileOutputWindowNew
extern "C" { PyObject *PyVTKClass_vtkFileOutputWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkFileOutputWindowNew
#endif

static const char **PyvtkXMLFileOutputWindow_Doc();


static PyObject *
PyvtkXMLFileOutputWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      tempr = op->vtkXMLFileOutputWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      tempr = op->vtkXMLFileOutputWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  vtkXMLFileOutputWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLFileOutputWindow::NewInstance();
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
PyvtkXMLFileOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLFileOutputWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLFileOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

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
      op->vtkXMLFileOutputWindow::DisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayErrorText(temp0);
      }
    else
      {
      op->vtkXMLFileOutputWindow::DisplayErrorText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayWarningText(temp0);
      }
    else
      {
      op->vtkXMLFileOutputWindow::DisplayWarningText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayGenericWarningText(temp0);
      }
    else
      {
      op->vtkXMLFileOutputWindow::DisplayGenericWarningText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayDebugText(temp0);
      }
    else
      {
      op->vtkXMLFileOutputWindow::DisplayDebugText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileOutputWindow_DisplayTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileOutputWindow *op = static_cast<vtkXMLFileOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayTag(temp0);
      }
    else
      {
      op->vtkXMLFileOutputWindow::DisplayTag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLFileOutputWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLFileOutputWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLFileOutputWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLFileOutputWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLFileOutputWindow\nC++: vtkXMLFileOutputWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLFileOutputWindow_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLFileOutputWindow\nC++: vtkXMLFileOutputWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DisplayText", PyvtkXMLFileOutputWindow_DisplayText, 1,
   (char*)"V.DisplayText(string)\nC++: virtual void DisplayText(const char *)\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {(char*)"DisplayErrorText", PyvtkXMLFileOutputWindow_DisplayErrorText, 1,
   (char*)"V.DisplayErrorText(string)\nC++: virtual void DisplayErrorText(const char *)\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {(char*)"DisplayWarningText", PyvtkXMLFileOutputWindow_DisplayWarningText, 1,
   (char*)"V.DisplayWarningText(string)\nC++: virtual void DisplayWarningText(const char *)\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {(char*)"DisplayGenericWarningText", PyvtkXMLFileOutputWindow_DisplayGenericWarningText, 1,
   (char*)"V.DisplayGenericWarningText(string)\nC++: virtual void DisplayGenericWarningText(const char *)\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {(char*)"DisplayDebugText", PyvtkXMLFileOutputWindow_DisplayDebugText, 1,
   (char*)"V.DisplayDebugText(string)\nC++: virtual void DisplayDebugText(const char *)\n\nPut the text into the log file. The text is processed to replace\n&, <, > with &amp, &lt, and &gt. Each display method outputs a\ndifferent XML tag.\n"},
  {(char*)"DisplayTag", PyvtkXMLFileOutputWindow_DisplayTag, 1,
   (char*)"V.DisplayTag(string)\nC++: virtual void DisplayTag(const char *)\n\nPut the text into the log file without processing it.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLFileOutputWindow_StaticNew()
{
  return vtkXMLFileOutputWindow::New();
}

PyObject *PyVTKClass_vtkXMLFileOutputWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLFileOutputWindow_StaticNew,
    PyvtkXMLFileOutputWindow_Methods,
    "vtkXMLFileOutputWindow", modulename,
    NULL, NULL,
    PyvtkXMLFileOutputWindow_Doc(),
    PyVTKClass_vtkFileOutputWindowNew(modulename));
  return cls;
}

const char **PyvtkXMLFileOutputWindow_Doc()
{
  static const char *docstring[] = {
    "vtkXMLFileOutputWindow - XML File Specific output window class\n\n",
    "Superclass: vtkFileOutputWindow\n\n",
    "Writes debug/warning/error output to an XML file. Uses prefined XML\ntags for each text display method. The text is processed to replace\nXML markup characters.\n\n\n  DisplayText - <Text>\n\n\n  DisplayErrorText - <Error>\n\n\n  DisplayWarningText - <Warning>\n\n\n  DisplayGenericWarningText - <GenericWarning>\n\n\n  DisplayDebugText - <Debug>\n\nThe method DisplayTag outputs the text unprocessed. To use this\nclass",
    ", instantiate it and then call SetInstance(this).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLFileOutputWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLFileOutputWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLFileOutputWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

