// python wrapper for vtkImageDotProduct
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
#include "vtkImageDotProduct.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDotProduct(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDotProduct(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDotProductNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDotProductNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageDotProduct_Doc();


static PyObject *
PyvtkImageDotProduct_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDotProduct *op = static_cast<vtkImageDotProduct *>(vp);

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
      tempr = op->vtkImageDotProduct::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDotProduct_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDotProduct *op = static_cast<vtkImageDotProduct *>(vp);

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
      tempr = op->vtkImageDotProduct::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDotProduct_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDotProduct *op = static_cast<vtkImageDotProduct *>(vp);

  vtkImageDotProduct *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDotProduct::NewInstance();
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
PyvtkImageDotProduct_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDotProduct *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDotProduct::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDotProduct_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDotProduct *op = static_cast<vtkImageDotProduct *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageDotProduct::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDotProduct_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDotProduct *op = static_cast<vtkImageDotProduct *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageDotProduct::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDotProduct_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDotProduct_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDotProduct_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDotProduct_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDotProduct\nC++: vtkImageDotProduct *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDotProduct_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDotProduct\nC++: vtkImageDotProduct *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput1", PyvtkImageDotProduct_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {(char*)"SetInput2", PyvtkImageDotProduct_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDotProduct_StaticNew()
{
  return vtkImageDotProduct::New();
}

PyObject *PyVTKClass_vtkImageDotProductNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDotProduct_StaticNew,
    PyvtkImageDotProduct_Methods,
    "vtkImageDotProduct", modulename,
    NULL, NULL,
    PyvtkImageDotProduct_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDotProduct_Doc()
{
  static const char *docstring[] = {
    "vtkImageDotProduct - Dot product of two vector images.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageDotProduct interprets the scalar components of two images as\nvectors and takes the dot product vector by vector (pixel by pixel).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDotProduct(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDotProductNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDotProduct", o) != 0)
    {
    Py_DECREF(o);
    }

}

