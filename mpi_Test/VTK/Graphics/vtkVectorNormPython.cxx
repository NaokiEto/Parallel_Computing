// python wrapper for vtkVectorNorm
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
#include "vtkVectorNorm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVectorNorm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVectorNorm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVectorNormNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVectorNormNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkVectorNorm_Doc();


static PyObject *
PyvtkVectorNorm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

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
      tempr = op->vtkVectorNorm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

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
      tempr = op->vtkVectorNorm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  vtkVectorNorm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVectorNorm::NewInstance();
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
PyvtkVectorNorm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVectorNorm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVectorNorm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalize(temp0);
      }
    else
      {
      op->vtkVectorNorm::SetNormalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalize();
      }
    else
      {
      tempr = op->vtkVectorNorm::GetNormalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_NormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeOn();
      }
    else
      {
      op->vtkVectorNorm::NormalizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_NormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeOff();
      }
    else
      {
      op->vtkVectorNorm::NormalizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeMode(temp0);
      }
    else
      {
      op->vtkVectorNorm::SetAttributeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeMode();
      }
    else
      {
      tempr = op->vtkVectorNorm::GetAttributeMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToDefault();
      }
    else
      {
      op->vtkVectorNorm::SetAttributeModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUsePointData();
      }
    else
      {
      op->vtkVectorNorm::SetAttributeModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeModeToUseCellData();
      }
    else
      {
      op->vtkVectorNorm::SetAttributeModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorNorm_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorNorm *op = static_cast<vtkVectorNorm *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeModeAsString();
      }
    else
      {
      tempr = op->vtkVectorNorm::GetAttributeModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVectorNorm_Methods[] = {
  {(char*)"GetClassName", PyvtkVectorNorm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVectorNorm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVectorNorm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVectorNorm\nC++: vtkVectorNorm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVectorNorm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVectorNorm\nC++: vtkVectorNorm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNormalize", PyvtkVectorNorm_SetNormalize, 1,
   (char*)"V.SetNormalize(int)\nC++: void SetNormalize(int a)\n\nSpecify whether to normalize scalar values.\n"},
  {(char*)"GetNormalize", PyvtkVectorNorm_GetNormalize, 1,
   (char*)"V.GetNormalize() -> int\nC++: int GetNormalize()\n\nSpecify whether to normalize scalar values.\n"},
  {(char*)"NormalizeOn", PyvtkVectorNorm_NormalizeOn, 1,
   (char*)"V.NormalizeOn()\nC++: void NormalizeOn()\n\nSpecify whether to normalize scalar values.\n"},
  {(char*)"NormalizeOff", PyvtkVectorNorm_NormalizeOff, 1,
   (char*)"V.NormalizeOff()\nC++: void NormalizeOff()\n\nSpecify whether to normalize scalar values.\n"},
  {(char*)"SetAttributeMode", PyvtkVectorNorm_SetAttributeMode, 1,
   (char*)"V.SetAttributeMode(int)\nC++: void SetAttributeMode(int a)\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"GetAttributeMode", PyvtkVectorNorm_GetAttributeMode, 1,
   (char*)"V.GetAttributeMode() -> int\nC++: int GetAttributeMode()\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToDefault", PyvtkVectorNorm_SetAttributeModeToDefault, 1,
   (char*)"V.SetAttributeModeToDefault()\nC++: void SetAttributeModeToDefault()\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToUsePointData", PyvtkVectorNorm_SetAttributeModeToUsePointData, 1,
   (char*)"V.SetAttributeModeToUsePointData()\nC++: void SetAttributeModeToUsePointData()\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"SetAttributeModeToUseCellData", PyvtkVectorNorm_SetAttributeModeToUseCellData, 1,
   (char*)"V.SetAttributeModeToUseCellData()\nC++: void SetAttributeModeToUseCellData()\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {(char*)"GetAttributeModeAsString", PyvtkVectorNorm_GetAttributeModeAsString, 1,
   (char*)"V.GetAttributeModeAsString() -> string\nC++: const char *GetAttributeModeAsString()\n\nControl how the filter works to generate scalar data from the\ninput vector data. By default, (AttributeModeToDefault) the\nfilter will generate the scalar norm for point and cell data (if\nvector data present in the input). Alternatively, you can\nexplicitly set the filter to generate point data\n(AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVectorNorm_StaticNew()
{
  return vtkVectorNorm::New();
}

PyObject *PyVTKClass_vtkVectorNormNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVectorNorm_StaticNew,
    PyvtkVectorNorm_Methods,
    "vtkVectorNorm", modulename,
    NULL, NULL,
    PyvtkVectorNorm_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVectorNorm_Doc()
{
  static const char *docstring[] = {
    "vtkVectorNorm - generate scalars from Euclidean norm of vectors\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkVectorNorm is a filter that generates scalar values by computing\nEuclidean norm of vector triplets. Scalars can be normalized 0<=s<=1\nif desired.\n\nNote that this filter operates on point or cell attribute data, or\nboth.  By default, the filter operates on both point and cell data if\nvector point and cell data, respectively, are available from the\ninput. Alternatively, you can choose to generate",
    " scalar norm values\nfor just cell or point data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVectorNorm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVectorNormNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVectorNorm", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_DEFAULT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_USE_POINT_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ATTRIBUTE_MODE_USE_CELL_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

}

