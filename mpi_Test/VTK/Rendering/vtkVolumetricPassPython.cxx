// python wrapper for vtkVolumetricPass
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
#include "vtkVolumetricPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumetricPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumetricPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumetricPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumetricPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDefaultPassNew
extern "C" { PyObject *PyVTKClass_vtkDefaultPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkDefaultPassNew
#endif

static const char **PyvtkVolumetricPass_Doc();


static PyObject *
PyvtkVolumetricPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumetricPass *op = static_cast<vtkVolumetricPass *>(vp);

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
      tempr = op->vtkVolumetricPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumetricPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumetricPass *op = static_cast<vtkVolumetricPass *>(vp);

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
      tempr = op->vtkVolumetricPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumetricPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumetricPass *op = static_cast<vtkVolumetricPass *>(vp);

  vtkVolumetricPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumetricPass::NewInstance();
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
PyvtkVolumetricPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumetricPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumetricPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumetricPass_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumetricPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumetricPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumetricPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumetricPass\nC++: vtkVolumetricPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumetricPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumetricPass\nC++: vtkVolumetricPass *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumetricPass_StaticNew()
{
  return vtkVolumetricPass::New();
}

PyObject *PyVTKClass_vtkVolumetricPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumetricPass_StaticNew,
    PyvtkVolumetricPass_Methods,
    "vtkVolumetricPass", modulename,
    NULL, NULL,
    PyvtkVolumetricPass_Doc(),
    PyVTKClass_vtkDefaultPassNew(modulename));
  return cls;
}

const char **PyvtkVolumetricPass_Doc()
{
  static const char *docstring[] = {
    "vtkVolumetricPass - Render the volumetric geometry with property key\n\n",
    "Superclass: vtkDefaultPass\n\n",
    "vtkVolumetricPass renders the volumetric geometry of all the props\nthat have the keys contained in vtkRenderState.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color.\n\nSee Also:\n\nvtkRenderPass vtkDefaultPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumetricPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumetricPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumetricPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

