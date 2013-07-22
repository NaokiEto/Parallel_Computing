// python wrapper for vtkImageMultipleInputFilter
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
#include "vtkImageMultipleInputFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMultipleInputFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMultipleInputFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMultipleInputFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMultipleInputFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSourceNew
#endif

static const char **PyvtkImageMultipleInputFilter_Doc();


static PyObject *
PyvtkImageMultipleInputFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

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
      tempr = op->vtkImageMultipleInputFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

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
      tempr = op->vtkImageMultipleInputFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  vtkImageMultipleInputFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::NewInstance();
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
PyvtkImageMultipleInputFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkImageMultipleInputFilter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkImageMultipleInputFilter::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_RemoveInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0);
      }
    else
      {
      op->vtkImageMultipleInputFilter::RemoveInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageMultipleInputFilter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageMultipleInputFilter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageMultipleInputFilter_GetInput_s1(self, args);
    case 0:
      return PyvtkImageMultipleInputFilter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkImageMultipleInputFilter_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBypass(temp0);
      }
    else
      {
      op->vtkImageMultipleInputFilter::SetBypass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBypass();
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::GetBypass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOn();
      }
    else
      {
      op->vtkImageMultipleInputFilter::BypassOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOff();
      }
    else
      {
      op->vtkImageMultipleInputFilter::BypassOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkImageMultipleInputFilter::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreadsMinValue();
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::GetNumberOfThreadsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreadsMaxValue();
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::GetNumberOfThreadsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreads();
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMultipleInputFilter_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMultipleInputFilter *op = static_cast<vtkImageMultipleInputFilter *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SplitExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkImageMultipleInputFilter::SplitExtent(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMultipleInputFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMultipleInputFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMultipleInputFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMultipleInputFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMultipleInputFilter\nC++: vtkImageMultipleInputFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkImageMultipleInputFilter_SetInput, 1,
   (char*)"V.SetInput(int, vtkImageData)\nC++: virtual void SetInput(int num, vtkImageData *input)\n\nSet an Input of this filter.\n"},
  {(char*)"AddInput", PyvtkImageMultipleInputFilter_AddInput, 1,
   (char*)"V.AddInput(vtkImageData)\nC++: virtual void AddInput(vtkImageData *input)\n\nAdds an input to the first null position in the input list.\nExpands the list memory if necessary\n"},
  {(char*)"RemoveInput", PyvtkImageMultipleInputFilter_RemoveInput, 1,
   (char*)"V.RemoveInput(vtkImageData)\nC++: virtual void RemoveInput(vtkImageData *input)\n\nAdds an input to the first null position in the input list.\nExpands the list memory if necessary\n"},
  {(char*)"GetInput", PyvtkImageMultipleInputFilter_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkImageData\nC++: vtkImageData *GetInput(int num)\nV.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet one input to this filter.\n"},
  {(char*)"SetBypass", PyvtkImageMultipleInputFilter_SetBypass, 1,
   (char*)"V.SetBypass(int)\nC++: void SetBypass(int a)\n\nTurning bypass on will cause the filter to turn off and simply\npass the data from the first input (input0) through. It is\nimplemented for consistency with vtkImageToImageFilter.\n"},
  {(char*)"GetBypass", PyvtkImageMultipleInputFilter_GetBypass, 1,
   (char*)"V.GetBypass() -> int\nC++: int GetBypass()\n\nTurning bypass on will cause the filter to turn off and simply\npass the data from the first input (input0) through. It is\nimplemented for consistency with vtkImageToImageFilter.\n"},
  {(char*)"BypassOn", PyvtkImageMultipleInputFilter_BypassOn, 1,
   (char*)"V.BypassOn()\nC++: void BypassOn()\n\nTurning bypass on will cause the filter to turn off and simply\npass the data from the first input (input0) through. It is\nimplemented for consistency with vtkImageToImageFilter.\n"},
  {(char*)"BypassOff", PyvtkImageMultipleInputFilter_BypassOff, 1,
   (char*)"V.BypassOff()\nC++: void BypassOff()\n\nTurning bypass on will cause the filter to turn off and simply\npass the data from the first input (input0) through. It is\nimplemented for consistency with vtkImageToImageFilter.\n"},
  {(char*)"SetNumberOfThreads", PyvtkImageMultipleInputFilter_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkImageMultipleInputFilter_GetNumberOfThreadsMinValue, 1,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkImageMultipleInputFilter_GetNumberOfThreadsMaxValue, 1,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreads", PyvtkImageMultipleInputFilter_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"SplitExtent", PyvtkImageMultipleInputFilter_SplitExtent, 1,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: virtual int SplitExtent(int splitExt[6], int startExt[6],\n    int num, int total)\n\nPutting this here until I merge graphics and imaging streaming.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageMultipleInputFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageMultipleInputFilter_Methods,
    "vtkImageMultipleInputFilter", modulename,
    NULL, NULL,
    PyvtkImageMultipleInputFilter_Doc(),
    PyVTKClass_vtkImageSourceNew(modulename));
  return cls;
}

const char **PyvtkImageMultipleInputFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageMultipleInputFilter - Generic filter that has N inputs.\n\n",
    "Superclass: vtkImageSource\n\n",
    "vtkImageMultipleInputFilter is a super class for filters that have\nany number of inputs. Streaming is not available in this class yet.\n\nSee Also:\n\nvtkImageToImageFilter vtkImageInPlaceFilter vtkImageTwoInputFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMultipleInputFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMultipleInputFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMultipleInputFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

