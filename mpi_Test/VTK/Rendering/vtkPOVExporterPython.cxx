// python wrapper for vtkPOVExporter
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
#include "vtkPOVExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPOVExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPOVExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPOVExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPOVExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkPOVExporter_Doc();


static PyObject *
PyvtkPOVExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOVExporter *op = static_cast<vtkPOVExporter *>(vp);

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
      tempr = op->vtkPOVExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOVExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOVExporter *op = static_cast<vtkPOVExporter *>(vp);

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
      tempr = op->vtkPOVExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOVExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOVExporter *op = static_cast<vtkPOVExporter *>(vp);

  vtkPOVExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPOVExporter::NewInstance();
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
PyvtkPOVExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPOVExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPOVExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOVExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOVExporter *op = static_cast<vtkPOVExporter *>(vp);

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
      op->vtkPOVExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOVExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOVExporter *op = static_cast<vtkPOVExporter *>(vp);

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
      tempr = op->vtkPOVExporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPOVExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkPOVExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOVExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOVExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPOVExporter\nC++: vtkPOVExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOVExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOVExporter\nC++: vtkPOVExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkPOVExporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkPOVExporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOVExporter_StaticNew()
{
  return vtkPOVExporter::New();
}

PyObject *PyVTKClass_vtkPOVExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOVExporter_StaticNew,
    PyvtkPOVExporter_Methods,
    "vtkPOVExporter", modulename,
    NULL, NULL,
    PyvtkPOVExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkPOVExporter_Doc()
{
  static const char *docstring[] = {
    "vtkPOVExporter - Export scene into povray format.\n\n",
    "Superclass: vtkExporter\n\n",
    "This Exporter can be attached to a render window in order to generate\nscene description files for the Persistance of Vision Raytracer\nwww.povray.org.\n\nThanks:\n\nLi-Ta Lo (ollie@lanl.gov) and Jim Ahrens (ahrens@lanl.gov) Los Alamos\nNational Laboratory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOVExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOVExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOVExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

