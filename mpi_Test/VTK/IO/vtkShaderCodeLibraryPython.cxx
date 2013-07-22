// python wrapper for vtkShaderCodeLibrary
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
#include "vtkShaderCodeLibrary.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkShaderCodeLibrary(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkShaderCodeLibrary(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkShaderCodeLibraryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkShaderCodeLibraryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkShaderCodeLibrary_Doc();


static PyObject *
PyvtkShaderCodeLibrary_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderCodeLibrary *op = static_cast<vtkShaderCodeLibrary *>(vp);

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
      tempr = op->vtkShaderCodeLibrary::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderCodeLibrary_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderCodeLibrary *op = static_cast<vtkShaderCodeLibrary *>(vp);

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
      tempr = op->vtkShaderCodeLibrary::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderCodeLibrary_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderCodeLibrary *op = static_cast<vtkShaderCodeLibrary *>(vp);

  vtkShaderCodeLibrary *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkShaderCodeLibrary::NewInstance();
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
PyvtkShaderCodeLibrary_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkShaderCodeLibrary *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkShaderCodeLibrary::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderCodeLibrary_GetShaderCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShaderCode");

  char *temp0 = NULL;
  char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkShaderCodeLibrary::GetShaderCode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderCodeLibrary_RegisterShaderCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterShaderCode");

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkShaderCodeLibrary::RegisterShaderCode(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShaderCodeLibrary_Methods[] = {
  {(char*)"GetClassName", PyvtkShaderCodeLibrary_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShaderCodeLibrary_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShaderCodeLibrary_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkShaderCodeLibrary\nC++: vtkShaderCodeLibrary *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShaderCodeLibrary_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShaderCodeLibrary\nC++: vtkShaderCodeLibrary *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetShaderCode", PyvtkShaderCodeLibrary_GetShaderCode, 1,
   (char*)"V.GetShaderCode(string) -> string\nC++: static char *GetShaderCode(const char *name)\n\nObtain the code for the shader with given name. Note that Cg\nshader names are prefixed with CG and GLSL shader names are\nprefixed with GLSL. This method allocates memory. It's the\nresponsibility of the caller to free this memory.\n"},
  {(char*)"RegisterShaderCode", PyvtkShaderCodeLibrary_RegisterShaderCode, 1,
   (char*)"V.RegisterShaderCode(string, string)\nC++: static void RegisterShaderCode(const char *name,\n    const char *code)\n\nProvides for registering shader code. This overrides the compiled\nin shader codes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShaderCodeLibrary_StaticNew()
{
  return vtkShaderCodeLibrary::New();
}

PyObject *PyVTKClass_vtkShaderCodeLibraryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShaderCodeLibrary_StaticNew,
    PyvtkShaderCodeLibrary_Methods,
    "vtkShaderCodeLibrary", modulename,
    NULL, NULL,
    PyvtkShaderCodeLibrary_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkShaderCodeLibrary_Doc()
{
  static const char *docstring[] = {
    "vtkShaderCodeLibrary - Library for Hardware Shaders.\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides the hardware shader code.\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShaderCodeLibrary(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShaderCodeLibraryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShaderCodeLibrary", o) != 0)
    {
    Py_DECREF(o);
    }

}

