// python wrapper for vtkImplicitPlaneWidget2
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
#include "vtkImplicitPlaneWidget2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitPlaneWidget2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitPlaneWidget2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitPlaneWidget2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitPlaneWidget2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkImplicitPlaneWidget2_Doc();


static PyObject *
PyvtkImplicitPlaneWidget2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

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
      tempr = op->vtkImplicitPlaneWidget2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

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
      tempr = op->vtkImplicitPlaneWidget2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  vtkImplicitPlaneWidget2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitPlaneWidget2::NewInstance();
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
PyvtkImplicitPlaneWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitPlaneWidget2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitPlaneWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  vtkImplicitPlaneRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitPlaneRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkImplicitPlaneWidget2::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitPlaneRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  vtkImplicitPlaneRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImplicitPlaneRepresentation();
      }
    else
      {
      tempr = op->vtkImplicitPlaneWidget2::GetImplicitPlaneRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkImplicitPlaneWidget2::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneWidget2_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitPlaneWidget2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard vtkObject methods\n"},
  {(char*)"IsA", PyvtkImplicitPlaneWidget2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard vtkObject methods\n"},
  {(char*)"NewInstance", PyvtkImplicitPlaneWidget2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitPlaneWidget2\nC++: vtkImplicitPlaneWidget2 *NewInstance()\n\nStandard vtkObject methods\n"},
  {(char*)"SafeDownCast", PyvtkImplicitPlaneWidget2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitPlaneWidget2\nC++: vtkImplicitPlaneWidget2 *SafeDownCast(vtkObject* o)\n\nStandard vtkObject methods\n"},
  {(char*)"SetRepresentation", PyvtkImplicitPlaneWidget2_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkImplicitPlaneRepresentation)\nC++: void SetRepresentation(vtkImplicitPlaneRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetImplicitPlaneRepresentation", PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation, 1,
   (char*)"V.GetImplicitPlaneRepresentation()\n    -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *GetImplicitPlaneRepresentation(\n    )\n\nReturn the representation as a vtkImplicitPlaneRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation, 1,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitPlaneWidget2_StaticNew()
{
  return vtkImplicitPlaneWidget2::New();
}

PyObject *PyVTKClass_vtkImplicitPlaneWidget2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitPlaneWidget2_StaticNew,
    PyvtkImplicitPlaneWidget2_Methods,
    "vtkImplicitPlaneWidget2", modulename,
    NULL, NULL,
    PyvtkImplicitPlaneWidget2_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkImplicitPlaneWidget2_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitPlaneWidget2 - 3D widget for manipulating an infinite plane\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This 3D widget defines an infinite plane that can be interactively\nplaced in a scene. The widget is assumed to consist of four parts: 1)\na plane contained in a 2) bounding box, with a 3) plane normal, which\nis rooted at a 4) point on the plane. (The representation paired with\nthis widget determines the actual geometry of the widget.)\n\nTo use this widget, you generally pair it with a\nvtkImplicitPla",
    "neRepresentation (or a subclass). Variuos options are\navailable for controlling how the representation appears, and how the\nwidget functions.\n\nCaveats:\n\nNote that the widget can be picked even when it is \"behind\" other\nactors.  This is an intended feature and not a bug.\n\nThis class, and vtkImplicitPlaneRepresentation, are next generation\nVTK widgets. An earlier version of this functionality was de",
    "fined in\nthe class vtkImplicitPlaneWidget.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\nvtkSphereWidget vtkImagePlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitPlaneWidget2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitPlaneWidget2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitPlaneWidget2", o) != 0)
    {
    Py_DECREF(o);
    }

}

