// python wrapper for vtkRenderedRepresentation
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
#include "vtkRenderedRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderedRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderedRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderedRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderedRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataRepresentationNew
#endif

static const char **PyvtkRenderedRepresentation_Doc();


static PyObject *
PyvtkRenderedRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedRepresentation *op = static_cast<vtkRenderedRepresentation *>(vp);

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
      tempr = op->vtkRenderedRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedRepresentation *op = static_cast<vtkRenderedRepresentation *>(vp);

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
      tempr = op->vtkRenderedRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedRepresentation *op = static_cast<vtkRenderedRepresentation *>(vp);

  vtkRenderedRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderedRepresentation::NewInstance();
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
PyvtkRenderedRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderedRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderedRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedRepresentation_SetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedRepresentation *op = static_cast<vtkRenderedRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelRenderMode(temp0);
      }
    else
      {
      op->vtkRenderedRepresentation::SetLabelRenderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedRepresentation_GetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedRepresentation *op = static_cast<vtkRenderedRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelRenderMode();
      }
    else
      {
      tempr = op->vtkRenderedRepresentation::GetLabelRenderMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderedRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderedRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderedRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderedRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderedRepresentation\nC++: vtkRenderedRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderedRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderedRepresentation\nC++: vtkRenderedRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLabelRenderMode", PyvtkRenderedRepresentation_SetLabelRenderMode, 1,
   (char*)"V.SetLabelRenderMode(int)\nC++: void SetLabelRenderMode(int a)\n\nSet the label render mode. vtkRenderView::QT - Use Qt-based\nlabeler with fitted labeling\n  and unicode support. Requires VTK_USE_QT to be on.\nvtkRenderView::FREETYPE - Use standard freetype text rendering.\n"},
  {(char*)"GetLabelRenderMode", PyvtkRenderedRepresentation_GetLabelRenderMode, 1,
   (char*)"V.GetLabelRenderMode() -> int\nC++: int GetLabelRenderMode()\n\nSet the label render mode. vtkRenderView::QT - Use Qt-based\nlabeler with fitted labeling\n  and unicode support. Requires VTK_USE_QT to be on.\nvtkRenderView::FREETYPE - Use standard freetype text rendering.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderedRepresentation_StaticNew()
{
  return vtkRenderedRepresentation::New();
}

PyObject *PyVTKClass_vtkRenderedRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderedRepresentation_StaticNew,
    PyvtkRenderedRepresentation_Methods,
    "vtkRenderedRepresentation", modulename,
    NULL, NULL,
    PyvtkRenderedRepresentation_Doc(),
    PyVTKClass_vtkDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkRenderedRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkRenderedRepresentation - \n\n",
    "Superclass: vtkDataRepresentation\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderedRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderedRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderedRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

