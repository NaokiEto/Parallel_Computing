// python wrapper for vtkGLSLShaderDeviceAdapter
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
#include "vtkGLSLShaderDeviceAdapter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGLSLShaderDeviceAdapter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGLSLShaderDeviceAdapter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkShaderDeviceAdapterNew
extern "C" { PyObject *PyVTKClass_vtkShaderDeviceAdapterNew(const char *); }
#define DECLARED_PyVTKClass_vtkShaderDeviceAdapterNew
#endif

static const char **PyvtkGLSLShaderDeviceAdapter_Doc();


static PyObject *
PyvtkGLSLShaderDeviceAdapter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter *op = static_cast<vtkGLSLShaderDeviceAdapter *>(vp);

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
      tempr = op->vtkGLSLShaderDeviceAdapter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter *op = static_cast<vtkGLSLShaderDeviceAdapter *>(vp);

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
      tempr = op->vtkGLSLShaderDeviceAdapter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter *op = static_cast<vtkGLSLShaderDeviceAdapter *>(vp);

  vtkGLSLShaderDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGLSLShaderDeviceAdapter::NewInstance();
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
PyvtkGLSLShaderDeviceAdapter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGLSLShaderDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGLSLShaderDeviceAdapter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter_PrepareForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter *op = static_cast<vtkGLSLShaderDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForRender();
      }
    else
      {
      op->vtkGLSLShaderDeviceAdapter::PrepareForRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter *op = static_cast<vtkGLSLShaderDeviceAdapter *>(vp);

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
      op->vtkGLSLShaderDeviceAdapter::SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGLSLShaderDeviceAdapter_Methods[] = {
  {(char*)"GetClassName", PyvtkGLSLShaderDeviceAdapter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGLSLShaderDeviceAdapter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGLSLShaderDeviceAdapter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGLSLShaderDeviceAdapter\nC++: vtkGLSLShaderDeviceAdapter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGLSLShaderDeviceAdapter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGLSLShaderDeviceAdapter\nC++: vtkGLSLShaderDeviceAdapter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrepareForRender", PyvtkGLSLShaderDeviceAdapter_PrepareForRender, 1,
   (char*)"V.PrepareForRender()\nC++: virtual void PrepareForRender()\n\n"},
  {(char*)"SendAttribute", PyvtkGLSLShaderDeviceAdapter_SendAttribute, 1,
   (char*)"V.SendAttribute(string, int, int, , int)\nC++: virtual void SendAttribute(const char *attrname,\n    int components, int type, const void *attribute,\n    unsigned long offset=0)\n\nSends a single attribute to the graphics card. The attrname\nparameter identifies the name of attribute. The components\nparameter gives the number of components in the attribute.  In\ngeneral, components must be between 1-4, but a rendering system\nmay impose even more constraints.  The type parameter is a VTK\ntype enumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering\nsystem may not support all types for all attributes.  The\nattribute parameter is the actual data for the attribute. If\noffset is specified, it is added to attribute pointer after it\nhas been casted to the proper type. If attribute is NULL, the\nOpenGL ID for the attribute will simply be cached.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGLSLShaderDeviceAdapter_StaticNew()
{
  return vtkGLSLShaderDeviceAdapter::New();
}

PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGLSLShaderDeviceAdapter_StaticNew,
    PyvtkGLSLShaderDeviceAdapter_Methods,
    "vtkGLSLShaderDeviceAdapter", modulename,
    NULL, NULL,
    PyvtkGLSLShaderDeviceAdapter_Doc(),
    PyVTKClass_vtkShaderDeviceAdapterNew(modulename));
  return cls;
}

const char **PyvtkGLSLShaderDeviceAdapter_Doc()
{
  static const char *docstring[] = {
    "vtkGLSLShaderDeviceAdapter - adapter to pass generic vertex \n\n",
    "Superclass: vtkShaderDeviceAdapter\n\n",
    "vtkShaderDeviceAdapter subclass for GLSL.\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGLSLShaderDeviceAdapter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGLSLShaderDeviceAdapterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGLSLShaderDeviceAdapter", o) != 0)
    {
    Py_DECREF(o);
    }

}

