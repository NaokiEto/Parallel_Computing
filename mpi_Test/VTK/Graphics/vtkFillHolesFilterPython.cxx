// python wrapper for vtkFillHolesFilter
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
#include "vtkFillHolesFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFillHolesFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFillHolesFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFillHolesFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFillHolesFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkFillHolesFilter_Doc();


static PyObject *
PyvtkFillHolesFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

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
      tempr = op->vtkFillHolesFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

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
      tempr = op->vtkFillHolesFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  vtkFillHolesFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFillHolesFilter::NewInstance();
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
PyvtkFillHolesFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFillHolesFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFillHolesFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_SetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHoleSize(temp0);
      }
    else
      {
      op->vtkFillHolesFilter::SetHoleSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoleSizeMinValue();
      }
    else
      {
      tempr = op->vtkFillHolesFilter::GetHoleSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoleSizeMaxValue();
      }
    else
      {
      tempr = op->vtkFillHolesFilter::GetHoleSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoleSize();
      }
    else
      {
      tempr = op->vtkFillHolesFilter::GetHoleSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFillHolesFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkFillHolesFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"IsA", PyvtkFillHolesFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"NewInstance", PyvtkFillHolesFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFillHolesFilter\nC++: vtkFillHolesFilter *NewInstance()\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"SafeDownCast", PyvtkFillHolesFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFillHolesFilter\nC++: vtkFillHolesFilter *SafeDownCast(vtkObject* o)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"SetHoleSize", PyvtkFillHolesFilter_SetHoleSize, 1,
   (char*)"V.SetHoleSize(float)\nC++: void SetHoleSize(double)\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {(char*)"GetHoleSizeMinValue", PyvtkFillHolesFilter_GetHoleSizeMinValue, 1,
   (char*)"V.GetHoleSizeMinValue() -> float\nC++: double GetHoleSizeMinValue()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {(char*)"GetHoleSizeMaxValue", PyvtkFillHolesFilter_GetHoleSizeMaxValue, 1,
   (char*)"V.GetHoleSizeMaxValue() -> float\nC++: double GetHoleSizeMaxValue()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {(char*)"GetHoleSize", PyvtkFillHolesFilter_GetHoleSize, 1,
   (char*)"V.GetHoleSize() -> float\nC++: double GetHoleSize()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFillHolesFilter_StaticNew()
{
  return vtkFillHolesFilter::New();
}

PyObject *PyVTKClass_vtkFillHolesFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFillHolesFilter_StaticNew,
    PyvtkFillHolesFilter_Methods,
    "vtkFillHolesFilter", modulename,
    NULL, NULL,
    PyvtkFillHolesFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFillHolesFilter_Doc()
{
  static const char *docstring[] = {
    "vtkFillHolesFilter - identify and fill holes in meshes\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkFillHolesFilter is a filter that identifies and fills holes in\ninput vtkPolyData meshes. Holes are identified by locating boundary\nedges, linking them together into loops, and then triangulating the\nresulting loops. Note that you can specify an approximate limit to\nthe size of the hole that can be filled.\n\nCaveats:\n\nNote that any mesh with boundary edges by definition has a\ntopological hole. Th",
    "is even includes a reactangular grid (e.g., the\noutput of vtkPlaneSource). In such situations, if the outer hole is\nfilled, retriangulation of the hole will cause geometric overlap of\nthe mesh. This can be prevented by using the hole size instance\nvariable to prevent the larger holes from being triangulated.\n\nNote this filter only operates on polygons and triangle strips.\nVertices and polylines ar",
    "e passed through untouched.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFillHolesFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFillHolesFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFillHolesFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

