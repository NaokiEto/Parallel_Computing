// python wrapper for vtkOverlayPass
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
#include "vtkOverlayPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOverlayPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOverlayPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOverlayPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOverlayPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDefaultPassNew
extern "C" { PyObject *PyVTKClass_vtkDefaultPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkDefaultPassNew
#endif

static const char **PyvtkOverlayPass_Doc();


static PyObject *
PyvtkOverlayPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlayPass *op = static_cast<vtkOverlayPass *>(vp);

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
      tempr = op->vtkOverlayPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlayPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlayPass *op = static_cast<vtkOverlayPass *>(vp);

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
      tempr = op->vtkOverlayPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlayPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlayPass *op = static_cast<vtkOverlayPass *>(vp);

  vtkOverlayPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOverlayPass::NewInstance();
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
PyvtkOverlayPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOverlayPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOverlayPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOverlayPass_Methods[] = {
  {(char*)"GetClassName", PyvtkOverlayPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverlayPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverlayPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOverlayPass\nC++: vtkOverlayPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOverlayPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOverlayPass\nC++: vtkOverlayPass *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverlayPass_StaticNew()
{
  return vtkOverlayPass::New();
}

PyObject *PyVTKClass_vtkOverlayPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverlayPass_StaticNew,
    PyvtkOverlayPass_Methods,
    "vtkOverlayPass", modulename,
    NULL, NULL,
    PyvtkOverlayPass_Doc(),
    PyVTKClass_vtkDefaultPassNew(modulename));
  return cls;
}

const char **PyvtkOverlayPass_Doc()
{
  static const char *docstring[] = {
    "vtkOverlayPass - Render the overlay geometry with property key\n\n",
    "Superclass: vtkDefaultPass\n\n",
    "vtkOverlayPass renders the overlay geometry of all the props that\nhave the keys contained in vtkRenderState.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color.\n\nSee Also:\n\nvtkRenderPass vtkDefaultPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverlayPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverlayPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverlayPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

