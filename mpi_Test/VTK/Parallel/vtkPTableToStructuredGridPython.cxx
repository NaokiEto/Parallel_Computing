// python wrapper for vtkPTableToStructuredGrid
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
#include "vtkPTableToStructuredGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPTableToStructuredGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPTableToStructuredGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPTableToStructuredGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPTableToStructuredGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableToStructuredGridNew
extern "C" { PyObject *PyVTKClass_vtkTableToStructuredGridNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableToStructuredGridNew
#endif

static const char **PyvtkPTableToStructuredGrid_Doc();


static PyObject *
PyvtkPTableToStructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTableToStructuredGrid *op = static_cast<vtkPTableToStructuredGrid *>(vp);

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
      tempr = op->vtkPTableToStructuredGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPTableToStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTableToStructuredGrid *op = static_cast<vtkPTableToStructuredGrid *>(vp);

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
      tempr = op->vtkPTableToStructuredGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPTableToStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTableToStructuredGrid *op = static_cast<vtkPTableToStructuredGrid *>(vp);

  vtkPTableToStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPTableToStructuredGrid::NewInstance();
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
PyvtkPTableToStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPTableToStructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPTableToStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPTableToStructuredGrid_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTableToStructuredGrid *op = static_cast<vtkPTableToStructuredGrid *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPTableToStructuredGrid::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPTableToStructuredGrid_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTableToStructuredGrid *op = static_cast<vtkPTableToStructuredGrid *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPTableToStructuredGrid::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPTableToStructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkPTableToStructuredGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPTableToStructuredGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPTableToStructuredGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPTableToStructuredGrid\nC++: vtkPTableToStructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPTableToStructuredGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPTableToStructuredGrid\nC++: vtkPTableToStructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPTableToStructuredGrid_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the controller.\n"},
  {(char*)"GetController", PyvtkPTableToStructuredGrid_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPTableToStructuredGrid_StaticNew()
{
  return vtkPTableToStructuredGrid::New();
}

PyObject *PyVTKClass_vtkPTableToStructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPTableToStructuredGrid_StaticNew,
    PyvtkPTableToStructuredGrid_Methods,
    "vtkPTableToStructuredGrid", modulename,
    NULL, NULL,
    PyvtkPTableToStructuredGrid_Doc(),
    PyVTKClass_vtkTableToStructuredGridNew(modulename));
  return cls;
}

const char **PyvtkPTableToStructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkPTableToStructuredGrid - vtkTableToStructuredGrid specialization\n\n",
    "Superclass: vtkTableToStructuredGrid\n\n",
    "vtkPTableToStructuredGrid is vtkTableToStructuredGrid specialization\nwhich handles distribution of the input table. For starters, this\nassumes that the input table is only available on the root node.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPTableToStructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPTableToStructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPTableToStructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

