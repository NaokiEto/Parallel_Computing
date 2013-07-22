// python wrapper for vtkAttributeDataToFieldDataFilter
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
#include "vtkAttributeDataToFieldDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAttributeDataToFieldDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAttributeDataToFieldDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkAttributeDataToFieldDataFilter_Doc();


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

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
      tempr = op->vtkAttributeDataToFieldDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

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
      tempr = op->vtkAttributeDataToFieldDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  vtkAttributeDataToFieldDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAttributeDataToFieldDataFilter::NewInstance();
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
PyvtkAttributeDataToFieldDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAttributeDataToFieldDataFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAttributeDataToFieldDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassAttributeData(temp0);
      }
    else
      {
      op->vtkAttributeDataToFieldDataFilter::SetPassAttributeData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassAttributeData();
      }
    else
      {
      tempr = op->vtkAttributeDataToFieldDataFilter::GetPassAttributeData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassAttributeDataOn();
      }
    else
      {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassAttributeDataOff();
      }
    else
      {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAttributeDataToFieldDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAttributeDataToFieldDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAttributeDataToFieldDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAttributeDataToFieldDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAttributeDataToFieldDataFilter\nC++: vtkAttributeDataToFieldDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAttributeDataToFieldDataFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAttributeDataToFieldDataFilter\nC++: vtkAttributeDataToFieldDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData, 1,
   (char*)"V.SetPassAttributeData(int)\nC++: void SetPassAttributeData(int a)\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {(char*)"GetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData, 1,
   (char*)"V.GetPassAttributeData() -> int\nC++: int GetPassAttributeData()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {(char*)"PassAttributeDataOn", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn, 1,
   (char*)"V.PassAttributeDataOn()\nC++: void PassAttributeDataOn()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {(char*)"PassAttributeDataOff", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff, 1,
   (char*)"V.PassAttributeDataOff()\nC++: void PassAttributeDataOff()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAttributeDataToFieldDataFilter_StaticNew()
{
  return vtkAttributeDataToFieldDataFilter::New();
}

PyObject *PyVTKClass_vtkAttributeDataToFieldDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAttributeDataToFieldDataFilter_StaticNew,
    PyvtkAttributeDataToFieldDataFilter_Methods,
    "vtkAttributeDataToFieldDataFilter", modulename,
    NULL, NULL,
    PyvtkAttributeDataToFieldDataFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAttributeDataToFieldDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAttributeDataToFieldDataFilter - map attribute data to field data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkAttributeDataToFieldDataFilter is a class that maps attribute data\ninto field data. Since this filter is a subclass of\nvtkDataSetAlgorithm, the output dataset (whose structure is the same\nas the input dataset), will contain the field data that is generated.\nThe filter will convert point and cell attribute data to field data\nand assign it as point and cell field data, replacing any point or\nfiel",
    "d data that was there previously. By default, the original\nnon-field point and cell attribute data will be passed to the output\nof the filter, although you can shut this behavior down.\n\nCaveats:\n\nReference counting the underlying data arrays is used to create the\nfield data.  Therefore, no extra memory is utilized.\n\nThe original field data (if any) associated with the point and cell\nattribute data",
    " is placed into the generated fields along with the\nscalars, vectors, etc.\n\nSee Also:\n\nvtkFieldData vtkDataObject vtkDataSet\nvtkFieldDataToAttributeDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAttributeDataToFieldDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAttributeDataToFieldDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

