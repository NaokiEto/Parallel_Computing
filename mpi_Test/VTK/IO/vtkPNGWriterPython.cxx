// python wrapper for vtkPNGWriter
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
#include "vtkPNGWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPNGWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPNGWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPNGWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPNGWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkPNGWriter_Doc();


static PyObject *
PyvtkPNGWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

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
      tempr = op->vtkPNGWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

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
      tempr = op->vtkPNGWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  vtkPNGWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPNGWriter::NewInstance();
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
PyvtkPNGWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPNGWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPNGWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkPNGWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_SetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToMemory(temp0);
      }
    else
      {
      op->vtkPNGWriter::SetWriteToMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteToMemory();
      }
    else
      {
      tempr = op->vtkPNGWriter::GetWriteToMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_WriteToMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToMemoryOn();
      }
    else
      {
      op->vtkPNGWriter::WriteToMemoryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_WriteToMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToMemoryOff();
      }
    else
      {
      op->vtkPNGWriter::WriteToMemoryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_SetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetResult(temp0);
      }
    else
      {
      op->vtkPNGWriter::SetResult(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResult();
      }
    else
      {
      tempr = op->vtkPNGWriter::GetResult();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPNGWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPNGWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPNGWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPNGWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPNGWriter\nC++: vtkPNGWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPNGWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPNGWriter\nC++: vtkPNGWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkPNGWriter_Write, 1,
   (char*)"V.Write()\nC++: virtual void Write()\n\nThe main interface which triggers the writer to start.\n"},
  {(char*)"SetWriteToMemory", PyvtkPNGWriter_SetWriteToMemory, 1,
   (char*)"V.SetWriteToMemory(int)\nC++: void SetWriteToMemory(unsigned int a)\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"GetWriteToMemory", PyvtkPNGWriter_GetWriteToMemory, 1,
   (char*)"V.GetWriteToMemory() -> int\nC++: unsigned int GetWriteToMemory()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"WriteToMemoryOn", PyvtkPNGWriter_WriteToMemoryOn, 1,
   (char*)"V.WriteToMemoryOn()\nC++: void WriteToMemoryOn()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"WriteToMemoryOff", PyvtkPNGWriter_WriteToMemoryOff, 1,
   (char*)"V.WriteToMemoryOff()\nC++: void WriteToMemoryOff()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"SetResult", PyvtkPNGWriter_SetResult, 1,
   (char*)"V.SetResult(vtkUnsignedCharArray)\nC++: virtual void SetResult(vtkUnsignedCharArray *)\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {(char*)"GetResult", PyvtkPNGWriter_GetResult, 1,
   (char*)"V.GetResult() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetResult()\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPNGWriter_StaticNew()
{
  return vtkPNGWriter::New();
}

PyObject *PyVTKClass_vtkPNGWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPNGWriter_StaticNew,
    PyvtkPNGWriter_Methods,
    "vtkPNGWriter", modulename,
    NULL, NULL,
    PyvtkPNGWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkPNGWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPNGWriter - Writes PNG files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkPNGWriter writes PNG files. It supports 1 to 4 component data of\nunsigned char or unsigned short\n\nSee Also:\n\nvtkPNGReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPNGWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPNGWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPNGWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

