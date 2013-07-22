// python wrapper for vtkIdentColoredPainter
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
#include "vtkIdentColoredPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIdentColoredPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIdentColoredPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIdentColoredPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIdentColoredPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkIdentColoredPainter_Doc();


static PyObject *
PyvtkIdentColoredPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

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
      tempr = op->vtkIdentColoredPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

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
      tempr = op->vtkIdentColoredPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  vtkIdentColoredPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIdentColoredPainter::NewInstance();
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
PyvtkIdentColoredPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIdentColoredPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIdentColoredPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_ResetCurrentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCurrentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCurrentId();
      }
    else
      {
      op->vtkIdentColoredPainter::ResetCurrentId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_ColorByConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ColorByConstant(temp0);
      }
    else
      {
      op->vtkIdentColoredPainter::ColorByConstant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_ColorByIncreasingIdent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByIncreasingIdent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ColorByIncreasingIdent(temp0);
      }
    else
      {
      op->vtkIdentColoredPainter::ColorByIncreasingIdent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_ColorByActorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByActorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ColorByActorId(temp0);
      }
    else
      {
      op->vtkIdentColoredPainter::ColorByActorId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_ColorByVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorByVertex();
      }
    else
      {
      op->vtkIdentColoredPainter::ColorByVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentColoredPainter_GetActorFromId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActorFromId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentColoredPainter *op = static_cast<vtkIdentColoredPainter *>(vp);

  vtkIdType temp0;
  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActorFromId(temp0);
      }
    else
      {
      tempr = op->vtkIdentColoredPainter::GetActorFromId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIdentColoredPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkIdentColoredPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIdentColoredPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIdentColoredPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIdentColoredPainter\nC++: vtkIdentColoredPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIdentColoredPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIdentColoredPainter\nC++: vtkIdentColoredPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ResetCurrentId", PyvtkIdentColoredPainter_ResetCurrentId, 1,
   (char*)"V.ResetCurrentId()\nC++: void ResetCurrentId()\n\n"},
  {(char*)"ColorByConstant", PyvtkIdentColoredPainter_ColorByConstant, 1,
   (char*)"V.ColorByConstant(int)\nC++: void ColorByConstant(unsigned int constant)\n\n"},
  {(char*)"ColorByIncreasingIdent", PyvtkIdentColoredPainter_ColorByIncreasingIdent, 1,
   (char*)"V.ColorByIncreasingIdent(int)\nC++: void ColorByIncreasingIdent(unsigned int plane)\n\n"},
  {(char*)"ColorByActorId", PyvtkIdentColoredPainter_ColorByActorId, 1,
   (char*)"V.ColorByActorId(vtkProp)\nC++: void ColorByActorId(vtkProp *ActorId)\n\n"},
  {(char*)"ColorByVertex", PyvtkIdentColoredPainter_ColorByVertex, 1,
   (char*)"V.ColorByVertex()\nC++: void ColorByVertex()\n\n"},
  {(char*)"GetActorFromId", PyvtkIdentColoredPainter_GetActorFromId, 1,
   (char*)"V.GetActorFromId(int) -> vtkProp\nC++: vtkProp *GetActorFromId(vtkIdType id)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIdentColoredPainter_StaticNew()
{
  return vtkIdentColoredPainter::New();
}

PyObject *PyVTKClass_vtkIdentColoredPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIdentColoredPainter_StaticNew,
    PyvtkIdentColoredPainter_Methods,
    "vtkIdentColoredPainter", modulename,
    NULL, NULL,
    PyvtkIdentColoredPainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkIdentColoredPainter_Doc()
{
  static const char *docstring[] = {
    "vtkIdentColoredPainter - DEPRECATED A vtkPolyDataPainter that colors\neach polygon\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "DEPRECATED. Refer to vtkHardwareSelectionPolyDataPainter instead.\nThis painter will color each polygon in a color that encodes an\ninteger. Doing so allows us to determine what polygon is behind each\npixel on the screen.\n\nSee Also:\n\nvtkVisibleCellSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIdentColoredPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIdentColoredPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIdentColoredPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

