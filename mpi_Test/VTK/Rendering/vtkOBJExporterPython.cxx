// python wrapper for vtkOBJExporter
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
#include "vtkOBJExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOBJExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOBJExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOBJExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOBJExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkOBJExporter_Doc();


static PyObject *
PyvtkOBJExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

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
      tempr = op->vtkOBJExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBJExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

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
      tempr = op->vtkOBJExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBJExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  vtkOBJExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOBJExporter::NewInstance();
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
PyvtkOBJExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOBJExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOBJExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBJExporter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkOBJExporter::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOBJExporter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePrefix();
      }
    else
      {
      tempr = op->vtkOBJExporter::GetFilePrefix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOBJExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkOBJExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOBJExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOBJExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOBJExporter\nC++: vtkOBJExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOBJExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOBJExporter\nC++: vtkOBJExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilePrefix", PyvtkOBJExporter_SetFilePrefix, 1,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .obj and .mtl appended to them.\n"},
  {(char*)"GetFilePrefix", PyvtkOBJExporter_GetFilePrefix, 1,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .obj and .mtl appended to them.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOBJExporter_StaticNew()
{
  return vtkOBJExporter::New();
}

PyObject *PyVTKClass_vtkOBJExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOBJExporter_StaticNew,
    PyvtkOBJExporter_Methods,
    "vtkOBJExporter", modulename,
    NULL, NULL,
    PyvtkOBJExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkOBJExporter_Doc()
{
  static const char *docstring[] = {
    "vtkOBJExporter - export a scene into Wavefront format.\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkOBJExporter is a concrete subclass of vtkExporter that writes\nwavefront .OBJ files in ASCII form. It also writes out a mtl file\nthat contains the material properties. The filenames are derived by\nappending the .obj and .mtl suffix onto the user specified\nFilePrefix.\n\nSee Also:\n\nvtkExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOBJExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOBJExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOBJExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

