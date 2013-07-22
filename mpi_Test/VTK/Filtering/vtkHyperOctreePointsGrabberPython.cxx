// python wrapper for vtkHyperOctreePointsGrabber
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
#include "vtkHyperOctreePointsGrabber.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreePointsGrabber(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreePointsGrabber(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreePointsGrabberNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreePointsGrabberNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHyperOctreePointsGrabber_Doc();


static PyObject *
PyvtkHyperOctreePointsGrabber_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

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
      tempr = op->vtkHyperOctreePointsGrabber::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

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
      tempr = op->vtkHyperOctreePointsGrabber::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

  vtkHyperOctreePointsGrabber *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreePointsGrabber::NewInstance();
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
PyvtkHyperOctreePointsGrabber_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

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
      tempr = op->vtkHyperOctreePointsGrabber::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetDimension(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_InitPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->InitPointInsertion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    op->InsertPoint(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_InsertPointWithMerge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPointWithMerge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    op->InsertPointWithMerge(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreePointsGrabber_InsertPoint2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreePointsGrabber *op = static_cast<vtkHyperOctreePointsGrabber *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    op->InsertPoint2D(temp0, temp1);

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
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreePointsGrabber_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreePointsGrabber_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreePointsGrabber_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreePointsGrabber_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreePointsGrabber\nC++: vtkHyperOctreePointsGrabber *NewInstance()\n\n"},
  {(char*)"GetDimension", PyvtkHyperOctreePointsGrabber_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nReturn the dimension of the hyperoctree.\n\\post valid_result: (result==2 || result==3)\n"},
  {(char*)"SetDimension", PyvtkHyperOctreePointsGrabber_SetDimension, 1,
   (char*)"V.SetDimension(int)\nC++: virtual void SetDimension(int dim)\n\nSet the dimension of the hyperoctree.\n\\pre valid_dim: (dim==2 || dim==3)\n\\post is_set: GetDimension()==dim\n"},
  {(char*)"InitPointInsertion", PyvtkHyperOctreePointsGrabber_InitPointInsertion, 1,
   (char*)"V.InitPointInsertion()\nC++: virtual void InitPointInsertion()\n\nInitialize the points insertion scheme. Actually, it is just a\ntrick to initialize the IdSet from the filter. The IdSet class\ncannot be shared with the filter because it is a Pimpl. It is\nused by clip,cut and contour filters to build the points that lie\non an hyperoctant.\n\\pre only_in_3d: GetDimension()==3\n"},
  {(char*)"InsertPoint", PyvtkHyperOctreePointsGrabber_InsertPoint, 1,
   (char*)"V.InsertPoint(int, [float, float, float], [float, float, float],\n    [int, int, int])\nC++: virtual void InsertPoint(vtkIdType ptId, double pt[3],\n    double pcoords[3], int ijk[3])\n\nInsert a point, assuming the point is unique and does not require\na locator. Tt does not mean it does not use a locator. It just\nmean that some implementation may skip the use of a locator.\n"},
  {(char*)"InsertPointWithMerge", PyvtkHyperOctreePointsGrabber_InsertPointWithMerge, 1,
   (char*)"V.InsertPointWithMerge(int, [float, float, float], [float, float,\n    float], [int, int, int])\nC++: virtual void InsertPointWithMerge(vtkIdType ptId,\n    double pt[3], double pcoords[3], int ijk[3])\n\nInsert a point using a locator.\n"},
  {(char*)"InsertPoint2D", PyvtkHyperOctreePointsGrabber_InsertPoint2D, 1,
   (char*)"V.InsertPoint2D([float, float, float], [int, int, int])\nC++: virtual void InsertPoint2D(double pt[3], int ijk[3])\n\nInsert a point in the quadtree case.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHyperOctreePointsGrabberNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHyperOctreePointsGrabber_Methods,
    "vtkHyperOctreePointsGrabber", modulename,
    NULL, NULL,
    PyvtkHyperOctreePointsGrabber_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreePointsGrabber_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreePointsGrabber - An object used by filters to\n\n",
    "Superclass: vtkObject\n\n",
    "See Also:\n\nvtkHyperOctree, vtkHyperOctreeClipCutPointsGrabber,\nvtkClipHyperOctree, vtkHyperOctreeCutter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreePointsGrabber(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreePointsGrabberNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreePointsGrabber", o) != 0)
    {
    Py_DECREF(o);
    }

}

