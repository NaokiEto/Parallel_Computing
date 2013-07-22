// python wrapper for vtkContextItem
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
#include "vtkContextItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractContextItemNew
extern "C" { PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractContextItemNew
#endif

static const char **PyvtkContextItem_Doc();


static PyObject *
PyvtkContextItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextItem *op = static_cast<vtkContextItem *>(vp);

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
      tempr = op->vtkContextItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextItem *op = static_cast<vtkContextItem *>(vp);

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
      tempr = op->vtkContextItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextItem *op = static_cast<vtkContextItem *>(vp);

  vtkContextItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextItem::NewInstance();
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
PyvtkContextItem_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextItem *op = static_cast<vtkContextItem *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity();
      }
    else
      {
      tempr = op->vtkContextItem::GetOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextItem_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextItem *op = static_cast<vtkContextItem *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkContextItem::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContextItem_Methods[] = {
  {(char*)"GetClassName", PyvtkContextItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextItem\nC++: vtkContextItem *NewInstance()\n\n"},
  {(char*)"GetOpacity", PyvtkContextItem_GetOpacity, 1,
   (char*)"V.GetOpacity() -> float\nC++: double GetOpacity()\n\nGet the opacity of the item.\n"},
  {(char*)"SetOpacity", PyvtkContextItem_SetOpacity, 1,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double a)\n\nSet the opacity of the item. 1.0 by default.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkContextItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkContextItem_Methods,
    "vtkContextItem", modulename,
    NULL, NULL,
    PyvtkContextItem_Doc(),
    PyVTKClass_vtkAbstractContextItemNew(modulename));
  return cls;
}

const char **PyvtkContextItem_Doc()
{
  static const char *docstring[] = {
    "vtkContextItem - base class for items that are part of a\nvtkContextScene.\n\n",
    "Superclass: vtkAbstractContextItem\n\n",
    "Derive from this class to create custom items that can be added to a\nvtkContextScene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

