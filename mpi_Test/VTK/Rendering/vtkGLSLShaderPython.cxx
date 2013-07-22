// python wrapper for vtkGLSLShader
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
#include "vtkGLSLShader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGLSLShader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGLSLShader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGLSLShaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGLSLShaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkShaderNew
extern "C" { PyObject *PyVTKClass_vtkShaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkShaderNew
#endif

static const char **PyvtkGLSLShader_Doc();


static PyObject *
PyvtkGLSLShader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

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
      tempr = op->vtkGLSLShader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

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
      tempr = op->vtkGLSLShader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

  vtkGLSLShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGLSLShader::NewInstance();
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
PyvtkGLSLShader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGLSLShader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGLSLShader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_Compile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Compile();
      }
    else
      {
      tempr = op->vtkGLSLShader::Compile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandle();
      }
    else
      {
      tempr = op->vtkGLSLShader::GetHandle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_SetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgram(temp0);
      }
    else
      {
      op->vtkGLSLShader::SetProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_GetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

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
      tempr = op->vtkGLSLShader::GetProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShader_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShader *op = static_cast<vtkGLSLShader *>(vp);

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
      op->vtkGLSLShader::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGLSLShader_Methods[] = {
  {(char*)"GetClassName", PyvtkGLSLShader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGLSLShader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGLSLShader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGLSLShader\nC++: vtkGLSLShader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGLSLShader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGLSLShader\nC++: vtkGLSLShader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Compile", PyvtkGLSLShader_Compile, 1,
   (char*)"V.Compile() -> int\nC++: virtual int Compile()\n\nCalled to compile the shader code. The subclasses must only\ncompile the code in this method. Returns if the compile was\nsuccessful. Subclasses should compile the code only if it was not\nalready compiled.\n"},
  {(char*)"GetHandle", PyvtkGLSLShader_GetHandle, 1,
   (char*)"V.GetHandle() -> int\nC++: unsigned int GetHandle()\n\nThe vtkGLSLShaderProgram needs the shader handle for attaching.\n"},
  {(char*)"SetProgram", PyvtkGLSLShader_SetProgram, 1,
   (char*)"V.SetProgram(int)\nC++: void SetProgram(unsigned int a)\n\nThe Shader needs the id of the ShaderProgram to obtain uniform\nvariable locations. This is set by vtkGLSLShaderProgram.\n"},
  {(char*)"GetProgram", PyvtkGLSLShader_GetProgram, 1,
   (char*)"V.GetProgram() -> int\nC++: unsigned int GetProgram()\n\nThe Shader needs the id of the ShaderProgram to obtain uniform\nvariable locations. This is set by vtkGLSLShaderProgram.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkGLSLShader_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGLSLShader_StaticNew()
{
  return vtkGLSLShader::New();
}

PyObject *PyVTKClass_vtkGLSLShaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGLSLShader_StaticNew,
    PyvtkGLSLShader_Methods,
    "vtkGLSLShader", modulename,
    NULL, NULL,
    PyvtkGLSLShader_Doc(),
    PyVTKClass_vtkShaderNew(modulename));
  return cls;
}

const char **PyvtkGLSLShader_Doc()
{
  static const char *docstring[] = {
    "vtkGLSLShader - GLSL Shader\n\n",
    "Superclass: vtkShader\n\n",
    "vtkGLSLShader is a concrete class that creates and compiles hardware\nshaders written in the OpenGL Shadering Language (GLSL, OpenGL2.0).\nWhile step linking a vertex and a fragment shader is performed by\nvtkGLSLShaderProgram, all shader parameters are initialized in this\nclass.\n\n.Section vtkOpenGLExtensionManager All OpenGL calls are made through\nvtkOpenGLExtensionManager.\n\n.Section Supported Basic",
    " Shader Types:\n\nScalar Types uniform float uniform int uniform int -- boolean scalar\nnot yet tested\n\nVector Types: uniform vec{2|3|4} uniform ivec{2|3|4} uniform\nbvec{2|3|4} -- boolean vector not yet tested\n\nMatrix Types: uniform mat{2|3|4}\n\nTexture Samplers: sample1D -- Not yet implemented in this cless.\nsample2D -- Not yet implemented in this class. sample3D -- Not yet\nimplemented in this class.",
    " sampler1DShadow -- Not yet implemented in\nthis class. sampler1DShadow -- Not yet implemented in this class.\n\nUser-Defined structures: uniform struct\n NOTE: these must be defined and declared  outside of the 'main'\nshader\n function.\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGLSLShader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGLSLShaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGLSLShader", o) != 0)
    {
    Py_DECREF(o);
    }

}

