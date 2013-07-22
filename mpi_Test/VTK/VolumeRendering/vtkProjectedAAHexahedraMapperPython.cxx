// python wrapper for vtkProjectedAAHexahedraMapper
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
#include "vtkProjectedAAHexahedraMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProjectedAAHexahedraMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProjectedAAHexahedraMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkProjectedAAHexahedraMapper_Doc();


static PyObject *
PyvtkProjectedAAHexahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

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
      tempr = op->vtkProjectedAAHexahedraMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

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
      tempr = op->vtkProjectedAAHexahedraMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  vtkProjectedAAHexahedraMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProjectedAAHexahedraMapper::NewInstance();
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
PyvtkProjectedAAHexahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProjectedAAHexahedraMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProjectedAAHexahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_SetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  vtkVisibilitySort *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVisibilitySort"))
    {
    if (ap.IsBound())
      {
      op->SetVisibilitySort(temp0);
      }
    else
      {
      op->vtkProjectedAAHexahedraMapper::SetVisibilitySort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_GetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  vtkVisibilitySort *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVisibilitySort();
      }
    else
      {
      tempr = op->vtkProjectedAAHexahedraMapper::GetVisibilitySort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    tempr = op->IsRenderSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedAAHexahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedAAHexahedraMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProjectedAAHexahedraMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProjectedAAHexahedraMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProjectedAAHexahedraMapper\nC++: vtkProjectedAAHexahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProjectedAAHexahedraMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedAAHexahedraMapper\nC++: vtkProjectedAAHexahedraMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibilitySort", PyvtkProjectedAAHexahedraMapper_SetVisibilitySort, 1,
   (char*)"V.SetVisibilitySort(vtkVisibilitySort)\nC++: virtual void SetVisibilitySort(vtkVisibilitySort *sort)\n\nAlgorithm used to sort the cells according to viewpoint of the\ncamera. Initial value is a vtkCellCenterDepthSort object.\n"},
  {(char*)"GetVisibilitySort", PyvtkProjectedAAHexahedraMapper_GetVisibilitySort, 1,
   (char*)"V.GetVisibilitySort() -> vtkVisibilitySort\nC++: vtkVisibilitySort *GetVisibilitySort()\n\nAlgorithm used to sort the cells according to viewpoint of the\ncamera. Initial value is a vtkCellCenterDepthSort object.\n"},
  {(char*)"IsRenderSupported", PyvtkProjectedAAHexahedraMapper_IsRenderSupported, 1,
   (char*)"V.IsRenderSupported(vtkRenderWindow) -> bool\nC++: virtual bool IsRenderSupported(vtkRenderWindow *w)\n\nCheck if the required OpenGL extensions are supported by the\nOpenGL context attached to the render window `w'.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedAAHexahedraMapper_StaticNew()
{
  return vtkProjectedAAHexahedraMapper::New();
}

PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedAAHexahedraMapper_StaticNew,
    PyvtkProjectedAAHexahedraMapper_Methods,
    "vtkProjectedAAHexahedraMapper", modulename,
    NULL, NULL,
    PyvtkProjectedAAHexahedraMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkProjectedAAHexahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedAAHexahedraMapper - volume mapper for axis-aligned\nhexahedra\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "High quality volume renderer for axis-aligned hexahedra\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedAAHexahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedAAHexahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedAAHexahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

