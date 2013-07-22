// python wrapper for vtkPointPicker
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
#include "vtkPointPicker.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointPicker(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointPicker(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointPickerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointPickerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPickerNew
extern "C" { PyObject *PyVTKClass_vtkPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPickerNew
#endif

static const char **PyvtkPointPicker_Doc();


static PyObject *
PyvtkPointPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

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
      tempr = op->vtkPointPicker::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

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
      tempr = op->vtkPointPicker::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  vtkPointPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointPicker::NewInstance();
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
PyvtkPointPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointPicker *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointId();
      }
    else
      {
      tempr = op->vtkPointPicker::GetPointId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkPointPicker_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointPicker_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointPicker_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointPicker\nC++: vtkPointPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointPicker_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointPicker\nC++: vtkPointPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPointId", PyvtkPointPicker_GetPointId, 1,
   (char*)"V.GetPointId() -> int\nC++: vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointPicker_StaticNew()
{
  return vtkPointPicker::New();
}

PyObject *PyVTKClass_vtkPointPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointPicker_StaticNew,
    PyvtkPointPicker_Methods,
    "vtkPointPicker", modulename,
    NULL, NULL,
    PyvtkPointPicker_Doc(),
    PyVTKClass_vtkPickerNew(modulename));
  return cls;
}

const char **PyvtkPointPicker_Doc()
{
  static const char *docstring[] = {
    "vtkPointPicker - select a point by shooting a ray into a graphics\nwindow\n\n",
    "Superclass: vtkPicker\n\n",
    "See Also:\n\nvtkPicker vtkCellPicker.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

