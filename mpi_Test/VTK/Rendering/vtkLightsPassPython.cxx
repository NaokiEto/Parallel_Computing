// python wrapper for vtkLightsPass
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
#include "vtkLightsPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLightsPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLightsPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLightsPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLightsPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderPassNew
extern "C" { PyObject *PyVTKClass_vtkRenderPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderPassNew
#endif

static const char **PyvtkLightsPass_Doc();


static PyObject *
PyvtkLightsPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightsPass *op = static_cast<vtkLightsPass *>(vp);

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
      tempr = op->vtkLightsPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightsPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightsPass *op = static_cast<vtkLightsPass *>(vp);

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
      tempr = op->vtkLightsPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightsPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightsPass *op = static_cast<vtkLightsPass *>(vp);

  vtkLightsPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLightsPass::NewInstance();
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
PyvtkLightsPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLightsPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLightsPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLightsPass_Methods[] = {
  {(char*)"GetClassName", PyvtkLightsPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLightsPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLightsPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLightsPass\nC++: vtkLightsPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLightsPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLightsPass\nC++: vtkLightsPass *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLightsPass_StaticNew()
{
  return vtkLightsPass::New();
}

PyObject *PyVTKClass_vtkLightsPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLightsPass_StaticNew,
    PyvtkLightsPass_Methods,
    "vtkLightsPass", modulename,
    NULL, NULL,
    PyvtkLightsPass_Doc(),
    PyVTKClass_vtkRenderPassNew(modulename));
  return cls;
}

const char **PyvtkLightsPass_Doc()
{
  static const char *docstring[] = {
    "vtkLightsPass - Implement the lights render pass.\n\n",
    "Superclass: vtkRenderPass\n\n",
    "Render the lights.\n\nThis pass expects an initialized camera. It disables all the lights,\napply transformations for lights following the camera, and turn on\nthe enables lights.\n\nSee Also:\n\nvtkRenderPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLightsPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLightsPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLightsPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

