// python wrapper for vtkChartHistogram2D
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
#include "vtkChartHistogram2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChartHistogram2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChartHistogram2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChartHistogram2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChartHistogram2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkChartXYNew
extern "C" { PyObject *PyVTKClass_vtkChartXYNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartXYNew
#endif

static const char **PyvtkChartHistogram2D_Doc();


static PyObject *
PyvtkChartHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

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
      tempr = op->vtkChartHistogram2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

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
      tempr = op->vtkChartHistogram2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  vtkChartHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChartHistogram2D::NewInstance();
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
PyvtkChartHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkChartHistogram2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkChartHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartHistogram2D::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  vtkImageData *temp0 = NULL;
  vtkIdType temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkChartHistogram2D::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetTransferFunction(temp0);
      }
    else
      {
      op->vtkChartHistogram2D::SetTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkChartHistogram2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartHistogram2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartHistogram2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChartHistogram2D\nC++: vtkChartHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartHistogram2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartHistogram2D\nC++: vtkChartHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartHistogram2D_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"SetInput", PyvtkChartHistogram2D_SetInput, 1,
   (char*)"V.SetInput(vtkImageData, int)\nC++: virtual void SetInput(vtkImageData *data, vtkIdType z=0)\n\n"},
  {(char*)"SetTransferFunction", PyvtkChartHistogram2D_SetTransferFunction, 1,
   (char*)"V.SetTransferFunction(vtkScalarsToColors)\nC++: virtual void SetTransferFunction(\n    vtkScalarsToColors *function)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartHistogram2D_StaticNew()
{
  return vtkChartHistogram2D::New();
}

PyObject *PyVTKClass_vtkChartHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartHistogram2D_StaticNew,
    PyvtkChartHistogram2D_Methods,
    "vtkChartHistogram2D", modulename,
    NULL, NULL,
    PyvtkChartHistogram2D_Doc(),
    PyVTKClass_vtkChartXYNew(modulename));
  return cls;
}

const char **PyvtkChartHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkChart2DHistogram - Chart for 2D histograms.\n\n",
    "Superclass: vtkChartXY\n\n",
    "This defines the interface for a 2D histogram chart.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

