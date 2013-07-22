// python wrapper for vtkAssignCoordinates
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
#include "vtkAssignCoordinates.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAssignCoordinates(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAssignCoordinates(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAssignCoordinatesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAssignCoordinatesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkAssignCoordinates_Doc();


static PyObject *
PyvtkAssignCoordinates_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

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
      tempr = op->vtkAssignCoordinates::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

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
      tempr = op->vtkAssignCoordinates::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  vtkAssignCoordinates *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAssignCoordinates::NewInstance();
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
PyvtkAssignCoordinates_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAssignCoordinates *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAssignCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetXCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXCoordArrayName(temp0);
      }
    else
      {
      op->vtkAssignCoordinates::SetXCoordArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetXCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXCoordArrayName();
      }
    else
      {
      tempr = op->vtkAssignCoordinates::GetXCoordArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetYCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYCoordArrayName(temp0);
      }
    else
      {
      op->vtkAssignCoordinates::SetYCoordArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetYCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYCoordArrayName();
      }
    else
      {
      tempr = op->vtkAssignCoordinates::GetYCoordArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetZCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZCoordArrayName(temp0);
      }
    else
      {
      op->vtkAssignCoordinates::SetZCoordArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetZCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCoordArrayName();
      }
    else
      {
      tempr = op->vtkAssignCoordinates::GetZCoordArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetJitter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJitter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetJitter(temp0);
      }
    else
      {
      op->vtkAssignCoordinates::SetJitter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAssignCoordinates_Methods[] = {
  {(char*)"GetClassName", PyvtkAssignCoordinates_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssignCoordinates_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssignCoordinates_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAssignCoordinates\nC++: vtkAssignCoordinates *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssignCoordinates_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssignCoordinates\nC++: vtkAssignCoordinates *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXCoordArrayName", PyvtkAssignCoordinates_SetXCoordArrayName, 1,
   (char*)"V.SetXCoordArrayName(string)\nC++: void SetXCoordArrayName(char *)\n\nSet the x coordinate array name.\n"},
  {(char*)"GetXCoordArrayName", PyvtkAssignCoordinates_GetXCoordArrayName, 1,
   (char*)"V.GetXCoordArrayName() -> string\nC++: char *GetXCoordArrayName()\n\nSet the x coordinate array name.\n"},
  {(char*)"SetYCoordArrayName", PyvtkAssignCoordinates_SetYCoordArrayName, 1,
   (char*)"V.SetYCoordArrayName(string)\nC++: void SetYCoordArrayName(char *)\n\nSet the y coordinate array name.\n"},
  {(char*)"GetYCoordArrayName", PyvtkAssignCoordinates_GetYCoordArrayName, 1,
   (char*)"V.GetYCoordArrayName() -> string\nC++: char *GetYCoordArrayName()\n\nSet the y coordinate array name.\n"},
  {(char*)"SetZCoordArrayName", PyvtkAssignCoordinates_SetZCoordArrayName, 1,
   (char*)"V.SetZCoordArrayName(string)\nC++: void SetZCoordArrayName(char *)\n\nSet the z coordinate array name.\n"},
  {(char*)"GetZCoordArrayName", PyvtkAssignCoordinates_GetZCoordArrayName, 1,
   (char*)"V.GetZCoordArrayName() -> string\nC++: char *GetZCoordArrayName()\n\nSet the z coordinate array name.\n"},
  {(char*)"SetJitter", PyvtkAssignCoordinates_SetJitter, 1,
   (char*)"V.SetJitter(bool)\nC++: void SetJitter(bool a)\n\nSet if you want a random jitter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssignCoordinates_StaticNew()
{
  return vtkAssignCoordinates::New();
}

PyObject *PyVTKClass_vtkAssignCoordinatesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssignCoordinates_StaticNew,
    PyvtkAssignCoordinates_Methods,
    "vtkAssignCoordinates", modulename,
    NULL, NULL,
    PyvtkAssignCoordinates_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAssignCoordinates_Doc()
{
  static const char *docstring[] = {
    "vtkAssignCoordinates - Given two(or three) arrays take the values\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "Given two(or three) arrays take the values in those arrays and simply\nassign them to the coordinates of the vertices. Yes you could do this\nwith the array calculator, but your mom wears army boots so we're not\ngoing to.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssignCoordinates(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssignCoordinatesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssignCoordinates", o) != 0)
    {
    Py_DECREF(o);
    }

}

