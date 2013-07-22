// python wrapper for vtkAbstractMapper
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
#include "vtkAbstractMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAbstractMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAbstractMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAbstractMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAbstractMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkAbstractMapper_Doc();


static PyObject *
PyvtkAbstractMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

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
      tempr = op->vtkAbstractMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

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
      tempr = op->vtkAbstractMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkAbstractMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAbstractMapper::NewInstance();
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
PyvtkAbstractMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

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
      tempr = op->vtkAbstractMapper::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkAbstractMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeToDraw();
      }
    else
      {
      tempr = op->vtkAbstractMapper::GetTimeToDraw();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_AddClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->AddClippingPlane(temp0);
      }
    else
      {
      op->vtkAbstractMapper::AddClippingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->RemoveClippingPlane(temp0);
      }
    else
      {
      op->vtkAbstractMapper::RemoveClippingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveAllClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllClippingPlanes();
      }
    else
      {
      op->vtkAbstractMapper::RemoveAllClippingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetClippingPlanes(temp0);
      }
    else
      {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetClippingPlanes(temp0);
      }
    else
      {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_SetClippingPlanes_Methods[] = {
  {NULL, PyvtkAbstractMapper_SetClippingPlanes_s1, 1,
   (char*)"@O *vtkPlaneCollection"},
  {NULL, PyvtkAbstractMapper_SetClippingPlanes_s2, 1,
   (char*)"@O *vtkPlanes"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractMapper_SetClippingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingPlanes");
  return NULL;
}



static PyObject *
PyvtkAbstractMapper_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlaneCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippingPlanes();
      }
    else
      {
      tempr = op->vtkAbstractMapper::GetClippingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkAbstractMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAbstractMapper::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetScalars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalars");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  int temp5;
  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    tempr = vtkAbstractMapper::GetScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAbstractMapper\nC++: vtkAbstractMapper *NewInstance()\n\n"},
  {(char*)"GetMTime", PyvtkAbstractMapper_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride Modifiedtime as we have added Clipping planes\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAbstractMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetTimeToDraw", PyvtkAbstractMapper_GetTimeToDraw, 1,
   (char*)"V.GetTimeToDraw() -> float\nC++: double GetTimeToDraw()\n\nGet the time required to draw the geometry last time it was\nrendered\n"},
  {(char*)"AddClippingPlane", PyvtkAbstractMapper_AddClippingPlane, 1,
   (char*)"V.AddClippingPlane(vtkPlane)\nC++: void AddClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {(char*)"RemoveClippingPlane", PyvtkAbstractMapper_RemoveClippingPlane, 1,
   (char*)"V.RemoveClippingPlane(vtkPlane)\nC++: void RemoveClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {(char*)"RemoveAllClippingPlanes", PyvtkAbstractMapper_RemoveAllClippingPlanes, 1,
   (char*)"V.RemoveAllClippingPlanes()\nC++: void RemoveAllClippingPlanes()\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {(char*)"SetClippingPlanes", PyvtkAbstractMapper_SetClippingPlanes, 1,
   (char*)"V.SetClippingPlanes(vtkPlaneCollection)\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *)\nV.SetClippingPlanes(vtkPlanes)\nC++: void SetClippingPlanes(vtkPlanes *planes)\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {(char*)"GetClippingPlanes", PyvtkAbstractMapper_GetClippingPlanes, 1,
   (char*)"V.GetClippingPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetClippingPlanes()\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {(char*)"ShallowCopy", PyvtkAbstractMapper_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {(char*)"GetScalars", PyvtkAbstractMapper_GetScalars, 1,
   (char*)"V.GetScalars(vtkDataSet, int, int, int, string, int)\n    -> vtkDataArray\nC++: static vtkDataArray *GetScalars(vtkDataSet *input,\n    int scalarMode, int arrayAccessMode, int arrayId,\n    const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars. The\nscalar mode indicates where the scalars come from.  The cellFlag\nis a return value that is set when the scalars actually are cell\nscalars. (0 for point scalars, 1 for cell scalars, 2 for field\nscalars) The arrayAccessMode is used to indicate how to retrieve\nthe scalars from field data, per id or per name (if the\nscalarMode indicates that).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractMapper_Methods,
    "vtkAbstractMapper", modulename,
    NULL, NULL,
    PyvtkAbstractMapper_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAbstractMapper_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractMapper - abstract class specifies interface to map data\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkAbstractMapper is an abstract class to specify interface between\ndata and graphics primitives or software rendering techniques.\nSubclasses of vtkAbstractMapper can be used for rendering 2D data,\ngeometry, or volumetric data.\n\nSee Also:\n\nvtkAbstractMapper3D vtkMapper vtkPolyDataMapper vtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALAR_MODE_DEFAULT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALAR_MODE_USE_POINT_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALAR_MODE_USE_CELL_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALAR_MODE_USE_POINT_FIELD_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALAR_MODE_USE_CELL_FIELD_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SCALAR_MODE_USE_FIELD_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GET_ARRAY_BY_ID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_GET_ARRAY_BY_NAME", o) != 0)
    {
    Py_DECREF(o);
    }

}

