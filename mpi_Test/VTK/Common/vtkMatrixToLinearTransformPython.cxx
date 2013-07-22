// python wrapper for vtkMatrixToLinearTransform
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
#include "vtkMatrixToLinearTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMatrixToLinearTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMatrixToLinearTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMatrixToLinearTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMatrixToLinearTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLinearTransformNew
extern "C" { PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearTransformNew
#endif

static const char **PyvtkMatrixToLinearTransform_Doc();


static PyObject *
PyvtkMatrixToLinearTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

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
      tempr = op->vtkMatrixToLinearTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

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
      tempr = op->vtkMatrixToLinearTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  vtkMatrixToLinearTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMatrixToLinearTransform::NewInstance();
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
PyvtkMatrixToLinearTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMatrixToLinearTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMatrixToLinearTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkMatrixToLinearTransform::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkMatrixToLinearTransform::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkMatrixToLinearTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkMatrixToLinearTransform::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->MakeTransform();
      }
    else
      {
      tempr = op->vtkMatrixToLinearTransform::MakeTransform();
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


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkMatrixToLinearTransform_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkMatrixToLinearTransform::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkMatrixToLinearTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkMatrixToLinearTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatrixToLinearTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatrixToLinearTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMatrixToLinearTransform\nC++: vtkMatrixToLinearTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatrixToLinearTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatrixToLinearTransform\nC++: vtkMatrixToLinearTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkMatrixToLinearTransform_SetInput, 1,
   (char*)"V.SetInput(vtkMatrix4x4)\nC++: virtual void SetInput(vtkMatrix4x4 *)\n\nSet the input matrix.  Any modifications to the matrix will be\nreflected in the transformation.\n"},
  {(char*)"GetInput", PyvtkMatrixToLinearTransform_GetInput, 1,
   (char*)"V.GetInput() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetInput()\n\nSet the input matrix.  Any modifications to the matrix will be\nreflected in the transformation.\n"},
  {(char*)"Inverse", PyvtkMatrixToLinearTransform_Inverse, 1,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nThe input matrix is left as-is, but the transformation matrix is\ninverted.\n"},
  {(char*)"GetMTime", PyvtkMatrixToLinearTransform_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime: this is the bit of magic that makes everything\nwork.\n"},
  {(char*)"MakeTransform", PyvtkMatrixToLinearTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake a new transform of the same type.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetMatrix", PyvtkMatrixToLinearTransform_SetMatrix, 1,
   (char*)"V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\n\n@deprecated This method is deprecated.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatrixToLinearTransform_StaticNew()
{
  return vtkMatrixToLinearTransform::New();
}

PyObject *PyVTKClass_vtkMatrixToLinearTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatrixToLinearTransform_StaticNew,
    PyvtkMatrixToLinearTransform_Methods,
    "vtkMatrixToLinearTransform", modulename,
    NULL, NULL,
    PyvtkMatrixToLinearTransform_Doc(),
    PyVTKClass_vtkLinearTransformNew(modulename));
  return cls;
}

const char **PyvtkMatrixToLinearTransform_Doc()
{
  static const char *docstring[] = {
    "vtkMatrixToLinearTransform - convert a matrix to a transform\n\n",
    "Superclass: vtkLinearTransform\n\n",
    "This is a very simple class which allows a vtkMatrix4x4 to be used in\nplace of a vtkLinearTransform or vtkAbstractTransform.  For example,\nif you use it as a proxy between a matrix and\nvtkTransformPolyDataFilter then any modifications to the matrix will\nautomatically be reflected in the output of the filter.\n\nSee Also:\n\nvtkTransform vtkMatrix4x4 vtkMatrixToHomogeneousTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatrixToLinearTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatrixToLinearTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatrixToLinearTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

