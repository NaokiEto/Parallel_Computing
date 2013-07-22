// python wrapper for vtkContextMapper2D
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
#include "vtkContextMapper2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextMapper2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextMapper2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextMapper2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextMapper2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkContextMapper2D_Doc();


static PyObject *
PyvtkContextMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

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
      tempr = op->vtkContextMapper2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

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
      tempr = op->vtkContextMapper2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  vtkContextMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextMapper2D::NewInstance();
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
PyvtkContextMapper2D_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkContextMapper2D::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextMapper2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkContextMapper2D::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextMapper2D_GetInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContextMapper2D::GetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextMapper2D_GetInputAbstractArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAbstractArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextMapper2D *op = static_cast<vtkContextMapper2D *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputAbstractArrayToProcess(temp0, temp1);
      }
    else
      {
      tempr = op->vtkContextMapper2D::GetInputAbstractArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContextMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkContextMapper2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextMapper2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextMapper2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextMapper2D\nC++: vtkContextMapper2D *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkContextMapper2D_SetInput, 1,
   (char*)"V.SetInput(vtkTable)\nC++: virtual void SetInput(vtkTable *input)\n\nSet/Get the input for this object - only accepts vtkTable as\ninput.\n"},
  {(char*)"GetInput", PyvtkContextMapper2D_GetInput, 1,
   (char*)"V.GetInput() -> vtkTable\nC++: virtual vtkTable *GetInput()\n\nSet/Get the input for this object - only accepts vtkTable as\ninput.\n"},
  {(char*)"GetInputArrayToProcess", PyvtkContextMapper2D_GetInputArrayToProcess, 1,
   (char*)"V.GetInputArrayToProcess(int, vtkDataObject) -> vtkDataArray\nC++: vtkDataArray *GetInputArrayToProcess(int idx,\n    vtkDataObject *input)\n\nMake the arrays accessible to the plot objects.\n"},
  {(char*)"GetInputAbstractArrayToProcess", PyvtkContextMapper2D_GetInputAbstractArrayToProcess, 1,
   (char*)"V.GetInputAbstractArrayToProcess(int, vtkDataObject)\n    -> vtkAbstractArray\nC++: vtkAbstractArray *GetInputAbstractArrayToProcess(int idx,\n    vtkDataObject *input)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextMapper2D_StaticNew()
{
  return vtkContextMapper2D::New();
}

PyObject *PyVTKClass_vtkContextMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextMapper2D_StaticNew,
    PyvtkContextMapper2D_Methods,
    "vtkContextMapper2D", modulename,
    NULL, NULL,
    PyvtkContextMapper2D_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkContextMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkContextMapper2D - Abstract class for 2D context mappers.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "This class provides an abstract base for 2D context mappers. They\ncurrently only accept vtkTable objects as input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

