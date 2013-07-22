// python wrapper for vtkPointData
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
#include "vtkPointData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAttributesNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAttributesNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAttributesNew
#endif

static const char **PyvtkPointData_Doc();


static PyObject *
PyvtkPointData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

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
      tempr = op->vtkPointData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

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
      tempr = op->vtkPointData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

  vtkPointData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointData::NewInstance();
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
PyvtkPointData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointData_NullPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NullPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointData *op = static_cast<vtkPointData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->NullPoint(temp0);
      }
    else
      {
      op->vtkPointData::NullPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointData_Methods[] = {
  {(char*)"GetClassName", PyvtkPointData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointData\nC++: vtkPointData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointData\nC++: vtkPointData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NullPoint", PyvtkPointData_NullPoint, 1,
   (char*)"V.NullPoint(int)\nC++: void NullPoint(vtkIdType ptId)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointData_StaticNew()
{
  return vtkPointData::New();
}

PyObject *PyVTKClass_vtkPointDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointData_StaticNew,
    PyvtkPointData_Methods,
    "vtkPointData", modulename,
    NULL, NULL,
    PyvtkPointData_Doc(),
    PyVTKClass_vtkDataSetAttributesNew(modulename));
  return cls;
}

const char **PyvtkPointData_Doc()
{
  static const char *docstring[] = {
    "vtkPointData - represent and manipulate point attribute data\n\n",
    "Superclass: vtkDataSetAttributes\n\n",
    "vtkPointData is a class that is used to represent and manipulate\npoint attribute data (e.g., scalars, vectors, normals, texture\ncoordinates, etc.) Most of the functionality is handled by\nvtkDataSetAttributes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointData", o) != 0)
    {
    Py_DECREF(o);
    }

}

