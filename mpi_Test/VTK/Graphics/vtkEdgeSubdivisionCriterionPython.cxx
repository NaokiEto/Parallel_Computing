// python wrapper for vtkEdgeSubdivisionCriterion
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
#include "vtkEdgeSubdivisionCriterion.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEdgeSubdivisionCriterion(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEdgeSubdivisionCriterion(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEdgeSubdivisionCriterion_Doc();


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

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
      tempr = op->vtkEdgeSubdivisionCriterion::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

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
      tempr = op->vtkEdgeSubdivisionCriterion::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  vtkEdgeSubdivisionCriterion *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEdgeSubdivisionCriterion::NewInstance();
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
PyvtkEdgeSubdivisionCriterion_PassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  int temp1;
  vtkStreamingTessellator *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkStreamingTessellator"))
    {
    if (ap.IsBound())
      {
      tempr = op->PassField(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkEdgeSubdivisionCriterion::PassField(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_ResetFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFieldList();
      }
    else
      {
      op->vtkEdgeSubdivisionCriterion::ResetFieldList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_DontPassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DontPassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  vtkStreamingTessellator *temp1 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStreamingTessellator"))
    {
    if (ap.IsBound())
      {
      tempr = op->DontPassField(temp0, temp1);
      }
    else
      {
      tempr = op->vtkEdgeSubdivisionCriterion::DontPassField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputField(temp0);
      }
    else
      {
      tempr = op->vtkEdgeSubdivisionCriterion::GetOutputField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFields();
      }
    else
      {
      tempr = op->vtkEdgeSubdivisionCriterion::GetNumberOfFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeSubdivisionCriterion_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeSubdivisionCriterion_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeSubdivisionCriterion_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeSubdivisionCriterion_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEdgeSubdivisionCriterion\nC++: vtkEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {(char*)"PassField", PyvtkEdgeSubdivisionCriterion_PassField, 1,
   (char*)"V.PassField(int, int, vtkStreamingTessellator) -> int\nC++: virtual int PassField(int sourceId, int sourceSize,\n    vtkStreamingTessellator *t)\n\nThis is a helper routine called by PassFields() which you may\nalso call directly; it adds sourceSize to the size of the output\nvertex field values. The offset of the sourceId field in the\noutput vertex array is returned.\n-1 is returned if sourceSize would force the output to have more\n   than vtkStreamingTessellator::MaxFieldSize field values per\n   vertex.\n"},
  {(char*)"ResetFieldList", PyvtkEdgeSubdivisionCriterion_ResetFieldList, 1,
   (char*)"V.ResetFieldList()\nC++: virtual void ResetFieldList()\n\nDon't pass any field values in the vertex pointer. This is used\nto reset the list of fields to pass after a successful run of\nvtkStreamingTessellator.\n"},
  {(char*)"DontPassField", PyvtkEdgeSubdivisionCriterion_DontPassField, 1,
   (char*)"V.DontPassField(int, vtkStreamingTessellator) -> bool\nC++: virtual bool DontPassField(int sourceId,\n    vtkStreamingTessellator *t)\n\nThis does the opposite of PassField(); it removes a field from\nthe output (assuming the field was set to be passed). Returns\ntrue if any action was taken, false otherwise.\n"},
  {(char*)"GetOutputField", PyvtkEdgeSubdivisionCriterion_GetOutputField, 1,
   (char*)"V.GetOutputField(int) -> int\nC++: int GetOutputField(int fieldId)\n\nReturn the output ID of an input field. Returns -1 if fieldId is\nnot set to be passed to the output.\n"},
  {(char*)"GetNumberOfFields", PyvtkEdgeSubdivisionCriterion_GetNumberOfFields, 1,
   (char*)"V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nReturn the number of fields being evaluated at each output\nvertex. This is the length of the arrays returned by\nGetFieldIds() andGetFieldOffsets().\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkEdgeSubdivisionCriterion_Methods,
    "vtkEdgeSubdivisionCriterion", modulename,
    NULL, NULL,
    PyvtkEdgeSubdivisionCriterion_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEdgeSubdivisionCriterion_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeSubdivisionCriterion - how to decide whether a linear\napproximation to nonlinear geometry or field should be subdivided\n\n",
    "Superclass: vtkObject\n\n",
    "Descendants of this abstract class are used to decide whether a\npiecewise linear approximation (triangles, lines, ... ) to some\nnonlinear geometry should be subdivided. This decision may be based\non an absolute error metric (chord error) or on some view-dependent\nmetric (chord error compared to device resolution) or on some\nabstract metric (color error). Or anything else, really. Just so long\nas y",
    "ou implement the EvaluateEdge member, all will be well.\n\nSee Also:\n\nvtkDataSetSubdivisionAlgorithm vtkStreamingTessellator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeSubdivisionCriterion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeSubdivisionCriterionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeSubdivisionCriterion", o) != 0)
    {
    Py_DECREF(o);
    }

}

