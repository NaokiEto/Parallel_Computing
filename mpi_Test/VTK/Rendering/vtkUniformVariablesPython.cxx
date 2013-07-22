// python wrapper for vtkUniformVariables
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
#include "vtkUniformVariables.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUniformVariables(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUniformVariables(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUniformVariablesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUniformVariablesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUniformVariables_Doc();


static PyObject *
PyvtkUniformVariables_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

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
      tempr = op->vtkUniformVariables::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

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
      tempr = op->vtkUniformVariables::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  vtkUniformVariables *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUniformVariables::NewInstance();
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
PyvtkUniformVariables_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUniformVariables *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUniformVariables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_RemoveUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveUniform(temp0);
      }
    else
      {
      op->vtkUniformVariables::RemoveUniform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_RemoveAllUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllUniforms();
      }
    else
      {
      op->vtkUniformVariables::RemoveAllUniforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Send(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Send(temp0, temp1);
      }
    else
      {
      op->vtkUniformVariables::Send(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkUniformVariables::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsAtEnd();
      }
    else
      {
      tempr = op->vtkUniformVariables::IsAtEnd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_GetCurrentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentName();
      }
    else
      {
      tempr = op->vtkUniformVariables::GetCurrentName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SendCurrentUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendCurrentUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SendCurrentUniform(temp0);
      }
    else
      {
      op->vtkUniformVariables::SendCurrentUniform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkUniformVariables::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  vtkUniformVariables *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUniformVariables"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkUniformVariables::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  vtkUniformVariables *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUniformVariables"))
    {
    if (ap.IsBound())
      {
      op->Merge(temp0);
      }
    else
      {
      op->vtkUniformVariables::Merge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformVariables_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformVariables_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUniformVariables_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUniformVariables_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUniformVariables\nC++: vtkUniformVariables *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUniformVariables_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformVariables\nC++: vtkUniformVariables *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveUniform", PyvtkUniformVariables_RemoveUniform, 1,
   (char*)"V.RemoveUniform(string)\nC++: void RemoveUniform(const char *name)\n\nRemove uniform `name' from the list.\n"},
  {(char*)"RemoveAllUniforms", PyvtkUniformVariables_RemoveAllUniforms, 1,
   (char*)"V.RemoveAllUniforms()\nC++: void RemoveAllUniforms()\n\nRemove all uniforms from the list.\n"},
  {(char*)"Send", PyvtkUniformVariables_Send, 1,
   (char*)"V.Send(string, int)\nC++: void Send(const char *name, int uniformIndex)\n\n\\pre need a valid OpenGL context and a shader program in use.\n"},
  {(char*)"Start", PyvtkUniformVariables_Start, 1,
   (char*)"V.Start()\nC++: void Start()\n\nPlace the internal cursor on the first uniform.\n"},
  {(char*)"IsAtEnd", PyvtkUniformVariables_IsAtEnd, 1,
   (char*)"V.IsAtEnd() -> bool\nC++: bool IsAtEnd()\n\nIs the iteration done?\n"},
  {(char*)"GetCurrentName", PyvtkUniformVariables_GetCurrentName, 1,
   (char*)"V.GetCurrentName() -> string\nC++: const char *GetCurrentName()\n\nName of the uniform at the current cursor position.\n\\pre not_done: !this->IsAtEnd()\n"},
  {(char*)"SendCurrentUniform", PyvtkUniformVariables_SendCurrentUniform, 1,
   (char*)"V.SendCurrentUniform(int)\nC++: void SendCurrentUniform(int uniformIndex)\n\n\\pre need a valid OpenGL context and a shader program in use.\n\\pre not_done: !this->IsAtEnd()\n"},
  {(char*)"Next", PyvtkUniformVariables_Next, 1,
   (char*)"V.Next()\nC++: void Next()\n\nMove the cursor to the next uniform.\n\\pre not_done: !this->IsAtEnd()\n"},
  {(char*)"DeepCopy", PyvtkUniformVariables_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkUniformVariables)\nC++: void DeepCopy(vtkUniformVariables *other)\n\nCopy all the variables from `other'. Any existing variable will\nbe deleted first.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {(char*)"Merge", PyvtkUniformVariables_Merge, 1,
   (char*)"V.Merge(vtkUniformVariables)\nC++: void Merge(vtkUniformVariables *other)\n\nCopy all the variables from `other'. Any existing variable will\nbe overwritten.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformVariables_StaticNew()
{
  return vtkUniformVariables::New();
}

PyObject *PyVTKClass_vtkUniformVariablesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformVariables_StaticNew,
    PyvtkUniformVariables_Methods,
    "vtkUniformVariables", modulename,
    NULL, NULL,
    PyvtkUniformVariables_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUniformVariables_Doc()
{
  static const char *docstring[] = {
    "vtkUniformVariables - GLSL uniform variables\n\n",
    "Superclass: vtkObject\n\n",
    "vtkUniformVariables is a list of uniform variables attached to either\na vtkShader2 object or to a vtkShaderProgram2. Uniform variables on a\nvtkShaderProgram2 override values of uniform variables on a\nvtkShader2.\n\nSee Also:\n\nvtkShader2 vtkShaderProgram2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformVariables(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformVariablesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformVariables", o) != 0)
    {
    Py_DECREF(o);
    }

}

