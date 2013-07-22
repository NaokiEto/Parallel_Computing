// python wrapper for vtkGeoAlignedImageRepresentation
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
#include "vtkGeoAlignedImageRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoAlignedImageRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoAlignedImageRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoAlignedImageRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoAlignedImageRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataRepresentationNew
#endif

static const char **PyvtkGeoAlignedImageRepresentation_Doc();


static PyObject *
PyvtkGeoAlignedImageRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

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
      tempr = op->vtkGeoAlignedImageRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

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
      tempr = op->vtkGeoAlignedImageRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

  vtkGeoAlignedImageRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageRepresentation::NewInstance();
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
PyvtkGeoAlignedImageRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoAlignedImageRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoAlignedImageRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageRepresentation_GetBestImageForBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBestImageForBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  vtkGeoImageNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetBestImageForBounds(temp0);
      }
    else
      {
      tempr = op->vtkGeoAlignedImageRepresentation::GetBestImageForBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageRepresentation_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

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
      tempr = op->vtkGeoAlignedImageRepresentation::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageRepresentation_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

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
      op->vtkGeoAlignedImageRepresentation::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageRepresentation_SaveDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageRepresentation *op = static_cast<vtkGeoAlignedImageRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SaveDatabase(temp0);
      }
    else
      {
      op->vtkGeoAlignedImageRepresentation::SaveDatabase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoAlignedImageRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoAlignedImageRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoAlignedImageRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoAlignedImageRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoAlignedImageRepresentation\nC++: vtkGeoAlignedImageRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoAlignedImageRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoAlignedImageRepresentation\nC++: vtkGeoAlignedImageRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBestImageForBounds", PyvtkGeoAlignedImageRepresentation_GetBestImageForBounds, 1,
   (char*)"V.GetBestImageForBounds([float, float, float, float])\n    -> vtkGeoImageNode\nC++: virtual vtkGeoImageNode *GetBestImageForBounds(\n    double bounds[4])\n\nRetrieve the most refined image patch that covers the specified\nlatitude and longitude bounds (lat-min, lat-max, long-min,\nlong-max).\n"},
  {(char*)"GetSource", PyvtkGeoAlignedImageRepresentation_GetSource, 1,
   (char*)"V.GetSource() -> vtkGeoSource\nC++: virtual vtkGeoSource *GetSource()\n\nThe source for this representation. This must be set first before\ncalling GetBestImageForBounds.\n"},
  {(char*)"SetSource", PyvtkGeoAlignedImageRepresentation_SetSource, 1,
   (char*)"V.SetSource(vtkGeoSource)\nC++: virtual void SetSource(vtkGeoSource *source)\n\nThe source for this representation. This must be set first before\ncalling GetBestImageForBounds.\n"},
  {(char*)"SaveDatabase", PyvtkGeoAlignedImageRepresentation_SaveDatabase, 1,
   (char*)"V.SaveDatabase(string)\nC++: void SaveDatabase(const char *path)\n\nSerialize the database to the specified directory. Each image is\nstored as a .vti file. The Origin and Spacing of the saved image\ncontain (lat-min, long-min) and (lat-max, long-max),\nrespectively. Files are named based on their level and id within\nthat level.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoAlignedImageRepresentation_StaticNew()
{
  return vtkGeoAlignedImageRepresentation::New();
}

PyObject *PyVTKClass_vtkGeoAlignedImageRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoAlignedImageRepresentation_StaticNew,
    PyvtkGeoAlignedImageRepresentation_Methods,
    "vtkGeoAlignedImageRepresentation", modulename,
    NULL, NULL,
    PyvtkGeoAlignedImageRepresentation_Doc(),
    PyVTKClass_vtkDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkGeoAlignedImageRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkGeoAlignedImageRepresentation - A multi-resolution image tree\n\n",
    "Superclass: vtkDataRepresentation\n\n",
    "vtkGeoAlignedImageRepresentation represents a high resolution image\nover the globle. It has an associated vtkGeoSource which is\nresponsible for fetching new data. This class keeps the fetched data\nin a quad-tree structure organized by latitude and longitude.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoAlignedImageRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoAlignedImageRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoAlignedImageRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

