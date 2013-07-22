// python wrapper for vtkVariant
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
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkVariant.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVariant(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVariant(PyObject *, const char *); }
#endif

static const char **PyvtkVariant_Doc();


static PyObject *
PyvtkVariant_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsValid");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsValid();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsString");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnicodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnicodeString");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnicodeString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsNumeric");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsNumeric();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsFloat");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsFloat();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsDouble");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsDouble();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsChar");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsChar();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnsignedChar");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnsignedChar();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSignedChar");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsSignedChar();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsShort");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsShort();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnsignedShort");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnsignedShort();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInt");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsInt();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnsignedInt");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnsignedInt();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnsignedLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnsignedLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_Is__Int64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "Is__Int64");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->Is__Int64();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsigned__Int64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnsigned__Int64");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnsigned__Int64();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsLongLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsLongLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsUnsignedLongLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsUnsignedLongLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsVTKObject");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsVTKObject();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsArray");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->IsArray();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetType");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_GetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeAsString");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->GetTypeAsString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToString");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToUnicodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnicodeString");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  vtkUnicodeString tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToUnicodeString();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToFloat");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToFloat();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToDouble");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToDouble();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToChar");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  char tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToChar();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnsignedChar");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToUnsignedChar();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToSignedChar");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  signed char tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToSignedChar();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToShort");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  short tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToShort();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnsignedShort");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned short tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToUnsignedShort();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToInt");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToInt();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnsignedInt");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToUnsignedInt();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnsignedLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToUnsignedLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToLongLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToLongLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToUnsignedLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToUnsignedLongLong");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToUnsignedLongLong();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToTypeInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToTypeInt64");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToTypeInt64();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToTypeUInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToTypeUInt64");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  unsigned long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToTypeUInt64();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToVTKObject");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  vtkObjectBase *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToVTKObject();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_ToArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "ToArray");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = op->ToArray();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariant_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(args, "IsEqual");
  void *vp = ap.GetSelfPointer(self);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    tempr = op->IsEqual(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariant_Methods[] = {
  {(char*)"IsValid", PyvtkVariant_IsValid, 1,
   (char*)"V.IsValid() -> bool\nC++: bool IsValid()\n\nGet whether the variant value is valid.\n"},
  {(char*)"IsString", PyvtkVariant_IsString, 1,
   (char*)"V.IsString() -> bool\nC++: bool IsString()\n\nGet whether the variant is a string.\n"},
  {(char*)"IsUnicodeString", PyvtkVariant_IsUnicodeString, 1,
   (char*)"V.IsUnicodeString() -> bool\nC++: bool IsUnicodeString()\n\nGet whether the variant is a Unicode string.\n"},
  {(char*)"IsNumeric", PyvtkVariant_IsNumeric, 1,
   (char*)"V.IsNumeric() -> bool\nC++: bool IsNumeric()\n\nGet whether the variant is any numeric type.\n"},
  {(char*)"IsFloat", PyvtkVariant_IsFloat, 1,
   (char*)"V.IsFloat() -> bool\nC++: bool IsFloat()\n\nGet whether the variant is a float.\n"},
  {(char*)"IsDouble", PyvtkVariant_IsDouble, 1,
   (char*)"V.IsDouble() -> bool\nC++: bool IsDouble()\n\nGet whether the variant is a double.\n"},
  {(char*)"IsChar", PyvtkVariant_IsChar, 1,
   (char*)"V.IsChar() -> bool\nC++: bool IsChar()\n\nGet whether the variant is an char.\n"},
  {(char*)"IsUnsignedChar", PyvtkVariant_IsUnsignedChar, 1,
   (char*)"V.IsUnsignedChar() -> bool\nC++: bool IsUnsignedChar()\n\nGet whether the variant is an unsigned char.\n"},
  {(char*)"IsSignedChar", PyvtkVariant_IsSignedChar, 1,
   (char*)"V.IsSignedChar() -> bool\nC++: bool IsSignedChar()\n\nGet whether the variant is an signed char.\n"},
  {(char*)"IsShort", PyvtkVariant_IsShort, 1,
   (char*)"V.IsShort() -> bool\nC++: bool IsShort()\n\nGet whether the variant is an short.\n"},
  {(char*)"IsUnsignedShort", PyvtkVariant_IsUnsignedShort, 1,
   (char*)"V.IsUnsignedShort() -> bool\nC++: bool IsUnsignedShort()\n\nGet whether the variant is an unsigned short.\n"},
  {(char*)"IsInt", PyvtkVariant_IsInt, 1,
   (char*)"V.IsInt() -> bool\nC++: bool IsInt()\n\nGet whether the variant is an int.\n"},
  {(char*)"IsUnsignedInt", PyvtkVariant_IsUnsignedInt, 1,
   (char*)"V.IsUnsignedInt() -> bool\nC++: bool IsUnsignedInt()\n\nGet whether the variant is an unsigned int.\n"},
  {(char*)"IsLong", PyvtkVariant_IsLong, 1,
   (char*)"V.IsLong() -> bool\nC++: bool IsLong()\n\nGet whether the variant is an long.\n"},
  {(char*)"IsUnsignedLong", PyvtkVariant_IsUnsignedLong, 1,
   (char*)"V.IsUnsignedLong() -> bool\nC++: bool IsUnsignedLong()\n\nGet whether the variant is an unsigned long.\n"},
  {(char*)"Is__Int64", PyvtkVariant_Is__Int64, 1,
   (char*)"V.Is__Int64() -> bool\nC++: bool Is__Int64()\n\nGet whether the variant is an __int64.\n"},
  {(char*)"IsUnsigned__Int64", PyvtkVariant_IsUnsigned__Int64, 1,
   (char*)"V.IsUnsigned__Int64() -> bool\nC++: bool IsUnsigned__Int64()\n\nGet whether the variant is an unsigned __int64.\n"},
  {(char*)"IsLongLong", PyvtkVariant_IsLongLong, 1,
   (char*)"V.IsLongLong() -> bool\nC++: bool IsLongLong()\n\nGet whether the variant is long long.\n"},
  {(char*)"IsUnsignedLongLong", PyvtkVariant_IsUnsignedLongLong, 1,
   (char*)"V.IsUnsignedLongLong() -> bool\nC++: bool IsUnsignedLongLong()\n\nGet whether the variant is unsigned long long.\n"},
  {(char*)"IsVTKObject", PyvtkVariant_IsVTKObject, 1,
   (char*)"V.IsVTKObject() -> bool\nC++: bool IsVTKObject()\n\nGet whether the variant is a VTK object pointer.\n"},
  {(char*)"IsArray", PyvtkVariant_IsArray, 1,
   (char*)"V.IsArray() -> bool\nC++: bool IsArray()\n\nGet whether the variant is a VTK array (i.e. a subclass of\nvtkAbstractArray).\n"},
  {(char*)"GetType", PyvtkVariant_GetType, 1,
   (char*)"V.GetType() -> int\nC++: unsigned int GetType()\n\nGet the type of the variant.\n"},
  {(char*)"GetTypeAsString", PyvtkVariant_GetTypeAsString, 1,
   (char*)"V.GetTypeAsString() -> string\nC++: const char *GetTypeAsString()\n\nGet the type of the variant as a string.\n"},
  {(char*)"ToString", PyvtkVariant_ToString, 1,
   (char*)"V.ToString() -> string\nC++: vtkStdString ToString()\n\nConvert the variant to a string.\n"},
  {(char*)"ToUnicodeString", PyvtkVariant_ToUnicodeString, 1,
   (char*)"V.ToUnicodeString() -> unicode\nC++: vtkUnicodeString ToUnicodeString()\n\nconvert the variant to a Unicode string.\n"},
  {(char*)"ToFloat", PyvtkVariant_ToFloat, 1,
   (char*)"V.ToFloat() -> float\nC++: float ToFloat()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToDouble", PyvtkVariant_ToDouble, 1,
   (char*)"V.ToDouble() -> float\nC++: double ToDouble()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToChar", PyvtkVariant_ToChar, 1,
   (char*)"V.ToChar() -> char\nC++: char ToChar()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToUnsignedChar", PyvtkVariant_ToUnsignedChar, 1,
   (char*)"V.ToUnsignedChar() -> int\nC++: unsigned char ToUnsignedChar()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToSignedChar", PyvtkVariant_ToSignedChar, 1,
   (char*)"V.ToSignedChar() -> int\nC++: signed char ToSignedChar()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToShort", PyvtkVariant_ToShort, 1,
   (char*)"V.ToShort() -> int\nC++: short ToShort()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToUnsignedShort", PyvtkVariant_ToUnsignedShort, 1,
   (char*)"V.ToUnsignedShort() -> int\nC++: unsigned short ToUnsignedShort()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToInt", PyvtkVariant_ToInt, 1,
   (char*)"V.ToInt() -> int\nC++: int ToInt()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToUnsignedInt", PyvtkVariant_ToUnsignedInt, 1,
   (char*)"V.ToUnsignedInt() -> int\nC++: unsigned int ToUnsignedInt()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToLong", PyvtkVariant_ToLong, 1,
   (char*)"V.ToLong() -> int\nC++: long ToLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToUnsignedLong", PyvtkVariant_ToUnsignedLong, 1,
   (char*)"V.ToUnsignedLong() -> int\nC++: unsigned long ToUnsignedLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToLongLong", PyvtkVariant_ToLongLong, 1,
   (char*)"V.ToLongLong() -> int\nC++: long long ToLongLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToUnsignedLongLong", PyvtkVariant_ToUnsignedLongLong, 1,
   (char*)"V.ToUnsignedLongLong() -> int\nC++: unsigned long long ToUnsignedLongLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToTypeInt64", PyvtkVariant_ToTypeInt64, 1,
   (char*)"V.ToTypeInt64() -> int\nC++: vtkTypeInt64 ToTypeInt64()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToTypeUInt64", PyvtkVariant_ToTypeUInt64, 1,
   (char*)"V.ToTypeUInt64() -> int\nC++: vtkTypeUInt64 ToTypeUInt64()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type;\n  set the valid flag to false when the conversion fails. If it\nholds an array type, cast the first value of the array\n  to the appropriate type. Fail if it holds a VTK object which is\nnot an array.\n"},
  {(char*)"ToVTKObject", PyvtkVariant_ToVTKObject, 1,
   (char*)"V.ToVTKObject() -> vtkObjectBase\nC++: vtkObjectBase *ToVTKObject()\n\nReturn the VTK object, or NULL if not of that type.\n"},
  {(char*)"ToArray", PyvtkVariant_ToArray, 1,
   (char*)"V.ToArray() -> vtkAbstractArray\nC++: vtkAbstractArray *ToArray()\n\nReturn the array, or NULL if not of that type.\n"},
  {(char*)"IsEqual", PyvtkVariant_IsEqual, 1,
   (char*)"V.IsEqual(vtkVariant) -> bool\nC++: bool IsEqual(const vtkVariant &other)\n\nDetermines whether two variants have the same value. They do not\nneed to be storing exactly the same type to have the same value. \nIn practice you don't need to use this method: just use\noperator== instead.  If you want precise equality down to the bit\nlevel use the following idiom:\n\nvtkVariantStrictEquality comparator; bool variantsEqual =\ncomparator(firstVariant, secondVariant);\n"},
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVariant_Type
extern PyTypeObject PyvtkVariant_Type;
#define DECLARED_PyvtkVariant_Type
#endif


static PyObject *
PyvtkVariant_vtkVariant_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVariant *op = new vtkVariant();

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkVariant *op = new vtkVariant(*temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  char temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  long long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s9(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkStdString temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s10(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s11(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s12(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
    {
    vtkVariant *op = new vtkVariant(*temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVariant", op);
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariant_vtkVariant_Methods[] = {
  {NULL, PyvtkVariant_vtkVariant_s2, 1,
   (char*)"O &vtkVariant"},
  {NULL, PyvtkVariant_vtkVariant_s3, 1,
   (char*)"O bool"},
  {NULL, PyvtkVariant_vtkVariant_s4, 1,
   (char*)"c"},
  {NULL, PyvtkVariant_vtkVariant_s5, 1,
   (char*)"i"},
  {NULL, PyvtkVariant_vtkVariant_s6, 1,
   (char*)"l"},
  {NULL, PyvtkVariant_vtkVariant_s7, 1,
   (char*)"L"},
  {NULL, PyvtkVariant_vtkVariant_s8, 1,
   (char*)"d"},
  {NULL, PyvtkVariant_vtkVariant_s9, 1,
   (char*)"s"},
  {NULL, PyvtkVariant_vtkVariant_s10, 1,
   (char*)"O unicode"},
  {NULL, PyvtkVariant_vtkVariant_s11, 1,
   (char*)"O *vtkObjectBase"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVariant_vtkVariant(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVariant_vtkVariant_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkVariant_vtkVariant_s1(self, args);
    case 2:
      return PyvtkVariant_vtkVariant_s12(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "vtkVariant");
  return NULL;
}


static PyMethodDef PyvtkVariant_NewMethod = \
{ (char*)"vtkVariant", PyvtkVariant_vtkVariant, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVariant_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVariant_vtkVariant(NULL, args);
}
#endif

static void PyvtkVariant_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVariant *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static PyObject *PyvtkVariant_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  vtksys_ios::ostringstream os;
  if (obj->vtk_ptr)
    {
    os << *static_cast<const vtkVariant *>(obj->vtk_ptr);
    }
  const vtksys_stl::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

#if PY_VERSION_HEX >= 0x02010000
static PyObject *PyvtkVariant_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = NULL;
  PyObject *n2 = NULL;
  const vtkVariant *so1 = NULL;
  const vtkVariant *so2 = NULL;
  int result = -1;

  if (o1->ob_type == &PyvtkVariant_Type)
    {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVariant *>(s1->vtk_ptr);
    }
  else
    {
    so1 = static_cast<const vtkVariant *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVariant", &n1));
    if (so1 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  if (o2->ob_type == &PyvtkVariant_Type)
    {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVariant *>(s2->vtk_ptr);
    }
  else
    {
    so2 = static_cast<const vtkVariant *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVariant", &n2));
    if (so2 == NULL)
      {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
      }
    }

  switch (opid)
    {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      result = ((*so1) <= (*so2));
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      result = ((*so1) > (*so2));
      break;
    case Py_GE:
      result = ((*so1) >= (*so2));
      break;
    }

  if (n1)
    {
    Py_DECREF(n1);
    }
  else if (n2)
    {
    Py_DECREF(n2);
    }

  if (result == -1)
    {
    PyErr_SetString(PyExc_TypeError, (char *)"operation not available");
    return NULL;
    }

#if PY_VERSION_HEX >= 0x02030000
  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
#else
  if (result == 0)
    {
    Py_INCREF(Py_False);
    return Py_False;
    }
  Py_INCREF(Py_True);
  return Py_True;
#endif
}
#endif

static long PyvtkVariant_Hash(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  const vtkVariant *op = static_cast<const vtkVariant *>(obj->vtk_ptr);
  long h = obj->vtk_hash;
  if (h != -1)
    {
    return h;
    }
  h = vtkPythonUtil::VariantHash(op);
  obj->vtk_hash = h;
  return h;
}

PyTypeObject PyvtkVariant_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVariant", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariant_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVariant_Hash, // tp_hash
  0, // tp_call
  PyvtkVariant_String, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
#if PY_VERSION_HEX >= 0x02010000
  PyvtkVariant_RichCompare, // tp_richcompare
#else
  0, // tp_richcompare
#endif
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkVariant_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVariant_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkVariant_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVariant(*static_cast<const vtkVariant*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVariant_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVariant_Type,
    PyvtkVariant_Methods,
    PyvtkVariant_vtkVariant_Methods,
    &PyvtkVariant_NewMethod,
    PyvtkVariant_Doc(), &PyvtkVariant_CCopy);
}

const char **PyvtkVariant_Doc()
{
  static const char *docstring[] = {
    "vtkVariant - A atomic type representing the union of many types\n\n",
    "Thanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    "V.vtkVariant()\nC++: vtkVariant()\nV.vtkVariant(vtkVariant)\nC++: vtkVariant(const vtkVariant &other)\nV.vtkVariant(bool)\nC++: vtkVariant(bool value)\nV.vtkVariant(char)\nC++: vtkVariant(char value)\nV.vtkVariant(int)\nC++: vtkVariant(int value)\nV.vtkVariant(int)\nC++: vtkVariant(long value)\nV.vtkVariant(int)\nC++: vtkVariant(long long value)\nV.vtkVariant(float)\nC++: vtkVariant(double value)\nV.vtkVariant(string)\nC++: vtkVariant(vtkStdString value)\nV.vtkVariant(unicode)\nC++: vtkVariant(const vtkUnicodeString &value)\nV.vtkVariant(vtkObjectBase)\nC++: vtkVariant(vtkObjectBase *value)\nV.vtkVariant(vtkVariant, int)\nC++: vtkVariant(const vtkVariant &other, unsigned int type)\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVariantLessThan_Doc();

static PyMethodDef PyvtkVariantLessThan_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVariantLessThan_Type
extern PyTypeObject PyvtkVariantLessThan_Type;
#define DECLARED_PyvtkVariantLessThan_Type
#endif


static PyObject *
PyvtkVariantLessThan_vtkVariantLessThan(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantLessThan");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVariantLessThan *op = new vtkVariantLessThan();

    result = PyVTKSpecialObject_New("vtkVariantLessThan", op);
    }

  return result;
}

static PyMethodDef PyvtkVariantLessThan_vtkVariantLessThan_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkVariantLessThan_NewMethod = \
{ (char*)"vtkVariantLessThan", PyvtkVariantLessThan_vtkVariantLessThan, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVariantLessThan_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVariantLessThan_vtkVariantLessThan(NULL, args);
}
#endif

static void PyvtkVariantLessThan_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVariantLessThan *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVariantLessThan_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkVariantLessThan_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVariantLessThan", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantLessThan_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVariantLessThan_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkVariantLessThan_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVariantLessThan_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkVariantLessThan_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVariantLessThan(*static_cast<const vtkVariantLessThan*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVariantLessThan_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVariantLessThan_Type,
    PyvtkVariantLessThan_Methods,
    PyvtkVariantLessThan_vtkVariantLessThan_Methods,
    &PyvtkVariantLessThan_NewMethod,
    PyvtkVariantLessThan_Doc(), &PyvtkVariantLessThan_CCopy);
}

const char **PyvtkVariantLessThan_Doc()
{
  static const char *docstring[] = {
    "vtkVariant - A atomic type representing the union of many types\n\n",
    "Thanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    "V.vtkVariantLessThan()\nC++: vtkVariantLessThan()\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVariantEqual_Doc();

static PyMethodDef PyvtkVariantEqual_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVariantEqual_Type
extern PyTypeObject PyvtkVariantEqual_Type;
#define DECLARED_PyvtkVariantEqual_Type
#endif


static PyObject *
PyvtkVariantEqual_vtkVariantEqual(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantEqual");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVariantEqual *op = new vtkVariantEqual();

    result = PyVTKSpecialObject_New("vtkVariantEqual", op);
    }

  return result;
}

static PyMethodDef PyvtkVariantEqual_vtkVariantEqual_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkVariantEqual_NewMethod = \
{ (char*)"vtkVariantEqual", PyvtkVariantEqual_vtkVariantEqual, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVariantEqual_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVariantEqual_vtkVariantEqual(NULL, args);
}
#endif

static void PyvtkVariantEqual_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVariantEqual *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVariantEqual_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkVariantEqual_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVariantEqual", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantEqual_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVariantEqual_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkVariantEqual_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVariantEqual_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkVariantEqual_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVariantEqual(*static_cast<const vtkVariantEqual*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVariantEqual_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVariantEqual_Type,
    PyvtkVariantEqual_Methods,
    PyvtkVariantEqual_vtkVariantEqual_Methods,
    &PyvtkVariantEqual_NewMethod,
    PyvtkVariantEqual_Doc(), &PyvtkVariantEqual_CCopy);
}

const char **PyvtkVariantEqual_Doc()
{
  static const char *docstring[] = {
    "vtkVariant - A atomic type representing the union of many types\n\n",
    "Thanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    "V.vtkVariantEqual()\nC++: vtkVariantEqual()\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVariantStrictWeakOrder_Doc();

static PyMethodDef PyvtkVariantStrictWeakOrder_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVariantStrictWeakOrder_Type
extern PyTypeObject PyvtkVariantStrictWeakOrder_Type;
#define DECLARED_PyvtkVariantStrictWeakOrder_Type
#endif


static PyObject *
PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantStrictWeakOrder");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVariantStrictWeakOrder *op = new vtkVariantStrictWeakOrder();

    result = PyVTKSpecialObject_New("vtkVariantStrictWeakOrder", op);
    }

  return result;
}

static PyMethodDef PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkVariantStrictWeakOrder_NewMethod = \
{ (char*)"vtkVariantStrictWeakOrder", PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVariantStrictWeakOrder_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder(NULL, args);
}
#endif

static void PyvtkVariantStrictWeakOrder_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVariantStrictWeakOrder *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVariantStrictWeakOrder_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkVariantStrictWeakOrder_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVariantStrictWeakOrder", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantStrictWeakOrder_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVariantStrictWeakOrder_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkVariantStrictWeakOrder_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVariantStrictWeakOrder_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkVariantStrictWeakOrder_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVariantStrictWeakOrder(*static_cast<const vtkVariantStrictWeakOrder*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVariantStrictWeakOrder_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVariantStrictWeakOrder_Type,
    PyvtkVariantStrictWeakOrder_Methods,
    PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_Methods,
    &PyvtkVariantStrictWeakOrder_NewMethod,
    PyvtkVariantStrictWeakOrder_Doc(), &PyvtkVariantStrictWeakOrder_CCopy);
}

const char **PyvtkVariantStrictWeakOrder_Doc()
{
  static const char *docstring[] = {
    "vtkVariant - A atomic type representing the union of many types\n\n",
    "Thanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    "V.vtkVariantStrictWeakOrder()\nC++: vtkVariantStrictWeakOrder()\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkVariantStrictEquality_Doc();

static PyMethodDef PyvtkVariantStrictEquality_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkVariantStrictEquality_Type
extern PyTypeObject PyvtkVariantStrictEquality_Type;
#define DECLARED_PyvtkVariantStrictEquality_Type
#endif


static PyObject *
PyvtkVariantStrictEquality_vtkVariantStrictEquality(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantStrictEquality");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkVariantStrictEquality *op = new vtkVariantStrictEquality();

    result = PyVTKSpecialObject_New("vtkVariantStrictEquality", op);
    }

  return result;
}

static PyMethodDef PyvtkVariantStrictEquality_vtkVariantStrictEquality_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkVariantStrictEquality_NewMethod = \
{ (char*)"vtkVariantStrictEquality", PyvtkVariantStrictEquality_vtkVariantStrictEquality, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkVariantStrictEquality_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkVariantStrictEquality_vtkVariantStrictEquality(NULL, args);
}
#endif

static void PyvtkVariantStrictEquality_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkVariantStrictEquality *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkVariantStrictEquality_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkVariantStrictEquality_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkVariantStrictEquality", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantStrictEquality_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkVariantStrictEquality_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkVariantStrictEquality_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkVariantStrictEquality_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkVariantStrictEquality_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkVariantStrictEquality(*static_cast<const vtkVariantStrictEquality*>(obj));
    }
  return 0;
}

static PyObject *PyvtkVariantStrictEquality_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkVariantStrictEquality_Type,
    PyvtkVariantStrictEquality_Methods,
    PyvtkVariantStrictEquality_vtkVariantStrictEquality_Methods,
    &PyvtkVariantStrictEquality_NewMethod,
    PyvtkVariantStrictEquality_Doc(), &PyvtkVariantStrictEquality_CCopy);
}

const char **PyvtkVariantStrictEquality_Doc()
{
  static const char *docstring[] = {
    "vtkVariant - A atomic type representing the union of many types\n\n",
    "Thanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    "V.vtkVariantStrictEquality()\nC++: vtkVariantStrictEquality()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVariant(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkVariant_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVariant", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVariantLessThan_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVariantLessThan", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVariantEqual_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVariantEqual", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVariantStrictWeakOrder_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVariantStrictWeakOrder", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkVariantStrictEquality_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVariantStrictEquality", o) != 0)
    {
    Py_DECREF(o);
    }

}

