// python wrapper for vtkSplineWidget2
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
#include "vtkSplineWidget2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplineWidget2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplineWidget2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplineWidget2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplineWidget2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkSplineWidget2_Doc();


static PyObject *
PyvtkSplineWidget2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget2 *op = static_cast<vtkSplineWidget2 *>(vp);

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
      tempr = op->vtkSplineWidget2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget2 *op = static_cast<vtkSplineWidget2 *>(vp);

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
      tempr = op->vtkSplineWidget2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget2 *op = static_cast<vtkSplineWidget2 *>(vp);

  vtkSplineWidget2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplineWidget2::NewInstance();
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
PyvtkSplineWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplineWidget2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplineWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget2 *op = static_cast<vtkSplineWidget2 *>(vp);

  vtkSplineRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSplineRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkSplineWidget2::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget2 *op = static_cast<vtkSplineWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkSplineWidget2::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineWidget2_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineWidget2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineWidget2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineWidget2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplineWidget2\nC++: vtkSplineWidget2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineWidget2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineWidget2\nC++: vtkSplineWidget2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRepresentation", PyvtkSplineWidget2_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkSplineRepresentation)\nC++: void SetRepresentation(vtkSplineRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSplineWidget2_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkSplineRepresentation\nclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineWidget2_StaticNew()
{
  return vtkSplineWidget2::New();
}

PyObject *PyVTKClass_vtkSplineWidget2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineWidget2_StaticNew,
    PyvtkSplineWidget2_Methods,
    "vtkSplineWidget2", modulename,
    NULL, NULL,
    PyvtkSplineWidget2_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkSplineWidget2_Doc()
{
  static const char *docstring[] = {
    "vtkSplineWidget2 - widget for vtkSplineRepresentation.\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "vtkSplineWidget2 is the vtkAbstractWidget subclass for\nvtkSplineRepresentation which manages the interactions with\nvtkSplineRepresentation. This is based on vtkSplineWidget.\n\nSee Also:\n\nvtkSplineRepresentation, vtkSplineWidget2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineWidget2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineWidget2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineWidget2", o) != 0)
    {
    Py_DECREF(o);
    }

}

