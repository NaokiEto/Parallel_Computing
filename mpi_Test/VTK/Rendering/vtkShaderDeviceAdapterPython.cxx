// python wrapper for vtkShaderDeviceAdapter
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
#include "vtkShaderDeviceAdapter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkShaderDeviceAdapter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkShaderDeviceAdapter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkShaderDeviceAdapterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkShaderDeviceAdapterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkShaderDeviceAdapter_Doc();


static PyObject *
PyvtkShaderDeviceAdapter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

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
      tempr = op->vtkShaderDeviceAdapter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

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
      tempr = op->vtkShaderDeviceAdapter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

  vtkShaderDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkShaderDeviceAdapter::NewInstance();
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
PyvtkShaderDeviceAdapter_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  unsigned long temp4 = 0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    op->SendAttribute(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter_SetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

  vtkShaderProgram *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram"))
    {
    if (ap.IsBound())
      {
      op->SetShaderProgram(temp0);
      }
    else
      {
      op->vtkShaderDeviceAdapter::SetShaderProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

  vtkShaderProgram *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderProgram();
      }
    else
      {
      tempr = op->vtkShaderDeviceAdapter::GetShaderProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter_PrepareForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter *op = static_cast<vtkShaderDeviceAdapter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->PrepareForRender();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShaderDeviceAdapter_Methods[] = {
  {(char*)"GetClassName", PyvtkShaderDeviceAdapter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShaderDeviceAdapter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShaderDeviceAdapter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkShaderDeviceAdapter\nC++: vtkShaderDeviceAdapter *NewInstance()\n\n"},
  {(char*)"SendAttribute", PyvtkShaderDeviceAdapter_SendAttribute, 1,
   (char*)"V.SendAttribute(string, int, int, , int)\nC++: virtual void SendAttribute(const char *attrname,\n    int components, int type, const void *attribute,\n    unsigned long offset=0)\n\nSends a single attribute to the graphics card. The attrname\nparameter identifies the name of attribute. The components\nparameter gives the number of components in the attribute.  In\ngeneral, components must be between 1-4, but a rendering system\nmay impose even more constraints.  The type parameter is a VTK\ntype enumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering\nsystem may not support all types for all attributes.  The\nattribute parameter is the actual data for the attribute. If\noffset is specified, it is added to attribute pointer after it\nhas been casted to the proper type.\n"},
  {(char*)"SetShaderProgram", PyvtkShaderDeviceAdapter_SetShaderProgram, 1,
   (char*)"V.SetShaderProgram(vtkShaderProgram)\nC++: void SetShaderProgram(vtkShaderProgram *pgm)\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {(char*)"GetShaderProgram", PyvtkShaderDeviceAdapter_GetShaderProgram, 1,
   (char*)"V.GetShaderProgram() -> vtkShaderProgram\nC++: vtkShaderProgram *GetShaderProgram()\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {(char*)"PrepareForRender", PyvtkShaderDeviceAdapter_PrepareForRender, 1,
   (char*)"V.PrepareForRender()\nC++: virtual void PrepareForRender()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkShaderDeviceAdapterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkShaderDeviceAdapter_Methods,
    "vtkShaderDeviceAdapter", modulename,
    NULL, NULL,
    PyvtkShaderDeviceAdapter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkShaderDeviceAdapter_Doc()
{
  static const char *docstring[] = {
    "vtkShaderDeviceAdapter - an adapter to pass generic vertex attributes\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShaderDeviceAdapter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShaderDeviceAdapterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShaderDeviceAdapter", o) != 0)
    {
    Py_DECREF(o);
    }

}

