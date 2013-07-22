// python wrapper for vtkProjectedTetrahedraMapper
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
#include "vtkProjectedTetrahedraMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProjectedTetrahedraMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProjectedTetrahedraMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkProjectedTetrahedraMapper_Doc();


static PyObject *
PyvtkProjectedTetrahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

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
      tempr = op->vtkProjectedTetrahedraMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

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
      tempr = op->vtkProjectedTetrahedraMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkProjectedTetrahedraMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProjectedTetrahedraMapper::NewInstance();
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
PyvtkProjectedTetrahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProjectedTetrahedraMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_SetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkVisibilitySort *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVisibilitySort"))
    {
    if (ap.IsBound())
      {
      op->SetVisibilitySort(temp0);
      }
    else
      {
      op->vtkProjectedTetrahedraMapper::SetVisibilitySort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_GetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkVisibilitySort *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVisibilitySort();
      }
    else
      {
      tempr = op->vtkProjectedTetrahedraMapper::GetVisibilitySort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_MapScalarsToColors(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapScalarsToColors");

  vtkDataArray *temp0 = NULL;
  vtkVolumeProperty *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    vtkProjectedTetrahedraMapper::MapScalarsToColors(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_TransformPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPoints");

  vtkPoints *temp0 = NULL;
  float temp1[16];
  const int size1 = 16;
  float temp2[16];
  const int size2 = 16;
  vtkFloatArray *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
    {
    vtkProjectedTetrahedraMapper::TransformPoints(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedTetrahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedTetrahedraMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProjectedTetrahedraMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProjectedTetrahedraMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProjectedTetrahedraMapper\nC++: vtkProjectedTetrahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProjectedTetrahedraMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedTetrahedraMapper\nC++: vtkProjectedTetrahedraMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibilitySort", PyvtkProjectedTetrahedraMapper_SetVisibilitySort, 1,
   (char*)"V.SetVisibilitySort(vtkVisibilitySort)\nC++: virtual void SetVisibilitySort(vtkVisibilitySort *sort)\n\n"},
  {(char*)"GetVisibilitySort", PyvtkProjectedTetrahedraMapper_GetVisibilitySort, 1,
   (char*)"V.GetVisibilitySort() -> vtkVisibilitySort\nC++: vtkVisibilitySort *GetVisibilitySort()\n\n"},
  {(char*)"MapScalarsToColors", PyvtkProjectedTetrahedraMapper_MapScalarsToColors, 1,
   (char*)"V.MapScalarsToColors(vtkDataArray, vtkVolumeProperty,\n    vtkDataArray)\nC++: static void MapScalarsToColors(vtkDataArray *colors,\n    vtkVolumeProperty *property, vtkDataArray *scalars)\n\n"},
  {(char*)"TransformPoints", PyvtkProjectedTetrahedraMapper_TransformPoints, 1,
   (char*)"V.TransformPoints(vtkPoints, (float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float), (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), vtkFloatArray)\nC++: static void TransformPoints(vtkPoints *inPoints,\n    const float projection_mat[16], const float modelview_mat[16],\n     vtkFloatArray *outPoints)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedTetrahedraMapper_StaticNew()
{
  return vtkProjectedTetrahedraMapper::New();
}

PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedTetrahedraMapper_StaticNew,
    PyvtkProjectedTetrahedraMapper_Methods,
    "vtkProjectedTetrahedraMapper", modulename,
    NULL, NULL,
    PyvtkProjectedTetrahedraMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkProjectedTetrahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedTetrahedraMapper - Unstructured grid volume renderer.\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "vtkProjectedTetrahedraMapper is an implementation of the classic\nProjected Tetrahedra algorithm presented by Shirley and Tuchman in \"A\nPolygonal Approximation to Direct Scalar Volume Rendering\" in\nComputer Graphics, December 1990.\n\nBugs:\n\nThis mapper relies highly on the implementation of the OpenGL\npipeline. A typical hardware driver has lots of options and some\nsettings can cause this mapper to ",
    "produce artifacts.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedTetrahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedTetrahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedTetrahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

