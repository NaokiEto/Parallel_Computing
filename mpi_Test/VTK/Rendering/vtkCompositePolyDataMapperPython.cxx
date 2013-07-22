// python wrapper for vtkCompositePolyDataMapper
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
#include "vtkCompositePolyDataMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositePolyDataMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositePolyDataMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositePolyDataMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositePolyDataMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkCompositePolyDataMapper_Doc();


static PyObject *
PyvtkCompositePolyDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      tempr = op->vtkCompositePolyDataMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      tempr = op->vtkCompositePolyDataMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  vtkCompositePolyDataMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositePolyDataMapper::NewInstance();
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
PyvtkCompositePolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositePolyDataMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositePolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkCompositePolyDataMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkCompositePolyDataMapper::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkCompositePolyDataMapper::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCompositePolyDataMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkCompositePolyDataMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkCompositePolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkCompositePolyDataMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositePolyDataMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositePolyDataMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositePolyDataMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositePolyDataMapper\nC++: vtkCompositePolyDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositePolyDataMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositePolyDataMapper\nC++: vtkCompositePolyDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkCompositePolyDataMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *a)\n\nStandard method for rendering a mapper. This method will be\ncalled by the actor.\n"},
  {(char*)"GetBounds", PyvtkCompositePolyDataMapper_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nStandard vtkProp method to get 3D bounds of a 3D prop\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCompositePolyDataMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease the underlying resources associated with this mapper\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositePolyDataMapper_StaticNew()
{
  return vtkCompositePolyDataMapper::New();
}

PyObject *PyVTKClass_vtkCompositePolyDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositePolyDataMapper_StaticNew,
    PyvtkCompositePolyDataMapper_Methods,
    "vtkCompositePolyDataMapper", modulename,
    NULL, NULL,
    PyvtkCompositePolyDataMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));
  return cls;
}

const char **PyvtkCompositePolyDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkCompositePolyDataMapper - a class that renders hierarchical\npolygonal data\n\n",
    "Superclass: vtkMapper\n\n",
    "This class uses a set of vtkPolyDataMappers to render input data\nwhich may be hierarchical. The input to this mapper may be either\nvtkPolyData or a vtkCompositeDataSet built from polydata. If\nsomething other than vtkPolyData is encountered, an error message\nwill be produced.\n\nSee Also:\n\nvtkPolyDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositePolyDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositePolyDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositePolyDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

