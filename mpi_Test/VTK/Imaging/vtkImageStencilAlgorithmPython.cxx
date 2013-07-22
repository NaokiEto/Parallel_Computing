// python wrapper for vtkImageStencilAlgorithm
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
#include "vtkImageStencilAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageStencilAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageStencilAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageStencilAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageStencilAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkImageStencilAlgorithm_Doc();


static PyObject *
PyvtkImageStencilAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilAlgorithm *op = static_cast<vtkImageStencilAlgorithm *>(vp);

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
      tempr = op->vtkImageStencilAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilAlgorithm *op = static_cast<vtkImageStencilAlgorithm *>(vp);

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
      tempr = op->vtkImageStencilAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilAlgorithm *op = static_cast<vtkImageStencilAlgorithm *>(vp);

  vtkImageStencilAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageStencilAlgorithm::NewInstance();
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
PyvtkImageStencilAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageStencilAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageStencilAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilAlgorithm *op = static_cast<vtkImageStencilAlgorithm *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkImageStencilAlgorithm::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilAlgorithm *op = static_cast<vtkImageStencilAlgorithm *>(vp);

  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkImageStencilAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageStencilAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkImageStencilAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageStencilAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageStencilAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageStencilAlgorithm\nC++: vtkImageStencilAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageStencilAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageStencilAlgorithm\nC++: vtkImageStencilAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutput", PyvtkImageStencilAlgorithm_SetOutput, 1,
   (char*)"V.SetOutput(vtkImageStencilData)\nC++: void SetOutput(vtkImageStencilData *output)\n\nGet or set the output for this source.\n"},
  {(char*)"GetOutput", PyvtkImageStencilAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkImageStencilData\nC++: vtkImageStencilData *GetOutput()\n\nGet or set the output for this source.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageStencilAlgorithm_StaticNew()
{
  return vtkImageStencilAlgorithm::New();
}

PyObject *PyVTKClass_vtkImageStencilAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageStencilAlgorithm_StaticNew,
    PyvtkImageStencilAlgorithm_Methods,
    "vtkImageStencilAlgorithm", modulename,
    NULL, NULL,
    PyvtkImageStencilAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageStencilAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkImageStencilAlgorithm - producer of vtkImageStencilData\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkImageStencilAlgorithm is a superclass for filters that generate\nthe special vtkImageStencilData type.  This data type is a special\nrepresentation of a binary image that can be used as a mask by\nseveral imaging filters.\n\nSee Also:\n\nvtkImageStencilData vtkImageStencilSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageStencilAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageStencilAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageStencilAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

