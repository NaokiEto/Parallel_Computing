// python wrapper for vtkIVExporter
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
#include "vtkIVExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIVExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIVExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIVExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIVExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkIVExporter_Doc();


static PyObject *
PyvtkIVExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVExporter *op = static_cast<vtkIVExporter *>(vp);

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
      tempr = op->vtkIVExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIVExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVExporter *op = static_cast<vtkIVExporter *>(vp);

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
      tempr = op->vtkIVExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIVExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVExporter *op = static_cast<vtkIVExporter *>(vp);

  vtkIVExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIVExporter::NewInstance();
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
PyvtkIVExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIVExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIVExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIVExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVExporter *op = static_cast<vtkIVExporter *>(vp);

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
      op->vtkIVExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIVExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVExporter *op = static_cast<vtkIVExporter *>(vp);

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
      tempr = op->vtkIVExporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIVExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkIVExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIVExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIVExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIVExporter\nC++: vtkIVExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIVExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIVExporter\nC++: vtkIVExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkIVExporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the OpenInventor file to write.\n"},
  {(char*)"GetFileName", PyvtkIVExporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the OpenInventor file to write.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIVExporter_StaticNew()
{
  return vtkIVExporter::New();
}

PyObject *PyVTKClass_vtkIVExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIVExporter_StaticNew,
    PyvtkIVExporter_Methods,
    "vtkIVExporter", modulename,
    NULL, NULL,
    PyvtkIVExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkIVExporter_Doc()
{
  static const char *docstring[] = {
    "vtkIVExporter - export a scene into OpenInventor 2.0 format.\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkIVExporter is a concrete subclass of vtkExporter that writes\nOpenInventor 2.0 files.\n\nSee Also:\n\nvtkExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIVExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIVExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIVExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

