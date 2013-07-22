// python wrapper for vtkBlockItem
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
#include "vtkStdString.h"
#include "vtkBlockItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBlockItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBlockItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBlockItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBlockItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkBlockItem_Doc();


static PyObject *
PyvtkBlockItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

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
      tempr = op->vtkBlockItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

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
      tempr = op->vtkBlockItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkBlockItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBlockItem::NewInstance();
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
PyvtkBlockItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBlockItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBlockItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkBlockItem::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabel(temp0);
      }
    else
      {
      op->vtkBlockItem::SetLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabel();
      }
    else
      {
      tempr = op->vtkBlockItem::GetLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockItem_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBlockItem::SetDimensions(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBlockItem_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkBlockItem::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBlockItem_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkBlockItem_SetDimensions_s1(self, args);
    case 1:
      return PyvtkBlockItem_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkBlockItem_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensions();
      }
    else
      {
      tempr = op->vtkBlockItem::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlockItem_Methods[] = {
  {(char*)"GetClassName", PyvtkBlockItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlockItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlockItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBlockItem\nC++: vtkBlockItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlockItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlockItem\nC++: vtkBlockItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkBlockItem_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item.\n"},
  {(char*)"SetLabel", PyvtkBlockItem_SetLabel, 1,
   (char*)"V.SetLabel(string)\nC++: virtual void SetLabel(const vtkStdString &label)\n\nSet the block label.\n"},
  {(char*)"GetLabel", PyvtkBlockItem_GetLabel, 1,
   (char*)"V.GetLabel() -> string\nC++: virtual vtkStdString GetLabel()\n\nGet the block label.\n"},
  {(char*)"SetDimensions", PyvtkBlockItem_SetDimensions, 1,
   (char*)"V.SetDimensions(int, int, int, int)\nC++: void SetDimensions(int, int, int, int)\nV.SetDimensions((int, int, int, int))\nC++: void SetDimensions(int a[4])\n\n"},
  {(char*)"GetDimensions", PyvtkBlockItem_GetDimensions, 1,
   (char*)"V.GetDimensions() -> (int, int, int, int)\nC++: int *GetDimensions()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlockItem_StaticNew()
{
  return vtkBlockItem::New();
}

PyObject *PyVTKClass_vtkBlockItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlockItem_StaticNew,
    PyvtkBlockItem_Methods,
    "vtkBlockItem", modulename,
    NULL, NULL,
    PyvtkBlockItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkBlockItem_Doc()
{
  static const char *docstring[] = {
    "vtkBlockItem - a vtkContextItem that draws a block (optional label).\n\n",
    "Superclass: vtkContextItem\n\n",
    "This is a vtkContextItem that can be placed into a vtkContextScene.\nIt draws a block of the given dimensions, and reacts to mouse events.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlockItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlockItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlockItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

