// python wrapper for vtkEllipsoidTensorProbeRepresentation
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
#include "vtkEllipsoidTensorProbeRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTensorProbeRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkTensorProbeRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkTensorProbeRepresentationNew
#endif

static const char **PyvtkEllipsoidTensorProbeRepresentation_Doc();


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      tempr = op->vtkEllipsoidTensorProbeRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      tempr = op->vtkEllipsoidTensorProbeRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  vtkEllipsoidTensorProbeRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEllipsoidTensorProbeRepresentation::NewInstance();
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
PyvtkEllipsoidTensorProbeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEllipsoidTensorProbeRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEllipsoidTensorProbeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkEllipsoidTensorProbeRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkEllipsoidTensorProbeRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_SelectProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->SelectProbe(temp0);
      }
    else
      {
      tempr = op->vtkEllipsoidTensorProbeRepresentation::SelectProbe(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkEllipsoidTensorProbeRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      op->vtkEllipsoidTensorProbeRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEllipsoidTensorProbeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkEllipsoidTensorProbeRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkEllipsoidTensorProbeRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkEllipsoidTensorProbeRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEllipsoidTensorProbeRepresentation\nC++: vtkEllipsoidTensorProbeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkEllipsoidTensorProbeRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEllipsoidTensorProbeRepresentation\nC++: vtkEllipsoidTensorProbeRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"BuildRepresentation", PyvtkEllipsoidTensorProbeRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkEllipsoidTensorProbeRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {(char*)"SelectProbe", PyvtkEllipsoidTensorProbeRepresentation_SelectProbe, 1,
   (char*)"V.SelectProbe([int, int]) -> int\nC++: virtual int SelectProbe(int pos[2])\n\nCan we pick the tensor glyph at the current cursor pos\n"},
  {(char*)"GetActors", PyvtkEllipsoidTensorProbeRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nSee vtkProp for details.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkEllipsoidTensorProbeRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nSee vtkProp for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEllipsoidTensorProbeRepresentation_StaticNew()
{
  return vtkEllipsoidTensorProbeRepresentation::New();
}

PyObject *PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEllipsoidTensorProbeRepresentation_StaticNew,
    PyvtkEllipsoidTensorProbeRepresentation_Methods,
    "vtkEllipsoidTensorProbeRepresentation", modulename,
    NULL, NULL,
    PyvtkEllipsoidTensorProbeRepresentation_Doc(),
    PyVTKClass_vtkTensorProbeRepresentationNew(modulename));
  return cls;
}

const char **PyvtkEllipsoidTensorProbeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkEllipsoidTensorProbeRepresentation - A concrete implementation of\nvtkTensorProbeRepresentation that renders tensors as ellipoids.\n\n",
    "Superclass: vtkTensorProbeRepresentation\n\n",
    "vtkEllipsoidTensorProbeRepresentation is a concrete implementation of\nvtkTensorProbeRepresentation. It renders tensors as ellipsoids.\nLocations between two points when probed have the tensors linearly\ninterpolated from the neighboring locations on the polyline.\n\nSee Also:\n\nvtkTensorProbeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEllipsoidTensorProbeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEllipsoidTensorProbeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

