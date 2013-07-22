// python wrapper for vtkXMLStructuredDataWriter
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
#include "vtkXMLStructuredDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLStructuredDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLStructuredDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLStructuredDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLStructuredDataWriter_Doc();


static PyObject *
PyvtkXMLStructuredDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLStructuredDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLStructuredDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  vtkXMLStructuredDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLStructuredDataWriter::NewInstance();
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
PyvtkXMLStructuredDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkXMLStructuredDataWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPieces();
      }
    else
      {
      tempr = op->vtkXMLStructuredDataWriter::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_SetWriteExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWriteExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkXMLStructuredDataWriter::SetWriteExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLStructuredDataWriter_SetWriteExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWriteExtent(temp0);
      }
    else
      {
      op->vtkXMLStructuredDataWriter::SetWriteExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLStructuredDataWriter_SetWriteExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkXMLStructuredDataWriter_SetWriteExtent_s1(self, args);
    case 1:
      return PyvtkXMLStructuredDataWriter_SetWriteExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWriteExtent");
  return NULL;
}



static PyObject *
PyvtkXMLStructuredDataWriter_GetWriteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteExtent();
      }
    else
      {
      tempr = op->vtkXMLStructuredDataWriter::GetWriteExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_SetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      op->SetExtentTranslator(temp0);
      }
    else
      {
      op->vtkXMLStructuredDataWriter::SetExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLStructuredDataWriter_GetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLStructuredDataWriter *op = static_cast<vtkXMLStructuredDataWriter *>(vp);

  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslator();
      }
    else
      {
      tempr = op->vtkXMLStructuredDataWriter::GetExtentTranslator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLStructuredDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLStructuredDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLStructuredDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLStructuredDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLStructuredDataWriter\nC++: vtkXMLStructuredDataWriter *NewInstance()\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkXMLStructuredDataWriter_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {(char*)"GetNumberOfPieces", PyvtkXMLStructuredDataWriter_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {(char*)"SetWriteExtent", PyvtkXMLStructuredDataWriter_SetWriteExtent, 1,
   (char*)"V.SetWriteExtent(int, int, int, int, int, int)\nC++: void SetWriteExtent(int, int, int, int, int, int)\nV.SetWriteExtent((int, int, int, int, int, int))\nC++: void SetWriteExtent(int a[6])\n\n"},
  {(char*)"GetWriteExtent", PyvtkXMLStructuredDataWriter_GetWriteExtent, 1,
   (char*)"V.GetWriteExtent() -> (int, int, int, int, int, int)\nC++: int *GetWriteExtent()\n\n"},
  {(char*)"SetExtentTranslator", PyvtkXMLStructuredDataWriter_SetExtentTranslator, 1,
   (char*)"V.SetExtentTranslator(vtkExtentTranslator)\nC++: virtual void SetExtentTranslator(vtkExtentTranslator *)\n\nGet/Set the extent translator used for streaming.\n"},
  {(char*)"GetExtentTranslator", PyvtkXMLStructuredDataWriter_GetExtentTranslator, 1,
   (char*)"V.GetExtentTranslator() -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetExtentTranslator()\n\nGet/Set the extent translator used for streaming.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLStructuredDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLStructuredDataWriter_Methods,
    "vtkXMLStructuredDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLStructuredDataWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLStructuredDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLStructuredDataWriter - Superclass for VTK XML structured data\nwriters.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLStructuredDataWriter provides VTK XML writing functionality\nthat is common among all the structured data formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLStructuredDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLStructuredDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLStructuredDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

