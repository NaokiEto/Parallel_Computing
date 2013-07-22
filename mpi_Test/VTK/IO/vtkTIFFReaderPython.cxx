// python wrapper for vtkTIFFReader
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
#include "vtkTIFFReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTIFFReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTIFFReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTIFFReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTIFFReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkTIFFReader_Doc();


static PyObject *
PyvtkTIFFReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

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
      tempr = op->vtkTIFFReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

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
      tempr = op->vtkTIFFReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  vtkTIFFReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTIFFReader::NewInstance();
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
PyvtkTIFFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTIFFReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTIFFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

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
      tempr = op->vtkTIFFReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

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
      tempr = op->vtkTIFFReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

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
      tempr = op->vtkTIFFReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_InitializeColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeColors();
      }
    else
      {
      op->vtkTIFFReader::InitializeColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_ReadVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReadVolume(temp0);
      }
    else
      {
      op->vtkTIFFReader::ReadVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_ReadTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ReadTiles(temp0);
      }
    else
      {
      op->vtkTIFFReader::ReadTiles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationType(temp0);
      }
    else
      {
      op->vtkTIFFReader::SetOrientationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationType();
      }
    else
      {
      tempr = op->vtkTIFFReader::GetOrientationType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOrientationTypeSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationTypeSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationTypeSpecifiedFlag();
      }
    else
      {
      tempr = op->vtkTIFFReader::GetOrientationTypeSpecifiedFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetOriginSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOriginSpecifiedFlag(temp0);
      }
    else
      {
      op->vtkTIFFReader::SetOriginSpecifiedFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetOriginSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginSpecifiedFlag();
      }
    else
      {
      tempr = op->vtkTIFFReader::GetOriginSpecifiedFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_OriginSpecifiedFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginSpecifiedFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OriginSpecifiedFlagOn();
      }
    else
      {
      op->vtkTIFFReader::OriginSpecifiedFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_OriginSpecifiedFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginSpecifiedFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OriginSpecifiedFlagOff();
      }
    else
      {
      op->vtkTIFFReader::OriginSpecifiedFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SetSpacingSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpacingSpecifiedFlag(temp0);
      }
    else
      {
      op->vtkTIFFReader::SetSpacingSpecifiedFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_GetSpacingSpecifiedFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingSpecifiedFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpacingSpecifiedFlag();
      }
    else
      {
      tempr = op->vtkTIFFReader::GetSpacingSpecifiedFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SpacingSpecifiedFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpacingSpecifiedFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpacingSpecifiedFlagOn();
      }
    else
      {
      op->vtkTIFFReader::SpacingSpecifiedFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFReader_SpacingSpecifiedFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpacingSpecifiedFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFReader *op = static_cast<vtkTIFFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpacingSpecifiedFlagOff();
      }
    else
      {
      op->vtkTIFFReader::SpacingSpecifiedFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTIFFReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTIFFReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTIFFReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTIFFReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTIFFReader\nC++: vtkTIFFReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTIFFReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTIFFReader\nC++: vtkTIFFReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkTIFFReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nIs the given file name a tiff file file?\n"},
  {(char*)"GetFileExtensions", PyvtkTIFFReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkTIFFReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {(char*)"InitializeColors", PyvtkTIFFReader_InitializeColors, 1,
   (char*)"V.InitializeColors()\nC++: void InitializeColors()\n\nAuxilary methods used by the reader internally.\n"},
  {(char*)"ReadVolume", PyvtkTIFFReader_ReadVolume, 1,
   (char*)"V.ReadVolume()\nC++: virtual void ReadVolume(void *buffer)\n\nReads 3D data from multi-pages tiff.\n"},
  {(char*)"ReadTiles", PyvtkTIFFReader_ReadTiles, 1,
   (char*)"V.ReadTiles()\nC++: virtual void ReadTiles(void *buffer)\n\nReads 3D data from tiled tiff\n"},
  {(char*)"SetOrientationType", PyvtkTIFFReader_SetOrientationType, 1,
   (char*)"V.SetOrientationType(int)\nC++: void SetOrientationType(unsigned int orientationType)\n\nSet orientation type ORIENTATION_TOPLEFT         1       (row 0\ntop, col 0 lhs) ORIENTATION_TOPRIGHT        2       (row 0 top,\ncol 0 rhs) ORIENTATION_BOTRIGHT        3       (row 0 bottom, col\n0 rhs) ORIENTATION_BOTLEFT         4       (row 0 bottom, col 0\nlhs) ORIENTATION_LEFTTOP         5       (row 0 lhs, col 0 top)\nORIENTATION_RIGHTTOP        6       (row 0 rhs, col 0 top)\nORIENTATION_RIGHTBOT        7       (row 0 rhs, col 0 bottom)\nORIENTATION_LEFTBOT         8       (row 0 lhs, col 0 bottom)\nUser need to explicitly include vtk_tiff.h header to have access\nto those #define\n"},
  {(char*)"GetOrientationType", PyvtkTIFFReader_GetOrientationType, 1,
   (char*)"V.GetOrientationType() -> int\nC++: unsigned int GetOrientationType()\n\nSet orientation type ORIENTATION_TOPLEFT         1       (row 0\ntop, col 0 lhs) ORIENTATION_TOPRIGHT        2       (row 0 top,\ncol 0 rhs) ORIENTATION_BOTRIGHT        3       (row 0 bottom, col\n0 rhs) ORIENTATION_BOTLEFT         4       (row 0 bottom, col 0\nlhs) ORIENTATION_LEFTTOP         5       (row 0 lhs, col 0 top)\nORIENTATION_RIGHTTOP        6       (row 0 rhs, col 0 top)\nORIENTATION_RIGHTBOT        7       (row 0 rhs, col 0 bottom)\nORIENTATION_LEFTBOT         8       (row 0 lhs, col 0 bottom)\nUser need to explicitly include vtk_tiff.h header to have access\nto those #define\n"},
  {(char*)"GetOrientationTypeSpecifiedFlag", PyvtkTIFFReader_GetOrientationTypeSpecifiedFlag, 1,
   (char*)"V.GetOrientationTypeSpecifiedFlag() -> bool\nC++: bool GetOrientationTypeSpecifiedFlag()\n\nGet method to check if orientation type is specified\n"},
  {(char*)"SetOriginSpecifiedFlag", PyvtkTIFFReader_SetOriginSpecifiedFlag, 1,
   (char*)"V.SetOriginSpecifiedFlag(bool)\nC++: void SetOriginSpecifiedFlag(bool a)\n\nSet/get methods to see if manual Origin/Spacing have been set.\n"},
  {(char*)"GetOriginSpecifiedFlag", PyvtkTIFFReader_GetOriginSpecifiedFlag, 1,
   (char*)"V.GetOriginSpecifiedFlag() -> bool\nC++: bool GetOriginSpecifiedFlag()\n\nSet/get methods to see if manual Origin/Spacing have been set.\n"},
  {(char*)"OriginSpecifiedFlagOn", PyvtkTIFFReader_OriginSpecifiedFlagOn, 1,
   (char*)"V.OriginSpecifiedFlagOn()\nC++: void OriginSpecifiedFlagOn()\n\nSet/get methods to see if manual Origin/Spacing have been set.\n"},
  {(char*)"OriginSpecifiedFlagOff", PyvtkTIFFReader_OriginSpecifiedFlagOff, 1,
   (char*)"V.OriginSpecifiedFlagOff()\nC++: void OriginSpecifiedFlagOff()\n\nSet/get methods to see if manual Origin/Spacing have been set.\n"},
  {(char*)"SetSpacingSpecifiedFlag", PyvtkTIFFReader_SetSpacingSpecifiedFlag, 1,
   (char*)"V.SetSpacingSpecifiedFlag(bool)\nC++: void SetSpacingSpecifiedFlag(bool a)\n\n\n"},
  {(char*)"GetSpacingSpecifiedFlag", PyvtkTIFFReader_GetSpacingSpecifiedFlag, 1,
   (char*)"V.GetSpacingSpecifiedFlag() -> bool\nC++: bool GetSpacingSpecifiedFlag()\n\n\n"},
  {(char*)"SpacingSpecifiedFlagOn", PyvtkTIFFReader_SpacingSpecifiedFlagOn, 1,
   (char*)"V.SpacingSpecifiedFlagOn()\nC++: void SpacingSpecifiedFlagOn()\n\n\n"},
  {(char*)"SpacingSpecifiedFlagOff", PyvtkTIFFReader_SpacingSpecifiedFlagOff, 1,
   (char*)"V.SpacingSpecifiedFlagOff()\nC++: void SpacingSpecifiedFlagOff()\n\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTIFFReader_StaticNew()
{
  return vtkTIFFReader::New();
}

PyObject *PyVTKClass_vtkTIFFReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTIFFReader_StaticNew,
    PyvtkTIFFReader_Methods,
    "vtkTIFFReader", modulename,
    NULL, NULL,
    PyvtkTIFFReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkTIFFReader_Doc()
{
  static const char *docstring[] = {
    "vtkTIFFReader - read TIFF files\n\n",
    "Superclass: vtkImageReader2\n\n",
    "vtkTIFFReader is a source object that reads TIFF files. It should be\nable to read almost any TIFF file\n\nSee Also:\n\nvtkTIFFWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTIFFReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTIFFReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTIFFReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

