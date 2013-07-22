// python wrapper for vtkImageCheckerboard
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
#include "vtkImageCheckerboard.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageCheckerboard(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageCheckerboard(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageCheckerboardNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageCheckerboardNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageCheckerboard_Doc();


static PyObject *
PyvtkImageCheckerboard_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

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
      tempr = op->vtkImageCheckerboard::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

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
      tempr = op->vtkImageCheckerboard::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkImageCheckerboard *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageCheckerboard::NewInstance();
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
PyvtkImageCheckerboard_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageCheckerboard *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageCheckerboard::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfDivisions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCheckerboard::SetNumberOfDivisions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfDivisions(temp0);
      }
    else
      {
      op->vtkImageCheckerboard::SetNumberOfDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCheckerboard_SetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkImageCheckerboard_SetNumberOfDivisions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return NULL;
}



static PyObject *
PyvtkImageCheckerboard_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfDivisions();
      }
    else
      {
      tempr = op->vtkImageCheckerboard::GetNumberOfDivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageCheckerboard::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageCheckerboard::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCheckerboard_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCheckerboard_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCheckerboard_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCheckerboard_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCheckerboard_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfDivisions", PyvtkImageCheckerboard_SetNumberOfDivisions, 1,
   (char*)"V.SetNumberOfDivisions(int, int, int)\nC++: void SetNumberOfDivisions(int, int, int)\nV.SetNumberOfDivisions((int, int, int))\nC++: void SetNumberOfDivisions(int a[3])\n\n"},
  {(char*)"GetNumberOfDivisions", PyvtkImageCheckerboard_GetNumberOfDivisions, 1,
   (char*)"V.GetNumberOfDivisions() -> (int, int, int)\nC++: int *GetNumberOfDivisions()\n\nSet/Get the number of divisions along each axis.\n"},
  {(char*)"SetInput1", PyvtkImageCheckerboard_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {(char*)"SetInput2", PyvtkImageCheckerboard_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCheckerboard_StaticNew()
{
  return vtkImageCheckerboard::New();
}

PyObject *PyVTKClass_vtkImageCheckerboardNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCheckerboard_StaticNew,
    PyvtkImageCheckerboard_Methods,
    "vtkImageCheckerboard", modulename,
    NULL, NULL,
    PyvtkImageCheckerboard_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageCheckerboard_Doc()
{
  static const char *docstring[] = {
    "vtkImageCheckerboard - show two images at once using a checkboard\npattern\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageCheckerboard displays two images as one using a checkerboard\n pattern. This filter can be used to compare two images. The\n checkerboard pattern is controlled by the NumberOfDivisions\n ivar. This controls the number of checkerboard divisions in the\nwhole\n extent of the image.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCheckerboard(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCheckerboardNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCheckerboard", o) != 0)
    {
    Py_DECREF(o);
    }

}

