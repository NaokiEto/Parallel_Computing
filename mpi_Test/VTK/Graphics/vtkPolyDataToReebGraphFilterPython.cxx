// python wrapper for vtkPolyDataToReebGraphFilter
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
#include "vtkPolyDataToReebGraphFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataToReebGraphFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataToReebGraphFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataToReebGraphFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataToReebGraphFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
#endif

static const char **PyvtkPolyDataToReebGraphFilter_Doc();


static PyObject *
PyvtkPolyDataToReebGraphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

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
      tempr = op->vtkPolyDataToReebGraphFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

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
      tempr = op->vtkPolyDataToReebGraphFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

  vtkPolyDataToReebGraphFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataToReebGraphFilter::NewInstance();
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
PyvtkPolyDataToReebGraphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataToReebGraphFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataToReebGraphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

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
      op->vtkPolyDataToReebGraphFilter::SetFieldId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

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
      tempr = op->vtkPolyDataToReebGraphFilter::GetFieldId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

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
      tempr = op->vtkPolyDataToReebGraphFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataToReebGraphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataToReebGraphFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataToReebGraphFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataToReebGraphFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataToReebGraphFilter\nC++: vtkPolyDataToReebGraphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataToReebGraphFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataToReebGraphFilter\nC++: vtkPolyDataToReebGraphFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldId", PyvtkPolyDataToReebGraphFilter_SetFieldId, 1,
   (char*)"V.SetFieldId(int)\nC++: void SetFieldId(int a)\n\nSet the scalar field id (default = 0).\n"},
  {(char*)"GetFieldId", PyvtkPolyDataToReebGraphFilter_GetFieldId, 1,
   (char*)"V.GetFieldId() -> int\nC++: int GetFieldId()\n\nSet the scalar field id (default = 0).\n"},
  {(char*)"GetOutput", PyvtkPolyDataToReebGraphFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkReebGraph\nC++: vtkReebGraph *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataToReebGraphFilter_StaticNew()
{
  return vtkPolyDataToReebGraphFilter::New();
}

PyObject *PyVTKClass_vtkPolyDataToReebGraphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataToReebGraphFilter_StaticNew,
    PyvtkPolyDataToReebGraphFilter_Methods,
    "vtkPolyDataToReebGraphFilter", modulename,
    NULL, NULL,
    PyvtkPolyDataToReebGraphFilter_Doc(),
    PyVTKClass_vtkDirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataToReebGraphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataToReebGraphFilter - generate a Reeb graph from a scalar\n\n",
    "Superclass: vtkDirectedGraphAlgorithm\n\n",
    "The filter will first try to pull as a scalar field the vtkDataArray\nwith Id 'fieldId' of the mesh's vtkPointData. If this field does not\nexist, the filter will use the vtkElevationFilter to generate a\ndefault scalar field.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataToReebGraphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataToReebGraphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataToReebGraphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

