// python wrapper for vtkVolume16Reader
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
#include "vtkVolume16Reader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolume16Reader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolume16Reader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolume16ReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolume16ReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeReaderNew
extern "C" { PyObject *PyVTKClass_vtkVolumeReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeReaderNew
#endif

static const char **PyvtkVolume16Reader_Doc();


static PyObject *
PyvtkVolume16Reader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

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
      tempr = op->vtkVolume16Reader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

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
      tempr = op->vtkVolume16Reader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  vtkVolume16Reader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolume16Reader::NewInstance();
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
PyvtkVolume16Reader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolume16Reader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolume16Reader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDataDimensions(temp0, temp1);
      }
    else
      {
      op->vtkVolume16Reader::SetDataDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolume16Reader_SetDataDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataDimensions(temp0);
      }
    else
      {
      op->vtkVolume16Reader::SetDataDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolume16Reader_SetDataDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolume16Reader_SetDataDimensions_s1(self, args);
    case 1:
      return PyvtkVolume16Reader_SetDataDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataDimensions");
  return NULL;
}



static PyObject *
PyvtkVolume16Reader_GetDataDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataDimensions();
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetDataDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataMask(temp0);
      }
    else
      {
      op->vtkVolume16Reader::SetDataMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  unsigned short tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataMask();
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetDataMask();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeaderSize(temp0);
      }
    else
      {
      op->vtkVolume16Reader::SetHeaderSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeaderSize();
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetHeaderSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkVolume16Reader::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkVolume16Reader::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

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
      tempr = op->vtkVolume16Reader::GetDataByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrder(temp0);
      }
    else
      {
      op->vtkVolume16Reader::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrderAsString();
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetDataByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwapBytes(temp0);
      }
    else
      {
      op->vtkVolume16Reader::SetSwapBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSwapBytes();
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetSwapBytes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOn();
      }
    else
      {
      op->vtkVolume16Reader::SwapBytesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOff();
      }
    else
      {
      op->vtkVolume16Reader::SwapBytesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkVolume16Reader::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  vtkTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImage(temp0);
      }
    else
      {
      tempr = op->vtkVolume16Reader::GetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolume16Reader_Methods[] = {
  {(char*)"GetClassName", PyvtkVolume16Reader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolume16Reader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolume16Reader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolume16Reader\nC++: vtkVolume16Reader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolume16Reader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolume16Reader\nC++: vtkVolume16Reader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataDimensions", PyvtkVolume16Reader_SetDataDimensions, 1,
   (char*)"V.SetDataDimensions(int, int)\nC++: void SetDataDimensions(int, int)\nV.SetDataDimensions((int, int))\nC++: void SetDataDimensions(int a[2])\n\n"},
  {(char*)"GetDataDimensions", PyvtkVolume16Reader_GetDataDimensions, 1,
   (char*)"V.GetDataDimensions() -> (int, int)\nC++: int *GetDataDimensions()\n\nSpecify the dimensions for the data.\n"},
  {(char*)"SetDataMask", PyvtkVolume16Reader_SetDataMask, 1,
   (char*)"V.SetDataMask(int)\nC++: void SetDataMask(unsigned short a)\n\nSpecify a mask used to eliminate data in the data file (e.g.,\nconnectivity bits).\n"},
  {(char*)"GetDataMask", PyvtkVolume16Reader_GetDataMask, 1,
   (char*)"V.GetDataMask() -> int\nC++: unsigned short GetDataMask()\n\nSpecify a mask used to eliminate data in the data file (e.g.,\nconnectivity bits).\n"},
  {(char*)"SetHeaderSize", PyvtkVolume16Reader_SetHeaderSize, 1,
   (char*)"V.SetHeaderSize(int)\nC++: void SetHeaderSize(int a)\n\nSpecify the number of bytes to seek over at start of image.\n"},
  {(char*)"GetHeaderSize", PyvtkVolume16Reader_GetHeaderSize, 1,
   (char*)"V.GetHeaderSize() -> int\nC++: int GetHeaderSize()\n\nSpecify the number of bytes to seek over at start of image.\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkVolume16Reader_SetDataByteOrderToBigEndian, 1,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkVolume16Reader_SetDataByteOrderToLittleEndian, 1,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrder", PyvtkVolume16Reader_GetDataByteOrder, 1,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrder", PyvtkVolume16Reader_SetDataByteOrder, 1,
   (char*)"V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrderAsString", PyvtkVolume16Reader_GetDataByteOrderAsString, 1,
   (char*)"V.GetDataByteOrderAsString() -> string\nC++: const char *GetDataByteOrderAsString()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetSwapBytes", PyvtkVolume16Reader_SetSwapBytes, 1,
   (char*)"V.SetSwapBytes(int)\nC++: void SetSwapBytes(int a)\n\nTurn on/off byte swapping.\n"},
  {(char*)"GetSwapBytes", PyvtkVolume16Reader_GetSwapBytes, 1,
   (char*)"V.GetSwapBytes() -> int\nC++: int GetSwapBytes()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SwapBytesOn", PyvtkVolume16Reader_SwapBytesOn, 1,
   (char*)"V.SwapBytesOn()\nC++: void SwapBytesOn()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SwapBytesOff", PyvtkVolume16Reader_SwapBytesOff, 1,
   (char*)"V.SwapBytesOff()\nC++: void SwapBytesOff()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SetTransform", PyvtkVolume16Reader_SetTransform, 1,
   (char*)"V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *)\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {(char*)"GetTransform", PyvtkVolume16Reader_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {(char*)"GetImage", PyvtkVolume16Reader_GetImage, 1,
   (char*)"V.GetImage(int) -> vtkImageData\nC++: vtkImageData *GetImage(int ImageNumber)\n\nOther objects make use of these methods\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolume16Reader_StaticNew()
{
  return vtkVolume16Reader::New();
}

PyObject *PyVTKClass_vtkVolume16ReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolume16Reader_StaticNew,
    PyvtkVolume16Reader_Methods,
    "vtkVolume16Reader", modulename,
    NULL, NULL,
    PyvtkVolume16Reader_Doc(),
    PyVTKClass_vtkVolumeReaderNew(modulename));
  return cls;
}

const char **PyvtkVolume16Reader_Doc()
{
  static const char *docstring[] = {
    "vtkVolume16Reader - read 16 bit image files\n\n",
    "Superclass: vtkVolumeReader\n\n",
    "vtkVolume16Reader is a source object that reads 16 bit image files.\n\nVolume16Reader creates structured point datasets. The dimension of\nthe dataset depends upon the number of files read. Reading a single\nfile results in a 2D image, while reading more than one file results\nin a 3D volume.\n\nFile names are created using FilePattern and FilePrefix as follows:\nsprintf (filename, FilePattern, FilePrefix",
    ", number); where number is\nin the range ImageRange[0] to ImageRange[1]. If ImageRange[1] <=\nImageRange[0], then slice number ImageRange[0] is read. Thus to read\nan image set ImageRange[0] = ImageRange[1] = slice number. The\ndefault behavior is to read a single file (i.e., image slice 1).\n\nThe DataMask instance variable is used to read data files with\nimbedded connectivity or segmentation informati",
    "on. For example, some\ndata has the high order bit set to indicate connected surface. The\nDataMask allows you to select this data. Other important ivars\ninclude HeaderSize, which allows you to skip over initial info, and\nSwapBytes, which turns on/off byte swapping.\n\nThe Transform instance variable specifies a permutation\ntransformation to map slice space into world space. vtkImageReader\nhas replace",
    "d the functionality of this class and should be used\ninstead.\n\nSee Also:\n\nvtkSliceCubes vtkMarchingCubes vtkImageReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolume16Reader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolume16ReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolume16Reader", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FILE_BYTE_ORDER_BIG_ENDIAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", o) != 0)
    {
    Py_DECREF(o);
    }

}
