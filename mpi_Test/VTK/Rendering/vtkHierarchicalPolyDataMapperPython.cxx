// python wrapper for vtkHierarchicalPolyDataMapper
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
#include "vtkHierarchicalPolyDataMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalPolyDataMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalPolyDataMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalPolyDataMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalPolyDataMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositePolyDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkCompositePolyDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositePolyDataMapperNew
#endif

static const char **PyvtkHierarchicalPolyDataMapper_Doc();


static PyObject *
PyvtkHierarchicalPolyDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalPolyDataMapper *op = static_cast<vtkHierarchicalPolyDataMapper *>(vp);

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
      tempr = op->vtkHierarchicalPolyDataMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalPolyDataMapper *op = static_cast<vtkHierarchicalPolyDataMapper *>(vp);

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
      tempr = op->vtkHierarchicalPolyDataMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalPolyDataMapper *op = static_cast<vtkHierarchicalPolyDataMapper *>(vp);

  vtkHierarchicalPolyDataMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalPolyDataMapper::NewInstance();
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
PyvtkHierarchicalPolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalPolyDataMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalPolyDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalPolyDataMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalPolyDataMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalPolyDataMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalPolyDataMapper\nC++: vtkHierarchicalPolyDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalPolyDataMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalPolyDataMapper\nC++: vtkHierarchicalPolyDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalPolyDataMapper_StaticNew()
{
  return vtkHierarchicalPolyDataMapper::New();
}

PyObject *PyVTKClass_vtkHierarchicalPolyDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalPolyDataMapper_StaticNew,
    PyvtkHierarchicalPolyDataMapper_Methods,
    "vtkHierarchicalPolyDataMapper", modulename,
    NULL, NULL,
    PyvtkHierarchicalPolyDataMapper_Doc(),
    PyVTKClass_vtkCompositePolyDataMapperNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalPolyDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalPolyDataMapper - a class that renders hierarchical\npolygonal data\n\n",
    "Superclass: vtkCompositePolyDataMapper\n\n",
    "Legacy class. Use vtkCompositePolyDataMapper instead.\n\nSee Also:\n\nvtkPolyDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalPolyDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalPolyDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalPolyDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

