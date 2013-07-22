// python wrapper for vtkDefaultPass
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
#include "vtkDefaultPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDefaultPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDefaultPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDefaultPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDefaultPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkDefaultPass_Doc();


static PyObject *
PyvtkDefaultPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPass *op = static_cast<vtkDefaultPass *>(vp);

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
      tempr = op->vtkDefaultPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPass *op = static_cast<vtkDefaultPass *>(vp);

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
      tempr = op->vtkDefaultPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPass *op = static_cast<vtkDefaultPass *>(vp);

  vtkDefaultPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDefaultPass::NewInstance();
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
PyvtkDefaultPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDefaultPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDefaultPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDefaultPass_Methods[] = {
  {(char*)"GetClassName", PyvtkDefaultPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDefaultPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDefaultPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDefaultPass\nC++: vtkDefaultPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDefaultPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDefaultPass\nC++: vtkDefaultPass *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDefaultPass_StaticNew()
{
  return vtkDefaultPass::New();
}

PyObject *PyVTKClass_vtkDefaultPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDefaultPass_StaticNew,
    PyvtkDefaultPass_Methods,
    "vtkDefaultPass", modulename,
    NULL, NULL,
    PyvtkDefaultPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkDefaultPass_Doc()
{
  static const char *docstring[] = {
    "vtkDefaultPass - Implement the basic render passes.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "vtkDefaultPass implements the basic standard render passes of VTK.\nSubclasses can easily be implemented by reusing some parts of the\nbasic implementation.\n\nIt implements classic Render operations as well as versions with\nproperty key checking.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/g",
    "radient/transparent color.\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDefaultPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDefaultPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDefaultPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

