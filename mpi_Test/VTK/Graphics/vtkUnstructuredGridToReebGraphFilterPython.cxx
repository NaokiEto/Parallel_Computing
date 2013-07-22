// python wrapper for vtkUnstructuredGridToReebGraphFilter
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
#include "vtkUnstructuredGridToReebGraphFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridToReebGraphFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridToReebGraphFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridToReebGraphFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridToReebGraphFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
#endif

static const char **PyvtkUnstructuredGridToReebGraphFilter_Doc();


static PyObject *
PyvtkUnstructuredGridToReebGraphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToReebGraphFilter *op = static_cast<vtkUnstructuredGridToReebGraphFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToReebGraphFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToReebGraphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToReebGraphFilter *op = static_cast<vtkUnstructuredGridToReebGraphFilter *>(vp);

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
      tempr = op->vtkUnstructuredGridToReebGraphFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToReebGraphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToReebGraphFilter *op = static_cast<vtkUnstructuredGridToReebGraphFilter *>(vp);

  vtkUnstructuredGridToReebGraphFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridToReebGraphFilter::NewInstance();
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
PyvtkUnstructuredGridToReebGraphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridToReebGraphFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridToReebGraphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToReebGraphFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToReebGraphFilter *op = static_cast<vtkUnstructuredGridToReebGraphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldId(temp0);
      }
    else
      {
      op->vtkUnstructuredGridToReebGraphFilter::SetFieldId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToReebGraphFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToReebGraphFilter *op = static_cast<vtkUnstructuredGridToReebGraphFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldId();
      }
    else
      {
      tempr = op->vtkUnstructuredGridToReebGraphFilter::GetFieldId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridToReebGraphFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridToReebGraphFilter *op = static_cast<vtkUnstructuredGridToReebGraphFilter *>(vp);

  vtkReebGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkUnstructuredGridToReebGraphFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridToReebGraphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridToReebGraphFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridToReebGraphFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridToReebGraphFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridToReebGraphFilter\nC++: vtkUnstructuredGridToReebGraphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridToReebGraphFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridToReebGraphFilter\nC++: vtkUnstructuredGridToReebGraphFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetFieldId", PyvtkUnstructuredGridToReebGraphFilter_SetFieldId, 1,
   (char*)"V.SetFieldId(int)\nC++: void SetFieldId(int a)\n\nSet the scalar field id (default = 0).\n"},
  {(char*)"GetFieldId", PyvtkUnstructuredGridToReebGraphFilter_GetFieldId, 1,
   (char*)"V.GetFieldId() -> int\nC++: int GetFieldId()\n\nSet the scalar field id (default = 0).\n"},
  {(char*)"GetOutput", PyvtkUnstructuredGridToReebGraphFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkReebGraph\nC++: vtkReebGraph *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridToReebGraphFilter_StaticNew()
{
  return vtkUnstructuredGridToReebGraphFilter::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridToReebGraphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridToReebGraphFilter_StaticNew,
    PyvtkUnstructuredGridToReebGraphFilter_Methods,
    "vtkUnstructuredGridToReebGraphFilter", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridToReebGraphFilter_Doc(),
    PyVTKClass_vtkDirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridToReebGraphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridToReebGraphFilter - generate a Reeb graph from a\n\n",
    "Superclass: vtkDirectedGraphAlgorithm\n\n",
    "The filter will first try to pull as a scalar field the vtkDataArray\nwith Id 'fieldId' of the mesh's vtkPointData. If this field does not\nexist, the filter will use the vtkElevationFilter to generate a\ndefault scalar field.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridToReebGraphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridToReebGraphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridToReebGraphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

