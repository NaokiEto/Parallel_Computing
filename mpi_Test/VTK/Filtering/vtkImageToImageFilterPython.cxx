// python wrapper for vtkImageToImageFilter
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
#include "vtkImageToImageFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageToImageFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageToImageFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageToImageFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageToImageFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSourceNew
#endif

static const char **PyvtkImageToImageFilter_Doc();


static PyObject *
PyvtkImageToImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  vtkImageToImageFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageToImageFilter::NewInstance();
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
PyvtkImageToImageFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageToImageFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      op->vtkImageToImageFilter::SetBypass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOn();
      }
    else
      {
      op->vtkImageToImageFilter::BypassOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BypassOff();
      }
    else
      {
      op->vtkImageToImageFilter::BypassOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::GetBypass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_ThreadedExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreadedExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  vtkImageData *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  int temp2[6];
  int save2[6];
  const int size2 = 6;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->ThreadedExecute(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageToImageFilter::ThreadedExecute(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      op->vtkImageToImageFilter::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::GetNumberOfThreadsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::GetNumberOfThreadsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_SetInputMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputMemoryLimit(temp0);
      }
    else
      {
      op->vtkImageToImageFilter::SetInputMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_GetInputMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

  long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputMemoryLimit();
      }
    else
      {
      tempr = op->vtkImageToImageFilter::GetInputMemoryLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageFilter_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageFilter *op = static_cast<vtkImageToImageFilter *>(vp);

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
      tempr = op->vtkImageToImageFilter::SplitExtent(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkImageToImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageToImageFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageToImageFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageToImageFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageToImageFilter\nC++: vtkImageToImageFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkImageToImageFilter_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: virtual void SetInput(vtkImageData *input)\n\nSet the Input of a filter.\n"},
  {(char*)"GetInput", PyvtkImageToImageFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet the Input of a filter.\n"},
  {(char*)"SetBypass", PyvtkImageToImageFilter_SetBypass, 1,
   (char*)"V.SetBypass(int)\nC++: void SetBypass(int)\n\nObsolete feature - do not use.\n"},
  {(char*)"BypassOn", PyvtkImageToImageFilter_BypassOn, 1,
   (char*)"V.BypassOn()\nC++: void BypassOn()\n\nObsolete feature - do not use.\n"},
  {(char*)"BypassOff", PyvtkImageToImageFilter_BypassOff, 1,
   (char*)"V.BypassOff()\nC++: void BypassOff()\n\nObsolete feature - do not use.\n"},
  {(char*)"GetBypass", PyvtkImageToImageFilter_GetBypass, 1,
   (char*)"V.GetBypass() -> int\nC++: int GetBypass()\n\nObsolete feature - do not use.\n"},
  {(char*)"ThreadedExecute", PyvtkImageToImageFilter_ThreadedExecute, 1,
   (char*)"V.ThreadedExecute(vtkImageData, vtkImageData, [int, int, int, int,\n     int, int], int)\nC++: virtual void ThreadedExecute(vtkImageData *inData,\n    vtkImageData *outData, int extent[6], int threadId)\n\nIf the subclass does not define an Execute method, then the task\nwill be broken up, multiple threads will be spawned, and each\nthread will call this method. It is public so that the thread\nfunctions can call this method.\n"},
  {(char*)"SetNumberOfThreads", PyvtkImageToImageFilter_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkImageToImageFilter_GetNumberOfThreadsMinValue, 1,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkImageToImageFilter_GetNumberOfThreadsMaxValue, 1,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreads", PyvtkImageToImageFilter_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"SetInputMemoryLimit", PyvtkImageToImageFilter_SetInputMemoryLimit, 1,
   (char*)"V.SetInputMemoryLimit(int)\nC++: void SetInputMemoryLimit(int)\n\n"},
  {(char*)"GetInputMemoryLimit", PyvtkImageToImageFilter_GetInputMemoryLimit, 1,
   (char*)"V.GetInputMemoryLimit() -> int\nC++: long GetInputMemoryLimit()\n\n"},
  {(char*)"SplitExtent", PyvtkImageToImageFilter_SplitExtent, 1,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: virtual int SplitExtent(int splitExt[6], int startExt[6],\n    int num, int total)\n\nPutting this here until I merge graphics and imaging streaming.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageToImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageToImageFilter_Methods,
    "vtkImageToImageFilter", modulename,
    NULL, NULL,
    PyvtkImageToImageFilter_Doc(),
    PyVTKClass_vtkImageSourceNew(modulename));
  return cls;
}

const char **PyvtkImageToImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageToImageFilter - Generic filter that has one input of type\nvtkImageData\n\n",
    "Superclass: vtkImageSource\n\n",
    "vtkImageToImageFilter is a filter superclass that hides much of the\npipeline  complexity. It handles breaking the pipeline execution into\nsmaller extents so that the vtkImageData limits are observed. It also\nprovides support for multithreading. If you don't need any of this\nfunctionality, consider using vtkSimpleImageToImageFilter instead.\n\nWarning:\n\nThis used to be the parent class for most imagi",
    "ng filter in VTK4.x,\nnow this role has been replaced by vtkImageAlgorithm. You should\nconsider using vtkImageAlgorithm instead, when writing filter for\nVTK5 and above. This class was kept to ensure full backward\ncompatibility.\n\nSee also:\n\nvtkSimpleImageToImageFilter vtkImageSpatialFilter vtkImageAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageToImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageToImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageToImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

