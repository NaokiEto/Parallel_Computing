// python wrapper for vtkFrustumSource
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
#include "vtkFrustumSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFrustumSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFrustumSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFrustumSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFrustumSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkFrustumSource_Doc();


static PyObject *
PyvtkFrustumSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

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
      tempr = op->vtkFrustumSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

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
      tempr = op->vtkFrustumSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  vtkFrustumSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFrustumSource::NewInstance();
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
PyvtkFrustumSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFrustumSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFrustumSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  vtkPlanes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlanes();
      }
    else
      {
      tempr = op->vtkFrustumSource::GetPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetPlanes(temp0);
      }
    else
      {
      op->vtkFrustumSource::SetPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetShowLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowLines();
      }
    else
      {
      tempr = op->vtkFrustumSource::GetShowLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetShowLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowLines(temp0);
      }
    else
      {
      op->vtkFrustumSource::SetShowLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_ShowLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowLinesOn();
      }
    else
      {
      op->vtkFrustumSource::ShowLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_ShowLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowLinesOff();
      }
    else
      {
      op->vtkFrustumSource::ShowLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetLinesLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLinesLength();
      }
    else
      {
      tempr = op->vtkFrustumSource::GetLinesLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_SetLinesLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinesLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinesLength(temp0);
      }
    else
      {
      op->vtkFrustumSource::SetLinesLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFrustumSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFrustumSource *op = static_cast<vtkFrustumSource *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkFrustumSource::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFrustumSource_Methods[] = {
  {(char*)"GetClassName", PyvtkFrustumSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFrustumSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFrustumSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFrustumSource\nC++: vtkFrustumSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFrustumSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFrustumSource\nC++: vtkFrustumSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPlanes", PyvtkFrustumSource_GetPlanes, 1,
   (char*)"V.GetPlanes() -> vtkPlanes\nC++: vtkPlanes *GetPlanes()\n\nReturn the 6 planes defining the frustum. Initial value is NULL.\nThe 6 planes are defined in this order:\nleft,right,bottom,top,far,near. If Planes==NULL or if\nPlanes->GetNumberOfPlanes()!=6 when RequestData() is called, an\nerror message will be emitted and RequestData() will return right\naway.\n"},
  {(char*)"SetPlanes", PyvtkFrustumSource_SetPlanes, 1,
   (char*)"V.SetPlanes(vtkPlanes)\nC++: virtual void SetPlanes(vtkPlanes *planes)\n\nSet the 6 planes defining the frustum.\n"},
  {(char*)"GetShowLines", PyvtkFrustumSource_GetShowLines, 1,
   (char*)"V.GetShowLines() -> bool\nC++: bool GetShowLines()\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {(char*)"SetShowLines", PyvtkFrustumSource_SetShowLines, 1,
   (char*)"V.SetShowLines(bool)\nC++: void SetShowLines(bool a)\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {(char*)"ShowLinesOn", PyvtkFrustumSource_ShowLinesOn, 1,
   (char*)"V.ShowLinesOn()\nC++: void ShowLinesOn()\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {(char*)"ShowLinesOff", PyvtkFrustumSource_ShowLinesOff, 1,
   (char*)"V.ShowLinesOff()\nC++: void ShowLinesOff()\n\nTells if some extra lines will be generated. Initial value is\ntrue.\n"},
  {(char*)"GetLinesLength", PyvtkFrustumSource_GetLinesLength, 1,
   (char*)"V.GetLinesLength() -> float\nC++: double GetLinesLength()\n\nLength of the extra lines. This a stricly positive value. Initial\nvalue is 1.0.\n"},
  {(char*)"SetLinesLength", PyvtkFrustumSource_SetLinesLength, 1,
   (char*)"V.SetLinesLength(float)\nC++: void SetLinesLength(double a)\n\nLength of the extra lines. This a stricly positive value. Initial\nvalue is 1.0.\n"},
  {(char*)"GetMTime", PyvtkFrustumSource_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nModified GetMTime because of Planes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFrustumSource_StaticNew()
{
  return vtkFrustumSource::New();
}

PyObject *PyVTKClass_vtkFrustumSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFrustumSource_StaticNew,
    PyvtkFrustumSource_Methods,
    "vtkFrustumSource", modulename,
    NULL, NULL,
    PyvtkFrustumSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFrustumSource_Doc()
{
  static const char *docstring[] = {
    "vtkFrustumSource - create a polygonal representation of a frustum\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkFrustumSource creates a frustum defines by a set of planes. The\nfrustum is represented with four-sided polygons. It is possible to\nspecify extra lines to better visualize the field of view.\n\nUsage:\n\nTypical use consists of 3 steps:\n1. get the planes coefficients from a vtkCamera with\n   vtkCamera::GetFrustumPlanes()\n2. initialize the planes with vtkPlanes::SetFrustumPlanes() with the\n   planes ",
    "coefficients\n3. pass the vtkPlanes to a vtkFrustumSource.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFrustumSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFrustumSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFrustumSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

