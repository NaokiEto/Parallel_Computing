// python wrapper for vtkCastToConcrete
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
#include "vtkCastToConcrete.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCastToConcrete(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCastToConcrete(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCastToConcreteNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCastToConcreteNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkCastToConcrete_Doc();


static PyObject *
PyvtkCastToConcrete_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

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
      tempr = op->vtkCastToConcrete::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCastToConcrete_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

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
      tempr = op->vtkCastToConcrete::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCastToConcrete_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

  vtkCastToConcrete *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCastToConcrete::NewInstance();
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
PyvtkCastToConcrete_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCastToConcrete *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCastToConcrete::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCastToConcrete_Methods[] = {
  {(char*)"GetClassName", PyvtkCastToConcrete_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCastToConcrete_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCastToConcrete_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCastToConcrete\nC++: vtkCastToConcrete *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCastToConcrete_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCastToConcrete\nC++: vtkCastToConcrete *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCastToConcrete_StaticNew()
{
  return vtkCastToConcrete::New();
}

PyObject *PyVTKClass_vtkCastToConcreteNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCastToConcrete_StaticNew,
    PyvtkCastToConcrete_Methods,
    "vtkCastToConcrete", modulename,
    NULL, NULL,
    PyvtkCastToConcrete_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCastToConcrete_Doc()
{
  static const char *docstring[] = {
    "vtkCastToConcrete - works around type-checking limitations\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkCastToConcrete is a filter that works around type-checking\nlimitations in the filter classes. Some filters generate abstract\ntypes on output, and cannot be connected to the input of filters\nrequiring a concrete input type. For example, vtkElevationFilter\ngenerates vtkDataSet for output, and cannot be connected to\nvtkDecimate, because vtkDecimate requires vtkPolyData as input. This\nis true even ",
    "though (in this example) the input to vtkElevationFilter\nis of type vtkPolyData, and you know the output of vtkElevationFilter\nis the same type as its input.\n\nvtkCastToConcrete performs run-time checking to insure that output\ntype is of the right type. An error message will result if you try to\ncast an input type improperly. Otherwise, the filter performs the\nappropriate cast and returns the data.",
    "\n\nCaveats:\n\nYou must specify the input before you can get the output. Otherwise\nan error results.\n\nSee Also:\n\nvtkDataSetAlgorithm vtkPointSetToPointSetFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCastToConcrete(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCastToConcreteNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCastToConcrete", o) != 0)
    {
    Py_DECREF(o);
    }

}

