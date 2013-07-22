// python wrapper for vtkImageStencilToImage
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
#include "vtkImageStencilToImage.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageStencilToImage(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageStencilToImage(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageStencilToImageNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageStencilToImageNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageStencilToImage_Doc();


static PyObject *
PyvtkImageStencilToImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

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
      tempr = op->vtkImageStencilToImage::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

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
      tempr = op->vtkImageStencilToImage::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  vtkImageStencilToImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageStencilToImage::NewInstance();
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
PyvtkImageStencilToImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageStencilToImage *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageStencilToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutsideValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutsideValue(temp0);
      }
    else
      {
      op->vtkImageStencilToImage::SetOutsideValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_GetOutsideValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutsideValue();
      }
    else
      {
      tempr = op->vtkImageStencilToImage::GetOutsideValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetInsideValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideValue(temp0);
      }
    else
      {
      op->vtkImageStencilToImage::SetInsideValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_GetInsideValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInsideValue();
      }
    else
      {
      tempr = op->vtkImageStencilToImage::GetInsideValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarType(temp0);
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputScalarType();
      }
    else
      {
      tempr = op->vtkImageStencilToImage::GetOutputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilToImage_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilToImage *op = static_cast<vtkImageStencilToImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkImageStencilToImage::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageStencilToImage_Methods[] = {
  {(char*)"GetClassName", PyvtkImageStencilToImage_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageStencilToImage_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageStencilToImage_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageStencilToImage\nC++: vtkImageStencilToImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageStencilToImage_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageStencilToImage\nC++: vtkImageStencilToImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutsideValue", PyvtkImageStencilToImage_SetOutsideValue, 1,
   (char*)"V.SetOutsideValue(float)\nC++: void SetOutsideValue(double a)\n\nThe value to use outside the stencil.  The default is 0.\n"},
  {(char*)"GetOutsideValue", PyvtkImageStencilToImage_GetOutsideValue, 1,
   (char*)"V.GetOutsideValue() -> float\nC++: double GetOutsideValue()\n\nThe value to use outside the stencil.  The default is 0.\n"},
  {(char*)"SetInsideValue", PyvtkImageStencilToImage_SetInsideValue, 1,
   (char*)"V.SetInsideValue(float)\nC++: void SetInsideValue(double a)\n\nThe value to use inside the stencil.  The default is 1.\n"},
  {(char*)"GetInsideValue", PyvtkImageStencilToImage_GetInsideValue, 1,
   (char*)"V.GetInsideValue() -> float\nC++: double GetInsideValue()\n\nThe value to use inside the stencil.  The default is 1.\n"},
  {(char*)"SetOutputScalarType", PyvtkImageStencilToImage_SetOutputScalarType, 1,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"GetOutputScalarType", PyvtkImageStencilToImage_GetOutputScalarType, 1,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageStencilToImage_SetOutputScalarTypeToFloat, 1,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageStencilToImage_SetOutputScalarTypeToDouble, 1,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkImageStencilToImage_SetOutputScalarTypeToInt, 1,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedInt, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkImageStencilToImage_SetOutputScalarTypeToLong, 1,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedLong, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkImageStencilToImage_SetOutputScalarTypeToShort, 1,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedShort, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkImageStencilToImage_SetOutputScalarTypeToUnsignedChar, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkImageStencilToImage_SetOutputScalarTypeToChar, 1,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nThe desired output scalar type.  The default is unsigned char.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageStencilToImage_StaticNew()
{
  return vtkImageStencilToImage::New();
}

PyObject *PyVTKClass_vtkImageStencilToImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageStencilToImage_StaticNew,
    PyvtkImageStencilToImage_Methods,
    "vtkImageStencilToImage", modulename,
    NULL, NULL,
    PyvtkImageStencilToImage_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageStencilToImage_Doc()
{
  static const char *docstring[] = {
    "vtkImageStencilToImage - Convert an image stencil into an image\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageStencilToImage will convert an image stencil into a binary\nimage.  The default output will be an 8-bit image with a value of 1\ninside the stencil and 0 outside.  When used in combination with\nvtkPolyDataToImageStencil or vtkImplicitFunctionToImageStencil, this\ncan be used to create a binary image from a mesh or a function.\n\nSee Also:\n\nvtkImplicitModeller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageStencilToImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageStencilToImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageStencilToImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

