// python wrapper for vtkViewUpdater
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
#include "vtkViewUpdater.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkViewUpdater(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkViewUpdater(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkViewUpdaterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkViewUpdaterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkViewUpdater_Doc();


static PyObject *
PyvtkViewUpdater_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewUpdater *op = static_cast<vtkViewUpdater *>(vp);

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
      tempr = op->vtkViewUpdater::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewUpdater_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewUpdater *op = static_cast<vtkViewUpdater *>(vp);

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
      tempr = op->vtkViewUpdater::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewUpdater_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewUpdater *op = static_cast<vtkViewUpdater *>(vp);

  vtkViewUpdater *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkViewUpdater::NewInstance();
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
PyvtkViewUpdater_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkViewUpdater *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkViewUpdater::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewUpdater_AddView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewUpdater *op = static_cast<vtkViewUpdater *>(vp);

  vtkView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkView"))
    {
    if (ap.IsBound())
      {
      op->AddView(temp0);
      }
    else
      {
      op->vtkViewUpdater::AddView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewUpdater_RemoveView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewUpdater *op = static_cast<vtkViewUpdater *>(vp);

  vtkView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkView"))
    {
    if (ap.IsBound())
      {
      op->RemoveView(temp0);
      }
    else
      {
      op->vtkViewUpdater::RemoveView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewUpdater_AddAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewUpdater *op = static_cast<vtkViewUpdater *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->AddAnnotationLink(temp0);
      }
    else
      {
      op->vtkViewUpdater::AddAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkViewUpdater_Methods[] = {
  {(char*)"GetClassName", PyvtkViewUpdater_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkViewUpdater_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkViewUpdater_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkViewUpdater\nC++: vtkViewUpdater *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkViewUpdater_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkViewUpdater\nC++: vtkViewUpdater *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddView", PyvtkViewUpdater_AddView, 1,
   (char*)"V.AddView(vtkView)\nC++: void AddView(vtkView *view)\n\n"},
  {(char*)"RemoveView", PyvtkViewUpdater_RemoveView, 1,
   (char*)"V.RemoveView(vtkView)\nC++: void RemoveView(vtkView *view)\n\n"},
  {(char*)"AddAnnotationLink", PyvtkViewUpdater_AddAnnotationLink, 1,
   (char*)"V.AddAnnotationLink(vtkAnnotationLink)\nC++: void AddAnnotationLink(vtkAnnotationLink *link)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkViewUpdater_StaticNew()
{
  return vtkViewUpdater::New();
}

PyObject *PyVTKClass_vtkViewUpdaterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkViewUpdater_StaticNew,
    PyvtkViewUpdater_Methods,
    "vtkViewUpdater", modulename,
    NULL, NULL,
    PyvtkViewUpdater_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkViewUpdater_Doc()
{
  static const char *docstring[] = {
    "vtkViewUpdater - Updates views automatically\n\n",
    "Superclass: vtkObject\n\n",
    "vtkViewUpdater registers with annotation change events for a set of\nannotation links, and updates all views when an annotation link fires\nan annotation changed event. This is often needed when multiple views\nshare a selection with vtkAnnotationLink.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkViewUpdater(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewUpdaterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkViewUpdater", o) != 0)
    {
    Py_DECREF(o);
    }

}

