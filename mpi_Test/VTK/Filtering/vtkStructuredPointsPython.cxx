// python wrapper for vtkStructuredPoints
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
#include "vtkStructuredPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDataNew
extern "C" { PyObject *PyVTKClass_vtkImageDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataNew
#endif

static const char **PyvtkStructuredPoints_Doc();


static PyObject *
PyvtkStructuredPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

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
      tempr = op->vtkStructuredPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

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
      tempr = op->vtkStructuredPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPoints::NewInstance();
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
PyvtkStructuredPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPoints_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkStructuredPoints::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPoints\nC++: vtkStructuredPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPoints\nC++: vtkStructuredPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkStructuredPoints_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nTo simplify filter superclasses,\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPoints_StaticNew()
{
  return vtkStructuredPoints::New();
}

PyObject *PyVTKClass_vtkStructuredPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPoints_StaticNew,
    PyvtkStructuredPoints_Methods,
    "vtkStructuredPoints", modulename,
    NULL, NULL,
    PyvtkStructuredPoints_Doc(),
    PyVTKClass_vtkImageDataNew(modulename));
  return cls;
}

const char **PyvtkStructuredPoints_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPoints - A subclass of ImageData.\n\n",
    "Superclass: vtkImageData\n\n",
    "StructuredPoints is a subclass of ImageData that requires the data\nextent to exactly match the update extent. Normall image data allows\nthat the data extent may be larger than the update extent.\nStructuredPoints also defines the origin differently that\nvtkImageData. For structured points the origin is the location of\nfirst point. Whereas images define the origin as the location of\npoint 0, 0, 0. I",
    "mage Origin is stored in ivar, and structured points\nhave special methods for setting/getting the origin/extents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

