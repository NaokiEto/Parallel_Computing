// python wrapper for vtkImageAlgorithm
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
#include "vtkImageAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkImageAlgorithm_Doc();


static PyObject *
PyvtkImageAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

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
      tempr = op->vtkImageAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

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
      tempr = op->vtkImageAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  vtkImageAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageAlgorithm::NewInstance();
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
PyvtkImageAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkImageAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkImageAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkImageAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkImageAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkImageAlgorithm::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkImageAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkImageAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkImageAlgorithm_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  int temp0;
  vtkDataObject *tempr;
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
      tempr = op->vtkImageAlgorithm::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageAlgorithm::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAlgorithm_GetInput_s1(self, args);
    case 0:
      return PyvtkImageAlgorithm_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkImageAlgorithm_GetImageDataInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDataInput(temp0);
      }
    else
      {
      tempr = op->vtkImageAlgorithm::GetImageDataInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAlgorithm_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkImageAlgorithm::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAlgorithm *op = static_cast<vtkImageAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1);
      }
    else
      {
      op->vtkImageAlgorithm::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAlgorithm_AddInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAlgorithm_AddInput_s1(self, args);
    case 2:
      return PyvtkImageAlgorithm_AddInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}


static PyMethodDef PyvtkImageAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageAlgorithm\nC++: vtkImageAlgorithm *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkImageAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\nV.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetOutput", PyvtkImageAlgorithm_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *d)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkImageAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {(char*)"GetInput", PyvtkImageAlgorithm_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\n"},
  {(char*)"GetImageDataInput", PyvtkImageAlgorithm_GetImageDataInput, 1,
   (char*)"V.GetImageDataInput(int) -> vtkImageData\nC++: vtkImageData *GetImageDataInput(int port)\n\n"},
  {(char*)"AddInput", PyvtkImageAlgorithm_AddInput, 1,
   (char*)"V.AddInput(vtkDataObject)\nC++: virtual void AddInput(vtkDataObject *)\nV.AddInput(int, vtkDataObject)\nC++: virtual void AddInput(int, vtkDataObject *)\n\nAdd an input of this algorithm.  Note that these methods support\nold-style pipeline connections.  When writing new code you should\nuse the more general vtkAlgorithm::AddInputConnection().  See\nSetInput() for details.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageAlgorithm_Methods,
    "vtkImageAlgorithm", modulename,
    NULL, NULL,
    PyvtkImageAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkImageAlgorithm - Generic algorithm superclass for image algs\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkImageAlgorithm is a filter superclass that hides much of the\npipeline  complexity. It handles breaking the pipeline execution into\nsmaller extents so that the vtkImageData limits are observed. It also\nprovides support for multithreading. If you don't need any of this\nfunctionality, consider using vtkSimpleImageToImageFilter instead.\n\nSee also:\n\nvtkSimpleImageToImageFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

