// python wrapper for vtkProbeSelectedLocations
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
#include "vtkProbeSelectedLocations.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProbeSelectedLocations(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProbeSelectedLocations(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProbeSelectedLocationsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProbeSelectedLocationsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkProbeSelectedLocations_Doc();


static PyObject *
PyvtkProbeSelectedLocations_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeSelectedLocations *op = static_cast<vtkProbeSelectedLocations *>(vp);

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
      tempr = op->vtkProbeSelectedLocations::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeSelectedLocations_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeSelectedLocations *op = static_cast<vtkProbeSelectedLocations *>(vp);

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
      tempr = op->vtkProbeSelectedLocations::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeSelectedLocations_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeSelectedLocations *op = static_cast<vtkProbeSelectedLocations *>(vp);

  vtkProbeSelectedLocations *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProbeSelectedLocations::NewInstance();
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
PyvtkProbeSelectedLocations_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProbeSelectedLocations *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProbeSelectedLocations::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProbeSelectedLocations_Methods[] = {
  {(char*)"GetClassName", PyvtkProbeSelectedLocations_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProbeSelectedLocations_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProbeSelectedLocations_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProbeSelectedLocations\nC++: vtkProbeSelectedLocations *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProbeSelectedLocations_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProbeSelectedLocations\nC++: vtkProbeSelectedLocations *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProbeSelectedLocations_StaticNew()
{
  return vtkProbeSelectedLocations::New();
}

PyObject *PyVTKClass_vtkProbeSelectedLocationsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProbeSelectedLocations_StaticNew,
    PyvtkProbeSelectedLocations_Methods,
    "vtkProbeSelectedLocations", modulename,
    NULL, NULL,
    PyvtkProbeSelectedLocations_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkProbeSelectedLocations_Doc()
{
  static const char *docstring[] = {
    "vtkProbeSelectedLocations - similar to vtkExtractSelectedLocations\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkProbeSelectedLocations is similar to vtkExtractSelectedLocations\nexcept that it interpolates the point attributes at the probe\nlocation. This is equivalent to the vtkProbeFilter except that the\nprobe locations are provided by a vtkSelection. The FieldType of the\ninput vtkSelection is immaterial and is ignored. The ContentType of\nthe input vtkSelection must be vtkSelection::LOCATIONS.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProbeSelectedLocations(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProbeSelectedLocationsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProbeSelectedLocations", o) != 0)
    {
    Py_DECREF(o);
    }

}

