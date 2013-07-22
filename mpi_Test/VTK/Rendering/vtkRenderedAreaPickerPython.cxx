// python wrapper for vtkRenderedAreaPicker
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
#include "vtkRenderedAreaPicker.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderedAreaPicker(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderedAreaPicker(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderedAreaPickerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderedAreaPickerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAreaPickerNew
extern "C" { PyObject *PyVTKClass_vtkAreaPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAreaPickerNew
#endif

static const char **PyvtkRenderedAreaPicker_Doc();


static PyObject *
PyvtkRenderedAreaPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

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
      tempr = op->vtkRenderedAreaPicker::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

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
      tempr = op->vtkRenderedAreaPicker::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  vtkRenderedAreaPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderedAreaPicker::NewInstance();
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
PyvtkRenderedAreaPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderedAreaPicker *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderedAreaPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_AreaPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkRenderer *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->AreaPick(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkRenderedAreaPicker::AreaPick(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderedAreaPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderedAreaPicker_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderedAreaPicker_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderedAreaPicker_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderedAreaPicker\nC++: vtkRenderedAreaPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderedAreaPicker_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderedAreaPicker\nC++: vtkRenderedAreaPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AreaPick", PyvtkRenderedAreaPicker_AreaPick, 1,
   (char*)"V.AreaPick(float, float, float, float, vtkRenderer) -> int\nC++: virtual int AreaPick(double x0, double y0, double x1,\n    double y1, vtkRenderer *renderer)\n\nPerform pick operation in volume behind the given screen\ncoordinates. Props intersecting the selection frustum will be\naccessible via GetProp3D. GetPlanes returns a vtkImplicitFunciton\nsuitable for vtkExtractGeometry.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderedAreaPicker_StaticNew()
{
  return vtkRenderedAreaPicker::New();
}

PyObject *PyVTKClass_vtkRenderedAreaPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderedAreaPicker_StaticNew,
    PyvtkRenderedAreaPicker_Methods,
    "vtkRenderedAreaPicker", modulename,
    NULL, NULL,
    PyvtkRenderedAreaPicker_Doc(),
    PyVTKClass_vtkAreaPickerNew(modulename));
  return cls;
}

const char **PyvtkRenderedAreaPicker_Doc()
{
  static const char *docstring[] = {
    "vtkRenderedAreaPicker - Uses graphics hardware to picks props behind\n\n",
    "Superclass: vtkAreaPicker\n\n",
    "Like vtkAreaPicker, this class picks all props within a selection\narea on the screen. The difference is in implementation. This class\nuses graphics hardware to perform the test where the other uses\nsoftware bounding box/frustum intersection testing.\n\nThis picker is more conservative than vtkAreaPicker. It will reject\nsome objects that pass the bounding box test of vtkAreaPicker. This\nwill happen, ",
    "for instance, when picking through a corner of the\nbounding box when the data set does not have any visible geometry in\nthat corner.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderedAreaPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderedAreaPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderedAreaPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

