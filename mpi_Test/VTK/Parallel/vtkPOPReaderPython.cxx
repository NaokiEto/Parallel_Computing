// python wrapper for vtkPOPReader
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
#include "vtkPOPReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPOPReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPOPReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPOPReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPOPReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkPOPReader_Doc();


static PyObject *
PyvtkPOPReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

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
      tempr = op->vtkPOPReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

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
      tempr = op->vtkPOPReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  vtkPOPReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPOPReader::NewInstance();
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
PyvtkPOPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPOPReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensions();
      }
    else
      {
      tempr = op->vtkPOPReader::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetGridFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridFileName();
      }
    else
      {
      tempr = op->vtkPOPReader::GetGridFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetUFlowFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUFlowFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUFlowFileName();
      }
    else
      {
      tempr = op->vtkPOPReader::GetUFlowFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetVFlowFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVFlowFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVFlowFileName();
      }
    else
      {
      tempr = op->vtkPOPReader::GetVFlowFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

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
      op->vtkPOPReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkPOPReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkPOPReader::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkPOPReader::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_SetClipExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

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
      op->SetClipExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPOPReader::SetClipExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPOPReader_SetClipExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetClipExtent(temp0);
      }
    else
      {
      op->vtkPOPReader::SetClipExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPOPReader_SetClipExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkPOPReader_SetClipExtent_s1(self, args);
    case 1:
      return PyvtkPOPReader_SetClipExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClipExtent");
  return NULL;
}



static PyObject *
PyvtkPOPReader_GetClipExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipExtent();
      }
    else
      {
      tempr = op->vtkPOPReader::GetClipExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_SetNumberOfGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfGhostLevels(temp0);
      }
    else
      {
      op->vtkPOPReader::SetNumberOfGhostLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOPReader_GetNumberOfGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOPReader *op = static_cast<vtkPOPReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfGhostLevels();
      }
    else
      {
      tempr = op->vtkPOPReader::GetNumberOfGhostLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPOPReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPOPReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOPReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOPReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPOPReader\nC++: vtkPOPReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOPReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOPReader\nC++: vtkPOPReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimensions", PyvtkPOPReader_GetDimensions, 1,
   (char*)"V.GetDimensions() -> (int, int)\nC++: int *GetDimensions()\n\n"},
  {(char*)"GetGridFileName", PyvtkPOPReader_GetGridFileName, 1,
   (char*)"V.GetGridFileName() -> string\nC++: char *GetGridFileName()\n\nThis file contains the latitude and longitude of the grid. It\nmust be double with no header.\n"},
  {(char*)"GetUFlowFileName", PyvtkPOPReader_GetUFlowFileName, 1,
   (char*)"V.GetUFlowFileName() -> string\nC++: char *GetUFlowFileName()\n\nThese files contains the u and v components of the flow.\n"},
  {(char*)"GetVFlowFileName", PyvtkPOPReader_GetVFlowFileName, 1,
   (char*)"V.GetVFlowFileName() -> string\nC++: char *GetVFlowFileName()\n\nThese files contains the u and v components of the flow.\n"},
  {(char*)"SetFileName", PyvtkPOPReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThis file contains information about all the files.\n"},
  {(char*)"GetFileName", PyvtkPOPReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThis file contains information about all the files.\n"},
  {(char*)"SetRadius", PyvtkPOPReader_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double a)\n\nRadius of the earth.\n"},
  {(char*)"GetRadius", PyvtkPOPReader_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nRadius of the earth.\n"},
  {(char*)"SetClipExtent", PyvtkPOPReader_SetClipExtent, 1,
   (char*)"V.SetClipExtent(int, int, int, int, int, int)\nC++: void SetClipExtent(int, int, int, int, int, int)\nV.SetClipExtent((int, int, int, int, int, int))\nC++: void SetClipExtent(int a[6])\n\n"},
  {(char*)"GetClipExtent", PyvtkPOPReader_GetClipExtent, 1,
   (char*)"V.GetClipExtent() -> (int, int, int, int, int, int)\nC++: int *GetClipExtent()\n\n"},
  {(char*)"SetNumberOfGhostLevels", PyvtkPOPReader_SetNumberOfGhostLevels, 1,
   (char*)"V.SetNumberOfGhostLevels(int)\nC++: void SetNumberOfGhostLevels(int a)\n\nSet the number of ghost levels to include in the data\n"},
  {(char*)"GetNumberOfGhostLevels", PyvtkPOPReader_GetNumberOfGhostLevels, 1,
   (char*)"V.GetNumberOfGhostLevels() -> int\nC++: int GetNumberOfGhostLevels()\n\nSet the number of ghost levels to include in the data\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOPReader_StaticNew()
{
  return vtkPOPReader::New();
}

PyObject *PyVTKClass_vtkPOPReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOPReader_StaticNew,
    PyvtkPOPReader_Methods,
    "vtkPOPReader", modulename,
    NULL, NULL,
    PyvtkPOPReader_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPOPReader_Doc()
{
  static const char *docstring[] = {
    "vtkPOPReader - read POP data files\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkPOPReader Just converts from images to a structured grid for now.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOPReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOPReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOPReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

