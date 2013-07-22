// python wrapper for vtkContextClip
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
#include "vtkContextClip.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextClip(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextClip(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextClipNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextClipNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractContextItemNew
extern "C" { PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractContextItemNew
#endif

static const char **PyvtkContextClip_Doc();


static PyObject *
PyvtkContextClip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

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
      tempr = op->vtkContextClip::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

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
      tempr = op->vtkContextClip::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  vtkContextClip *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextClip::NewInstance();
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
PyvtkContextClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkContextClip *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkContextClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextClip_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkContextClip::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextClip_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

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
      tempr = op->vtkContextClip::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextClip_SetClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetClip(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContextClip::SetClip(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContextClip_Methods[] = {
  {(char*)"GetClassName", PyvtkContextClip_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextClip_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextClip_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextClip\nC++: vtkContextClip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextClip_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextClip\nC++: vtkContextClip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkContextClip_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkContextClip_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {(char*)"SetClip", PyvtkContextClip_SetClip, 1,
   (char*)"V.SetClip(float, float, float, float)\nC++: virtual void SetClip(float x, float y, float width,\n    float height)\n\nSet the origin, width and height of the clipping rectangle. These\nare in pixel coordinates.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextClip_StaticNew()
{
  return vtkContextClip::New();
}

PyObject *PyVTKClass_vtkContextClipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextClip_StaticNew,
    PyvtkContextClip_Methods,
    "vtkContextClip", modulename,
    NULL, NULL,
    PyvtkContextClip_Doc(),
    PyVTKClass_vtkAbstractContextItemNew(modulename));
  return cls;
}

const char **PyvtkContextClip_Doc()
{
  static const char *docstring[] = {
    "vtkContextClip - all children of this item are clipped\n\n",
    "Superclass: vtkAbstractContextItem\n\n",
    "This class can be used to clip the rendering of an item inside a\nrectangular area.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextClip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextClipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextClip", o) != 0)
    {
    Py_DECREF(o);
    }

}

