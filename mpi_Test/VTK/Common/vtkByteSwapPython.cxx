// python wrapper for vtkByteSwap
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
#include "vtkByteSwap.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkByteSwap(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkByteSwap(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkByteSwapNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkByteSwapNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkByteSwap_Doc();


static PyObject *
PyvtkByteSwap_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

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
      tempr = op->vtkByteSwap::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

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
      tempr = op->vtkByteSwap::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

  vtkByteSwap *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkByteSwap::NewInstance();
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
PyvtkByteSwap_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkByteSwap *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkByteSwap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap2LE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2LE");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkByteSwap::Swap2LE(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap4LE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4LE");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkByteSwap::Swap4LE(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap8LE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8LE");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkByteSwap::Swap8LE(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap2LERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2LERange");

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkByteSwap::Swap2LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap4LERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4LERange");

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkByteSwap::Swap4LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap8LERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8LERange");

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkByteSwap::Swap8LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap2BE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2BE");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkByteSwap::Swap2BE(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap4BE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4BE");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkByteSwap::Swap4BE(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap8BE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8BE");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkByteSwap::Swap8BE(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap2BERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2BERange");

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkByteSwap::Swap2BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap4BERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4BERange");

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkByteSwap::Swap4BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_Swap8BERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8BERange");

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkByteSwap::Swap8BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkByteSwap_SwapVoidRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapVoidRange");

  void  *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkByteSwap::SwapVoidRange(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkByteSwap_Methods[] = {
  {(char*)"GetClassName", PyvtkByteSwap_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkByteSwap_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkByteSwap_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkByteSwap\nC++: vtkByteSwap *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkByteSwap_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkByteSwap\nC++: vtkByteSwap *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Swap2LE", PyvtkByteSwap_Swap2LE, 1,
   (char*)"V.Swap2LE()\nC++: static void Swap2LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {(char*)"Swap4LE", PyvtkByteSwap_Swap4LE, 1,
   (char*)"V.Swap4LE()\nC++: static void Swap4LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {(char*)"Swap8LE", PyvtkByteSwap_Swap8LE, 1,
   (char*)"V.Swap8LE()\nC++: static void Swap8LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {(char*)"Swap2LERange", PyvtkByteSwap_Swap2LERange, 1,
   (char*)"V.Swap2LERange(, int)\nC++: static void Swap2LERange(void *p, int num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {(char*)"Swap4LERange", PyvtkByteSwap_Swap4LERange, 1,
   (char*)"V.Swap4LERange(, int)\nC++: static void Swap4LERange(void *p, int num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {(char*)"Swap8LERange", PyvtkByteSwap_Swap8LERange, 1,
   (char*)"V.Swap8LERange(, int)\nC++: static void Swap8LERange(void *p, int num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {(char*)"Swap2BE", PyvtkByteSwap_Swap2BE, 1,
   (char*)"V.Swap2BE()\nC++: static void Swap2BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {(char*)"Swap4BE", PyvtkByteSwap_Swap4BE, 1,
   (char*)"V.Swap4BE()\nC++: static void Swap4BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {(char*)"Swap8BE", PyvtkByteSwap_Swap8BE, 1,
   (char*)"V.Swap8BE()\nC++: static void Swap8BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {(char*)"Swap2BERange", PyvtkByteSwap_Swap2BERange, 1,
   (char*)"V.Swap2BERange(, int)\nC++: static void Swap2BERange(void *p, int num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {(char*)"Swap4BERange", PyvtkByteSwap_Swap4BERange, 1,
   (char*)"V.Swap4BERange(, int)\nC++: static void Swap4BERange(void *p, int num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {(char*)"Swap8BERange", PyvtkByteSwap_Swap8BERange, 1,
   (char*)"V.Swap8BERange(, int)\nC++: static void Swap8BERange(void *p, int num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {(char*)"SwapVoidRange", PyvtkByteSwap_SwapVoidRange, 1,
   (char*)"V.SwapVoidRange(, int, int)\nC++: static void SwapVoidRange(void *buffer, int numWords,\n    int wordSize)\n\nSwaps the bytes of a buffer.  Uses an arbitrary word size, but\nassumes the word size is divisible by two.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkByteSwap_StaticNew()
{
  return vtkByteSwap::New();
}

PyObject *PyVTKClass_vtkByteSwapNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkByteSwap_StaticNew,
    PyvtkByteSwap_Methods,
    "vtkByteSwap", modulename,
    NULL, NULL,
    PyvtkByteSwap_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkByteSwap_Doc()
{
  static const char *docstring[] = {
    "vtkByteSwap - perform machine dependent byte swapping\n\n",
    "Superclass: vtkObject\n\n",
    "vtkByteSwap is used by other classes to perform machine dependent\nbyte swapping. Byte swapping is often used when reading or writing\nbinary files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkByteSwap(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkByteSwapNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkByteSwap", o) != 0)
    {
    Py_DECREF(o);
    }

}

