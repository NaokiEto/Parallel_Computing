// python wrapper for vtkAffineRepresentation
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
#include "vtkAffineRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAffineRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAffineRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAffineRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAffineRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkAffineRepresentation_Doc();


static PyObject *
PyvtkAffineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

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
      tempr = op->vtkAffineRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

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
      tempr = op->vtkAffineRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  vtkAffineRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAffineRepresentation::NewInstance();
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
PyvtkAffineRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    op->GetTransform(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkAffineRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkAffineRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkAffineRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAffineRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAffineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkAffineRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkAffineRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkAffineRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAffineRepresentation\nC++: vtkAffineRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"GetTransform", PyvtkAffineRepresentation_GetTransform, 1,
   (char*)"V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the affine\ntransformation generated by this widget. This method copies its\ninternal transform into the transform provided. The transform is\nrelative to the initial placement of the representation (i.e.,\nwhen PlaceWidget() is invoked).\n"},
  {(char*)"SetTolerance", PyvtkAffineRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMinValue", PyvtkAffineRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkAffineRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetTolerance", PyvtkAffineRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"ShallowCopy", PyvtkAffineRepresentation_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAffineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAffineRepresentation_Methods,
    "vtkAffineRepresentation", modulename,
    NULL, NULL,
    PyvtkAffineRepresentation_Doc(),
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
    if (o && PyDict_SetItemString(d, (char *)"Rotate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Translate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"TranslateX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"TranslateY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"ScaleWEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"ScaleEEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"ScaleNEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"ScaleSEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"ScaleNE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"ScaleSW", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"ScaleNW", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"ScaleSE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"ShearEEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"ShearWEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(15);
    if (o && PyDict_SetItemString(d, (char *)"ShearNEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(16);
    if (o && PyDict_SetItemString(d, (char *)"ShearSEdge", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(17);
    if (o && PyDict_SetItemString(d, (char *)"MoveOriginX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(18);
    if (o && PyDict_SetItemString(d, (char *)"MoveOriginY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(19);
    if (o && PyDict_SetItemString(d, (char *)"MoveOrigin", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAffineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkAffineRepresentation - abstract class for representing affine\ntransformation widgets\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class defines an API for affine transformation widget\nrepresentations. These representations interact with vtkAffineWidget.\nThe basic functionality of the affine representation is to maintain a\ntransformation matrix.\n\nThis class may be subclassed so that alternative representations can\nbe created.  The class defines an API and a default implementation\nthat the vtkAffineWidget interacts with t",
    "o render itself in the\nscene.\n\nCaveats:\n\nThe separation of the widget event handling and representation\nenables users and developers to create new appearances for the\nwidget. It also facilitates parallel processing, where the client\napplication handles events, and remote representations of the widget\nare slaves to the client (and do not handle events).\n\nSee Also:\n\nvtkAffineWidget vtkWidgetRepresen",
    "tation vtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAffineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAffineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAffineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

