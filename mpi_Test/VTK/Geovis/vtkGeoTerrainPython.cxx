// python wrapper for vtkGeoTerrain
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
#include "vtkGeoTerrain.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoTerrain(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoTerrain(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoTerrainNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoTerrainNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoTerrain_Doc();


static PyObject *
PyvtkGeoTerrain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

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
      tempr = op->vtkGeoTerrain::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

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
      tempr = op->vtkGeoTerrain::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  vtkGeoTerrain *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoTerrain::NewInstance();
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
PyvtkGeoTerrain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoTerrain *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoTerrain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  vtkGeoSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkGeoTerrain::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  vtkGeoSource *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoSource"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkGeoTerrain::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_SaveDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SaveDatabase(temp0, temp1);
      }
    else
      {
      op->vtkGeoTerrain::SaveDatabase(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_AddActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkAssembly *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkAssembly") &&
      ap.GetVTKObject(temp2, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->AddActors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeoTerrain::AddActors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeoTerrain::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTerrain_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkGeoTerrain::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTerrain_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGeoTerrain_SetOrigin_s1(self, args);
    case 1:
      return PyvtkGeoTerrain_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkGeoTerrain_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkGeoTerrain::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLevel(temp0);
      }
    else
      {
      op->vtkGeoTerrain::SetMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevelMinValue();
      }
    else
      {
      tempr = op->vtkGeoTerrain::GetMaxLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevelMaxValue();
      }
    else
      {
      tempr = op->vtkGeoTerrain::GetMaxLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrain_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrain *op = static_cast<vtkGeoTerrain *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxLevel();
      }
    else
      {
      tempr = op->vtkGeoTerrain::GetMaxLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoTerrain_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoTerrain_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoTerrain_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoTerrain_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoTerrain\nC++: vtkGeoTerrain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoTerrain_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoTerrain\nC++: vtkGeoTerrain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSource", PyvtkGeoTerrain_GetSource, 1,
   (char*)"V.GetSource() -> vtkGeoSource\nC++: virtual vtkGeoSource *GetSource()\n\nThe source used to obtain geometry patches.\n"},
  {(char*)"SetSource", PyvtkGeoTerrain_SetSource, 1,
   (char*)"V.SetSource(vtkGeoSource)\nC++: virtual void SetSource(vtkGeoSource *source)\n\nThe source used to obtain geometry patches.\n"},
  {(char*)"SaveDatabase", PyvtkGeoTerrain_SaveDatabase, 1,
   (char*)"V.SaveDatabase(string, int)\nC++: void SaveDatabase(const char *path, int depth)\n\nSave the set of patches up to a given maximum depth.\n"},
  {(char*)"AddActors", PyvtkGeoTerrain_AddActors, 1,
   (char*)"V.AddActors(vtkRenderer, vtkAssembly, vtkCollection)\nC++: void AddActors(vtkRenderer *ren, vtkAssembly *assembly,\n    vtkCollection *imageReps)\n\nUpdate the actors in an assembly used to render the globe. ren is\nthe current renderer, and imageReps holds the collection of\nvtkGeoAlignedImageRepresentations that will be blended together\nto form the image on the globe.\n"},
  {(char*)"SetOrigin", PyvtkGeoTerrain_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkGeoTerrain_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetMaxLevel", PyvtkGeoTerrain_SetMaxLevel, 1,
   (char*)"V.SetMaxLevel(int)\nC++: void SetMaxLevel(int)\n\nThe maximum level of the terrain tree.\n"},
  {(char*)"GetMaxLevelMinValue", PyvtkGeoTerrain_GetMaxLevelMinValue, 1,
   (char*)"V.GetMaxLevelMinValue() -> int\nC++: int GetMaxLevelMinValue()\n\nThe maximum level of the terrain tree.\n"},
  {(char*)"GetMaxLevelMaxValue", PyvtkGeoTerrain_GetMaxLevelMaxValue, 1,
   (char*)"V.GetMaxLevelMaxValue() -> int\nC++: int GetMaxLevelMaxValue()\n\nThe maximum level of the terrain tree.\n"},
  {(char*)"GetMaxLevel", PyvtkGeoTerrain_GetMaxLevel, 1,
   (char*)"V.GetMaxLevel() -> int\nC++: int GetMaxLevel()\n\nThe maximum level of the terrain tree.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoTerrain_StaticNew()
{
  return vtkGeoTerrain::New();
}

PyObject *PyVTKClass_vtkGeoTerrainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoTerrain_StaticNew,
    PyvtkGeoTerrain_Methods,
    "vtkGeoTerrain", modulename,
    NULL, NULL,
    PyvtkGeoTerrain_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGeoTerrain_Doc()
{
  static const char *docstring[] = {
    "vtkGeoTerrain - A 3D terrain model for the globe.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGeoTerrain contains a multi-resolution tree of geometry\nrepresenting the globe. It uses a vtkGeoSource subclass to generate\nthe terrain, such as vtkGeoGlobeSource. This source must be set\nbefore using the terrain in a vtkGeoView. The terrain also contains\nan AddActors() method which will update the set of actors\nrepresenting the globe given the current camera position.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoTerrain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoTerrainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoTerrain", o) != 0)
    {
    Py_DECREF(o);
    }

}

