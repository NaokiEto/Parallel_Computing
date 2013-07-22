// python wrapper for vtkContinuousValueWidgetRepresentation
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
#include "vtkContinuousValueWidgetRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContinuousValueWidgetRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContinuousValueWidgetRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContinuousValueWidgetRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContinuousValueWidgetRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkContinuousValueWidgetRepresentation_Doc();


static PyObject *
PyvtkContinuousValueWidgetRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

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
      tempr = op->vtkContinuousValueWidgetRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

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
      tempr = op->vtkContinuousValueWidgetRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

  vtkContinuousValueWidgetRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContinuousValueWidgetRepresentation::NewInstance();
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
PyvtkContinuousValueWidgetRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkContinuousValueWidgetRepresentation::PlaceWidget(temp0);
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
PyvtkContinuousValueWidgetRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkContinuousValueWidgetRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidgetRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->StartWidgetInteraction(temp0);

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
PyvtkContinuousValueWidgetRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->WidgetInteraction(temp0);

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
PyvtkContinuousValueWidgetRepresentation_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkContinuousValueWidgetRepresentation::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidgetRepresentation_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidgetRepresentation *op = static_cast<vtkContinuousValueWidgetRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkContinuousValueWidgetRepresentation::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContinuousValueWidgetRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkContinuousValueWidgetRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkContinuousValueWidgetRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkContinuousValueWidgetRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContinuousValueWidgetRepresentation\nC++: vtkContinuousValueWidgetRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"PlaceWidget", PyvtkContinuousValueWidgetRepresentation_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"BuildRepresentation", PyvtkContinuousValueWidgetRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"StartWidgetInteraction", PyvtkContinuousValueWidgetRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"WidgetInteraction", PyvtkContinuousValueWidgetRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {(char*)"SetValue", PyvtkContinuousValueWidgetRepresentation_SetValue, 1,
   (char*)"V.SetValue(float)\nC++: virtual void SetValue(double value)\n\n"},
  {(char*)"GetValue", PyvtkContinuousValueWidgetRepresentation_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: virtual double GetValue()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkContinuousValueWidgetRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkContinuousValueWidgetRepresentation_Methods,
    "vtkContinuousValueWidgetRepresentation", modulename,
    NULL, NULL,
    PyvtkContinuousValueWidgetRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Inside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Adjusting", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkContinuousValueWidgetRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkContinuousValueWidgetRepresentation - provide the representation\nfor a continuous value\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is used mainly as a superclass for continuous value\nwidgets\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContinuousValueWidgetRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContinuousValueWidgetRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContinuousValueWidgetRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

