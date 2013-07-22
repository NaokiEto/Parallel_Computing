// python wrapper for vtkPlotHistogram2D
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
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkPlotHistogram2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotHistogram2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotHistogram2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotHistogram2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotHistogram2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotHistogram2D_Doc();


static PyObject *
PyvtkPlotHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      tempr = op->vtkPlotHistogram2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      tempr = op->vtkPlotHistogram2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkPlotHistogram2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotHistogram2D::NewInstance();
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
PyvtkPlotHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotHistogram2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotHistogram2D::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkPlotHistogram2D::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      op->vtkPlotHistogram2D::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotHistogram2D_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      op->vtkPlotHistogram2D::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotHistogram2D_SetInput_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlotHistogram2D::SetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotHistogram2D_SetInput_Methods[] = {
  {NULL, PyvtkPlotHistogram2D_SetInput_s1, 1,
   (char*)"@O|L *vtkImageData"},
  {NULL, PyvtkPlotHistogram2D_SetInput_s2, 1,
   (char*)"@O *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotHistogram2D_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotHistogram2D_SetInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPlotHistogram2D_SetInput_s1(self, args);
    case 3:
      return PyvtkPlotHistogram2D_SetInput_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkPlotHistogram2D_GetInputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputImageData();
      }
    else
      {
      tempr = op->vtkPlotHistogram2D::GetInputImageData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

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
      op->vtkPlotHistogram2D::SetTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransferFunction();
      }
    else
      {
      tempr = op->vtkPlotHistogram2D::GetTransferFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPlotHistogram2D::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    if (ap.IsBound())
      {
      op->SetPosition(*temp0);
      }
    else
      {
      op->vtkPlotHistogram2D::SetPosition(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotHistogram2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotHistogram2D *op = static_cast<vtkPlotHistogram2D *>(vp);

  vtkRectf tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkPlotHistogram2D::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotHistogram2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotHistogram2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotHistogram2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotHistogram2D\nC++: vtkPlotHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotHistogram2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotHistogram2D\nC++: vtkPlotHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPlotHistogram2D_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotHistogram2D_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever it needs to be drawn.\n"},
  {(char*)"SetInput", PyvtkPlotHistogram2D_SetInput, 1,
   (char*)"V.SetInput(vtkImageData, int)\nC++: virtual void SetInput(vtkImageData *data, vtkIdType z=0)\nV.SetInput(vtkTable)\nC++: virtual void SetInput(vtkTable *)\nV.SetInput(vtkTable, string, string)\nC++: virtual void SetInput(vtkTable *, const vtkStdString &,\n    const vtkStdString &)\n\nSet the input, we are expecting a vtkImageData with just one\ncomponent, this would normally be a float or a double. It will be\npassed to the other functions as a double to generate a color.\n"},
  {(char*)"GetInputImageData", PyvtkPlotHistogram2D_GetInputImageData, 1,
   (char*)"V.GetInputImageData() -> vtkImageData\nC++: vtkImageData *GetInputImageData()\n\nGet the input table used by the plot.\n"},
  {(char*)"SetTransferFunction", PyvtkPlotHistogram2D_SetTransferFunction, 1,
   (char*)"V.SetTransferFunction(vtkScalarsToColors)\nC++: void SetTransferFunction(vtkScalarsToColors *transfer)\n\nSet the color transfer funtion that will be used to generate the\n2D histogram.\n"},
  {(char*)"GetTransferFunction", PyvtkPlotHistogram2D_GetTransferFunction, 1,
   (char*)"V.GetTransferFunction() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetTransferFunction()\n\nGet the color transfer function that is used to generate the\nhistogram.\n"},
  {(char*)"GetBounds", PyvtkPlotHistogram2D_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\n"},
  {(char*)"SetPosition", PyvtkPlotHistogram2D_SetPosition, 1,
   (char*)"V.SetPosition(vtkRectf)\nC++: virtual void SetPosition(const vtkRectf &pos)\n\n"},
  {(char*)"GetPosition", PyvtkPlotHistogram2D_GetPosition, 1,
   (char*)"V.GetPosition() -> vtkRectf\nC++: virtual vtkRectf GetPosition()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotHistogram2D_StaticNew()
{
  return vtkPlotHistogram2D::New();
}

PyObject *PyVTKClass_vtkPlotHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotHistogram2D_StaticNew,
    PyvtkPlotHistogram2D_Methods,
    "vtkPlotHistogram2D", modulename,
    NULL, NULL,
    PyvtkPlotHistogram2D_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkPlotHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtk2DHistogramItem - 2D histogram item.\n\n",
    "Superclass: vtkPlot\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

