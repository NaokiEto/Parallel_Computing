// python wrapper for vtkDICOMImageReader
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
#include "vtkDICOMImageReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDICOMImageReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDICOMImageReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDICOMImageReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDICOMImageReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkDICOMImageReader_Doc();


static PyObject *
PyvtkDICOMImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  vtkDICOMImageReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::NewInstance();
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
PyvtkDICOMImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDICOMImageReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDICOMImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkDICOMImageReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_SetDirectoryName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectoryName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirectoryName(temp0);
      }
    else
      {
      op->vtkDICOMImageReader::SetDirectoryName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetDirectoryName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectoryName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirectoryName();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetDirectoryName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetPixelSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelSpacing();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetPixelSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImagePositionPatient();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetImagePositionPatient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetImageOrientationPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrientationPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  float *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageOrientationPatient();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetImageOrientationPatient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetBitsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBitsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetBitsAllocated();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetPixelRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetPixelRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetTransferSyntaxUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferSyntaxUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransferSyntaxUID();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetTransferSyntaxUID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRescaleSlope();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetRescaleSlope();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetRescaleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRescaleOffset();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetRescaleOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientName();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetPatientName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetStudyUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyUID();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetStudyUID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyID();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetStudyID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetGantryAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGantryAngle();
      }
    else
      {
      tempr = op->vtkDICOMImageReader::GetGantryAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDICOMImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDICOMImageReader *op = static_cast<vtkDICOMImageReader *>(vp);

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
      tempr = op->vtkDICOMImageReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDICOMImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDICOMImageReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStatic method for construction.\n"},
  {(char*)"IsA", PyvtkDICOMImageReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStatic method for construction.\n"},
  {(char*)"NewInstance", PyvtkDICOMImageReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDICOMImageReader\nC++: vtkDICOMImageReader *NewInstance()\n\nStatic method for construction.\n"},
  {(char*)"SafeDownCast", PyvtkDICOMImageReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDICOMImageReader\nC++: vtkDICOMImageReader *SafeDownCast(vtkObject* o)\n\nStatic method for construction.\n"},
  {(char*)"SetFileName", PyvtkDICOMImageReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *fn)\n\nSet the filename for the file to read. If this method is used,\nthe reader will only read a single file.\n"},
  {(char*)"SetDirectoryName", PyvtkDICOMImageReader_SetDirectoryName, 1,
   (char*)"V.SetDirectoryName(string)\nC++: void SetDirectoryName(const char *dn)\n\nSet the directory name for the reader to look in for DICOM files.\nIf this method is used, the reader will try to find all the DICOM\nfiles in a directory. It will select the subset corresponding to\nthe first series UID it stumbles across and it will try to build\nan ordered volume from them based on the slice number. The volume\nbuilding will be upgraded to something more sophisticated in the\nfuture.\n"},
  {(char*)"GetDirectoryName", PyvtkDICOMImageReader_GetDirectoryName, 1,
   (char*)"V.GetDirectoryName() -> string\nC++: char *GetDirectoryName()\n\nReturns the directory name.\n"},
  {(char*)"GetPixelSpacing", PyvtkDICOMImageReader_GetPixelSpacing, 1,
   (char*)"V.GetPixelSpacing() -> (float, float, float)\nC++: double *GetPixelSpacing()\n\nReturns the pixel spacing (in X, Y, Z). Note: if there is only\none slice, the Z spacing is set to the slice thickness. If there\nis more than one slice, it is set to the distance between the\nfirst two slices.\n"},
  {(char*)"GetWidth", PyvtkDICOMImageReader_GetWidth, 1,
   (char*)"V.GetWidth() -> int\nC++: int GetWidth()\n\nReturns the image width.\n"},
  {(char*)"GetHeight", PyvtkDICOMImageReader_GetHeight, 1,
   (char*)"V.GetHeight() -> int\nC++: int GetHeight()\n\nReturns the image height.\n"},
  {(char*)"GetImagePositionPatient", PyvtkDICOMImageReader_GetImagePositionPatient, 1,
   (char*)"V.GetImagePositionPatient() -> (float, float, float)\nC++: float *GetImagePositionPatient()\n\nGet the (DICOM) x,y,z coordinates of the first pixel in the image\n(upper left hand corner) of the last image processed by the\nDICOMParser\n"},
  {(char*)"GetImageOrientationPatient", PyvtkDICOMImageReader_GetImageOrientationPatient, 1,
   (char*)"V.GetImageOrientationPatient() -> (float, float, float, float,\n    float, float)\nC++: float *GetImageOrientationPatient()\n\nGet the (DICOM) directions cosines. It consist of the components\nof the first two vectors. The third vector needs to be computed\nto form an orthonormal basis.\n"},
  {(char*)"GetBitsAllocated", PyvtkDICOMImageReader_GetBitsAllocated, 1,
   (char*)"V.GetBitsAllocated() -> int\nC++: int GetBitsAllocated()\n\nGet the number of bits allocated for each pixel in the file.\n"},
  {(char*)"GetPixelRepresentation", PyvtkDICOMImageReader_GetPixelRepresentation, 1,
   (char*)"V.GetPixelRepresentation() -> int\nC++: int GetPixelRepresentation()\n\nGet the pixel representation of the last image processed by the\nDICOMParser. A zero is a unsigned quantity.  A one indicates a\nsigned quantity\n"},
  {(char*)"GetNumberOfComponents", PyvtkDICOMImageReader_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components of the image data for the last image\nprocessed.\n"},
  {(char*)"GetTransferSyntaxUID", PyvtkDICOMImageReader_GetTransferSyntaxUID, 1,
   (char*)"V.GetTransferSyntaxUID() -> string\nC++: const char *GetTransferSyntaxUID()\n\nGet the transfer syntax UID for the last image processed.\n"},
  {(char*)"GetRescaleSlope", PyvtkDICOMImageReader_GetRescaleSlope, 1,
   (char*)"V.GetRescaleSlope() -> float\nC++: float GetRescaleSlope()\n\nGet the rescale slope for the pixel data.\n"},
  {(char*)"GetRescaleOffset", PyvtkDICOMImageReader_GetRescaleOffset, 1,
   (char*)"V.GetRescaleOffset() -> float\nC++: float GetRescaleOffset()\n\nGet the rescale offset for the pixel data.\n"},
  {(char*)"GetPatientName", PyvtkDICOMImageReader_GetPatientName, 1,
   (char*)"V.GetPatientName() -> string\nC++: const char *GetPatientName()\n\nGet the patient name for the last image processed.\n"},
  {(char*)"GetStudyUID", PyvtkDICOMImageReader_GetStudyUID, 1,
   (char*)"V.GetStudyUID() -> string\nC++: const char *GetStudyUID()\n\nGet the study uid for the last image processed.\n"},
  {(char*)"GetStudyID", PyvtkDICOMImageReader_GetStudyID, 1,
   (char*)"V.GetStudyID() -> string\nC++: const char *GetStudyID()\n\nGet the Study ID for the last image processed.\n"},
  {(char*)"GetGantryAngle", PyvtkDICOMImageReader_GetGantryAngle, 1,
   (char*)"V.GetGantryAngle() -> float\nC++: float GetGantryAngle()\n\nGet the gantry angle for the last image processed.\n"},
  {(char*)"CanReadFile", PyvtkDICOMImageReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\n"},
  {(char*)"GetFileExtensions", PyvtkDICOMImageReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\n"},
  {(char*)"GetDescriptiveName", PyvtkDICOMImageReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDICOMImageReader_StaticNew()
{
  return vtkDICOMImageReader::New();
}

PyObject *PyVTKClass_vtkDICOMImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDICOMImageReader_StaticNew,
    PyvtkDICOMImageReader_Methods,
    "vtkDICOMImageReader", modulename,
    NULL, NULL,
    PyvtkDICOMImageReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkDICOMImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkDICOMImageReader - Reads some DICOM images\n\n",
    "Superclass: vtkImageReader2\n\n",
    "DICOM (stands for Digital Imaging in COmmunications and Medicine) is\na medical image file format widely used to exchange data, provided by\nvarious modalities.\n\nWarnings:\n\nThis reader might eventually handle ACR-NEMA file (predecessor of the\nDICOM format for medical images). This reader does not handle\nencapsulated format, only plain raw file are handled. This reader\nalso does not handle multi-fram",
    "es DICOM datasets.\n\nWarnings:\n\nInternally DICOMParser assumes the x,y pixel spacing is stored in\n0028,0030 and that z spacing is stored in Slice Thickness (correct\nonly when slice were acquired contiguous): 0018,0050. Which means\nthis is only valid for some rare MR Image Storage\n\nSee Also:\n\nvtkBMPReader vtkPNMReader vtkTIFFReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDICOMImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDICOMImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDICOMImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

