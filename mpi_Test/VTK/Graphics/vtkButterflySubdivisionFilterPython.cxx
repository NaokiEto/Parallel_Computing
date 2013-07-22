// python wrapper for vtkButterflySubdivisionFilter
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
#include "vtkButterflySubdivisionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkButterflySubdivisionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkButterflySubdivisionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkButterflySubdivisionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkButterflySubdivisionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInterpolatingSubdivisionFilterNew
extern "C" { PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkInterpolatingSubdivisionFilterNew
#endif

static const char **PyvtkButterflySubdivisionFilter_Doc();


static PyObject *
PyvtkButterflySubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

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
      tempr = op->vtkButterflySubdivisionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

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
      tempr = op->vtkButterflySubdivisionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

  vtkButterflySubdivisionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkButterflySubdivisionFilter::NewInstance();
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
PyvtkButterflySubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkButterflySubdivisionFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkButterflySubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkButterflySubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkButterflySubdivisionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"IsA", PyvtkButterflySubdivisionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"NewInstance", PyvtkButterflySubdivisionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkButterflySubdivisionFilter\nC++: vtkButterflySubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"SafeDownCast", PyvtkButterflySubdivisionFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkButterflySubdivisionFilter\nC++: vtkButterflySubdivisionFilter *SafeDownCast(vtkObject* o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkButterflySubdivisionFilter_StaticNew()
{
  return vtkButterflySubdivisionFilter::New();
}

PyObject *PyVTKClass_vtkButterflySubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkButterflySubdivisionFilter_StaticNew,
    PyvtkButterflySubdivisionFilter_Methods,
    "vtkButterflySubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkButterflySubdivisionFilter_Doc(),
    PyVTKClass_vtkInterpolatingSubdivisionFilterNew(modulename));
  return cls;
}

const char **PyvtkButterflySubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkButterflySubdivisionFilter - generate a subdivision surface using\nthe Butterfly Scheme\n\n",
    "Superclass: vtkInterpolatingSubdivisionFilter\n\n",
    "vtkButterflySubdivisionFilter is an interpolating subdivision scheme\nthat creates four new triangles for each triangle in the mesh. The\nuser can specify the NumberOfSubdivisions. This filter implements the\n8-point butterfly scheme described in: Zorin, D., Schroder, P., and\nSweldens, W., \"Interpolating Subdivisions for Meshes with Arbitrary\nTopology,\" Computer Graphics Proceedings, Annual Conferenc",
    "e Series,\n1996, ACM SIGGRAPH, pp.189-192. This scheme improves previous\nbutterfly subdivisions with special treatment of vertices with\nvalence other than 6.\n\nCurrently, the filter only operates on triangles. Users should use\nthe vtkTriangleFilter to triangulate meshes that contain polygons or\ntriangle strips.\n\nThe filter interpolates point data using the same scheme. New\ntriangles created at a sub",
    "division step will have the cell data of\ntheir parent cell.\n\nSee Also:\n\nvtkInterpolatingSubdivisionFilter vtkLinearSubdivisionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkButterflySubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkButterflySubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkButterflySubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

