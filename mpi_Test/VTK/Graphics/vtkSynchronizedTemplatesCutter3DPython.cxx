// python wrapper for vtkSynchronizedTemplatesCutter3D
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
#include "vtkSynchronizedTemplatesCutter3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSynchronizedTemplates3DNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedTemplates3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedTemplates3DNew
#endif

static const char **PyvtkSynchronizedTemplatesCutter3D_Doc();


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

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
      tempr = op->vtkSynchronizedTemplatesCutter3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

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
      tempr = op->vtkSynchronizedTemplatesCutter3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkSynchronizedTemplatesCutter3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSynchronizedTemplatesCutter3D::NewInstance();
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
PyvtkSynchronizedTemplatesCutter3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSynchronizedTemplatesCutter3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSynchronizedTemplatesCutter3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetCutFunction(temp0);
      }
    else
      {
      op->vtkSynchronizedTemplatesCutter3D::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutFunction();
      }
    else
      {
      tempr = op->vtkSynchronizedTemplatesCutter3D::GetCutFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSynchronizedTemplatesCutter3D_Methods[] = {
  {(char*)"GetClassName", PyvtkSynchronizedTemplatesCutter3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSynchronizedTemplatesCutter3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSynchronizedTemplatesCutter3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSynchronizedTemplatesCutter3D\nC++: vtkSynchronizedTemplatesCutter3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSynchronizedTemplatesCutter3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSynchronizedTemplatesCutter3D\nC++: vtkSynchronizedTemplatesCutter3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutFunction", PyvtkSynchronizedTemplatesCutter3D_SetCutFunction, 1,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkSynchronizedTemplatesCutter3D_GetCutFunction, 1,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSynchronizedTemplatesCutter3D_StaticNew()
{
  return vtkSynchronizedTemplatesCutter3D::New();
}

PyObject *PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSynchronizedTemplatesCutter3D_StaticNew,
    PyvtkSynchronizedTemplatesCutter3D_Methods,
    "vtkSynchronizedTemplatesCutter3D", modulename,
    NULL, NULL,
    PyvtkSynchronizedTemplatesCutter3D_Doc(),
    PyVTKClass_vtkSynchronizedTemplates3DNew(modulename));
  return cls;
}

const char **PyvtkSynchronizedTemplatesCutter3D_Doc()
{
  static const char *docstring[] = {
    "vtkSynchronizedTemplatesCutter3D - generate cut surface from\nstructured points\n\n",
    "Superclass: vtkSynchronizedTemplates3D\n\n",
    "vtkSynchronizedTemplatesCutter3D is an implementation of the\nsynchronized template algorithm. Note that vtkCutFilter will\nautomatically use this class when appropriate.\n\nSee Also:\n\nvtkContourFilter vtkSynchronizedTemplates3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSynchronizedTemplatesCutter3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

