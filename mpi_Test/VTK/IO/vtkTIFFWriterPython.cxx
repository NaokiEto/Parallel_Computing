// python wrapper for vtkTIFFWriter
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
#include "vtkTIFFWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTIFFWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTIFFWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTIFFWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTIFFWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkTIFFWriter_Doc();


static PyObject *
PyvtkTIFFWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

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
      tempr = op->vtkTIFFWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

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
      tempr = op->vtkTIFFWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  vtkTIFFWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTIFFWriter::NewInstance();
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
PyvtkTIFFWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTIFFWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTIFFWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompression(temp0);
      }
    else
      {
      op->vtkTIFFWriter::SetCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressionMinValue();
      }
    else
      {
      tempr = op->vtkTIFFWriter::GetCompressionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressionMaxValue();
      }
    else
      {
      tempr = op->vtkTIFFWriter::GetCompressionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompression();
      }
    else
      {
      tempr = op->vtkTIFFWriter::GetCompression();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToNoCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToNoCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToNoCompression();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToNoCompression();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToPackBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToPackBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToPackBits();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToPackBits();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToJPEG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToJPEG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToJPEG();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToJPEG();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToDeflate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToDeflate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToDeflate();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToDeflate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToLZW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToLZW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToLZW();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToLZW();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTIFFWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkTIFFWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTIFFWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTIFFWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTIFFWriter\nC++: vtkTIFFWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTIFFWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTIFFWriter\nC++: vtkTIFFWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompression", PyvtkTIFFWriter_SetCompression, 1,
   (char*)"V.SetCompression(int)\nC++: void SetCompression(int)\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"GetCompressionMinValue", PyvtkTIFFWriter_GetCompressionMinValue, 1,
   (char*)"V.GetCompressionMinValue() -> int\nC++: int GetCompressionMinValue()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"GetCompressionMaxValue", PyvtkTIFFWriter_GetCompressionMaxValue, 1,
   (char*)"V.GetCompressionMaxValue() -> int\nC++: int GetCompressionMaxValue()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"GetCompression", PyvtkTIFFWriter_GetCompression, 1,
   (char*)"V.GetCompression() -> int\nC++: int GetCompression()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToNoCompression", PyvtkTIFFWriter_SetCompressionToNoCompression, 1,
   (char*)"V.SetCompressionToNoCompression()\nC++: void SetCompressionToNoCompression()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToPackBits", PyvtkTIFFWriter_SetCompressionToPackBits, 1,
   (char*)"V.SetCompressionToPackBits()\nC++: void SetCompressionToPackBits()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToJPEG", PyvtkTIFFWriter_SetCompressionToJPEG, 1,
   (char*)"V.SetCompressionToJPEG()\nC++: void SetCompressionToJPEG()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToDeflate", PyvtkTIFFWriter_SetCompressionToDeflate, 1,
   (char*)"V.SetCompressionToDeflate()\nC++: void SetCompressionToDeflate()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToLZW", PyvtkTIFFWriter_SetCompressionToLZW, 1,
   (char*)"V.SetCompressionToLZW()\nC++: void SetCompressionToLZW()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTIFFWriter_StaticNew()
{
  return vtkTIFFWriter::New();
}

PyObject *PyVTKClass_vtkTIFFWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTIFFWriter_StaticNew,
    PyvtkTIFFWriter_Methods,
    "vtkTIFFWriter", modulename,
    NULL, NULL,
    PyvtkTIFFWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NoCompression", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"PackBits", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"JPEG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Deflate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"LZW", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTIFFWriter_Doc()
{
  static const char *docstring[] = {
    "vtkTIFFWriter - write out image data as a TIFF file\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkTIFFWriter writes image data as a TIFF data file. Data can be\nwritten uncompressed or compressed. Several forms of compression are\nsupported including packed bits, JPEG, deflation, and LZW. (Note: LZW\ncompression is currently under patent in the US and is disabled until\nthe patent expires. However, the mechanism for supporting this\ncompression is available for those with a valid license or to w",
    "hom\nthe patent does not apply.)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTIFFWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTIFFWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTIFFWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

