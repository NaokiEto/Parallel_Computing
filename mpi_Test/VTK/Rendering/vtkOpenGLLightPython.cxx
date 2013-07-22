// python wrapper for vtkOpenGLLight
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
#include "vtkOpenGLLight.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLLight(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLLight(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLLightNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLLightNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLightNew
extern "C" { PyObject *PyVTKClass_vtkLightNew(const char *); }
#define DECLARED_PyVTKClass_vtkLightNew
#endif

static const char **PyvtkOpenGLLight_Doc();


static PyObject *
PyvtkOpenGLLight_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

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
      tempr = op->vtkOpenGLLight::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

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
      tempr = op->vtkOpenGLLight::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

  vtkOpenGLLight *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLLight::NewInstance();
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
PyvtkOpenGLLight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLLight *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLight *op = static_cast<vtkOpenGLLight *>(vp);

  vtkRenderer *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLLight::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLLight_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLLight_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLLight_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLLight_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLLight\nC++: vtkOpenGLLight *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLLight_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLLight\nC++: vtkOpenGLLight *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLLight_Render, 1,
   (char*)"V.Render(vtkRenderer, int)\nC++: void Render(vtkRenderer *ren, int light_index)\n\nImplement base class method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLLight_StaticNew()
{
  return vtkOpenGLLight::New();
}

PyObject *PyVTKClass_vtkOpenGLLightNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLLight_StaticNew,
    PyvtkOpenGLLight_Methods,
    "vtkOpenGLLight", modulename,
    NULL, NULL,
    PyvtkOpenGLLight_Doc(),
    PyVTKClass_vtkLightNew(modulename));
  return cls;
}

const char **PyvtkOpenGLLight_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLLight - OpenGL light\n\n",
    "Superclass: vtkLight\n\n",
    "vtkOpenGLLight is a concrete implementation of the abstract class\nvtkLight. vtkOpenGLLight interfaces to the OpenGL rendering library.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLLight(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLLightNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLLight", o) != 0)
    {
    Py_DECREF(o);
    }

}

