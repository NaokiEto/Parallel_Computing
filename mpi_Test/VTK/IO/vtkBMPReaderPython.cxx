// python wrapper for vtkBMPReader
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
#include "vtkBMPReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBMPReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBMPReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBMPReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBMPReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReaderNew
extern "C" { PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageReaderNew
#endif

static const char **PyvtkBMPReader_Doc();


static PyObject *
PyvtkBMPReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

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
      tempr = op->vtkBMPReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

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
      tempr = op->vtkBMPReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  vtkBMPReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBMPReader::NewInstance();
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
PyvtkBMPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBMPReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBMPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepth();
      }
    else
      {
      tempr = op->vtkBMPReader::GetDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkBMPReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileExtensions();
      }
    else
      {
      tempr = op->vtkBMPReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescriptiveName();
      }
    else
      {
      tempr = op->vtkBMPReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_SetAllow8BitBMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllow8BitBMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllow8BitBMP(temp0);
      }
    else
      {
      op->vtkBMPReader::SetAllow8BitBMP(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetAllow8BitBMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllow8BitBMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllow8BitBMP();
      }
    else
      {
      tempr = op->vtkBMPReader::GetAllow8BitBMP();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_Allow8BitBMPOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allow8BitBMPOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Allow8BitBMPOn();
      }
    else
      {
      op->vtkBMPReader::Allow8BitBMPOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_Allow8BitBMPOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allow8BitBMPOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Allow8BitBMPOff();
      }
    else
      {
      op->vtkBMPReader::Allow8BitBMPOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkBMPReader::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBMPReader_Methods[] = {
  {(char*)"GetClassName", PyvtkBMPReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBMPReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBMPReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBMPReader\nC++: vtkBMPReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBMPReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBMPReader\nC++: vtkBMPReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDepth", PyvtkBMPReader_GetDepth, 1,
   (char*)"V.GetDepth() -> int\nC++: int GetDepth()\n\nReturns the depth of the BMP, either 8 or 24.\n"},
  {(char*)"CanReadFile", PyvtkBMPReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nIs the given file a BMP file?\n"},
  {(char*)"GetFileExtensions", PyvtkBMPReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkBMPReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {(char*)"SetAllow8BitBMP", PyvtkBMPReader_SetAllow8BitBMP, 1,
   (char*)"V.SetAllow8BitBMP(int)\nC++: void SetAllow8BitBMP(int a)\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"GetAllow8BitBMP", PyvtkBMPReader_GetAllow8BitBMP, 1,
   (char*)"V.GetAllow8BitBMP() -> int\nC++: int GetAllow8BitBMP()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"Allow8BitBMPOn", PyvtkBMPReader_Allow8BitBMPOn, 1,
   (char*)"V.Allow8BitBMPOn()\nC++: void Allow8BitBMPOn()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"Allow8BitBMPOff", PyvtkBMPReader_Allow8BitBMPOff, 1,
   (char*)"V.Allow8BitBMPOff()\nC++: void Allow8BitBMPOff()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"GetLookupTable", PyvtkBMPReader_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBMPReader_StaticNew()
{
  return vtkBMPReader::New();
}

PyObject *PyVTKClass_vtkBMPReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBMPReader_StaticNew,
    PyvtkBMPReader_Methods,
    "vtkBMPReader", modulename,
    NULL, NULL,
    PyvtkBMPReader_Doc(),
    PyVTKClass_vtkImageReaderNew(modulename));
  return cls;
}

const char **PyvtkBMPReader_Doc()
{
  static const char *docstring[] = {
    "vtkBMPReader - read Windows BMP files\n\n",
    "Superclass: vtkImageReader\n\n",
    "vtkBMPReader is a source object that reads Windows BMP files. This\nincludes indexed and 24bit bitmaps Usually, all BMPs are converted to\n24bit RGB, but BMPs may be output as 8bit images with a LookupTable\nif the Allow8BitBMP flag is set.\n\nBMPReader creates structured point datasets. The dimension of the\ndataset depends upon the number of files read. Reading a single file\nresults in a 2D image, whi",
    "le reading more than one file results in a\n3D volume.\n\nTo read a volume, files must be of the form \"FileName.<number>\"\n(e.g., foo.bmp.0, foo.bmp.1, ...). You must also specify the image\nrange. This range specifies the beginning and ending files to read\n(range can be any pair of non-negative numbers).\n\nThe default behavior is to read a single file. In this case, the form\nof the file is simply \"File",
    "Name\" (e.g., foo.bmp).\n\nSee Also:\n\nvtkBMPWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBMPReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBMPReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBMPReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

