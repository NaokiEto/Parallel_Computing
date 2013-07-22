// python wrapper for vtkTriangleFilter
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
#include "vtkTriangleFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTriangleFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTriangleFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTriangleFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTriangleFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTriangleFilter_Doc();


static PyObject *
PyvtkTriangleFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

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
      tempr = op->vtkTriangleFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

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
      tempr = op->vtkTriangleFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  vtkTriangleFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTriangleFilter::NewInstance();
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
PyvtkTriangleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTriangleFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassVertsOn();
      }
    else
      {
      op->vtkTriangleFilter::PassVertsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassVertsOff();
      }
    else
      {
      op->vtkTriangleFilter::PassVertsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassVerts(temp0);
      }
    else
      {
      op->vtkTriangleFilter::SetPassVerts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassVerts();
      }
    else
      {
      tempr = op->vtkTriangleFilter::GetPassVerts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassLinesOn();
      }
    else
      {
      op->vtkTriangleFilter::PassLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassLinesOff();
      }
    else
      {
      op->vtkTriangleFilter::PassLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassLines(temp0);
      }
    else
      {
      op->vtkTriangleFilter::SetPassLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassLines();
      }
    else
      {
      tempr = op->vtkTriangleFilter::GetPassLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTriangleFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTriangleFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTriangleFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTriangleFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTriangleFilter\nC++: vtkTriangleFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTriangleFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTriangleFilter\nC++: vtkTriangleFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PassVertsOn", PyvtkTriangleFilter_PassVertsOn, 1,
   (char*)"V.PassVertsOn()\nC++: void PassVertsOn()\n\nTurn on/off passing vertices through filter.\n"},
  {(char*)"PassVertsOff", PyvtkTriangleFilter_PassVertsOff, 1,
   (char*)"V.PassVertsOff()\nC++: void PassVertsOff()\n\nTurn on/off passing vertices through filter.\n"},
  {(char*)"SetPassVerts", PyvtkTriangleFilter_SetPassVerts, 1,
   (char*)"V.SetPassVerts(int)\nC++: void SetPassVerts(int a)\n\nTurn on/off passing vertices through filter.\n"},
  {(char*)"GetPassVerts", PyvtkTriangleFilter_GetPassVerts, 1,
   (char*)"V.GetPassVerts() -> int\nC++: int GetPassVerts()\n\nTurn on/off passing vertices through filter.\n"},
  {(char*)"PassLinesOn", PyvtkTriangleFilter_PassLinesOn, 1,
   (char*)"V.PassLinesOn()\nC++: void PassLinesOn()\n\nTurn on/off passing lines through filter.\n"},
  {(char*)"PassLinesOff", PyvtkTriangleFilter_PassLinesOff, 1,
   (char*)"V.PassLinesOff()\nC++: void PassLinesOff()\n\nTurn on/off passing lines through filter.\n"},
  {(char*)"SetPassLines", PyvtkTriangleFilter_SetPassLines, 1,
   (char*)"V.SetPassLines(int)\nC++: void SetPassLines(int a)\n\nTurn on/off passing lines through filter.\n"},
  {(char*)"GetPassLines", PyvtkTriangleFilter_GetPassLines, 1,
   (char*)"V.GetPassLines() -> int\nC++: int GetPassLines()\n\nTurn on/off passing lines through filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTriangleFilter_StaticNew()
{
  return vtkTriangleFilter::New();
}

PyObject *PyVTKClass_vtkTriangleFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTriangleFilter_StaticNew,
    PyvtkTriangleFilter_Methods,
    "vtkTriangleFilter", modulename,
    NULL, NULL,
    PyvtkTriangleFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTriangleFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTriangleFilter - create triangle polygons from input polygons and\ntriangle strips\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTriangleFilter generates triangles from input polygons and\ntriangle strips. The filter also will pass through vertices and\nlines, if requested.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTriangleFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTriangleFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTriangleFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

