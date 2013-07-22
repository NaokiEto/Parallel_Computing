// python wrapper for vtkTranslucentPass
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
#include "vtkTranslucentPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTranslucentPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTranslucentPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTranslucentPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTranslucentPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDefaultPassNew
extern "C" { PyObject *PyVTKClass_vtkDefaultPassNew(const char *); }
#define DECLARED_PyVTKClass_vtkDefaultPassNew
#endif

static const char **PyvtkTranslucentPass_Doc();


static PyObject *
PyvtkTranslucentPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTranslucentPass *op = static_cast<vtkTranslucentPass *>(vp);

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
      tempr = op->vtkTranslucentPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTranslucentPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTranslucentPass *op = static_cast<vtkTranslucentPass *>(vp);

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
      tempr = op->vtkTranslucentPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTranslucentPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTranslucentPass *op = static_cast<vtkTranslucentPass *>(vp);

  vtkTranslucentPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTranslucentPass::NewInstance();
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
PyvtkTranslucentPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTranslucentPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTranslucentPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTranslucentPass_Methods[] = {
  {(char*)"GetClassName", PyvtkTranslucentPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTranslucentPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTranslucentPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTranslucentPass\nC++: vtkTranslucentPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTranslucentPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTranslucentPass\nC++: vtkTranslucentPass *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTranslucentPass_StaticNew()
{
  return vtkTranslucentPass::New();
}

PyObject *PyVTKClass_vtkTranslucentPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTranslucentPass_StaticNew,
    PyvtkTranslucentPass_Methods,
    "vtkTranslucentPass", modulename,
    NULL, NULL,
    PyvtkTranslucentPass_Doc(),
    PyVTKClass_vtkDefaultPassNew(modulename));
  return cls;
}

const char **PyvtkTranslucentPass_Doc()
{
  static const char *docstring[] = {
    "vtkTranslucentPass - Render the translucent polygonal geometry\n\n",
    "Superclass: vtkDefaultPass\n\n",
    "vtkTranslucentPass renders the translucent polygonal geometry of all\nthe props that have the keys contained in vtkRenderState.\n\nThis pass expects an initialized depth buffer and color buffer.\nInitialized buffers means they have been cleared with farest z-value\nand background color/gradient/transparent color.\n\nSee Also:\n\nvtkRenderPass vtkDefaultPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTranslucentPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTranslucentPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTranslucentPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

