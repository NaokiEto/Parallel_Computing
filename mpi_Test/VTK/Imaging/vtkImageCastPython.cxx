// python wrapper for vtkImageCast
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
#include "vtkImageCast.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageCast(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageCast(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageCastNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageCastNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageCast_Doc();


static PyObject *
PyvtkImageCast_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

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
      tempr = op->vtkImageCast::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

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
      tempr = op->vtkImageCast::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  vtkImageCast *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageCast::NewInstance();
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
PyvtkImageCast_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageCast *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageCast::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

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
      op->vtkImageCast::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

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
      tempr = op->vtkImageCast::GetOutputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkImageCast::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_SetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClampOverflow(temp0);
      }
    else
      {
      op->vtkImageCast::SetClampOverflow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_GetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClampOverflow();
      }
    else
      {
      tempr = op->vtkImageCast::GetClampOverflow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_ClampOverflowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampOverflowOn();
      }
    else
      {
      op->vtkImageCast::ClampOverflowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCast_ClampOverflowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampOverflowOff();
      }
    else
      {
      op->vtkImageCast::ClampOverflowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCast_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCast_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCast_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCast_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageCast\nC++: vtkImageCast *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCast_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCast\nC++: vtkImageCast *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputScalarType", PyvtkImageCast_SetOutputScalarType, 1,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"GetOutputScalarType", PyvtkImageCast_GetOutputScalarType, 1,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageCast_SetOutputScalarTypeToFloat, 1,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageCast_SetOutputScalarTypeToDouble, 1,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkImageCast_SetOutputScalarTypeToInt, 1,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkImageCast_SetOutputScalarTypeToUnsignedInt, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkImageCast_SetOutputScalarTypeToLong, 1,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkImageCast_SetOutputScalarTypeToUnsignedLong, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkImageCast_SetOutputScalarTypeToShort, 1,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkImageCast_SetOutputScalarTypeToUnsignedShort, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkImageCast_SetOutputScalarTypeToUnsignedChar, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkImageCast_SetOutputScalarTypeToChar, 1,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type to cast to.\n"},
  {(char*)"SetClampOverflow", PyvtkImageCast_SetClampOverflow, 1,
   (char*)"V.SetClampOverflow(int)\nC++: void SetClampOverflow(int a)\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default ClampOverflow is off.\n"},
  {(char*)"GetClampOverflow", PyvtkImageCast_GetClampOverflow, 1,
   (char*)"V.GetClampOverflow() -> int\nC++: int GetClampOverflow()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default ClampOverflow is off.\n"},
  {(char*)"ClampOverflowOn", PyvtkImageCast_ClampOverflowOn, 1,
   (char*)"V.ClampOverflowOn()\nC++: void ClampOverflowOn()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default ClampOverflow is off.\n"},
  {(char*)"ClampOverflowOff", PyvtkImageCast_ClampOverflowOff, 1,
   (char*)"V.ClampOverflowOff()\nC++: void ClampOverflowOff()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. By default ClampOverflow is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCast_StaticNew()
{
  return vtkImageCast::New();
}

PyObject *PyVTKClass_vtkImageCastNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCast_StaticNew,
    PyvtkImageCast_Methods,
    "vtkImageCast", modulename,
    NULL, NULL,
    PyvtkImageCast_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageCast_Doc()
{
  static const char *docstring[] = {
    "vtkImageCast -  Image Data type Casting Filter\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageCast filter casts the input type to match the output type in\nthe image processing pipeline.  The filter does nothing if the input\nalready has the correct type.  To specify the \"CastTo\" type, use\n\"SetOutputScalarType\" method.\n\nWarning:\n\nAs vtkImageCast only casts values without rescaling them, its use is\nnot recommented. vtkImageShiftScale is the recommented way to change\nthe type of an ima",
    "ge data.\n\nSee Also:\n\nvtkImageThreshold vtkImageShiftScale\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCast(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCastNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCast", o) != 0)
    {
    Py_DECREF(o);
    }

}

