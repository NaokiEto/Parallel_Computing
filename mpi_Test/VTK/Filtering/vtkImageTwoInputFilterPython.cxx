// python wrapper for vtkImageTwoInputFilter
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
#include "vtkImageTwoInputFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageTwoInputFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageTwoInputFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageTwoInputFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageTwoInputFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageMultipleInputFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageMultipleInputFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMultipleInputFilterNew
#endif

static const char **PyvtkImageTwoInputFilter_Doc();


static PyObject *
PyvtkImageTwoInputFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

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
      tempr = op->vtkImageTwoInputFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTwoInputFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

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
      tempr = op->vtkImageTwoInputFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTwoInputFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

  vtkImageTwoInputFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageTwoInputFilter::NewInstance();
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
PyvtkImageTwoInputFilter_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageTwoInputFilter::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTwoInputFilter_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageTwoInputFilter::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageTwoInputFilter_GetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput1();
      }
    else
      {
      tempr = op->vtkImageTwoInputFilter::GetInput1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTwoInputFilter_GetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTwoInputFilter *op = static_cast<vtkImageTwoInputFilter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput2();
      }
    else
      {
      tempr = op->vtkImageTwoInputFilter::GetInput2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageTwoInputFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageTwoInputFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageTwoInputFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageTwoInputFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageTwoInputFilter\nC++: vtkImageTwoInputFilter *NewInstance()\n\n"},
  {(char*)"SetInput1", PyvtkImageTwoInputFilter_SetInput1, 1,
   (char*)"V.SetInput1(vtkImageData)\nC++: virtual void SetInput1(vtkImageData *input)\n\nSet the Input1 of this filter. If a ScalarType has not been set,\nthen the ScalarType of the input is used.\n"},
  {(char*)"SetInput2", PyvtkImageTwoInputFilter_SetInput2, 1,
   (char*)"V.SetInput2(vtkImageData)\nC++: virtual void SetInput2(vtkImageData *input)\n\nSet the Input2 of this filter. If a ScalarType has not been set,\nthen the ScalarType of the input is used.\n"},
  {(char*)"GetInput1", PyvtkImageTwoInputFilter_GetInput1, 1,
   (char*)"V.GetInput1() -> vtkImageData\nC++: vtkImageData *GetInput1()\n\nGet the inputs to this filter.\n"},
  {(char*)"GetInput2", PyvtkImageTwoInputFilter_GetInput2, 1,
   (char*)"V.GetInput2() -> vtkImageData\nC++: vtkImageData *GetInput2()\n\nGet the inputs to this filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageTwoInputFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageTwoInputFilter_Methods,
    "vtkImageTwoInputFilter", modulename,
    NULL, NULL,
    PyvtkImageTwoInputFilter_Doc(),
    PyVTKClass_vtkImageMultipleInputFilterNew(modulename));
  return cls;
}

const char **PyvtkImageTwoInputFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageTwoInputFilter - Generic superclass for filters that have\n\n",
    "Superclass: vtkImageMultipleInputFilter\n\n",
    "vtkImageTwoInputFilter handles two inputs. It is just a subclass of\nvtkImageMultipleInputFilter with some methods that are specific to\ntwo inputs.  Although the inputs are labeled input1 and input2, they\nare stored in an array indexed starting at 0.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageTwoInputFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageTwoInputFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageTwoInputFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

