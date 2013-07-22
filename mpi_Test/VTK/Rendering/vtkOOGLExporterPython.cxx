// python wrapper for vtkOOGLExporter
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
#include "vtkOOGLExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOOGLExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOOGLExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOOGLExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOOGLExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkOOGLExporter_Doc();


static PyObject *
PyvtkOOGLExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOOGLExporter *op = static_cast<vtkOOGLExporter *>(vp);

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
      tempr = op->vtkOOGLExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOOGLExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOOGLExporter *op = static_cast<vtkOOGLExporter *>(vp);

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
      tempr = op->vtkOOGLExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOOGLExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOOGLExporter *op = static_cast<vtkOOGLExporter *>(vp);

  vtkOOGLExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOOGLExporter::NewInstance();
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
PyvtkOOGLExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOOGLExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOOGLExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOOGLExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOOGLExporter *op = static_cast<vtkOOGLExporter *>(vp);

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
      op->vtkOOGLExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOOGLExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOOGLExporter *op = static_cast<vtkOOGLExporter *>(vp);

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
      tempr = op->vtkOOGLExporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOOGLExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkOOGLExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOOGLExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOOGLExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOOGLExporter\nC++: vtkOOGLExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOOGLExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOOGLExporter\nC++: vtkOOGLExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkOOGLExporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the Geomview file to write.\n"},
  {(char*)"GetFileName", PyvtkOOGLExporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the Geomview file to write.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOOGLExporter_StaticNew()
{
  return vtkOOGLExporter::New();
}

PyObject *PyVTKClass_vtkOOGLExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOOGLExporter_StaticNew,
    PyvtkOOGLExporter_Methods,
    "vtkOOGLExporter", modulename,
    NULL, NULL,
    PyvtkOOGLExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkOOGLExporter_Doc()
{
  static const char *docstring[] = {
    "vtkOOGLExporter - export a scene into Geomview OOGL format.\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkOOGLExporter is a concrete subclass of vtkExporter that writes\nGeomview OOGL files.\n\nSee Also:\n\nvtkExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOOGLExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOOGLExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOOGLExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

