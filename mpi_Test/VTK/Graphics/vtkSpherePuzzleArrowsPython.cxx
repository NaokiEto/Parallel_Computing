// python wrapper for vtkSpherePuzzleArrows
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
#include "vtkSpherePuzzleArrows.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSpherePuzzleArrowsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSpherePuzzleArrowsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSpherePuzzleArrows_Doc();


static PyObject *
PyvtkSpherePuzzleArrows_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

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
      tempr = op->vtkSpherePuzzleArrows::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

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
      tempr = op->vtkSpherePuzzleArrows::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  vtkSpherePuzzleArrows *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSpherePuzzleArrows::NewInstance();
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
PyvtkSpherePuzzleArrows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSpherePuzzleArrows *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSpherePuzzleArrows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int temp0[32];
  const int size0 = 32;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPermutation(temp0);
      }
    else
      {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  vtkSpherePuzzle *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpherePuzzle"))
    {
    if (ap.IsBound())
      {
      op->SetPermutation(temp0);
      }
    else
      {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_SetPermutation_Methods[] = {
  {NULL, PyvtkSpherePuzzleArrows_SetPermutation_s1, 1,
   (char*)"@O *i"},
  {NULL, PyvtkSpherePuzzleArrows_SetPermutation_s2, 1,
   (char*)"@O *vtkSpherePuzzle"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpherePuzzleArrows_SetPermutation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPermutation");
  return NULL;
}



static PyObject *
PyvtkSpherePuzzleArrows_GetPermutation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int *tempr;
  int sizer = 32;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPermutation();
      }
    else
      {
      tempr = op->vtkSpherePuzzleArrows::GetPermutation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutationComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutationComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPermutationComponent(temp0, temp1);
      }
    else
      {
      op->vtkSpherePuzzleArrows::SetPermutationComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_Methods[] = {
  {(char*)"GetClassName", PyvtkSpherePuzzleArrows_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpherePuzzleArrows_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpherePuzzleArrows_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSpherePuzzleArrows\nC++: vtkSpherePuzzleArrows *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpherePuzzleArrows_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpherePuzzleArrows\nC++: vtkSpherePuzzleArrows *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPermutation", PyvtkSpherePuzzleArrows_SetPermutation, 1,
   (char*)"V.SetPermutation((int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int))\nC++: void SetPermutation(int a[32])\nV.SetPermutation(vtkSpherePuzzle)\nC++: void SetPermutation(vtkSpherePuzzle *puz)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {(char*)"GetPermutation", PyvtkSpherePuzzleArrows_GetPermutation, 1,
   (char*)"V.GetPermutation() -> (int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int)\nC++: int *GetPermutation()\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {(char*)"SetPermutationComponent", PyvtkSpherePuzzleArrows_SetPermutationComponent, 1,
   (char*)"V.SetPermutationComponent(int, int)\nC++: void SetPermutationComponent(int comp, int val)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpherePuzzleArrows_StaticNew()
{
  return vtkSpherePuzzleArrows::New();
}

PyObject *PyVTKClass_vtkSpherePuzzleArrowsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpherePuzzleArrows_StaticNew,
    PyvtkSpherePuzzleArrows_Methods,
    "vtkSpherePuzzleArrows", modulename,
    NULL, NULL,
    PyvtkSpherePuzzleArrows_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSpherePuzzleArrows_Doc()
{
  static const char *docstring[] = {
    "vtkSpherePuzzleArrows - Visualize permutation of the sphere puzzle.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSpherePuzzleArrows creates\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpherePuzzleArrows(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpherePuzzleArrowsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpherePuzzleArrows", o) != 0)
    {
    Py_DECREF(o);
    }

}

