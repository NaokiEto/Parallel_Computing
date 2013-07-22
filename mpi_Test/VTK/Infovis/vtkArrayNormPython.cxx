// python wrapper for vtkArrayNorm
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
#include "vtkArrayRange.h"
#include "vtkArrayNorm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrayNorm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrayNorm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayNormNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayNormNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkArrayNorm_Doc();


static PyObject *
PyvtkArrayNorm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

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
      tempr = op->vtkArrayNorm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

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
      tempr = op->vtkArrayNorm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  vtkArrayNorm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrayNorm::NewInstance();
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
PyvtkArrayNorm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArrayNorm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArrayNorm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimension();
      }
    else
      {
      tempr = op->vtkArrayNorm::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkArrayNorm::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_GetL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetL();
      }
    else
      {
      tempr = op->vtkArrayNorm::GetL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetL(temp0);
      }
    else
      {
      op->vtkArrayNorm::SetL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInvert(temp0);
      }
    else
      {
      op->vtkArrayNorm::SetInvert(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_GetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInvert();
      }
    else
      {
      tempr = op->vtkArrayNorm::GetInvert();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
    {
    if (ap.IsBound())
      {
      op->SetWindow(*temp0);
      }
    else
      {
      op->vtkArrayNorm::SetWindow(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayNorm_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  vtkArrayRange tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindow();
      }
    else
      {
      tempr = op->vtkArrayNorm::GetWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayRange");
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayNorm_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayNorm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayNorm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayNorm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrayNorm\nC++: vtkArrayNorm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayNorm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayNorm\nC++: vtkArrayNorm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkArrayNorm_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nControls the dimension along which norms will be computed.  For\ninput matrices, For input matrices, use \"0\" (rows) or \"1\"\n(columns). Default: 0\n"},
  {(char*)"SetDimension", PyvtkArrayNorm_SetDimension, 1,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int a)\n\nControls the dimension along which norms will be computed.  For\ninput matrices, For input matrices, use \"0\" (rows) or \"1\"\n(columns). Default: 0\n"},
  {(char*)"GetL", PyvtkArrayNorm_GetL, 1,
   (char*)"V.GetL() -> int\nC++: int GetL()\n\nControls the L-value.  Default: 2\n"},
  {(char*)"SetL", PyvtkArrayNorm_SetL, 1,
   (char*)"V.SetL(int)\nC++: void SetL(int value)\n\nControls the L-value.  Default: 2\n"},
  {(char*)"SetInvert", PyvtkArrayNorm_SetInvert, 1,
   (char*)"V.SetInvert(int)\nC++: void SetInvert(int a)\n\nControls whether to invert output values.  Default: false\n"},
  {(char*)"GetInvert", PyvtkArrayNorm_GetInvert, 1,
   (char*)"V.GetInvert() -> int\nC++: int GetInvert()\n\nControls whether to invert output values.  Default: false\n"},
  {(char*)"SetWindow", PyvtkArrayNorm_SetWindow, 1,
   (char*)"V.SetWindow(vtkArrayRange)\nC++: void SetWindow(const vtkArrayRange &window)\n\nDefines an optional \"window\" used to compute the norm on a subset\nof the elements in a vector.\n"},
  {(char*)"GetWindow", PyvtkArrayNorm_GetWindow, 1,
   (char*)"V.GetWindow() -> vtkArrayRange\nC++: vtkArrayRange GetWindow()\n\nDefines an optional \"window\" used to compute the norm on a subset\nof the elements in a vector.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayNorm_StaticNew()
{
  return vtkArrayNorm::New();
}

PyObject *PyVTKClass_vtkArrayNormNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayNorm_StaticNew,
    PyvtkArrayNorm_Methods,
    "vtkArrayNorm", modulename,
    NULL, NULL,
    PyvtkArrayNorm_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrayNorm_Doc()
{
  static const char *docstring[] = {
    "vtkArrayNorm - Computes L-norms along one dimension of an array.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Given an input matrix (vtkTypedArray), computes the L-norm for each\nvector along either dimension, storing the results in a dense output\nvector (1D vtkDenseArray).  The caller may optionally request the\ninverse norm as output (useful for subsequent normalization), and may\nlimit the computation to a \"window\" of vector elements, to avoid data\ncopying.\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@",
    "sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayNorm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayNormNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayNorm", o) != 0)
    {
    Py_DECREF(o);
    }

}

