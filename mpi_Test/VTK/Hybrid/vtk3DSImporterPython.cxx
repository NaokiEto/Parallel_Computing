// python wrapper for vtk3DSImporter
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
#include "vtk3DSImporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtk3DSImporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtk3DSImporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtk3DSImporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtk3DSImporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImporterNew
extern "C" { PyObject *PyVTKClass_vtkImporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImporterNew
#endif

static const char **Pyvtk3DSImporter_Doc();


static PyObject *
Pyvtk3DSImporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

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
      tempr = op->vtk3DSImporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

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
      tempr = op->vtk3DSImporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  vtk3DSImporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtk3DSImporter::NewInstance();
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
Pyvtk3DSImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtk3DSImporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtk3DSImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

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
      op->vtk3DSImporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

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
      tempr = op->vtk3DSImporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtk3DSImporter::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeNormals();
      }
    else
      {
      tempr = op->vtk3DSImporter::GetComputeNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtk3DSImporter::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtk3DSImporter::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef Pyvtk3DSImporter_Methods[] = {
  {(char*)"GetClassName", Pyvtk3DSImporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", Pyvtk3DSImporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", Pyvtk3DSImporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtk3DSImporter\nC++: vtk3DSImporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", Pyvtk3DSImporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtk3DSImporter\nC++: vtk3DSImporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", Pyvtk3DSImporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the file to read.\n"},
  {(char*)"GetFileName", Pyvtk3DSImporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the file to read.\n"},
  {(char*)"SetComputeNormals", Pyvtk3DSImporter_SetComputeNormals, 1,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {(char*)"GetComputeNormals", Pyvtk3DSImporter_GetComputeNormals, 1,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {(char*)"ComputeNormalsOn", Pyvtk3DSImporter_ComputeNormalsOn, 1,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {(char*)"ComputeNormalsOff", Pyvtk3DSImporter_ComputeNormalsOff, 1,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *Pyvtk3DSImporter_StaticNew()
{
  return vtk3DSImporter::New();
}

PyObject *PyVTKClass_vtk3DSImporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&Pyvtk3DSImporter_StaticNew,
    Pyvtk3DSImporter_Methods,
    "vtk3DSImporter", modulename,
    NULL, NULL,
    Pyvtk3DSImporter_Doc(),
    PyVTKClass_vtkImporterNew(modulename));
  return cls;
}

const char **Pyvtk3DSImporter_Doc()
{
  static const char *docstring[] = {
    "vtk3DSImporter - imports 3D Studio files.\n\n",
    "Superclass: vtkImporter\n\n",
    "vtk3DSImporter imports 3D Studio files into vtk.\n\nSee Also:\n\nvtkImporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtk3DSImporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtk3DSImporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtk3DSImporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

