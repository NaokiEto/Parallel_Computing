// python wrapper for vtkGLSLShaderProgram
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
#include "vtkGLSLShaderProgram.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGLSLShaderProgram(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGLSLShaderProgram(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGLSLShaderProgramNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGLSLShaderProgramNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkShaderProgramNew
extern "C" { PyObject *PyVTKClass_vtkShaderProgramNew(const char *); }
#define DECLARED_PyVTKClass_vtkShaderProgramNew
#endif

static const char **PyvtkGLSLShaderProgram_Doc();


static PyObject *
PyvtkGLSLShaderProgram_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

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
      tempr = op->vtkGLSLShaderProgram::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderProgram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

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
      tempr = op->vtkGLSLShaderProgram::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderProgram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

  vtkGLSLShaderProgram *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGLSLShaderProgram::NewInstance();
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
PyvtkGLSLShaderProgram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGLSLShaderProgram *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGLSLShaderProgram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderProgram_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkGLSLShaderProgram::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderProgram_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0, temp1);
      }
    else
      {
      op->vtkGLSLShaderProgram::PostRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderProgram_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkGLSLShaderProgram::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderProgram_GetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderProgram *op = static_cast<vtkGLSLShaderProgram *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgram();
      }
    else
      {
      tempr = op->vtkGLSLShaderProgram::GetProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGLSLShaderProgram_Methods[] = {
  {(char*)"GetClassName", PyvtkGLSLShaderProgram_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGLSLShaderProgram_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGLSLShaderProgram_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGLSLShaderProgram\nC++: vtkGLSLShaderProgram *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGLSLShaderProgram_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGLSLShaderProgram\nC++: vtkGLSLShaderProgram *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkGLSLShaderProgram_Render, 1,
   (char*)"V.Render(vtkActor, vtkRenderer)\nC++: virtual void Render(vtkActor *actor, vtkRenderer *renderer)\n\n"},
  {(char*)"PostRender", PyvtkGLSLShaderProgram_PostRender, 1,
   (char*)"V.PostRender(vtkActor, vtkRenderer)\nC++: virtual void PostRender(vtkActor *, vtkRenderer *)\n\nCalled to unload the shaders after the actor has been rendered.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkGLSLShaderProgram_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetProgram", PyvtkGLSLShaderProgram_GetProgram, 1,
   (char*)"V.GetProgram() -> int\nC++: unsigned int GetProgram()\n\nReturn the OpenGL program id.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGLSLShaderProgram_StaticNew()
{
  return vtkGLSLShaderProgram::New();
}

PyObject *PyVTKClass_vtkGLSLShaderProgramNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGLSLShaderProgram_StaticNew,
    PyvtkGLSLShaderProgram_Methods,
    "vtkGLSLShaderProgram", modulename,
    NULL, NULL,
    PyvtkGLSLShaderProgram_Doc(),
    PyVTKClass_vtkShaderProgramNew(modulename));
  return cls;
}

const char **PyvtkGLSLShaderProgram_Doc()
{
  static const char *docstring[] = {
    "vtkGLSLShaderProgram - GLSL Shader Program\n\n",
    "Superclass: vtkShaderProgram\n\n",
    "vtkGLSLShaderProgram is a concerete implementation of\nvtkShaderProgram. It's main function is to 'Link' a vertex and a\nfragment shader together and install them into the rendering pipeline\nby calling OpenGL2.0.\n\nInitialization of shader parameters is delegated to instances of\nvtkShader (vtkGLSLShader in this case).\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandi",
    "a National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGLSLShaderProgram(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGLSLShaderProgramNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGLSLShaderProgram", o) != 0)
    {
    Py_DECREF(o);
    }

}

