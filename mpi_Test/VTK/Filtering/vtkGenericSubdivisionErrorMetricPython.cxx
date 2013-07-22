// python wrapper for vtkGenericSubdivisionErrorMetric
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
#include "vtkGenericSubdivisionErrorMetric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericSubdivisionErrorMetric_Doc();


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

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
      tempr = op->vtkGenericSubdivisionErrorMetric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

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
      tempr = op->vtkGenericSubdivisionErrorMetric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericSubdivisionErrorMetric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericSubdivisionErrorMetric::NewInstance();
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
PyvtkGenericSubdivisionErrorMetric_SetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
    {
    if (ap.IsBound())
      {
      op->SetGenericCell(temp0);
      }
    else
      {
      op->vtkGenericSubdivisionErrorMetric::SetGenericCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericAdaptorCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenericCell();
      }
    else
      {
      tempr = op->vtkGenericSubdivisionErrorMetric::GetGenericCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0);
      }
    else
      {
      op->vtkGenericSubdivisionErrorMetric::SetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet();
      }
    else
      {
      tempr = op->vtkGenericSubdivisionErrorMetric::GetDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericSubdivisionErrorMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericSubdivisionErrorMetric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and error macros.\n"},
  {(char*)"IsA", PyvtkGenericSubdivisionErrorMetric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and error macros.\n"},
  {(char*)"NewInstance", PyvtkGenericSubdivisionErrorMetric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericSubdivisionErrorMetric\nC++: vtkGenericSubdivisionErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {(char*)"SetGenericCell", PyvtkGenericSubdivisionErrorMetric_SetGenericCell, 1,
   (char*)"V.SetGenericCell(vtkGenericAdaptorCell)\nC++: void SetGenericCell(vtkGenericAdaptorCell *cell)\n\nThe cell that the edge belongs to.\n"},
  {(char*)"GetGenericCell", PyvtkGenericSubdivisionErrorMetric_GetGenericCell, 1,
   (char*)"V.GetGenericCell() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *GetGenericCell()\n\nThe cell that the edge belongs to.\n"},
  {(char*)"SetDataSet", PyvtkGenericSubdivisionErrorMetric_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkGenericDataSet)\nC++: void SetDataSet(vtkGenericDataSet *ds)\n\nSet/Get the dataset to be tessellated.\n"},
  {(char*)"GetDataSet", PyvtkGenericSubdivisionErrorMetric_GetDataSet, 1,
   (char*)"V.GetDataSet() -> vtkGenericDataSet\nC++: vtkGenericDataSet *GetDataSet()\n\nSet/Get the dataset to be tessellated.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericSubdivisionErrorMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericSubdivisionErrorMetric_Methods,
    "vtkGenericSubdivisionErrorMetric", modulename,
    NULL, NULL,
    PyvtkGenericSubdivisionErrorMetric_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericSubdivisionErrorMetric_Doc()
{
  static const char *docstring[] = {
    "vtkGenericSubdivisionErrorMetric - Objects that compute\n\n",
    "Superclass: vtkObject\n\n",
    "Objects of that class answer the following question during the cell\nsubdivision: \"does the edge need to be subdivided?\" through\nRequiresEdgeSubdivision(). The answer depends on the criterium\nactually used in the subclass of this abstract class: a\ngeometric-based error metric (variation of edge from a straight\nline), an attribute-based error metric (variation of the active\nattribute/component value",
    " from a linear ramp) , a view-depend error\nmetric, ... Cell subdivision is performed in the context of the\nadaptor framework: higher-order, or complex cells, are automatically\ntessellated into simplices so that they can be processed with\nconventional visualization algorithms.\n\nSee Also:\n\nvtkGenericCellTessellator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericSubdivisionErrorMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericSubdivisionErrorMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

