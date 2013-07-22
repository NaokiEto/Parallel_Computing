// python wrapper for vtkCompressCompositer
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
#include "vtkCompressCompositer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompressCompositer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompressCompositer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompressCompositerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompressCompositerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositerNew
extern "C" { PyObject *PyVTKClass_vtkCompositerNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositerNew
#endif

static const char **PyvtkCompressCompositer_Doc();


static PyObject *
PyvtkCompressCompositer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

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
      tempr = op->vtkCompressCompositer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompressCompositer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

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
      tempr = op->vtkCompressCompositer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompressCompositer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

  vtkCompressCompositer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompressCompositer::NewInstance();
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
PyvtkCompressCompositer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompressCompositer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompressCompositer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompressCompositer_CompositeBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompressCompositer *op = static_cast<vtkCompressCompositer *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkFloatArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkFloatArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->CompositeBuffer(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCompressCompositer::CompositeBuffer(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompressCompositer_Compress(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Compress");

  vtkFloatArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkFloatArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
    {
    vtkCompressCompositer::Compress(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompressCompositer_Uncompress(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Uncompress");

  vtkFloatArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkFloatArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  int temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetValue(temp4))
    {
    vtkCompressCompositer::Uncompress(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompressCompositer_CompositeImagePair(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CompositeImagePair");

  vtkFloatArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkFloatArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  vtkFloatArray *temp4 = NULL;
  vtkDataArray *temp5 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetVTKObject(temp5, "vtkDataArray"))
    {
    vtkCompressCompositer::CompositeImagePair(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompressCompositer_Methods[] = {
  {(char*)"GetClassName", PyvtkCompressCompositer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompressCompositer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompressCompositer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompressCompositer\nC++: vtkCompressCompositer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompressCompositer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompressCompositer\nC++: vtkCompressCompositer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CompositeBuffer", PyvtkCompressCompositer_CompositeBuffer, 1,
   (char*)"V.CompositeBuffer(vtkDataArray, vtkFloatArray, vtkDataArray,\n    vtkFloatArray)\nC++: virtual void CompositeBuffer(vtkDataArray *pBuf,\n    vtkFloatArray *zBuf, vtkDataArray *pTmp, vtkFloatArray *zTmp)\n\n"},
  {(char*)"Compress", PyvtkCompressCompositer_Compress, 1,
   (char*)"V.Compress(vtkFloatArray, vtkDataArray, vtkFloatArray,\n    vtkDataArray)\nC++: static void Compress(vtkFloatArray *zIn, vtkDataArray *pIn,\n    vtkFloatArray *zOut, vtkDataArray *pOut)\n\nI am granting access to these methods and making them static So I\ncan create a TileDisplayCompositer which uses compression.\n"},
  {(char*)"Uncompress", PyvtkCompressCompositer_Uncompress, 1,
   (char*)"V.Uncompress(vtkFloatArray, vtkDataArray, vtkFloatArray,\n    vtkDataArray, int)\nC++: static void Uncompress(vtkFloatArray *zIn, vtkDataArray *pIn,\n     vtkFloatArray *zOut, vtkDataArray *pOut, int finalLength)\n\n"},
  {(char*)"CompositeImagePair", PyvtkCompressCompositer_CompositeImagePair, 1,
   (char*)"V.CompositeImagePair(vtkFloatArray, vtkDataArray, vtkFloatArray,\n    vtkDataArray, vtkFloatArray, vtkDataArray)\nC++: static void CompositeImagePair(vtkFloatArray *localZ,\n    vtkDataArray *localP, vtkFloatArray *remoteZ,\n    vtkDataArray *remoteP, vtkFloatArray *outZ,\n    vtkDataArray *outP)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompressCompositer_StaticNew()
{
  return vtkCompressCompositer::New();
}

PyObject *PyVTKClass_vtkCompressCompositerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompressCompositer_StaticNew,
    PyvtkCompressCompositer_Methods,
    "vtkCompressCompositer", modulename,
    NULL, NULL,
    PyvtkCompressCompositer_Doc(),
    PyVTKClass_vtkCompositerNew(modulename));
  return cls;
}

const char **PyvtkCompressCompositer_Doc()
{
  static const char *docstring[] = {
    "vtkCompressCompositer - Implements compressed tree based compositing.\n\n",
    "Superclass: vtkCompositer\n\n",
    "vtkCompressCompositer operates in multiple processes.  Each\ncompositer has a render window.  They use vtkMultiProcessController\nto communicate the color and depth buffer to process 0's render\nwindow. It will not handle transparency.  Compositing is run length\nencoding of background pixels.\n\nSECTION See Also vtkCompositeManager.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompressCompositer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompressCompositerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompressCompositer", o) != 0)
    {
    Py_DECREF(o);
    }

}

