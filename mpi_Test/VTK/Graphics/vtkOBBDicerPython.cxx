// python wrapper for vtkOBBDicer
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
#include "vtkOBBDicer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOBBDicer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOBBDicer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOBBDicerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOBBDicerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDicerNew
extern "C" { PyObject *PyVTKClass_vtkDicerNew(const char *); }
#define DECLARED_PyVTKClass_vtkDicerNew
#endif

static const char **PyvtkOBBDicer_Doc();


static PyObject *
PyvtkOBBDicer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

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
      tempr = op->vtkOBBDicer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBBDicer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

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
      tempr = op->vtkOBBDicer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBBDicer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

  vtkOBBDicer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOBBDicer::NewInstance();
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
PyvtkOBBDicer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOBBDicer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOBBDicer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOBBDicer_Methods[] = {
  {(char*)"GetClassName", PyvtkOBBDicer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOBBDicer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOBBDicer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOBBDicer\nC++: vtkOBBDicer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOBBDicer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOBBDicer\nC++: vtkOBBDicer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOBBDicer_StaticNew()
{
  return vtkOBBDicer::New();
}

PyObject *PyVTKClass_vtkOBBDicerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOBBDicer_StaticNew,
    PyvtkOBBDicer_Methods,
    "vtkOBBDicer", modulename,
    NULL, NULL,
    PyvtkOBBDicer_Doc(),
    PyVTKClass_vtkDicerNew(modulename));
  return cls;
}

const char **PyvtkOBBDicer_Doc()
{
  static const char *docstring[] = {
    "vtkOBBDicer - divide dataset into spatially aggregated pieces\n\n",
    "Superclass: vtkDicer\n\n",
    "vtkOBBDicer separates the cells of a dataset into spatially\naggregated pieces using a Oriented Bounding Box (OBB). These pieces\ncan then be operated on by other filters (e.g., vtkThreshold). One\napplication is to break very large polygonal models into pieces and\nperforming viewing and occlusion culling on the pieces.\n\nRefer to the superclass documentation (vtkDicer) for more\ninformation.\n\nSee Also",
    ":\n\nvtkDicer vtkConnectedDicer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOBBDicer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOBBDicerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOBBDicer", o) != 0)
    {
    Py_DECREF(o);
    }

}

