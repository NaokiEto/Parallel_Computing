// python wrapper for vtkMaterialLibrary
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
#include "vtkMaterialLibrary.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMaterialLibrary(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMaterialLibrary(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMaterialLibraryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMaterialLibraryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMaterialLibrary_Doc();


static PyObject *
PyvtkMaterialLibrary_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialLibrary *op = static_cast<vtkMaterialLibrary *>(vp);

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
      tempr = op->vtkMaterialLibrary::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialLibrary_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialLibrary *op = static_cast<vtkMaterialLibrary *>(vp);

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
      tempr = op->vtkMaterialLibrary::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialLibrary_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialLibrary *op = static_cast<vtkMaterialLibrary *>(vp);

  vtkMaterialLibrary *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMaterialLibrary::NewInstance();
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
PyvtkMaterialLibrary_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMaterialLibrary *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMaterialLibrary::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialLibrary_GetMaterial(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaterial");

  char *temp0 = NULL;
  char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkMaterialLibrary::GetMaterial(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialLibrary_GetNumberOfMaterials(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfMaterials");

  unsigned int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMaterialLibrary::GetNumberOfMaterials();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialLibrary_Methods[] = {
  {(char*)"GetClassName", PyvtkMaterialLibrary_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaterialLibrary_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaterialLibrary_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMaterialLibrary\nC++: vtkMaterialLibrary *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaterialLibrary_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaterialLibrary\nC++: vtkMaterialLibrary *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaterial", PyvtkMaterialLibrary_GetMaterial, 1,
   (char*)"V.GetMaterial(string) -> string\nC++: static char *GetMaterial(const char *name)\n\nObtain the code for the shader with given name. Note that Cg\nshader names are prefixed with CG and GLSL shader names are\nprefixed with GLSL. This method allocates memory. It's the\nresponsibility of the caller to free this memory.\n"},
  {(char*)"GetNumberOfMaterials", PyvtkMaterialLibrary_GetNumberOfMaterials, 1,
   (char*)"V.GetNumberOfMaterials() -> int\nC++: static unsigned int GetNumberOfMaterials()\n\nReturns the number of materials provided by the library.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaterialLibrary_StaticNew()
{
  return vtkMaterialLibrary::New();
}

PyObject *PyVTKClass_vtkMaterialLibraryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaterialLibrary_StaticNew,
    PyvtkMaterialLibrary_Methods,
    "vtkMaterialLibrary", modulename,
    NULL, NULL,
    PyvtkMaterialLibrary_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMaterialLibrary_Doc()
{
  static const char *docstring[] = {
    "vtkMaterialLibrary - Library for Materials\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides the Material XMLs.\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaterialLibrary(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaterialLibraryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaterialLibrary", o) != 0)
    {
    Py_DECREF(o);
    }

}

