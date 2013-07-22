// python wrapper for vtkDataSetTriangleFilter
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
#include "vtkDataSetTriangleFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetTriangleFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetTriangleFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetTriangleFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetTriangleFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkDataSetTriangleFilter_Doc();


static PyObject *
PyvtkDataSetTriangleFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

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
      tempr = op->vtkDataSetTriangleFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

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
      tempr = op->vtkDataSetTriangleFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  vtkDataSetTriangleFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetTriangleFilter::NewInstance();
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
PyvtkDataSetTriangleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetTriangleFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_SetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTetrahedraOnly(temp0);
      }
    else
      {
      op->vtkDataSetTriangleFilter::SetTetrahedraOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_GetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTetrahedraOnly();
      }
    else
      {
      tempr = op->vtkDataSetTriangleFilter::GetTetrahedraOnly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_TetrahedraOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TetrahedraOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TetrahedraOnlyOn();
      }
    else
      {
      op->vtkDataSetTriangleFilter::TetrahedraOnlyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_TetrahedraOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TetrahedraOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TetrahedraOnlyOff();
      }
    else
      {
      op->vtkDataSetTriangleFilter::TetrahedraOnlyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetTriangleFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetTriangleFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetTriangleFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetTriangleFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetTriangleFilter\nC++: vtkDataSetTriangleFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetTriangleFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetTriangleFilter\nC++: vtkDataSetTriangleFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTetrahedraOnly", PyvtkDataSetTriangleFilter_SetTetrahedraOnly, 1,
   (char*)"V.SetTetrahedraOnly(int)\nC++: void SetTetrahedraOnly(int a)\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {(char*)"GetTetrahedraOnly", PyvtkDataSetTriangleFilter_GetTetrahedraOnly, 1,
   (char*)"V.GetTetrahedraOnly() -> int\nC++: int GetTetrahedraOnly()\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {(char*)"TetrahedraOnlyOn", PyvtkDataSetTriangleFilter_TetrahedraOnlyOn, 1,
   (char*)"V.TetrahedraOnlyOn()\nC++: void TetrahedraOnlyOn()\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {(char*)"TetrahedraOnlyOff", PyvtkDataSetTriangleFilter_TetrahedraOnlyOff, 1,
   (char*)"V.TetrahedraOnlyOff()\nC++: void TetrahedraOnlyOff()\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetTriangleFilter_StaticNew()
{
  return vtkDataSetTriangleFilter::New();
}

PyObject *PyVTKClass_vtkDataSetTriangleFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetTriangleFilter_StaticNew,
    PyvtkDataSetTriangleFilter_Methods,
    "vtkDataSetTriangleFilter", modulename,
    NULL, NULL,
    PyvtkDataSetTriangleFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetTriangleFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetTriangleFilter - triangulate any type of dataset\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkDataSetTriangleFilter generates n-dimensional simplices from any\ninput dataset. That is, 3D cells are converted to tetrahedral meshes,\n2D cells to triangles, and so on. The triangulation is guaranteed to\nbe compatible.\n\nThis filter uses simple 1D and 2D triangulation techniques for cells\nthat are of topological dimension 2 or less. For 3D cells--due to the\nissue of face compatibility across qua",
    "drilateral faces (which way to\norient the diagonal?)--a fancier ordered Delaunay triangulation is\nused. This approach produces templates on the fly for triangulating\nthe cells. The templates are then used to do the actual\ntriangulation.\n\nSee Also:\n\nvtkOrderedTriangulator vtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetTriangleFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetTriangleFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetTriangleFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

