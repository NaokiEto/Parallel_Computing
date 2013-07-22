// python wrapper for vtkCellData
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
#include "vtkCellData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAttributesNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAttributesNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAttributesNew
#endif

static const char **PyvtkCellData_Doc();


static PyObject *
PyvtkCellData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellData *op = static_cast<vtkCellData *>(vp);

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
      tempr = op->vtkCellData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellData *op = static_cast<vtkCellData *>(vp);

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
      tempr = op->vtkCellData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellData *op = static_cast<vtkCellData *>(vp);

  vtkCellData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellData::NewInstance();
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
PyvtkCellData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellData_Methods[] = {
  {(char*)"GetClassName", PyvtkCellData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellData\nC++: vtkCellData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellData\nC++: vtkCellData *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellData_StaticNew()
{
  return vtkCellData::New();
}

PyObject *PyVTKClass_vtkCellDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellData_StaticNew,
    PyvtkCellData_Methods,
    "vtkCellData", modulename,
    NULL, NULL,
    PyvtkCellData_Doc(),
    PyVTKClass_vtkDataSetAttributesNew(modulename));
  return cls;
}

const char **PyvtkCellData_Doc()
{
  static const char *docstring[] = {
    "vtkCellData - represent and manipulate cell attribute data\n\n",
    "Superclass: vtkDataSetAttributes\n\n",
    "vtkCellData is a class that is used to represent and manipulate cell\nattribute data (e.g., scalars, vectors, normals, texture coordinates,\netc.) Special methods are provided to work with filter objects, such\nas passing data through filter, copying data from one cell to\nanother, and interpolating data given cell interpolation weights.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellData", o) != 0)
    {
    Py_DECREF(o);
    }

}

