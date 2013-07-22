// python wrapper for vtkMINCImageWriter
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
#include "vtkMINCImageWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMINCImageWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMINCImageWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMINCImageWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMINCImageWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkMINCImageWriter_Doc();


static PyObject *
PyvtkMINCImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

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
      tempr = op->vtkMINCImageWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

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
      tempr = op->vtkMINCImageWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMINCImageWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMINCImageWriter::NewInstance();
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
PyvtkMINCImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMINCImageWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMINCImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

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
      tempr = op->vtkMINCImageWriter::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

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
      tempr = op->vtkMINCImageWriter::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

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
      op->vtkMINCImageWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkMINCImageWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetDirectionCosines(temp0);
      }
    else
      {
      op->vtkMINCImageWriter::SetDirectionCosines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirectionCosines();
      }
    else
      {
      tempr = op->vtkMINCImageWriter::GetDirectionCosines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRescaleSlope(temp0);
      }
    else
      {
      op->vtkMINCImageWriter::SetRescaleSlope(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

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
      tempr = op->vtkMINCImageWriter::GetRescaleSlope();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRescaleIntercept(temp0);
      }
    else
      {
      op->vtkMINCImageWriter::SetRescaleIntercept(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRescaleIntercept();
      }
    else
      {
      tempr = op->vtkMINCImageWriter::GetRescaleIntercept();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetImageAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMINCImageAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMINCImageAttributes"))
    {
    if (ap.IsBound())
      {
      op->SetImageAttributes(temp0);
      }
    else
      {
      op->vtkMINCImageWriter::SetImageAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetImageAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  vtkMINCImageAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageAttributes();
      }
    else
      {
      tempr = op->vtkMINCImageWriter::GetImageAttributes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetStrictValidation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrictValidation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStrictValidation(temp0);
      }
    else
      {
      op->vtkMINCImageWriter::SetStrictValidation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_StrictValidationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StrictValidationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StrictValidationOn();
      }
    else
      {
      op->vtkMINCImageWriter::StrictValidationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_StrictValidationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StrictValidationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StrictValidationOff();
      }
    else
      {
      op->vtkMINCImageWriter::StrictValidationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetStrictValidation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrictValidation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStrictValidation();
      }
    else
      {
      tempr = op->vtkMINCImageWriter::GetStrictValidation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_SetHistoryAddition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistoryAddition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHistoryAddition(temp0);
      }
    else
      {
      op->vtkMINCImageWriter::SetHistoryAddition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageWriter_GetHistoryAddition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistoryAddition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageWriter *op = static_cast<vtkMINCImageWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHistoryAddition();
      }
    else
      {
      tempr = op->vtkMINCImageWriter::GetHistoryAddition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMINCImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkMINCImageWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMINCImageWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMINCImageWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMINCImageWriter\nC++: vtkMINCImageWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMINCImageWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMINCImageWriter\nC++: vtkMINCImageWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileExtensions", PyvtkMINCImageWriter_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMINCImageWriter_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"SetFileName", PyvtkMINCImageWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *name)\n\nSet the file name.\n"},
  {(char*)"Write", PyvtkMINCImageWriter_Write, 1,
   (char*)"V.Write()\nC++: virtual void Write()\n\nWrite the data.  This will attempt to stream the data\nslice-by-slice through the pipeline and out to the file, unless\nthe whole extent of the input has already been updated.\n"},
  {(char*)"SetDirectionCosines", PyvtkMINCImageWriter_SetDirectionCosines, 1,
   (char*)"V.SetDirectionCosines(vtkMatrix4x4)\nC++: virtual void SetDirectionCosines(vtkMatrix4x4 *matrix)\n\nSet a matrix that describes the orientation of the data.  The\nthree columns of this matrix should give the unit-vector\ndirections for the VTK x, y and z dimensions respectively. The\nwriter will use this information to determine how to map the VTK\ndimensions to the canonical MINC dimensions, and if necessary,\nthe writer will re-order one or more dimensions back-to-front to\nensure that no MINC dimension ends up with a direction cosines\nvector whose dot product with the canonical unit vector for that\ndimension is negative.\n"},
  {(char*)"GetDirectionCosines", PyvtkMINCImageWriter_GetDirectionCosines, 1,
   (char*)"V.GetDirectionCosines() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetDirectionCosines()\n\nSet a matrix that describes the orientation of the data.  The\nthree columns of this matrix should give the unit-vector\ndirections for the VTK x, y and z dimensions respectively. The\nwriter will use this information to determine how to map the VTK\ndimensions to the canonical MINC dimensions, and if necessary,\nthe writer will re-order one or more dimensions back-to-front to\nensure that no MINC dimension ends up with a direction cosines\nvector whose dot product with the canonical unit vector for that\ndimension is negative.\n"},
  {(char*)"SetRescaleSlope", PyvtkMINCImageWriter_SetRescaleSlope, 1,
   (char*)"V.SetRescaleSlope(float)\nC++: void SetRescaleSlope(double a)\n\nSet the slope and intercept for rescaling the intensities.  The\ndefault values are zero, which indicates to the reader that no\nrescaling is to be performed.\n"},
  {(char*)"GetRescaleSlope", PyvtkMINCImageWriter_GetRescaleSlope, 1,
   (char*)"V.GetRescaleSlope() -> float\nC++: double GetRescaleSlope()\n\nSet the slope and intercept for rescaling the intensities.  The\ndefault values are zero, which indicates to the reader that no\nrescaling is to be performed.\n"},
  {(char*)"SetRescaleIntercept", PyvtkMINCImageWriter_SetRescaleIntercept, 1,
   (char*)"V.SetRescaleIntercept(float)\nC++: void SetRescaleIntercept(double a)\n\nSet the slope and intercept for rescaling the intensities.  The\ndefault values are zero, which indicates to the reader that no\nrescaling is to be performed.\n"},
  {(char*)"GetRescaleIntercept", PyvtkMINCImageWriter_GetRescaleIntercept, 1,
   (char*)"V.GetRescaleIntercept() -> float\nC++: double GetRescaleIntercept()\n\nSet the slope and intercept for rescaling the intensities.  The\ndefault values are zero, which indicates to the reader that no\nrescaling is to be performed.\n"},
  {(char*)"SetImageAttributes", PyvtkMINCImageWriter_SetImageAttributes, 1,
   (char*)"V.SetImageAttributes(vtkMINCImageAttributes)\nC++: virtual void SetImageAttributes(\n    vtkMINCImageAttributes *attributes)\n\nSet the image attributes, which contain patient information and\nother useful metadata.\n"},
  {(char*)"GetImageAttributes", PyvtkMINCImageWriter_GetImageAttributes, 1,
   (char*)"V.GetImageAttributes() -> vtkMINCImageAttributes\nC++: virtual vtkMINCImageAttributes *GetImageAttributes()\n\nSet the image attributes, which contain patient information and\nother useful metadata.\n"},
  {(char*)"SetStrictValidation", PyvtkMINCImageWriter_SetStrictValidation, 1,
   (char*)"V.SetStrictValidation(int)\nC++: void SetStrictValidation(int a)\n\nSet whether to validate that all variable attributes that have\nbeen set are ones that are listed in the MINC standard.\n"},
  {(char*)"StrictValidationOn", PyvtkMINCImageWriter_StrictValidationOn, 1,
   (char*)"V.StrictValidationOn()\nC++: void StrictValidationOn()\n\nSet whether to validate that all variable attributes that have\nbeen set are ones that are listed in the MINC standard.\n"},
  {(char*)"StrictValidationOff", PyvtkMINCImageWriter_StrictValidationOff, 1,
   (char*)"V.StrictValidationOff()\nC++: void StrictValidationOff()\n\nSet whether to validate that all variable attributes that have\nbeen set are ones that are listed in the MINC standard.\n"},
  {(char*)"GetStrictValidation", PyvtkMINCImageWriter_GetStrictValidation, 1,
   (char*)"V.GetStrictValidation() -> int\nC++: int GetStrictValidation()\n\nSet whether to validate that all variable attributes that have\nbeen set are ones that are listed in the MINC standard.\n"},
  {(char*)"SetHistoryAddition", PyvtkMINCImageWriter_SetHistoryAddition, 1,
   (char*)"V.SetHistoryAddition(string)\nC++: void SetHistoryAddition(char *)\n\nSet a string value to append to the history of the file.  This\nstring should describe, briefly, how the file was processed.\n"},
  {(char*)"GetHistoryAddition", PyvtkMINCImageWriter_GetHistoryAddition, 1,
   (char*)"V.GetHistoryAddition() -> string\nC++: char *GetHistoryAddition()\n\nSet a string value to append to the history of the file.  This\nstring should describe, briefly, how the file was processed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMINCImageWriter_StaticNew()
{
  return vtkMINCImageWriter::New();
}

PyObject *PyVTKClass_vtkMINCImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMINCImageWriter_StaticNew,
    PyvtkMINCImageWriter_Methods,
    "vtkMINCImageWriter", modulename,
    NULL, NULL,
    PyvtkMINCImageWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkMINCImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkMINCImageWriter - A writer for MINC files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "MINC is a NetCDF-based medical image file format that was developed\nat the Montreal Neurological Institute in 1992. The data is written\nslice-by-slice, and this writer is therefore suitable for streaming\nMINC data that is larger than the memory size through VTK.  This\nwriter can also produce files with up to 4 dimensions, where the\nfourth dimension is provided by using AddInput() to specify multip",
    "le\ninput data sets.  If you want to set header information for the file,\nyou must supply a vtkMINCImageAttributes\n\nSee Also:\n\nvtkMINCImageReader vtkMINCImageAttributes\n\nThanks:\n\nThanks to David Gobbi for writing this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMINCImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMINCImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMINCImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

