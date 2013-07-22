// python wrapper for vtkOpenGLScalarsToColorsPainter
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
#include "vtkOpenGLScalarsToColorsPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLScalarsToColorsPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLScalarsToColorsPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLScalarsToColorsPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLScalarsToColorsPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsPainterNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsPainterNew
#endif

static const char **PyvtkOpenGLScalarsToColorsPainter_Doc();


static PyObject *
PyvtkOpenGLScalarsToColorsPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLScalarsToColorsPainter *op = static_cast<vtkOpenGLScalarsToColorsPainter *>(vp);

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
      tempr = op->vtkOpenGLScalarsToColorsPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLScalarsToColorsPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLScalarsToColorsPainter *op = static_cast<vtkOpenGLScalarsToColorsPainter *>(vp);

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
      tempr = op->vtkOpenGLScalarsToColorsPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLScalarsToColorsPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLScalarsToColorsPainter *op = static_cast<vtkOpenGLScalarsToColorsPainter *>(vp);

  vtkOpenGLScalarsToColorsPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLScalarsToColorsPainter::NewInstance();
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
PyvtkOpenGLScalarsToColorsPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLScalarsToColorsPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLScalarsToColorsPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLScalarsToColorsPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLScalarsToColorsPainter *op = static_cast<vtkOpenGLScalarsToColorsPainter *>(vp);

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
      op->vtkOpenGLScalarsToColorsPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLScalarsToColorsPainter_GetPremultiplyColorsWithAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPremultiplyColorsWithAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLScalarsToColorsPainter *op = static_cast<vtkOpenGLScalarsToColorsPainter *>(vp);

  vtkActor *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPremultiplyColorsWithAlpha(temp0);
      }
    else
      {
      tempr = op->vtkOpenGLScalarsToColorsPainter::GetPremultiplyColorsWithAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLScalarsToColorsPainter_GetTextureSizeLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureSizeLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLScalarsToColorsPainter *op = static_cast<vtkOpenGLScalarsToColorsPainter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureSizeLimit();
      }
    else
      {
      tempr = op->vtkOpenGLScalarsToColorsPainter::GetTextureSizeLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLScalarsToColorsPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLScalarsToColorsPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLScalarsToColorsPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLScalarsToColorsPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLScalarsToColorsPainter\nC++: vtkOpenGLScalarsToColorsPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLScalarsToColorsPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLScalarsToColorsPainter\nC++: vtkOpenGLScalarsToColorsPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLScalarsToColorsPainter_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetPremultiplyColorsWithAlpha", PyvtkOpenGLScalarsToColorsPainter_GetPremultiplyColorsWithAlpha, 1,
   (char*)"V.GetPremultiplyColorsWithAlpha(vtkActor) -> int\nC++: virtual int GetPremultiplyColorsWithAlpha(vtkActor *actor)\n\n"},
  {(char*)"GetTextureSizeLimit", PyvtkOpenGLScalarsToColorsPainter_GetTextureSizeLimit, 1,
   (char*)"V.GetTextureSizeLimit() -> int\nC++: virtual vtkIdType GetTextureSizeLimit()\n\nReturn the texture size limit, i.e. GL_MAX_TEXTURE_SIZE.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLScalarsToColorsPainter_StaticNew()
{
  return vtkOpenGLScalarsToColorsPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLScalarsToColorsPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLScalarsToColorsPainter_StaticNew,
    PyvtkOpenGLScalarsToColorsPainter_Methods,
    "vtkOpenGLScalarsToColorsPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLScalarsToColorsPainter_Doc(),
    PyVTKClass_vtkScalarsToColorsPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLScalarsToColorsPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLScalarsToColorsPainter - implementation of\n\n",
    "Superclass: vtkScalarsToColorsPainter\n\n",
    "vtkOpenGLScalarsToColorsPainter is a concrete subclass of\nvtkScalarsToColorsPainter which uses OpenGL for color mapping.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLScalarsToColorsPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLScalarsToColorsPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLScalarsToColorsPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

