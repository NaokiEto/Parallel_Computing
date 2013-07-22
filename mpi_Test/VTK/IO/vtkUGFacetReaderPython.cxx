// python wrapper for vtkUGFacetReader
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
#include "vtkUGFacetReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUGFacetReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUGFacetReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUGFacetReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUGFacetReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkUGFacetReader_Doc();


static PyObject *
PyvtkUGFacetReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

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
      tempr = op->vtkUGFacetReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

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
      tempr = op->vtkUGFacetReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  vtkUGFacetReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUGFacetReader::NewInstance();
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
PyvtkUGFacetReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUGFacetReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUGFacetReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkUGFacetReader::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

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
      op->vtkUGFacetReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

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
      tempr = op->vtkUGFacetReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfParts();
      }
    else
      {
      tempr = op->vtkUGFacetReader::GetNumberOfParts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetPartColorIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartColorIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  int temp0;
  short tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartColorIndex(temp0);
      }
    else
      {
      tempr = op->vtkUGFacetReader::GetPartColorIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_SetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPartNumber(temp0);
      }
    else
      {
      op->vtkUGFacetReader::SetPartNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartNumber();
      }
    else
      {
      tempr = op->vtkUGFacetReader::GetPartNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkUGFacetReader::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMerging();
      }
    else
      {
      tempr = op->vtkUGFacetReader::GetMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkUGFacetReader::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkUGFacetReader::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkUGFacetReader::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkUGFacetReader::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUGFacetReader_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUGFacetReader *op = static_cast<vtkUGFacetReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkUGFacetReader::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUGFacetReader_Methods[] = {
  {(char*)"GetClassName", PyvtkUGFacetReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUGFacetReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUGFacetReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUGFacetReader\nC++: vtkUGFacetReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUGFacetReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUGFacetReader\nC++: vtkUGFacetReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkUGFacetReader_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload standard modified time function. If locator is modified,\nthen this object is modified as well.\n"},
  {(char*)"SetFileName", PyvtkUGFacetReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify Unigraphics file name.\n"},
  {(char*)"GetFileName", PyvtkUGFacetReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify Unigraphics file name.\n"},
  {(char*)"GetNumberOfParts", PyvtkUGFacetReader_GetNumberOfParts, 1,
   (char*)"V.GetNumberOfParts() -> int\nC++: int GetNumberOfParts()\n\nSpecial methods for interrogating the data file.\n"},
  {(char*)"GetPartColorIndex", PyvtkUGFacetReader_GetPartColorIndex, 1,
   (char*)"V.GetPartColorIndex(int) -> int\nC++: short GetPartColorIndex(int partId)\n\nRetrieve color index for the parts in the file.\n"},
  {(char*)"SetPartNumber", PyvtkUGFacetReader_SetPartNumber, 1,
   (char*)"V.SetPartNumber(int)\nC++: void SetPartNumber(int a)\n\nSpecify the desired part to extract. The part number must range\nbetween [0,NumberOfParts-1]. If the value is =(-1), then all\nparts will be extracted. If the value is <(-1), then no parts\nwill be  extracted but the part colors will be updated.\n"},
  {(char*)"GetPartNumber", PyvtkUGFacetReader_GetPartNumber, 1,
   (char*)"V.GetPartNumber() -> int\nC++: int GetPartNumber()\n\nSpecify the desired part to extract. The part number must range\nbetween [0,NumberOfParts-1]. If the value is =(-1), then all\nparts will be extracted. If the value is <(-1), then no parts\nwill be  extracted but the part colors will be updated.\n"},
  {(char*)"SetMerging", PyvtkUGFacetReader_SetMerging, 1,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"GetMerging", PyvtkUGFacetReader_GetMerging, 1,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"MergingOn", PyvtkUGFacetReader_MergingOn, 1,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"MergingOff", PyvtkUGFacetReader_MergingOff, 1,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"SetLocator", PyvtkUGFacetReader_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkUGFacetReader_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkUGFacetReader_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUGFacetReader_StaticNew()
{
  return vtkUGFacetReader::New();
}

PyObject *PyVTKClass_vtkUGFacetReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUGFacetReader_StaticNew,
    PyvtkUGFacetReader_Methods,
    "vtkUGFacetReader", modulename,
    NULL, NULL,
    PyvtkUGFacetReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUGFacetReader_Doc()
{
  static const char *docstring[] = {
    "vtkUGFacetReader - read EDS Unigraphics facet files\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkUGFacetReader is a source object that reads Unigraphics facet\nfiles. Unigraphics is a solid modeling system; facet files are the\npolygonal plot files it uses to create 3D plots.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUGFacetReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUGFacetReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUGFacetReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

