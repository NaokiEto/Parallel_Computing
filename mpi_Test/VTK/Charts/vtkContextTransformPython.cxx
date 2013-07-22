// python wrapper for vtkContextTransform
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
#include "vtkVector.h"
#include "vtkContextTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractContextItemNew
extern "C" { PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractContextItemNew
#endif

static const char **PyvtkContextTransform_Doc();


static PyObject *
PyvtkContextTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

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
      tempr = op->vtkContextTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

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
      tempr = op->vtkContextTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContextTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextTransform::NewInstance();
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
PyvtkContextTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkContextTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkContextTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkContextTransform::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

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
      tempr = op->vtkContextTransform::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Translate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0, temp1);
      }
    else
      {
      op->vtkContextTransform::Translate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0, temp1);
      }
    else
      {
      op->vtkContextTransform::Scale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Rotate(temp0);
      }
    else
      {
      op->vtkContextTransform::Rotate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkTransform2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkContextTransform::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextTransform_MapToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2f tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      tempr = op->MapToParent(*temp0);
      }
    else
      {
      tempr = op->vtkContextTransform::MapToParent(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_MapFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2f tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      tempr = op->MapFromParent(*temp0);
      }
    else
      {
      tempr = op->vtkContextTransform::MapFromParent(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContextTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkContextTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextTransform\nC++: vtkContextTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextTransform\nC++: vtkContextTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkContextTransform_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkContextTransform_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {(char*)"Translate", PyvtkContextTransform_Translate, 1,
   (char*)"V.Translate(float, float)\nC++: virtual void Translate(float dx, float dy)\n\nTranslate the item by the specified amounts dx and dy in the x\nand y directions.\n"},
  {(char*)"Scale", PyvtkContextTransform_Scale, 1,
   (char*)"V.Scale(float, float)\nC++: virtual void Scale(float dx, float dy)\n\nScale the item by the specified amounts dx and dy in the x and y\ndirections.\n"},
  {(char*)"Rotate", PyvtkContextTransform_Rotate, 1,
   (char*)"V.Rotate(float)\nC++: virtual void Rotate(float angle)\n\nRotate the item by the specified angle.\n"},
  {(char*)"GetTransform", PyvtkContextTransform_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkTransform2D\nC++: virtual vtkTransform2D *GetTransform()\n\nAccess the vtkTransform2D that controls object transformation.\n"},
  {(char*)"MapToParent", PyvtkContextTransform_MapToParent, 1,
   (char*)"V.MapToParent(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapToParent(const vtkVector2f &point)\n\nTransforms a point to the parent coordinate system.\n"},
  {(char*)"MapFromParent", PyvtkContextTransform_MapFromParent, 1,
   (char*)"V.MapFromParent(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapFromParent(const vtkVector2f &point)\n\nTransforms a point from the parent coordinate system.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextTransform_StaticNew()
{
  return vtkContextTransform::New();
}

PyObject *PyVTKClass_vtkContextTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextTransform_StaticNew,
    PyvtkContextTransform_Methods,
    "vtkContextTransform", modulename,
    NULL, NULL,
    PyvtkContextTransform_Doc(),
    PyVTKClass_vtkAbstractContextItemNew(modulename));
  return cls;
}

const char **PyvtkContextTransform_Doc()
{
  static const char *docstring[] = {
    "vtkContextTransform - all children of this item are transformed\n\n",
    "Superclass: vtkAbstractContextItem\n\n",
    "This class can be used to transform all child items of this class.\nThe default transform is the identity.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

