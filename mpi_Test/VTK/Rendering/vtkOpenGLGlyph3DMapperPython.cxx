// python wrapper for vtkOpenGLGlyph3DMapper
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
#include "vtkOpenGLGlyph3DMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLGlyph3DMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLGlyph3DMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLGlyph3DMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLGlyph3DMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGlyph3DMapperNew
extern "C" { PyObject *PyVTKClass_vtkGlyph3DMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkGlyph3DMapperNew
#endif

static const char **PyvtkOpenGLGlyph3DMapper_Doc();


static PyObject *
PyvtkOpenGLGlyph3DMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

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
      tempr = op->vtkOpenGLGlyph3DMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

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
      tempr = op->vtkOpenGLGlyph3DMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  vtkOpenGLGlyph3DMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLGlyph3DMapper::NewInstance();
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
PyvtkOpenGLGlyph3DMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLGlyph3DMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLGlyph3DMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

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
      op->vtkOpenGLGlyph3DMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

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
      op->vtkOpenGLGlyph3DMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLGlyph3DMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLGlyph3DMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLGlyph3DMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLGlyph3DMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLGlyph3DMapper\nC++: vtkOpenGLGlyph3DMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLGlyph3DMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLGlyph3DMapper\nC++: vtkOpenGLGlyph3DMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLGlyph3DMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: virtual void Render(vtkRenderer *ren, vtkActor *a)\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered. Its behavior depends on the value of\nSelectMode.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLGlyph3DMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLGlyph3DMapper_StaticNew()
{
  return vtkOpenGLGlyph3DMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLGlyph3DMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLGlyph3DMapper_StaticNew,
    PyvtkOpenGLGlyph3DMapper_Methods,
    "vtkOpenGLGlyph3DMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLGlyph3DMapper_Doc(),
    PyVTKClass_vtkGlyph3DMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLGlyph3DMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLGlyph3DMapper - vtkOpenGLGlyph3D on the GPU.\n\n",
    "Superclass: vtkGlyph3DMapper\n\n",
    "Do the same job than vtkGlyph3D but on the GPU. For this reason, it\nis a mapper not a vtkPolyDataAlgorithm. Also, some methods of\nvtkOpenGLGlyph3D don't make sense in vtkOpenGLGlyph3DMapper:\nGeneratePointIds, old-style SetSource, PointIdsName, IsPointVisible.\n\nImplementation:\n\nSee Also:\n\nvtkOpenGLGlyph3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLGlyph3DMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLGlyph3DMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLGlyph3DMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

