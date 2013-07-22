// python wrapper for vtkShader
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
#include "vtkShader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkShader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkShader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkShaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkShaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkShader_Doc();


static PyObject *
PyvtkShader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

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
      tempr = op->vtkShader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

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
      tempr = op->vtkShader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  vtkShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkShader::NewInstance();
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
PyvtkShader_Compile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->Compile();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_PassShaderVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassShaderVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PassShaderVariables(temp0, temp1);
      }
    else
      {
      op->vtkShader::PassShaderVariables(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShader_Bind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Bind();
      }
    else
      {
      op->vtkShader::Bind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShader_Unbind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unbind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Unbind();
      }
    else
      {
      op->vtkShader::Unbind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShader_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

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
      op->vtkShader::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShader_SetXMLShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  vtkXMLShader *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLShader"))
    {
    if (ap.IsBound())
      {
      op->SetXMLShader(temp0);
      }
    else
      {
      op->vtkShader::SetXMLShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShader_GetXMLShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  vtkXMLShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXMLShader();
      }
    else
      {
      tempr = op->vtkShader::GetXMLShader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_HasShaderVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasShaderVariable(temp0);
      }
    else
      {
      tempr = op->vtkShader::HasShaderVariable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_GetShaderVariableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderVariableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderVariableSize(temp0);
      }
    else
      {
      tempr = op->vtkShader::GetShaderVariableSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_GetShaderVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderVariableType(temp0);
      }
    else
      {
      tempr = op->vtkShader::GetShaderVariableType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShader_GetScope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShader *op = static_cast<vtkShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScope();
      }
    else
      {
      tempr = op->vtkShader::GetScope();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkShader_Methods[] = {
  {(char*)"GetClassName", PyvtkShader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkShader\nC++: vtkShader *NewInstance()\n\n"},
  {(char*)"Compile", PyvtkShader_Compile, 1,
   (char*)"V.Compile() -> int\nC++: virtual int Compile()\n\nCalled to compile the shader code. The subclasses must only\ncompile the code in this method. Returns if the compile was\nsuccessful. Subclasses should compile the code only if it was not\nalready compiled.\n"},
  {(char*)"PassShaderVariables", PyvtkShader_PassShaderVariables, 1,
   (char*)"V.PassShaderVariables(vtkActor, vtkRenderer)\nC++: virtual void PassShaderVariables(vtkActor *actor,\n    vtkRenderer *ren)\n\nCalled to pass VTK actor/property/light values and other Shader\nvariables over to the shader. This is called by the ShaderProgram\nduring each render.\n"},
  {(char*)"Bind", PyvtkShader_Bind, 1,
   (char*)"V.Bind()\nC++: virtual void Bind()\n\nIn this method the shader can enable/bind itself. This is\napplicable only to Cg, since in GLSL, individual shaders in a\nprogram can't be enabled/bound.\n"},
  {(char*)"Unbind", PyvtkShader_Unbind, 1,
   (char*)"V.Unbind()\nC++: virtual void Unbind()\n\nCalled to unbind the shader. As with Bind(), this is only\napplicable to Cg.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkShader_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetXMLShader", PyvtkShader_SetXMLShader, 1,
   (char*)"V.SetXMLShader(vtkXMLShader)\nC++: void SetXMLShader(vtkXMLShader *)\n\nGet/Set the XMLShader representation for this shader. A shader is\nnot valid without a XMLShader.\n"},
  {(char*)"GetXMLShader", PyvtkShader_GetXMLShader, 1,
   (char*)"V.GetXMLShader() -> vtkXMLShader\nC++: vtkXMLShader *GetXMLShader()\n\nGet/Set the XMLShader representation for this shader. A shader is\nnot valid without a XMLShader.\n"},
  {(char*)"HasShaderVariable", PyvtkShader_HasShaderVariable, 1,
   (char*)"V.HasShaderVariable(string) -> int\nC++: int HasShaderVariable(const char *name)\n\nIndicates if a variable by the given name exists.\n"},
  {(char*)"GetShaderVariableSize", PyvtkShader_GetShaderVariableSize, 1,
   (char*)"V.GetShaderVariableSize(string) -> int\nC++: int GetShaderVariableSize(const char *name)\n\nGet number of elements in a Shader variable. Return 0 if failed\nto find the shader variable.\n"},
  {(char*)"GetShaderVariableType", PyvtkShader_GetShaderVariableType, 1,
   (char*)"V.GetShaderVariableType(string) -> int\nC++: int GetShaderVariableType(const char *name)\n\nReturns the type of a Shader variable with the given name. Return\n0 on error.\n"},
  {(char*)"GetScope", PyvtkShader_GetScope, 1,
   (char*)"V.GetScope() -> int\nC++: int GetScope()\n\nReturns the scope of the shader i.e. if it's a vertex or fragment\nshader. (vtkXMLShader::SCOPE_VERTEX or\nvtkXMLShader::SCOPE_FRAGMENT).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkShaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkShader_Methods,
    "vtkShader", modulename,
    NULL, NULL,
    PyvtkShader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkShader_Doc()
{
  static const char *docstring[] = {
    "vtkShader\n\n",
    "Superclass: vtkObject\n\n",
    "vtkShader is a base class for interfacing VTK to hardware shader\nlibraries. vtkShader interprets a vtkXMLDataElement that describes a\nparticular shader. Descendants of this class inherit this\nfunctionality and additionally interface to specific shader libraries\nlike NVidia's Cg and OpenGL2.0 (GLSL) to perform operations, on\nindividual shaders.\n\nDuring each render, the vtkShaderProgram calls Compil",
    "e(),\nPassShaderVariables(), Bind() and after the actor has been rendered,\ncalls Unbind(), in that order.\n\nSee Also:\n\nvtkCgShader vtkGLSLShader\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShader", o) != 0)
    {
    Py_DECREF(o);
    }

}

