// python wrapper for vtkImageConstantPad
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
#include "vtkImageConstantPad.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageConstantPad(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageConstantPad(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageConstantPadNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageConstantPadNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImagePadFilterNew
extern "C" { PyObject *PyVTKClass_vtkImagePadFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImagePadFilterNew
#endif

static const char **PyvtkImageConstantPad_Doc();


static PyObject *
PyvtkImageConstantPad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

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
      tempr = op->vtkImageConstantPad::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

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
      tempr = op->vtkImageConstantPad::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  vtkImageConstantPad *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageConstantPad::NewInstance();
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
PyvtkImageConstantPad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageConstantPad *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageConstantPad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_SetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstant(temp0);
      }
    else
      {
      op->vtkImageConstantPad::SetConstant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_GetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConstant();
      }
    else
      {
      tempr = op->vtkImageConstantPad::GetConstant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageConstantPad_Methods[] = {
  {(char*)"GetClassName", PyvtkImageConstantPad_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageConstantPad_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageConstantPad_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageConstantPad\nC++: vtkImageConstantPad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageConstantPad_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageConstantPad\nC++: vtkImageConstantPad *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConstant", PyvtkImageConstantPad_SetConstant, 1,
   (char*)"V.SetConstant(float)\nC++: void SetConstant(double a)\n\nSet/Get the pad value.\n"},
  {(char*)"GetConstant", PyvtkImageConstantPad_GetConstant, 1,
   (char*)"V.GetConstant() -> float\nC++: double GetConstant()\n\nSet/Get the pad value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageConstantPad_StaticNew()
{
  return vtkImageConstantPad::New();
}

PyObject *PyVTKClass_vtkImageConstantPadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageConstantPad_StaticNew,
    PyvtkImageConstantPad_Methods,
    "vtkImageConstantPad", modulename,
    NULL, NULL,
    PyvtkImageConstantPad_Doc(),
    PyVTKClass_vtkImagePadFilterNew(modulename));
  return cls;
}

const char **PyvtkImageConstantPad_Doc()
{
  static const char *docstring[] = {
    "vtkImageConstantPad - Makes image larger by padding with constant.\n\n",
    "Superclass: vtkImagePadFilter\n\n",
    "vtkImageConstantPad changes the image extent of its input. Any pixels\noutside of the original image extent are filled with a constant value\n(default is 0.0).\n\nSee Also:\n\nvtkImageWrapPad vtkImageMirrorPad\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageConstantPad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageConstantPadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageConstantPad", o) != 0)
    {
    Py_DECREF(o);
    }

}

