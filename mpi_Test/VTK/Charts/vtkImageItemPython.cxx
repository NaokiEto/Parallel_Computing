// python wrapper for vtkImageItem
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
#include "vtkImageItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkImageItem_Doc();


static PyObject *
PyvtkImageItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

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
      tempr = op->vtkImageItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

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
      tempr = op->vtkImageItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

  vtkImageItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageItem::NewInstance();
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
PyvtkImageItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

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
      tempr = op->vtkImageItem::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageItem_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkImageItem::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageItem_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImage();
      }
    else
      {
      tempr = op->vtkImageItem::GetImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageItem_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkImageItem::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageItem_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkImageItem::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageItem_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageItem_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageItem_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkImageItem_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageItem *op = static_cast<vtkImageItem *>(vp);

  float *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkImageItem::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageItem_Methods[] = {
  {(char*)"GetClassName", PyvtkImageItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageItem\nC++: vtkImageItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageItem\nC++: vtkImageItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkImageItem_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item.\n"},
  {(char*)"SetImage", PyvtkImageItem_SetImage, 1,
   (char*)"V.SetImage(vtkImageData)\nC++: void SetImage(vtkImageData *image)\n\nSet the image of the item.\n"},
  {(char*)"GetImage", PyvtkImageItem_GetImage, 1,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nGet the image of the item.\n"},
  {(char*)"SetPosition", PyvtkImageItem_SetPosition, 1,
   (char*)"V.SetPosition(float, float)\nC++: void SetPosition(float, float)\nV.SetPosition((float, float))\nC++: void SetPosition(float a[2])\n\n"},
  {(char*)"GetPosition", PyvtkImageItem_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float)\nC++: float *GetPosition()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageItem_StaticNew()
{
  return vtkImageItem::New();
}

PyObject *PyVTKClass_vtkImageItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageItem_StaticNew,
    PyvtkImageItem_Methods,
    "vtkImageItem", modulename,
    NULL, NULL,
    PyvtkImageItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkImageItem_Doc()
{
  static const char *docstring[] = {
    "vtkImageItem - a vtkContextItem that draws a supplied image in the\n\n",
    "Superclass: vtkContextItem\n\n",
    "This vtkContextItem draws the supplied image in the scene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

