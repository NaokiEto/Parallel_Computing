// python wrapper for vtkJPEGWriter
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
#include "vtkJPEGWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkJPEGWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkJPEGWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkJPEGWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkJPEGWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkJPEGWriter_Doc();


static PyObject *
PyvtkJPEGWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      tempr = op->vtkJPEGWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      tempr = op->vtkJPEGWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  vtkJPEGWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkJPEGWriter::NewInstance();
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
PyvtkJPEGWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkJPEGWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkJPEGWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkJPEGWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuality(temp0);
      }
    else
      {
      op->vtkJPEGWriter::SetQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQualityMinValue();
      }
    else
      {
      tempr = op->vtkJPEGWriter::GetQualityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQualityMaxValue();
      }
    else
      {
      tempr = op->vtkJPEGWriter::GetQualityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuality();
      }
    else
      {
      tempr = op->vtkJPEGWriter::GetQuality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetProgressive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgressive(temp0);
      }
    else
      {
      op->vtkJPEGWriter::SetProgressive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetProgressive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgressive();
      }
    else
      {
      tempr = op->vtkJPEGWriter::GetProgressive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_ProgressiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProgressiveOn();
      }
    else
      {
      op->vtkJPEGWriter::ProgressiveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_ProgressiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProgressiveOff();
      }
    else
      {
      op->vtkJPEGWriter::ProgressiveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      op->vtkJPEGWriter::SetWriteToMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      tempr = op->vtkJPEGWriter::GetWriteToMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_WriteToMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToMemoryOn();
      }
    else
      {
      op->vtkJPEGWriter::WriteToMemoryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_WriteToMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToMemoryOff();
      }
    else
      {
      op->vtkJPEGWriter::WriteToMemoryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      op->vtkJPEGWriter::SetResult(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      tempr = op->vtkJPEGWriter::GetResult();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkJPEGWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkJPEGWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkJPEGWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkJPEGWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkJPEGWriter\nC++: vtkJPEGWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkJPEGWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkJPEGWriter\nC++: vtkJPEGWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkJPEGWriter_Write, 1,
   (char*)"V.Write()\nC++: virtual void Write()\n\nThe main interface which triggers the writer to start.\n"},
  {(char*)"SetQuality", PyvtkJPEGWriter_SetQuality, 1,
   (char*)"V.SetQuality(int)\nC++: void SetQuality(int)\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"GetQualityMinValue", PyvtkJPEGWriter_GetQualityMinValue, 1,
   (char*)"V.GetQualityMinValue() -> int\nC++: int GetQualityMinValue()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"GetQualityMaxValue", PyvtkJPEGWriter_GetQualityMaxValue, 1,
   (char*)"V.GetQualityMaxValue() -> int\nC++: int GetQualityMaxValue()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"GetQuality", PyvtkJPEGWriter_GetQuality, 1,
   (char*)"V.GetQuality() -> int\nC++: int GetQuality()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"SetProgressive", PyvtkJPEGWriter_SetProgressive, 1,
   (char*)"V.SetProgressive(int)\nC++: void SetProgressive(unsigned int a)\n\nProgressive JPEG generation.\n"},
  {(char*)"GetProgressive", PyvtkJPEGWriter_GetProgressive, 1,
   (char*)"V.GetProgressive() -> int\nC++: unsigned int GetProgressive()\n\nProgressive JPEG generation.\n"},
  {(char*)"ProgressiveOn", PyvtkJPEGWriter_ProgressiveOn, 1,
   (char*)"V.ProgressiveOn()\nC++: void ProgressiveOn()\n\nProgressive JPEG generation.\n"},
  {(char*)"ProgressiveOff", PyvtkJPEGWriter_ProgressiveOff, 1,
   (char*)"V.ProgressiveOff()\nC++: void ProgressiveOff()\n\nProgressive JPEG generation.\n"},
  {(char*)"SetWriteToMemory", PyvtkJPEGWriter_SetWriteToMemory, 1,
   (char*)"V.SetWriteToMemory(int)\nC++: void SetWriteToMemory(unsigned int a)\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"GetWriteToMemory", PyvtkJPEGWriter_GetWriteToMemory, 1,
   (char*)"V.GetWriteToMemory() -> int\nC++: unsigned int GetWriteToMemory()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"WriteToMemoryOn", PyvtkJPEGWriter_WriteToMemoryOn, 1,
   (char*)"V.WriteToMemoryOn()\nC++: void WriteToMemoryOn()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"WriteToMemoryOff", PyvtkJPEGWriter_WriteToMemoryOff, 1,
   (char*)"V.WriteToMemoryOff()\nC++: void WriteToMemoryOff()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"SetResult", PyvtkJPEGWriter_SetResult, 1,
   (char*)"V.SetResult(vtkUnsignedCharArray)\nC++: virtual void SetResult(vtkUnsignedCharArray *)\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {(char*)"GetResult", PyvtkJPEGWriter_GetResult, 1,
   (char*)"V.GetResult() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetResult()\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkJPEGWriter_StaticNew()
{
  return vtkJPEGWriter::New();
}

PyObject *PyVTKClass_vtkJPEGWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkJPEGWriter_StaticNew,
    PyvtkJPEGWriter_Methods,
    "vtkJPEGWriter", modulename,
    NULL, NULL,
    PyvtkJPEGWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkJPEGWriter_Doc()
{
  static const char *docstring[] = {
    "vtkJPEGWriter - Writes JPEG files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkJPEGWriter writes JPEG files. It supports 1 and 3 component data\nof unsigned char. It relies on the IJG's libjpeg.  Thanks to IJG for\nsupplying a public jpeg IO library.\n\nSee Also:\n\nvtkJPEGReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkJPEGWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkJPEGWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkJPEGWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

