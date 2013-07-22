// python wrapper for vtkMergeFilter
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
#include "vtkMergeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMergeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMergeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMergeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMergeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMergeFilter_Doc();


static PyObject *
PyvtkMergeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

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
      tempr = op->vtkMergeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

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
      tempr = op->vtkMergeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkMergeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMergeFilter::NewInstance();
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
PyvtkMergeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMergeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMergeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometry();
      }
    else
      {
      tempr = op->vtkMergeFilter::GetGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetGeometryConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGeometryConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetGeometryConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetScalars(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalars();
      }
    else
      {
      tempr = op->vtkMergeFilter::GetScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetScalarsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetScalarsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetScalarsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetVectors(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectors();
      }
    else
      {
      tempr = op->vtkMergeFilter::GetVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetVectorsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetVectorsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetVectorsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetNormals(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormals();
      }
    else
      {
      tempr = op->vtkMergeFilter::GetNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetNormalsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetNormalsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetNormalsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetTCoords(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTCoords();
      }
    else
      {
      tempr = op->vtkMergeFilter::GetTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTCoordsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTCoordsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetTensors(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTensors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTensors();
      }
    else
      {
      tempr = op->vtkMergeFilter::GetTensors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTensorsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetTensorsConnection(temp0);
      }
    else
      {
      op->vtkMergeFilter::SetTensorsConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeFilter_AddField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  char *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddField(temp0, temp1);
      }
    else
      {
      op->vtkMergeFilter::AddField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMergeFilter\nC++: vtkMergeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeFilter\nC++: vtkMergeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometry", PyvtkMergeFilter_SetGeometry, 1,
   (char*)"V.SetGeometry(vtkDataSet)\nC++: void SetGeometry(vtkDataSet *input)\n\nSpecify object from which to extract geometry information. Old\nstyle. Use SetGeometryConnection() instead.\n"},
  {(char*)"GetGeometry", PyvtkMergeFilter_GetGeometry, 1,
   (char*)"V.GetGeometry() -> vtkDataSet\nC++: vtkDataSet *GetGeometry()\n\nSpecify object from which to extract geometry information. Old\nstyle. Use SetGeometryConnection() instead.\n"},
  {(char*)"SetGeometryConnection", PyvtkMergeFilter_SetGeometryConnection, 1,
   (char*)"V.SetGeometryConnection(vtkAlgorithmOutput)\nC++: void SetGeometryConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify object from which to extract geometry information.\nEquivalent to SetInputConnection(0, algOutput)\n"},
  {(char*)"SetScalars", PyvtkMergeFilter_SetScalars, 1,
   (char*)"V.SetScalars(vtkDataSet)\nC++: void SetScalars(vtkDataSet *)\n\nSpecify object from which to extract scalar information. Old\nstyle. Use SetScalarsConnection() instead.\n"},
  {(char*)"GetScalars", PyvtkMergeFilter_GetScalars, 1,
   (char*)"V.GetScalars() -> vtkDataSet\nC++: vtkDataSet *GetScalars()\n\nSpecify object from which to extract scalar information. Old\nstyle. Use SetScalarsConnection() instead.\n"},
  {(char*)"SetScalarsConnection", PyvtkMergeFilter_SetScalarsConnection, 1,
   (char*)"V.SetScalarsConnection(vtkAlgorithmOutput)\nC++: void SetScalarsConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify object from which to extract scalar information.\nEquivalent to SetInputConnection(1, algOutput)\n"},
  {(char*)"SetVectors", PyvtkMergeFilter_SetVectors, 1,
   (char*)"V.SetVectors(vtkDataSet)\nC++: void SetVectors(vtkDataSet *)\n\nSet / get the object from which to extract vector information.\nOld style. Use SetVectorsConnection() instead.\n"},
  {(char*)"GetVectors", PyvtkMergeFilter_GetVectors, 1,
   (char*)"V.GetVectors() -> vtkDataSet\nC++: vtkDataSet *GetVectors()\n\nSet / get the object from which to extract vector information.\nOld style. Use SetVectorsConnection() instead.\n"},
  {(char*)"SetVectorsConnection", PyvtkMergeFilter_SetVectorsConnection, 1,
   (char*)"V.SetVectorsConnection(vtkAlgorithmOutput)\nC++: void SetVectorsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract vector information.\nEquivalent to SetInputConnection(2, algOutput)\n"},
  {(char*)"SetNormals", PyvtkMergeFilter_SetNormals, 1,
   (char*)"V.SetNormals(vtkDataSet)\nC++: void SetNormals(vtkDataSet *)\n\nSet / get the object from which to extract normal information.\nOld style. Use SetNormalsConnection() instead.\n"},
  {(char*)"GetNormals", PyvtkMergeFilter_GetNormals, 1,
   (char*)"V.GetNormals() -> vtkDataSet\nC++: vtkDataSet *GetNormals()\n\nSet / get the object from which to extract normal information.\nOld style. Use SetNormalsConnection() instead.\n"},
  {(char*)"SetNormalsConnection", PyvtkMergeFilter_SetNormalsConnection, 1,
   (char*)"V.SetNormalsConnection(vtkAlgorithmOutput)\nC++: void SetNormalsConnection(vtkAlgorithmOutput *algOutput)\n\nSet  the connection from which to extract normal information.\nEquivalent to SetInputConnection(3, algOutput)\n"},
  {(char*)"SetTCoords", PyvtkMergeFilter_SetTCoords, 1,
   (char*)"V.SetTCoords(vtkDataSet)\nC++: void SetTCoords(vtkDataSet *)\n\nSet / get the object from which to extract texture coordinates\ninformation. Old style. Use SetTCoordsConnection() instead.\n"},
  {(char*)"GetTCoords", PyvtkMergeFilter_GetTCoords, 1,
   (char*)"V.GetTCoords() -> vtkDataSet\nC++: vtkDataSet *GetTCoords()\n\nSet / get the object from which to extract texture coordinates\ninformation. Old style. Use SetTCoordsConnection() instead.\n"},
  {(char*)"SetTCoordsConnection", PyvtkMergeFilter_SetTCoordsConnection, 1,
   (char*)"V.SetTCoordsConnection(vtkAlgorithmOutput)\nC++: void SetTCoordsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract texture coordinates\ninformation. Equivalent to SetInputConnection(4, algOutput)\n"},
  {(char*)"SetTensors", PyvtkMergeFilter_SetTensors, 1,
   (char*)"V.SetTensors(vtkDataSet)\nC++: void SetTensors(vtkDataSet *)\n\nSet / get the object from which to extract tensor data. Old\nstyle. Use SetTensorsConnection() instead.\n"},
  {(char*)"GetTensors", PyvtkMergeFilter_GetTensors, 1,
   (char*)"V.GetTensors() -> vtkDataSet\nC++: vtkDataSet *GetTensors()\n\nSet / get the object from which to extract tensor data. Old\nstyle. Use SetTensorsConnection() instead.\n"},
  {(char*)"SetTensorsConnection", PyvtkMergeFilter_SetTensorsConnection, 1,
   (char*)"V.SetTensorsConnection(vtkAlgorithmOutput)\nC++: void SetTensorsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract tensor data. Equivalent\nto SetInputConnection(5, algOutput)\n"},
  {(char*)"AddField", PyvtkMergeFilter_AddField, 1,
   (char*)"V.AddField(string, vtkDataSet)\nC++: void AddField(const char *name, vtkDataSet *input)\n\nSet the object from which to extract a field and the name of the\nfield. Note that this does not create pipeline connectivity.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeFilter_StaticNew()
{
  return vtkMergeFilter::New();
}

PyObject *PyVTKClass_vtkMergeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeFilter_StaticNew,
    PyvtkMergeFilter_Methods,
    "vtkMergeFilter", modulename,
    NULL, NULL,
    PyvtkMergeFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMergeFilter - extract separate components of data from different\ndatasets\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMergeFilter is a filter that extracts separate components of data\nfrom different datasets and merges them into a single dataset. The\noutput from this filter is of the same type as the input (i.e.,\nvtkDataSet.) It treats both cell and point data set attributes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

