// python wrapper for vtkImageTranslateExtent
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
#include "vtkImageTranslateExtent.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageTranslateExtent(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageTranslateExtent(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageTranslateExtentNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageTranslateExtentNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageTranslateExtent_Doc();


static PyObject *
PyvtkImageTranslateExtent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

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
      tempr = op->vtkImageTranslateExtent::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTranslateExtent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

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
      tempr = op->vtkImageTranslateExtent::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTranslateExtent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  vtkImageTranslateExtent *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageTranslateExtent::NewInstance();
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
PyvtkImageTranslateExtent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageTranslateExtent *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageTranslateExtent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTranslateExtent_SetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

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
      op->SetTranslation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageTranslateExtent::SetTranslation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTranslateExtent_SetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0);
      }
    else
      {
      op->vtkImageTranslateExtent::SetTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTranslateExtent_SetTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageTranslateExtent_SetTranslation_s1(self, args);
    case 1:
      return PyvtkImageTranslateExtent_SetTranslation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslation");
  return NULL;
}



static PyObject *
PyvtkImageTranslateExtent_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTranslation();
      }
    else
      {
      tempr = op->vtkImageTranslateExtent::GetTranslation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageTranslateExtent_Methods[] = {
  {(char*)"GetClassName", PyvtkImageTranslateExtent_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageTranslateExtent_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageTranslateExtent_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageTranslateExtent\nC++: vtkImageTranslateExtent *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageTranslateExtent_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageTranslateExtent\nC++: vtkImageTranslateExtent *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTranslation", PyvtkImageTranslateExtent_SetTranslation, 1,
   (char*)"V.SetTranslation(int, int, int)\nC++: void SetTranslation(int, int, int)\nV.SetTranslation((int, int, int))\nC++: void SetTranslation(int a[3])\n\n"},
  {(char*)"GetTranslation", PyvtkImageTranslateExtent_GetTranslation, 1,
   (char*)"V.GetTranslation() -> (int, int, int)\nC++: int *GetTranslation()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageTranslateExtent_StaticNew()
{
  return vtkImageTranslateExtent::New();
}

PyObject *PyVTKClass_vtkImageTranslateExtentNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageTranslateExtent_StaticNew,
    PyvtkImageTranslateExtent_Methods,
    "vtkImageTranslateExtent", modulename,
    NULL, NULL,
    PyvtkImageTranslateExtent_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageTranslateExtent_Doc()
{
  static const char *docstring[] = {
    "vtkImageTranslateExtent - Changes extent, nothing else.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageTranslateExtent  shift the whole extent, but does not change\nthe data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageTranslateExtent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageTranslateExtentNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageTranslateExtent", o) != 0)
    {
    Py_DECREF(o);
    }

}

