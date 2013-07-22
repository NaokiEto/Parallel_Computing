// python wrapper for vtkOpenGLProperty
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
#include "vtkOpenGLProperty.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLProperty(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLProperty(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLPropertyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLPropertyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropertyNew
extern "C" { PyObject *PyVTKClass_vtkPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropertyNew
#endif

static const char **PyvtkOpenGLProperty_Doc();


static PyObject *
PyvtkOpenGLProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

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
      tempr = op->vtkOpenGLProperty::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

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
      tempr = op->vtkOpenGLProperty::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkOpenGLProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLProperty::NewInstance();
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
PyvtkOpenGLProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLProperty *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

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
      op->vtkOpenGLProperty::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_BackfaceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->BackfaceRender(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLProperty::BackfaceRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

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
      op->vtkOpenGLProperty::PostRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

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
      op->vtkOpenGLProperty::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_GetPropProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkShaderProgram2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPropProgram();
      }
    else
      {
      tempr = op->vtkOpenGLProperty::GetPropProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_SetPropProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->SetPropProgram(temp0);
      }
    else
      {
      op->vtkOpenGLProperty::SetPropProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_GetShaderDeviceAdapter2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderDeviceAdapter2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkGLSLShaderDeviceAdapter2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderDeviceAdapter2();
      }
    else
      {
      tempr = op->vtkOpenGLProperty::GetShaderDeviceAdapter2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_GetCurrentShaderProgram2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentShaderProgram2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkShaderProgram2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentShaderProgram2();
      }
    else
      {
      tempr = op->vtkOpenGLProperty::GetCurrentShaderProgram2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLProperty_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLProperty_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLProperty_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLProperty\nC++: vtkOpenGLProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLProperty_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLProperty\nC++: vtkOpenGLProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLProperty_Render, 1,
   (char*)"V.Render(vtkActor, vtkRenderer)\nC++: void Render(vtkActor *a, vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"BackfaceRender", PyvtkOpenGLProperty_BackfaceRender, 1,
   (char*)"V.BackfaceRender(vtkActor, vtkRenderer)\nC++: void BackfaceRender(vtkActor *a, vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"PostRender", PyvtkOpenGLProperty_PostRender, 1,
   (char*)"V.PostRender(vtkActor, vtkRenderer)\nC++: virtual void PostRender(vtkActor *a, vtkRenderer *r)\n\nThis method is called after the actor has been rendered. Don't\ncall this directly. This method cleans up any shaders allocated.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLProperty_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nproperty. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetPropProgram", PyvtkOpenGLProperty_GetPropProgram, 1,
   (char*)"V.GetPropProgram() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetPropProgram()\n\nSet/Get the shader program of the vtkProp. It can be set directly\nor by defining a Material.\n"},
  {(char*)"SetPropProgram", PyvtkOpenGLProperty_SetPropProgram, 1,
   (char*)"V.SetPropProgram(vtkShaderProgram2)\nC++: void SetPropProgram(vtkShaderProgram2 *)\n\nSet/Get the shader program of the vtkProp. It can be set directly\nor by defining a Material.\n"},
  {(char*)"GetShaderDeviceAdapter2", PyvtkOpenGLProperty_GetShaderDeviceAdapter2, 1,
   (char*)"V.GetShaderDeviceAdapter2() -> vtkGLSLShaderDeviceAdapter2\nC++: vtkGLSLShaderDeviceAdapter2 *GetShaderDeviceAdapter2()\n\nGet the object that can pass vertex attribute to a\nvtkShaderProgram2.\n"},
  {(char*)"GetCurrentShaderProgram2", PyvtkOpenGLProperty_GetCurrentShaderProgram2, 1,
   (char*)"V.GetCurrentShaderProgram2() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetCurrentShaderProgram2()\n\nGet the vtkShaderProgram2 object in use.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLProperty_StaticNew()
{
  return vtkOpenGLProperty::New();
}

PyObject *PyVTKClass_vtkOpenGLPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLProperty_StaticNew,
    PyvtkOpenGLProperty_Methods,
    "vtkOpenGLProperty", modulename,
    NULL, NULL,
    PyvtkOpenGLProperty_Doc(),
    PyVTKClass_vtkPropertyNew(modulename));
  return cls;
}

const char **PyvtkOpenGLProperty_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLProperty - OpenGL property\n\n",
    "Superclass: vtkProperty\n\n",
    "vtkOpenGLProperty is a concrete implementation of the abstract class\nvtkProperty. vtkOpenGLProperty interfaces to the OpenGL rendering\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

