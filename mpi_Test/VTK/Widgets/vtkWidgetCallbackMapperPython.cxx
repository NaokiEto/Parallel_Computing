// python wrapper for vtkWidgetCallbackMapper
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
#include "vtkWidgetCallbackMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWidgetCallbackMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWidgetCallbackMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWidgetCallbackMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWidgetCallbackMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWidgetCallbackMapper_Doc();


static PyObject *
PyvtkWidgetCallbackMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

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
      tempr = op->vtkWidgetCallbackMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

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
      tempr = op->vtkWidgetCallbackMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  vtkWidgetCallbackMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWidgetCallbackMapper::NewInstance();
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
PyvtkWidgetCallbackMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWidgetCallbackMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWidgetCallbackMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_SetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  vtkWidgetEventTranslator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWidgetEventTranslator"))
    {
    if (ap.IsBound())
      {
      op->SetEventTranslator(temp0);
      }
    else
      {
      op->vtkWidgetCallbackMapper::SetEventTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_GetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  vtkWidgetEventTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEventTranslator();
      }
    else
      {
      tempr = op->vtkWidgetCallbackMapper::GetEventTranslator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_InvokeCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InvokeCallback(temp0);
      }
    else
      {
      op->vtkWidgetCallbackMapper::InvokeCallback(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetCallbackMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkWidgetCallbackMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkWidgetCallbackMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkWidgetCallbackMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWidgetCallbackMapper\nC++: vtkWidgetCallbackMapper *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkWidgetCallbackMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWidgetCallbackMapper\nC++: vtkWidgetCallbackMapper *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetEventTranslator", PyvtkWidgetCallbackMapper_SetEventTranslator, 1,
   (char*)"V.SetEventTranslator(vtkWidgetEventTranslator)\nC++: void SetEventTranslator(vtkWidgetEventTranslator *t)\n\nSpecify the vtkWidgetEventTranslator to coordinate with.\n"},
  {(char*)"GetEventTranslator", PyvtkWidgetCallbackMapper_GetEventTranslator, 1,
   (char*)"V.GetEventTranslator() -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *GetEventTranslator()\n\nSpecify the vtkWidgetEventTranslator to coordinate with.\n"},
  {(char*)"InvokeCallback", PyvtkWidgetCallbackMapper_InvokeCallback, 1,
   (char*)"V.InvokeCallback(int)\nC++: void InvokeCallback(unsigned long widgetEvent)\n\nThis method invokes the callback given a widget event. A non-zero\nvalue is returned if the listed event is registered.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWidgetCallbackMapper_StaticNew()
{
  return vtkWidgetCallbackMapper::New();
}

PyObject *PyVTKClass_vtkWidgetCallbackMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWidgetCallbackMapper_StaticNew,
    PyvtkWidgetCallbackMapper_Methods,
    "vtkWidgetCallbackMapper", modulename,
    NULL, NULL,
    PyvtkWidgetCallbackMapper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWidgetCallbackMapper_Doc()
{
  static const char *docstring[] = {
    "vtkWidgetCallbackMapper - map widget events into callbacks\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWidgetCallbackMapper maps widget events (defined in\nvtkWidgetEvent.h) into static class methods, and provides facilities\nto invoke the methods. This class is templated and meant to be used\nas an internal helper class by the widget classes. The class works in\ncombination with the class vtkWidgetEventTranslator, which translates\nVTK events into widget events.\n\nSee Also:\n\nvtkWidgetEvent vtkWidgetE",
    "ventTranslator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWidgetCallbackMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWidgetCallbackMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWidgetCallbackMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

