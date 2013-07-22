// python wrapper for vtkSliceCubes
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
#include "vtkSliceCubes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSliceCubes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSliceCubes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSliceCubesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSliceCubesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSliceCubes_Doc();


static PyObject *
PyvtkSliceCubes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

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
      tempr = op->vtkSliceCubes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

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
      tempr = op->vtkSliceCubes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  vtkSliceCubes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSliceCubes::NewInstance();
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
PyvtkSliceCubes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSliceCubes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSliceCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkSliceCubes::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSliceCubes::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  vtkVolumeReader *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeReader"))
    {
    if (ap.IsBound())
      {
      op->SetReader(temp0);
      }
    else
      {
      op->vtkSliceCubes::SetReader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  vtkVolumeReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReader();
      }
    else
      {
      tempr = op->vtkSliceCubes::GetReader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

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
      op->vtkSliceCubes::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

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
      tempr = op->vtkSliceCubes::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkSliceCubes::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkSliceCubes::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_SetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLimitsFileName(temp0);
      }
    else
      {
      op->vtkSliceCubes::SetLimitsFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliceCubes_GetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceCubes *op = static_cast<vtkSliceCubes *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLimitsFileName();
      }
    else
      {
      tempr = op->vtkSliceCubes::GetLimitsFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSliceCubes_Methods[] = {
  {(char*)"GetClassName", PyvtkSliceCubes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSliceCubes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSliceCubes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSliceCubes\nC++: vtkSliceCubes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSliceCubes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliceCubes\nC++: vtkSliceCubes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkSliceCubes_Write, 1,
   (char*)"V.Write()\nC++: void Write()\n\n"},
  {(char*)"Update", PyvtkSliceCubes_Update, 1,
   (char*)"V.Update()\nC++: void Update()\n\n"},
  {(char*)"SetReader", PyvtkSliceCubes_SetReader, 1,
   (char*)"V.SetReader(vtkVolumeReader)\nC++: virtual void SetReader(vtkVolumeReader *)\n\nSet/get object to read slices.\n"},
  {(char*)"GetReader", PyvtkSliceCubes_GetReader, 1,
   (char*)"V.GetReader() -> vtkVolumeReader\nC++: vtkVolumeReader *GetReader()\n\nSet/get object to read slices.\n"},
  {(char*)"SetFileName", PyvtkSliceCubes_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of marching cubes output file.\n"},
  {(char*)"GetFileName", PyvtkSliceCubes_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of marching cubes output file.\n"},
  {(char*)"SetValue", PyvtkSliceCubes_SetValue, 1,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet/get isosurface contour value.\n"},
  {(char*)"GetValue", PyvtkSliceCubes_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet/get isosurface contour value.\n"},
  {(char*)"SetLimitsFileName", PyvtkSliceCubes_SetLimitsFileName, 1,
   (char*)"V.SetLimitsFileName(string)\nC++: void SetLimitsFileName(char *)\n\nSpecify file name of marching cubes limits file. The limits file\nspeeds up subsequent reading of output triangle file.\n"},
  {(char*)"GetLimitsFileName", PyvtkSliceCubes_GetLimitsFileName, 1,
   (char*)"V.GetLimitsFileName() -> string\nC++: char *GetLimitsFileName()\n\nSpecify file name of marching cubes limits file. The limits file\nspeeds up subsequent reading of output triangle file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSliceCubes_StaticNew()
{
  return vtkSliceCubes::New();
}

PyObject *PyVTKClass_vtkSliceCubesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSliceCubes_StaticNew,
    PyvtkSliceCubes_Methods,
    "vtkSliceCubes", modulename,
    NULL, NULL,
    PyvtkSliceCubes_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSliceCubes_Doc()
{
  static const char *docstring[] = {
    "vtkSliceCubes - generate isosurface(s) from volume four slices at a\ntime\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSliceCubes is a special version of the marching cubes filter.\nInstead of ingesting an entire volume at once it processes only four\nslices at a time. This way, it can generate isosurfaces from huge\nvolumes. Also, the output of this object is written to a marching\ncubes triangle file. That way, output triangles do not need to be\nheld in memory.\n\nTo use vtkSliceCubes you must specify an instance o",
    "f vtkVolumeReader\nto read the data. Set this object up with the proper file prefix,\nimage range, data origin, data dimensions, header size, data mask,\nand swap bytes flag. The vtkSliceCubes object will then take over and\nread slices as necessary. You also will need to specify the name of\nan output marching cubes triangle file.\n\nCaveats:\n\nThis process object is both a source and mapper (i.e., it re",
    "ads and\nwrites data to a file). This is different than the other marching\ncubes objects (and most process objects in the system). It's\nspecialized to handle very large data.\n\nThis object only extracts a single isosurface. This compares with the\nother contouring objects in vtk that generate multiple surfaces.\n\nTo read the output file use vtkMCubesReader.\n\nSee Also:\n\nvtkMarchingCubes vtkContourFilte",
    "r vtkMCubesReader vtkDividingCubes\nvtkVolumeReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliceCubes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliceCubesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliceCubes", o) != 0)
    {
    Py_DECREF(o);
    }

}

