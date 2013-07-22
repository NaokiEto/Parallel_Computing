// python wrapper for vtkMINCImageReader
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
#include "vtkMINCImageReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMINCImageReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMINCImageReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMINCImageReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMINCImageReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkMINCImageReader_Doc();


static PyObject *
PyvtkMINCImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  vtkMINCImageReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMINCImageReader::NewInstance();
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
PyvtkMINCImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMINCImageReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMINCImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      op->vtkMINCImageReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetDirectionCosines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetRescaleSlope();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetRescaleIntercept();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SetRescaleRealValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleRealValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRescaleRealValues(temp0);
      }
    else
      {
      op->vtkMINCImageReader::SetRescaleRealValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_RescaleRealValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleRealValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RescaleRealValuesOn();
      }
    else
      {
      op->vtkMINCImageReader::RescaleRealValuesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_RescaleRealValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleRealValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RescaleRealValuesOff();
      }
    else
      {
      op->vtkMINCImageReader::RescaleRealValuesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetRescaleRealValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleRealValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRescaleRealValues();
      }
    else
      {
      tempr = op->vtkMINCImageReader::GetRescaleRealValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataRange();
      }
    else
      {
      tempr = op->vtkMINCImageReader::GetDataRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkMINCImageReader_GetDataRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDataRange(temp0);
      }
    else
      {
      op->vtkMINCImageReader::GetDataRange(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMINCImageReader_GetDataRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMINCImageReader_GetDataRange_s1(self, args);
    case 1:
      return PyvtkMINCImageReader_GetDataRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataRange");
  return NULL;
}



static PyObject *
PyvtkMINCImageReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTimeSteps();
      }
    else
      {
      tempr = op->vtkMINCImageReader::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkMINCImageReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkMINCImageReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageReader_GetImageAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageReader *op = static_cast<vtkMINCImageReader *>(vp);

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
      tempr = op->vtkMINCImageReader::GetImageAttributes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMINCImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMINCImageReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMINCImageReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMINCImageReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMINCImageReader\nC++: vtkMINCImageReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMINCImageReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMINCImageReader\nC++: vtkMINCImageReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMINCImageReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *name)\n\nSet the file name.\n"},
  {(char*)"GetFileExtensions", PyvtkMINCImageReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMINCImageReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"CanReadFile", PyvtkMINCImageReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the specified file can be read.\n"},
  {(char*)"GetDirectionCosines", PyvtkMINCImageReader_GetDirectionCosines, 1,
   (char*)"V.GetDirectionCosines() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetDirectionCosines()\n\nGet a matrix that describes the orientation of the data. The\nthree columns of the matrix are the direction cosines for the x,\ny and z dimensions respectively.\n"},
  {(char*)"GetRescaleSlope", PyvtkMINCImageReader_GetRescaleSlope, 1,
   (char*)"V.GetRescaleSlope() -> float\nC++: virtual double GetRescaleSlope()\n\nGet the slope and intercept for rescaling the scalar values to\nreal data values.  To convert scalar values to real values, use\nthe equation y = x*RescaleSlope + RescaleIntercept.\n"},
  {(char*)"GetRescaleIntercept", PyvtkMINCImageReader_GetRescaleIntercept, 1,
   (char*)"V.GetRescaleIntercept() -> float\nC++: virtual double GetRescaleIntercept()\n\nGet the slope and intercept for rescaling the scalar values to\nreal data values.  To convert scalar values to real values, use\nthe equation y = x*RescaleSlope + RescaleIntercept.\n"},
  {(char*)"SetRescaleRealValues", PyvtkMINCImageReader_SetRescaleRealValues, 1,
   (char*)"V.SetRescaleRealValues(int)\nC++: void SetRescaleRealValues(int a)\n\nRescale real data values to float.  If this is done, the\nRescaleSlope and RescaleIntercept will be set to 1 and 0\nrespectively.  This is off by default.\n"},
  {(char*)"RescaleRealValuesOn", PyvtkMINCImageReader_RescaleRealValuesOn, 1,
   (char*)"V.RescaleRealValuesOn()\nC++: void RescaleRealValuesOn()\n\nRescale real data values to float.  If this is done, the\nRescaleSlope and RescaleIntercept will be set to 1 and 0\nrespectively.  This is off by default.\n"},
  {(char*)"RescaleRealValuesOff", PyvtkMINCImageReader_RescaleRealValuesOff, 1,
   (char*)"V.RescaleRealValuesOff()\nC++: void RescaleRealValuesOff()\n\nRescale real data values to float.  If this is done, the\nRescaleSlope and RescaleIntercept will be set to 1 and 0\nrespectively.  This is off by default.\n"},
  {(char*)"GetRescaleRealValues", PyvtkMINCImageReader_GetRescaleRealValues, 1,
   (char*)"V.GetRescaleRealValues() -> int\nC++: int GetRescaleRealValues()\n\nRescale real data values to float.  If this is done, the\nRescaleSlope and RescaleIntercept will be set to 1 and 0\nrespectively.  This is off by default.\n"},
  {(char*)"GetDataRange", PyvtkMINCImageReader_GetDataRange, 1,
   (char*)"V.GetDataRange() -> (float, float)\nC++: virtual double *GetDataRange()\nV.GetDataRange([float, float])\nC++: virtual void GetDataRange(double range[2])\n\nGet the scalar range of the output from the information in the\nfile header.  This is more efficient that computing the scalar\nrange, but in some cases the MINC file stores an incorrect\nvalid_range and the DataRange will be incorrect.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkMINCImageReader_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nGet the number of time steps in the file.\n"},
  {(char*)"SetTimeStep", PyvtkMINCImageReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nSet the time step to read.\n"},
  {(char*)"GetTimeStep", PyvtkMINCImageReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nSet the time step to read.\n"},
  {(char*)"GetImageAttributes", PyvtkMINCImageReader_GetImageAttributes, 1,
   (char*)"V.GetImageAttributes() -> vtkMINCImageAttributes\nC++: virtual vtkMINCImageAttributes *GetImageAttributes()\n\nGet the image attributes, which contain patient information and\nother useful metadata.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMINCImageReader_StaticNew()
{
  return vtkMINCImageReader::New();
}

PyObject *PyVTKClass_vtkMINCImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMINCImageReader_StaticNew,
    PyvtkMINCImageReader_Methods,
    "vtkMINCImageReader", modulename,
    NULL, NULL,
    PyvtkMINCImageReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkMINCImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkMINCImageReader - A reader for MINC files.\n\n",
    "Superclass: vtkImageReader2\n\n",
    "MINC is a NetCDF-based medical image file format that was developed\nat the Montreal Neurological Institute in 1992. This class will read\na MINC file into VTK, rearranging the data to match the VTK x, y, and\nz dimensions, and optionally rescaling real-valued data to VTK_FLOAT\nif RescaleRealValuesOn() is set. If RescaleRealValues is off, then\nthe data will be stored in its original data type and the",
    "\nGetRescaleSlope(), GetRescaleIntercept() method can be used to\nretrieve global rescaling parameters. If the original file had a time\ndimension, the SetTimeStep() method can be used to specify a time\nstep to read. All of the original header information can be accessed\nthough the GetImageAttributes() method.\n\nSee Also:\n\nvtkMINCImageWriter vtkMINCImageAttributes\n\nThanks:\n\nThanks to David Gobbi for w",
    "riting this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMINCImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMINCImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMINCImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

