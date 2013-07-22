// python wrapper for vtkOpaquePass
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
#include "vtkOpaquePass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpaquePass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpaquePass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpaquePassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpaquePassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDefaultPassNew
extern "C" { PyObject *PyVTKClass_vtkDefaultPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkDefaultPassNew
#endif

static const char **PyvtkOpaquePass_Doc();


static PyObject *
PyvtkOpaquePass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpaquePass *op = static_cast<vtkOpaquePass *>(vp);

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
      tempr = op->vtkOpaquePass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpaquePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpaquePass *op = static_cast<vtkOpaquePass *>(vp);

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
      tempr = op->vtkOpaquePass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpaquePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpaquePass *op = static_cast<vtkOpaquePass *>(vp);

  vtkOpaquePass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpaquePass::NewInstance();
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
PyvtkOpaquePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpaquePass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpaquePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpaquePass_Methods[] = {
  {(char*)"GetClassName", PyvtkOpaquePass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpaquePass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpaquePass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpaquePass\nC++: vtkOpaquePass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpaquePass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpaquePass\nC++: vtkOpaquePass *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpaquePass_StaticNew()
{
  return vtkOpaquePass::New();
}

PyObject *PyVTKClass_vtkOpaquePassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpaquePass_StaticNew,
    PyvtkOpaquePass_Methods,
    "vtkOpaquePass", modulename,
    NULL, NULL,
    PyvtkOpaquePass_Doc(),
    PyVTKClass_vtkDefaultPassNew(modulename));
  return cls;
}

const char **PyvtkOpaquePass_Doc()
{
  static const char *docstring[] = {
    "vtkOpaquePass - Render the opaque geometry with property key\n\n",
    "Superclass: vtkDefaultPass\n\n",
    "vtkOpaquePass renders the opaque geometry of all the props that have\nthe keys contained in vtkRenderState.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color.\n\nSee Also:\n\nvtkRenderPass vtkDefaultPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpaquePass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpaquePassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpaquePass", o) != 0)
    {
    Py_DECREF(o);
    }

}

