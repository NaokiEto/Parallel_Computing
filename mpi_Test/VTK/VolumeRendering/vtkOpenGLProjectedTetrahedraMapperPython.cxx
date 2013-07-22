// python wrapper for vtkOpenGLProjectedTetrahedraMapper
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
#include "vtkOpenGLProjectedTetrahedraMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProjectedTetrahedraMapperNew
extern "C" { PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkProjectedTetrahedraMapperNew
#endif

static const char **PyvtkOpenGLProjectedTetrahedraMapper_Doc();


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

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
      tempr = op->vtkOpenGLProjectedTetrahedraMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

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
      tempr = op->vtkOpenGLProjectedTetrahedraMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkOpenGLProjectedTetrahedraMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLProjectedTetrahedraMapper::NewInstance();
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
PyvtkOpenGLProjectedTetrahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLProjectedTetrahedraMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

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
      op->vtkOpenGLProjectedTetrahedraMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLProjectedTetrahedraMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLProjectedTetrahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLProjectedTetrahedraMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLProjectedTetrahedraMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLProjectedTetrahedraMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLProjectedTetrahedraMapper\nC++: vtkOpenGLProjectedTetrahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLProjectedTetrahedraMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLProjectedTetrahedraMapper\nC++: vtkOpenGLProjectedTetrahedraMapper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLProjectedTetrahedraMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\n"},
  {(char*)"Render", PyvtkOpenGLProjectedTetrahedraMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *renderer, vtkVolume *volume)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLProjectedTetrahedraMapper_StaticNew()
{
  return vtkOpenGLProjectedTetrahedraMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLProjectedTetrahedraMapper_StaticNew,
    PyvtkOpenGLProjectedTetrahedraMapper_Methods,
    "vtkOpenGLProjectedTetrahedraMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLProjectedTetrahedraMapper_Doc(),
    PyVTKClass_vtkProjectedTetrahedraMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLProjectedTetrahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLProjectedTetrahedraMapper - OpenGL implementation of PT\n\n",
    "Superclass: vtkProjectedTetrahedraMapper\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLProjectedTetrahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLProjectedTetrahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

