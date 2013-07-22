// python wrapper for vtkImageEuclideanDistance
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
#include "vtkImageEuclideanDistance.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageEuclideanDistance(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageEuclideanDistance(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageEuclideanDistanceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageEuclideanDistanceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageEuclideanDistance_Doc();


static PyObject *
PyvtkImageEuclideanDistance_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

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
      tempr = op->vtkImageEuclideanDistance::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

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
      tempr = op->vtkImageEuclideanDistance::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  vtkImageEuclideanDistance *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageEuclideanDistance::NewInstance();
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
PyvtkImageEuclideanDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageEuclideanDistance *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageEuclideanDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

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
      tempr = op->vtkImageEuclideanDistance::SplitExtent(temp0, temp1, temp2, temp3);
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


static PyObject *
PyvtkImageEuclideanDistance_SetInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitialize(temp0);
      }
    else
      {
      op->vtkImageEuclideanDistance::SetInitialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialize();
      }
    else
      {
      tempr = op->vtkImageEuclideanDistance::GetInitialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_InitializeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeOn();
      }
    else
      {
      op->vtkImageEuclideanDistance::InitializeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_InitializeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeOff();
      }
    else
      {
      op->vtkImageEuclideanDistance::InitializeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetConsiderAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsiderAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConsiderAnisotropy(temp0);
      }
    else
      {
      op->vtkImageEuclideanDistance::SetConsiderAnisotropy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetConsiderAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsiderAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConsiderAnisotropy();
      }
    else
      {
      tempr = op->vtkImageEuclideanDistance::GetConsiderAnisotropy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_ConsiderAnisotropyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsiderAnisotropyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConsiderAnisotropyOn();
      }
    else
      {
      op->vtkImageEuclideanDistance::ConsiderAnisotropyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_ConsiderAnisotropyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsiderAnisotropyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConsiderAnisotropyOff();
      }
    else
      {
      op->vtkImageEuclideanDistance::ConsiderAnisotropyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDistance(temp0);
      }
    else
      {
      op->vtkImageEuclideanDistance::SetMaximumDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDistance();
      }
    else
      {
      tempr = op->vtkImageEuclideanDistance::GetMaximumDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlgorithm(temp0);
      }
    else
      {
      op->vtkImageEuclideanDistance::SetAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlgorithm();
      }
    else
      {
      tempr = op->vtkImageEuclideanDistance::GetAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithmToSaito(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithmToSaito");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAlgorithmToSaito();
      }
    else
      {
      op->vtkImageEuclideanDistance::SetAlgorithmToSaito();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEuclideanDistance_SetAlgorithmToSaitoCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlgorithmToSaitoCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanDistance *op = static_cast<vtkImageEuclideanDistance *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAlgorithmToSaitoCached();
      }
    else
      {
      op->vtkImageEuclideanDistance::SetAlgorithmToSaitoCached();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageEuclideanDistance_Methods[] = {
  {(char*)"GetClassName", PyvtkImageEuclideanDistance_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageEuclideanDistance_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageEuclideanDistance_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageEuclideanDistance\nC++: vtkImageEuclideanDistance *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageEuclideanDistance_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageEuclideanDistance\nC++: vtkImageEuclideanDistance *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SplitExtent", PyvtkImageEuclideanDistance_SplitExtent, 1,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: int SplitExtent(int splitExt[6], int startExt[6], int num,\n    int total)\n\nUsed internally for streaming and threads. Splits output update\nextent into num pieces. This method needs to be called num times.\n Results must not overlap for consistent starting extent. \nSubclass can override this method. This method returns the number\nof peices resulting from a successful split.  This can be from 1\nto \"total\". If 1 is returned, the extent cannot be split.\n"},
  {(char*)"SetInitialize", PyvtkImageEuclideanDistance_SetInitialize, 1,
   (char*)"V.SetInitialize(int)\nC++: void SetInitialize(int a)\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {(char*)"GetInitialize", PyvtkImageEuclideanDistance_GetInitialize, 1,
   (char*)"V.GetInitialize() -> int\nC++: int GetInitialize()\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {(char*)"InitializeOn", PyvtkImageEuclideanDistance_InitializeOn, 1,
   (char*)"V.InitializeOn()\nC++: void InitializeOn()\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {(char*)"InitializeOff", PyvtkImageEuclideanDistance_InitializeOff, 1,
   (char*)"V.InitializeOff()\nC++: void InitializeOff()\n\nUsed to set all non-zero voxels to MaximumDistance before\nstarting the distance transformation. Setting Initialize off\nkeeps the current value in the input image as starting point.\nThis allows to superimpose several distance maps.\n"},
  {(char*)"SetConsiderAnisotropy", PyvtkImageEuclideanDistance_SetConsiderAnisotropy, 1,
   (char*)"V.SetConsiderAnisotropy(int)\nC++: void SetConsiderAnisotropy(int a)\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {(char*)"GetConsiderAnisotropy", PyvtkImageEuclideanDistance_GetConsiderAnisotropy, 1,
   (char*)"V.GetConsiderAnisotropy() -> int\nC++: int GetConsiderAnisotropy()\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {(char*)"ConsiderAnisotropyOn", PyvtkImageEuclideanDistance_ConsiderAnisotropyOn, 1,
   (char*)"V.ConsiderAnisotropyOn()\nC++: void ConsiderAnisotropyOn()\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {(char*)"ConsiderAnisotropyOff", PyvtkImageEuclideanDistance_ConsiderAnisotropyOff, 1,
   (char*)"V.ConsiderAnisotropyOff()\nC++: void ConsiderAnisotropyOff()\n\nUsed to define whether Spacing should be used in the computation\nof the distances\n"},
  {(char*)"SetMaximumDistance", PyvtkImageEuclideanDistance_SetMaximumDistance, 1,
   (char*)"V.SetMaximumDistance(float)\nC++: void SetMaximumDistance(double a)\n\nAny distance bigger than this->MaximumDistance will not ne\ncomputed but set to this->MaximumDistance instead.\n"},
  {(char*)"GetMaximumDistance", PyvtkImageEuclideanDistance_GetMaximumDistance, 1,
   (char*)"V.GetMaximumDistance() -> float\nC++: double GetMaximumDistance()\n\nAny distance bigger than this->MaximumDistance will not ne\ncomputed but set to this->MaximumDistance instead.\n"},
  {(char*)"SetAlgorithm", PyvtkImageEuclideanDistance_SetAlgorithm, 1,
   (char*)"V.SetAlgorithm(int)\nC++: void SetAlgorithm(int a)\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {(char*)"GetAlgorithm", PyvtkImageEuclideanDistance_GetAlgorithm, 1,
   (char*)"V.GetAlgorithm() -> int\nC++: int GetAlgorithm()\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {(char*)"SetAlgorithmToSaito", PyvtkImageEuclideanDistance_SetAlgorithmToSaito, 1,
   (char*)"V.SetAlgorithmToSaito()\nC++: void SetAlgorithmToSaito()\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {(char*)"SetAlgorithmToSaitoCached", PyvtkImageEuclideanDistance_SetAlgorithmToSaitoCached, 1,
   (char*)"V.SetAlgorithmToSaitoCached()\nC++: void SetAlgorithmToSaitoCached()\n\nSelects a Euclidean DT algorithm.\n1. Saito\n2. Saito-cached More algorithms will be added later on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageEuclideanDistance_StaticNew()
{
  return vtkImageEuclideanDistance::New();
}

PyObject *PyVTKClass_vtkImageEuclideanDistanceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageEuclideanDistance_StaticNew,
    PyvtkImageEuclideanDistance_Methods,
    "vtkImageEuclideanDistance", modulename,
    NULL, NULL,
    PyvtkImageEuclideanDistance_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageEuclideanDistance_Doc()
{
  static const char *docstring[] = {
    "vtkImageEuclideanDistance - computes 3D Euclidean DT \n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "vtkImageEuclideanDistance implements the Euclidean DT using Saito's\nalgorithm. The distance map produced contains the square of the\nEuclidean distance values.\n\nThe algorithm has a o(n^(D+1)) complexity over nxnx...xn images in D\ndimensions. It is very efficient on relatively small images.\nCuisenaire's algorithms should be used instead if n >> 500. These are\nnot implemented yet.\n\nFor the special ca",
    "se of images where the slice-size is a multiple of\n2^N with a large N (typically for 256x256 slices), Saito's algorithm\nencounters a lot of cache conflicts during the 3rd iteration which\ncan slow it very significantly. In that case, one should use\n::SetAlgorithmToSaitoCached() instead for better performance.\n\nReferences:\n\nT. Saito and J.I. Toriwaki. New algorithms for Euclidean distance\ntransforma",
    "tions of an n-dimensional digitised picture with\napplications. Pattern Recognition, 27(11). pp. 1551--1565, 1994.\n\nO. Cuisenaire. Distance Transformation: fast algorithms and\napplications to medical image processing. PhD Thesis, Universite\ncatholique de Louvain, October 1999.\nhttp://ltswww.epfl.ch/~cuisenai/papers/oc_thesis.pdf\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageEuclideanDistance(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageEuclideanDistanceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageEuclideanDistance", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EDT_SAITO_CACHED", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_EDT_SAITO", o) != 0)
    {
    Py_DECREF(o);
    }

}

