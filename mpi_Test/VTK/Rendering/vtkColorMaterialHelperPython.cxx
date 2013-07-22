// python wrapper for vtkColorMaterialHelper
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
#include "vtkColorMaterialHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkColorMaterialHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkColorMaterialHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkColorMaterialHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkColorMaterialHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkColorMaterialHelper_Doc();


static PyObject *
PyvtkColorMaterialHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

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
      tempr = op->vtkColorMaterialHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

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
      tempr = op->vtkColorMaterialHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  vtkColorMaterialHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkColorMaterialHelper::NewInstance();
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
PyvtkColorMaterialHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkColorMaterialHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkColorMaterialHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkColorMaterialHelper::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_GetShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  vtkShaderProgram2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShader();
      }
    else
      {
      tempr = op->vtkColorMaterialHelper::GetShader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_PrepareForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForRendering();
      }
    else
      {
      op->vtkColorMaterialHelper::PrepareForRendering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorMaterialHelper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorMaterialHelper *op = static_cast<vtkColorMaterialHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkColorMaterialHelper::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkColorMaterialHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkColorMaterialHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorMaterialHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorMaterialHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkColorMaterialHelper\nC++: vtkColorMaterialHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorMaterialHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorMaterialHelper\nC++: vtkColorMaterialHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkColorMaterialHelper_Initialize, 1,
   (char*)"V.Initialize(vtkShaderProgram2)\nC++: void Initialize(vtkShaderProgram2 *)\n\n"},
  {(char*)"GetShader", PyvtkColorMaterialHelper_GetShader, 1,
   (char*)"V.GetShader() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetShader()\n\n"},
  {(char*)"PrepareForRendering", PyvtkColorMaterialHelper_PrepareForRendering, 1,
   (char*)"V.PrepareForRendering()\nC++: void PrepareForRendering()\n\nPrepares the shader i.e. reads color material parameters state\nfrom OpenGL. This must be called before the shader is bound.\n"},
  {(char*)"Render", PyvtkColorMaterialHelper_Render, 1,
   (char*)"V.Render()\nC++: void Render()\n\nUploads any uniforms needed. This must be called only after the\nshader has been bound, but before rendering the geometry.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorMaterialHelper_StaticNew()
{
  return vtkColorMaterialHelper::New();
}

PyObject *PyVTKClass_vtkColorMaterialHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorMaterialHelper_StaticNew,
    PyvtkColorMaterialHelper_Methods,
    "vtkColorMaterialHelper", modulename,
    NULL, NULL,
    PyvtkColorMaterialHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkColorMaterialHelper_Doc()
{
  static const char *docstring[] = {
    "vtkColorMaterialHelper - a helper to assist in simulating the\n\n",
    "Superclass: vtkObject\n\n",
    "vtkColorMaterialHelper is a helper to assist in simulating the\n ColorMaterial behaviour of the default OpenGL pipeline. Look at\n vtkColorMaterialHelper_s for available GLSL functions.\n\nSee Also:\n\n\n vtkShaderProgram2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorMaterialHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorMaterialHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorMaterialHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

