// python wrapper for vtkMetaImageReader
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
#include "vtkMetaImageReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMetaImageReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMetaImageReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMetaImageReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMetaImageReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkMetaImageReader_Doc();


static PyObject *
PyvtkMetaImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

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
      tempr = op->vtkMetaImageReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

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
      tempr = op->vtkMetaImageReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  vtkMetaImageReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMetaImageReader::NewInstance();
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
PyvtkMetaImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMetaImageReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMetaImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

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
      tempr = op->vtkMetaImageReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

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
      tempr = op->vtkMetaImageReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponents();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPixelRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelRepresentation();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetPixelRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrder();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetDataByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRescaleSlope();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetRescaleSlope();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetRescaleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRescaleOffset();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetRescaleOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetBitsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBitsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBitsAllocated();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetBitsAllocated();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDistanceUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceUnits();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetDistanceUnits();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetAnatomicalOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnatomicalOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnatomicalOrientation();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetAnatomicalOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetGantryAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGantryAngle();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetGantryAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientName();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetPatientName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientID();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetPatientID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDate();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSeries();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetSeries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageNumber();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetImageNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModality();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetModality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyID();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetStudyID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetStudyUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyUID();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetStudyUID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_GetTransferSyntaxUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferSyntaxUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransferSyntaxUID();
      }
    else
      {
      tempr = op->vtkMetaImageReader::GetTransferSyntaxUID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageReader *op = static_cast<vtkMetaImageReader *>(vp);

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
      tempr = op->vtkMetaImageReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMetaImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMetaImageReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMetaImageReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMetaImageReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMetaImageReader\nC++: vtkMetaImageReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMetaImageReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMetaImageReader\nC++: vtkMetaImageReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileExtensions", PyvtkMetaImageReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\n"},
  {(char*)"GetDescriptiveName", PyvtkMetaImageReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\n"},
  {(char*)"GetWidth", PyvtkMetaImageReader_GetWidth, 1,
   (char*)"V.GetWidth() -> int\nC++: int GetWidth()\n\n"},
  {(char*)"GetHeight", PyvtkMetaImageReader_GetHeight, 1,
   (char*)"V.GetHeight() -> int\nC++: int GetHeight()\n\n"},
  {(char*)"GetNumberOfComponents", PyvtkMetaImageReader_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\n"},
  {(char*)"GetPixelRepresentation", PyvtkMetaImageReader_GetPixelRepresentation, 1,
   (char*)"V.GetPixelRepresentation() -> int\nC++: int GetPixelRepresentation()\n\n"},
  {(char*)"GetDataByteOrder", PyvtkMetaImageReader_GetDataByteOrder, 1,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder(void)\n\n"},
  {(char*)"GetRescaleSlope", PyvtkMetaImageReader_GetRescaleSlope, 1,
   (char*)"V.GetRescaleSlope() -> float\nC++: double GetRescaleSlope()\n\n"},
  {(char*)"GetRescaleOffset", PyvtkMetaImageReader_GetRescaleOffset, 1,
   (char*)"V.GetRescaleOffset() -> float\nC++: double GetRescaleOffset()\n\n"},
  {(char*)"GetBitsAllocated", PyvtkMetaImageReader_GetBitsAllocated, 1,
   (char*)"V.GetBitsAllocated() -> int\nC++: int GetBitsAllocated()\n\n"},
  {(char*)"GetDistanceUnits", PyvtkMetaImageReader_GetDistanceUnits, 1,
   (char*)"V.GetDistanceUnits() -> string\nC++: char *GetDistanceUnits()\n\n"},
  {(char*)"GetAnatomicalOrientation", PyvtkMetaImageReader_GetAnatomicalOrientation, 1,
   (char*)"V.GetAnatomicalOrientation() -> string\nC++: char *GetAnatomicalOrientation()\n\n"},
  {(char*)"GetGantryAngle", PyvtkMetaImageReader_GetGantryAngle, 1,
   (char*)"V.GetGantryAngle() -> float\nC++: double GetGantryAngle()\n\n"},
  {(char*)"GetPatientName", PyvtkMetaImageReader_GetPatientName, 1,
   (char*)"V.GetPatientName() -> string\nC++: char *GetPatientName()\n\n"},
  {(char*)"GetPatientID", PyvtkMetaImageReader_GetPatientID, 1,
   (char*)"V.GetPatientID() -> string\nC++: char *GetPatientID()\n\n"},
  {(char*)"GetDate", PyvtkMetaImageReader_GetDate, 1,
   (char*)"V.GetDate() -> string\nC++: char *GetDate()\n\n"},
  {(char*)"GetSeries", PyvtkMetaImageReader_GetSeries, 1,
   (char*)"V.GetSeries() -> string\nC++: char *GetSeries()\n\n"},
  {(char*)"GetImageNumber", PyvtkMetaImageReader_GetImageNumber, 1,
   (char*)"V.GetImageNumber() -> string\nC++: char *GetImageNumber()\n\n"},
  {(char*)"GetModality", PyvtkMetaImageReader_GetModality, 1,
   (char*)"V.GetModality() -> string\nC++: char *GetModality()\n\n"},
  {(char*)"GetStudyID", PyvtkMetaImageReader_GetStudyID, 1,
   (char*)"V.GetStudyID() -> string\nC++: char *GetStudyID()\n\n"},
  {(char*)"GetStudyUID", PyvtkMetaImageReader_GetStudyUID, 1,
   (char*)"V.GetStudyUID() -> string\nC++: char *GetStudyUID()\n\n"},
  {(char*)"GetTransferSyntaxUID", PyvtkMetaImageReader_GetTransferSyntaxUID, 1,
   (char*)"V.GetTransferSyntaxUID() -> string\nC++: char *GetTransferSyntaxUID()\n\n"},
  {(char*)"CanReadFile", PyvtkMetaImageReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the file with the given name can be read by this\nreader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMetaImageReader_StaticNew()
{
  return vtkMetaImageReader::New();
}

PyObject *PyVTKClass_vtkMetaImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMetaImageReader_StaticNew,
    PyvtkMetaImageReader_Methods,
    "vtkMetaImageReader", modulename,
    NULL, NULL,
    PyvtkMetaImageReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkMetaImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkMetaImageReader - read binary UNC meta image data\n\n",
    "Superclass: vtkImageReader2\n\n",
    "One of the formats for which a reader is already available in the\ntoolkit is the MetaImage file format. This is a fairly simple yet\npowerful format consisting of a text header and a binary data\nsection. The following instructions describe how you can write a\nMetaImage header for the data that you download from the BrainWeb\npage.\n\nThe minimal structure of the MetaImage header is the following:\n\n\n  ",
    " NDims = 3\n   DimSize = 181 217 181\n   ElementType = MET_UCHAR\n   ElementSpacing = 1.0 1.0 1.0\n   ElementByteOrderMSB = False\n   ElementDataFile = brainweb1.raw\n\n* NDims indicate that this is a 3D image. ITK can handle images of\n  arbitrary dimension.\n* DimSize indicates the size of the volume in pixels along each\n  direction.\n* ElementType indicate the primitive type used for pixels. In this\n  ca",
    "se is \"unsigned char\", implying that the data is digitized in 8\n  bits / pixel.\n* ElementSpacing indicates the physical separation between the center\nof one pixel and the center of the next pixel along each direction in\nspace. The units used are millimeters.\n* ElementByteOrderMSB indicates is the data is encoded in little or\n  big endian order. You might want to play with this value when\n  moving ",
    "data between different computer platforms.\n* ElementDataFile is the name of the file containing the raw binary\n  data of the image. This file must be in the same directory as the\n  header.\n\nMetaImage headers are expected to have extension: \".mha\" or \".mhd\"\n\nOnce you write this header text file, it should be possible to read\nthe image into your ITK based application using the\nitk::FileIOToImageFilt",
    "er class.\n\nCaveats:\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMetaImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMetaImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMetaImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

