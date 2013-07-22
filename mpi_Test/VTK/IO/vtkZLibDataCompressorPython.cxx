// python wrapper for vtkZLibDataCompressor
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
#include "vtkZLibDataCompressor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkZLibDataCompressor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkZLibDataCompressor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkZLibDataCompressorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkZLibDataCompressorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataCompressorNew
extern "C" { PyObject *PyVTKClass_vtkDataCompressorNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataCompressorNew
#endif

static const char **PyvtkZLibDataCompressor_Doc();


static PyObject *
PyvtkZLibDataCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

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
      tempr = op->vtkZLibDataCompressor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

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
      tempr = op->vtkZLibDataCompressor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  vtkZLibDataCompressor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkZLibDataCompressor::NewInstance();
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
PyvtkZLibDataCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkZLibDataCompressor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkZLibDataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  unsigned long temp0;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumCompressionSpace(temp0);
      }
    else
      {
      tempr = op->vtkZLibDataCompressor::GetMaximumCompressionSpace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionLevel(temp0);
      }
    else
      {
      op->vtkZLibDataCompressor::SetCompressionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressionLevelMinValue();
      }
    else
      {
      tempr = op->vtkZLibDataCompressor::GetCompressionLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressionLevelMaxValue();
      }
    else
      {
      tempr = op->vtkZLibDataCompressor::GetCompressionLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressionLevel();
      }
    else
      {
      tempr = op->vtkZLibDataCompressor::GetCompressionLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkZLibDataCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkZLibDataCompressor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkZLibDataCompressor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkZLibDataCompressor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkZLibDataCompressor\nC++: vtkZLibDataCompressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkZLibDataCompressor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkZLibDataCompressor\nC++: vtkZLibDataCompressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumCompressionSpace", PyvtkZLibDataCompressor_GetMaximumCompressionSpace, 1,
   (char*)"V.GetMaximumCompressionSpace(int) -> int\nC++: unsigned long GetMaximumCompressionSpace(unsigned long size)\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {(char*)"SetCompressionLevel", PyvtkZLibDataCompressor_SetCompressionLevel, 1,
   (char*)"V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int)\n\nGet/Set the compression level.\n"},
  {(char*)"GetCompressionLevelMinValue", PyvtkZLibDataCompressor_GetCompressionLevelMinValue, 1,
   (char*)"V.GetCompressionLevelMinValue() -> int\nC++: int GetCompressionLevelMinValue()\n\nGet/Set the compression level.\n"},
  {(char*)"GetCompressionLevelMaxValue", PyvtkZLibDataCompressor_GetCompressionLevelMaxValue, 1,
   (char*)"V.GetCompressionLevelMaxValue() -> int\nC++: int GetCompressionLevelMaxValue()\n\nGet/Set the compression level.\n"},
  {(char*)"GetCompressionLevel", PyvtkZLibDataCompressor_GetCompressionLevel, 1,
   (char*)"V.GetCompressionLevel() -> int\nC++: int GetCompressionLevel()\n\nGet/Set the compression level.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkZLibDataCompressor_StaticNew()
{
  return vtkZLibDataCompressor::New();
}

PyObject *PyVTKClass_vtkZLibDataCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkZLibDataCompressor_StaticNew,
    PyvtkZLibDataCompressor_Methods,
    "vtkZLibDataCompressor", modulename,
    NULL, NULL,
    PyvtkZLibDataCompressor_Doc(),
    PyVTKClass_vtkDataCompressorNew(modulename));
  return cls;
}

const char **PyvtkZLibDataCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkZLibDataCompressor - Data compression using zlib.\n\n",
    "Superclass: vtkDataCompressor\n\n",
    "vtkZLibDataCompressor provides a concrete vtkDataCompressor class\nusing zlib for compressing and uncompressing data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkZLibDataCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkZLibDataCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkZLibDataCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

