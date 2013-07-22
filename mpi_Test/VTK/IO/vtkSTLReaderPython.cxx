// python wrapper for vtkSTLReader
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
#include "vtkSTLReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSTLReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSTLReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSTLReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSTLReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSTLReader_Doc();


static PyObject *
PyvtkSTLReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      tempr = op->vtkSTLReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      tempr = op->vtkSTLReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  vtkSTLReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSTLReader::NewInstance();
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
PyvtkSTLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSTLReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSTLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      tempr = op->vtkSTLReader::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      op->vtkSTLReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      tempr = op->vtkSTLReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      op->vtkSTLReader::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      tempr = op->vtkSTLReader::GetMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkSTLReader::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkSTLReader::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetScalarTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTags(temp0);
      }
    else
      {
      op->vtkSTLReader::SetScalarTags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetScalarTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarTags();
      }
    else
      {
      tempr = op->vtkSTLReader::GetScalarTags();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_ScalarTagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarTagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarTagsOn();
      }
    else
      {
      op->vtkSTLReader::ScalarTagsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_ScalarTagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarTagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarTagsOff();
      }
    else
      {
      op->vtkSTLReader::ScalarTagsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      op->vtkSTLReader::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

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
      tempr = op->vtkSTLReader::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLReader_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLReader *op = static_cast<vtkSTLReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkSTLReader::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSTLReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSTLReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSTLReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSTLReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSTLReader\nC++: vtkSTLReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSTLReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSTLReader\nC++: vtkSTLReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkSTLReader_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverload standard modified time function. If locator is modified,\nthen this object is modified as well.\n"},
  {(char*)"SetFileName", PyvtkSTLReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of stereo lithography file.\n"},
  {(char*)"GetFileName", PyvtkSTLReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of stereo lithography file.\n"},
  {(char*)"SetMerging", PyvtkSTLReader_SetMerging, 1,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"GetMerging", PyvtkSTLReader_GetMerging, 1,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"MergingOn", PyvtkSTLReader_MergingOn, 1,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"MergingOff", PyvtkSTLReader_MergingOff, 1,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of points/triangles.\n"},
  {(char*)"SetScalarTags", PyvtkSTLReader_SetScalarTags, 1,
   (char*)"V.SetScalarTags(int)\nC++: void SetScalarTags(int a)\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"GetScalarTags", PyvtkSTLReader_GetScalarTags, 1,
   (char*)"V.GetScalarTags() -> int\nC++: int GetScalarTags()\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"ScalarTagsOn", PyvtkSTLReader_ScalarTagsOn, 1,
   (char*)"V.ScalarTagsOn()\nC++: void ScalarTagsOn()\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"ScalarTagsOff", PyvtkSTLReader_ScalarTagsOff, 1,
   (char*)"V.ScalarTagsOff()\nC++: void ScalarTagsOff()\n\nTurn on/off tagging of solids with scalars.\n"},
  {(char*)"SetLocator", PyvtkSTLReader_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkSTLReader_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkSTLReader_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSTLReader_StaticNew()
{
  return vtkSTLReader::New();
}

PyObject *PyVTKClass_vtkSTLReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSTLReader_StaticNew,
    PyvtkSTLReader_Methods,
    "vtkSTLReader", modulename,
    NULL, NULL,
    PyvtkSTLReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSTLReader_Doc()
{
  static const char *docstring[] = {
    "vtkSTLReader - read ASCII or binary stereo lithography files\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSTLReader is a source object that reads ASCII or binary stereo\nlithography files (.stl files). The FileName must be specified to\nvtkSTLReader. The object automatically detects whether the file is\nASCII or binary.\n\n.stl files are quite inefficient since they duplicate vertex\ndefinitions. By setting the Merging boolean you can control whether\nthe point data is merged after reading. Merging is per",
    "formed by\ndefault, however, merging requires a large amount of temporary\nstorage since a 3D hash table must be constructed.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems. vtkSTLWriter uses VAX or PC byte ordering and swaps bytes on\nother systems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSTLReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSTLReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSTLReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

