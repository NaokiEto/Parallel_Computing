// python wrapper for vtkGLSLShaderDeviceAdapter2
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
#include "vtkGLSLShaderDeviceAdapter2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGLSLShaderDeviceAdapter2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGLSLShaderDeviceAdapter2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapter2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapter2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGLSLShaderDeviceAdapter2_Doc();


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

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
      tempr = op->vtkGLSLShaderDeviceAdapter2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

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
      tempr = op->vtkGLSLShaderDeviceAdapter2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  vtkGLSLShaderDeviceAdapter2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGLSLShaderDeviceAdapter2::NewInstance();
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
PyvtkGLSLShaderDeviceAdapter2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGLSLShaderDeviceAdapter2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGLSLShaderDeviceAdapter2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_PrepareForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForRender();
      }
    else
      {
      op->vtkGLSLShaderDeviceAdapter2::PrepareForRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  unsigned long temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkGLSLShaderDeviceAdapter2::SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_SetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->SetShaderProgram(temp0);
      }
    else
      {
      op->vtkGLSLShaderDeviceAdapter2::SetShaderProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  vtkShaderProgram2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderProgram();
      }
    else
      {
      tempr = op->vtkGLSLShaderDeviceAdapter2::GetShaderProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGLSLShaderDeviceAdapter2_Methods[] = {
  {(char*)"GetClassName", PyvtkGLSLShaderDeviceAdapter2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGLSLShaderDeviceAdapter2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGLSLShaderDeviceAdapter2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGLSLShaderDeviceAdapter2\nC++: vtkGLSLShaderDeviceAdapter2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGLSLShaderDeviceAdapter2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGLSLShaderDeviceAdapter2\nC++: vtkGLSLShaderDeviceAdapter2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrepareForRender", PyvtkGLSLShaderDeviceAdapter2_PrepareForRender, 1,
   (char*)"V.PrepareForRender()\nC++: virtual void PrepareForRender()\n\n"},
  {(char*)"SendAttribute", PyvtkGLSLShaderDeviceAdapter2_SendAttribute, 1,
   (char*)"V.SendAttribute(string, int, int, , int)\nC++: virtual void SendAttribute(const char *attrname,\n    int components, int type, const void *attribute,\n    unsigned long offset=0)\n\nSends a single attribute to the graphics card. The attrname\nparameter identifies the name of attribute. The components\nparameter gives the number of components in the attribute.  In\ngeneral, components must be between 1-4, but a rendering system\nmay impose even more constraints.  The type parameter is a VTK\ntype enumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering\nsystem may not support all types for all attributes.  The\nattribute parameter is the actual data for the attribute. If\noffset is specified, it is added to attribute pointer after it\nhas been casted to the proper type. If attribute is NULL, the\nOpenGL ID for the attribute will simply be cached.\n"},
  {(char*)"SetShaderProgram", PyvtkGLSLShaderDeviceAdapter2_SetShaderProgram, 1,
   (char*)"V.SetShaderProgram(vtkShaderProgram2)\nC++: void SetShaderProgram(vtkShaderProgram2 *program)\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {(char*)"GetShaderProgram", PyvtkGLSLShaderDeviceAdapter2_GetShaderProgram, 1,
   (char*)"V.GetShaderProgram() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetShaderProgram()\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGLSLShaderDeviceAdapter2_StaticNew()
{
  return vtkGLSLShaderDeviceAdapter2::New();
}

PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapter2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGLSLShaderDeviceAdapter2_StaticNew,
    PyvtkGLSLShaderDeviceAdapter2_Methods,
    "vtkGLSLShaderDeviceAdapter2", modulename,
    NULL, NULL,
    PyvtkGLSLShaderDeviceAdapter2_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGLSLShaderDeviceAdapter2_Doc()
{
  static const char *docstring[] = {
    "vtkGLSLShaderDeviceAdapter2 - adapter to pass generic vertex \n\n",
    "Superclass: vtkObject\n\n",
    "vtkShaderDeviceAdapter subclass for vtkShaderProgram2.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGLSLShaderDeviceAdapter2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGLSLShaderDeviceAdapter2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGLSLShaderDeviceAdapter2", o) != 0)
    {
    Py_DECREF(o);
    }

}

