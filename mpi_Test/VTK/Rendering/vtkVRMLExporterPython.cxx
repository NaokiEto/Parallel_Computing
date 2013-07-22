// python wrapper for vtkVRMLExporter
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
#include "vtkVRMLExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVRMLExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVRMLExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVRMLExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVRMLExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkVRMLExporter_Doc();


static PyObject *
PyvtkVRMLExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

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
      tempr = op->vtkVRMLExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

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
      tempr = op->vtkVRMLExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

  vtkVRMLExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVRMLExporter::NewInstance();
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
PyvtkVRMLExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVRMLExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVRMLExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

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
      op->vtkVRMLExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

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
      tempr = op->vtkVRMLExporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLExporter_SetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpeed(temp0);
      }
    else
      {
      op->vtkVRMLExporter::SetSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLExporter_GetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLExporter *op = static_cast<vtkVRMLExporter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpeed();
      }
    else
      {
      tempr = op->vtkVRMLExporter::GetSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVRMLExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkVRMLExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVRMLExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVRMLExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVRMLExporter\nC++: vtkVRMLExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVRMLExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVRMLExporter\nC++: vtkVRMLExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkVRMLExporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the VRML file to write.\n"},
  {(char*)"GetFileName", PyvtkVRMLExporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the VRML file to write.\n"},
  {(char*)"SetSpeed", PyvtkVRMLExporter_SetSpeed, 1,
   (char*)"V.SetSpeed(float)\nC++: void SetSpeed(double a)\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {(char*)"GetSpeed", PyvtkVRMLExporter_GetSpeed, 1,
   (char*)"V.GetSpeed() -> float\nC++: double GetSpeed()\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVRMLExporter_StaticNew()
{
  return vtkVRMLExporter::New();
}

PyObject *PyVTKClass_vtkVRMLExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVRMLExporter_StaticNew,
    PyvtkVRMLExporter_Methods,
    "vtkVRMLExporter", modulename,
    NULL, NULL,
    PyvtkVRMLExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkVRMLExporter_Doc()
{
  static const char *docstring[] = {
    "vtkVRMLExporter - export a scene into VRML 2.0 format.\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkVRMLExporter is a concrete subclass of vtkExporter that writes\nVRML 2.0 files. This is based on the VRML 2.0 draft #3 but it should\nbe pretty stable since we aren't using any of the newer features.\n\nSee Also:\n\nvtkExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVRMLExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVRMLExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVRMLExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

