// python wrapper for vtkImageReader
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
#include "vtkImageReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkImageReader_Doc();


static PyObject *
PyvtkImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

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
      tempr = op->vtkImageReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

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
      tempr = op->vtkImageReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  vtkImageReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageReader::NewInstance();
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
PyvtkImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_SetDataVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

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
      op->SetDataVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageReader::SetDataVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader_SetDataVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataVOI(temp0);
      }
    else
      {
      op->vtkImageReader::SetDataVOI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader_SetDataVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageReader_SetDataVOI_s1(self, args);
    case 1:
      return PyvtkImageReader_SetDataVOI_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataVOI");
  return NULL;
}



static PyObject *
PyvtkImageReader_GetDataVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataVOI();
      }
    else
      {
      tempr = op->vtkImageReader::GetDataVOI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_GetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  unsigned long long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataMask();
      }
    else
      {
      tempr = op->vtkImageReader::GetDataMask();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_SetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  unsigned long long temp0;
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
      op->vtkImageReader::SetDataMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

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
      op->vtkImageReader::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

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
      tempr = op->vtkImageReader::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_ComputeInverseTransformedExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInverseTransformedExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeInverseTransformedExtent(temp0, temp1);
      }
    else
      {
      op->vtkImageReader::ComputeInverseTransformedExtent(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_ComputeInverseTransformedIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInverseTransformedIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  vtkIdType temp0[3];
  vtkIdType save0[3];
  const int size0 = 3;
  vtkIdType temp1[3];
  vtkIdType save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeInverseTransformedIncrements(temp0, temp1);
      }
    else
      {
      op->vtkImageReader::ComputeInverseTransformedIncrements(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_OpenAndSeekFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenAndSeekFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->OpenAndSeekFile(temp0, temp1);
      }
    else
      {
      tempr = op->vtkImageReader::OpenAndSeekFile(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarArrayName(temp0);
      }
    else
      {
      op->vtkImageReader::SetScalarArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader *op = static_cast<vtkImageReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarArrayName();
      }
    else
      {
      tempr = op->vtkImageReader::GetScalarArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkImageReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageReader\nC++: vtkImageReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageReader\nC++: vtkImageReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataVOI", PyvtkImageReader_SetDataVOI, 1,
   (char*)"V.SetDataVOI(int, int, int, int, int, int)\nC++: void SetDataVOI(int, int, int, int, int, int)\nV.SetDataVOI((int, int, int, int, int, int))\nC++: void SetDataVOI(int a[6])\n\n"},
  {(char*)"GetDataVOI", PyvtkImageReader_GetDataVOI, 1,
   (char*)"V.GetDataVOI() -> (int, int, int, int, int, int)\nC++: int *GetDataVOI()\n\n"},
  {(char*)"GetDataMask", PyvtkImageReader_GetDataMask, 1,
   (char*)"V.GetDataMask() -> int\nC++: vtkTypeUInt64 GetDataMask()\n\nSet/Get the Data mask.  The data mask is a simply integer whose\nbits are treated as a mask to the bits read from disk.  That is,\nthe data mask is bitwise-and'ed to the numbers read from disk. \nThis ivar is stored as 64 bits, the largest mask you will need. \nThe mask will be truncated to the data size required to be read\n(using the least significant bits).\n"},
  {(char*)"SetDataMask", PyvtkImageReader_SetDataMask, 1,
   (char*)"V.SetDataMask(int)\nC++: void SetDataMask(vtkTypeUInt64 a)\n\nSet/Get the Data mask.  The data mask is a simply integer whose\nbits are treated as a mask to the bits read from disk.  That is,\nthe data mask is bitwise-and'ed to the numbers read from disk. \nThis ivar is stored as 64 bits, the largest mask you will need. \nThe mask will be truncated to the data size required to be read\n(using the least significant bits).\n"},
  {(char*)"SetTransform", PyvtkImageReader_SetTransform, 1,
   (char*)"V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *)\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {(char*)"GetTransform", PyvtkImageReader_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {(char*)"ComputeInverseTransformedExtent", PyvtkImageReader_ComputeInverseTransformedExtent, 1,
   (char*)"V.ComputeInverseTransformedExtent([int, int, int, int, int, int],\n    [int, int, int, int, int, int])\nC++: void ComputeInverseTransformedExtent(int inExtent[6],\n    int outExtent[6])\n\n"},
  {(char*)"ComputeInverseTransformedIncrements", PyvtkImageReader_ComputeInverseTransformedIncrements, 1,
   (char*)"V.ComputeInverseTransformedIncrements([int, int, int], [int, int,\n    int])\nC++: void ComputeInverseTransformedIncrements(vtkIdType inIncr[3],\n     vtkIdType outIncr[3])\n\n"},
  {(char*)"OpenAndSeekFile", PyvtkImageReader_OpenAndSeekFile, 1,
   (char*)"V.OpenAndSeekFile([int, int, int, int, int, int], int) -> int\nC++: int OpenAndSeekFile(int extent[6], int slice)\n\n"},
  {(char*)"SetScalarArrayName", PyvtkImageReader_SetScalarArrayName, 1,
   (char*)"V.SetScalarArrayName(string)\nC++: void SetScalarArrayName(char *)\n\nSet/get the scalar array name for this data set.\n"},
  {(char*)"GetScalarArrayName", PyvtkImageReader_GetScalarArrayName, 1,
   (char*)"V.GetScalarArrayName() -> string\nC++: char *GetScalarArrayName()\n\nSet/get the scalar array name for this data set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageReader_StaticNew()
{
  return vtkImageReader::New();
}

PyObject *PyVTKClass_vtkImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageReader_StaticNew,
    PyvtkImageReader_Methods,
    "vtkImageReader", modulename,
    NULL, NULL,
    PyvtkImageReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkImageReader - Superclass of transformable binary file readers.\n\n",
    "Superclass: vtkImageReader2\n\n",
    "vtkImageReader provides methods needed to read a region from a file.\nIt supports both transforms and masks on the input data, but as a\nresult is more complicated and slower than its parent class\nvtkImageReader2.\n\nSee Also:\n\nvtkBMPReader vtkPNMReader vtkTIFFReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

