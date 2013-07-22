// python wrapper for vtkPainter
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
#include "vtkPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPainter_Doc();


static PyObject *
PyvtkPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

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
      tempr = op->vtkPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

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
      tempr = op->vtkPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPainter::NewInstance();
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
PyvtkPainter_STATIC_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "STATIC_DATA");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkPainter::STATIC_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_CONSERVE_MEMORY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONSERVE_MEMORY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkPainter::CONSERVE_MEMORY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_HIGH_QUALITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIGH_QUALITY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkPainter::HIGH_QUALITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInformation();
      }
    else
      {
      tempr = op->vtkPainter::GetInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInformation(temp0);
      }
    else
      {
      op->vtkPainter::SetInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetDelegatePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDelegatePainter();
      }
    else
      {
      tempr = op->vtkPainter::GetDelegatePainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_SetDelegatePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPainter"))
    {
    if (ap.IsBound())
      {
      op->SetDelegatePainter(temp0);
      }
    else
      {
      op->vtkPainter::SetDelegatePainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  unsigned long temp2;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPainter::Render(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_SetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgress(temp0);
      }
    else
      {
      op->vtkPainter::SetProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetProgressMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgressMinValue();
      }
    else
      {
      tempr = op->vtkPainter::GetProgressMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetProgressMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgressMaxValue();
      }
    else
      {
      tempr = op->vtkPainter::GetProgressMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgress();
      }
    else
      {
      tempr = op->vtkPainter::GetProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeToDraw();
      }
    else
      {
      tempr = op->vtkPainter::GetTimeToDraw();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_UpdateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->UpdateBounds(temp0);
      }
    else
      {
      op->vtkPainter::UpdateBounds(temp0);
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
PyvtkPainter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPainter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkPainter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainter *op = static_cast<vtkPainter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkPainter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPainter\nC++: vtkPainter *NewInstance()\n\n"},
  {(char*)"STATIC_DATA", PyvtkPainter_STATIC_DATA, 1,
   (char*)"V.STATIC_DATA() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *STATIC_DATA()\n\nKeys used to specify control the behaviour of the painter. When\non, the painter assumes that the poly data changes infrequently.\nIt is thus more likely to take time and memory to build auxiliary\ndata structures for faster frame rates.  Is off by default.\n"},
  {(char*)"CONSERVE_MEMORY", PyvtkPainter_CONSERVE_MEMORY, 1,
   (char*)"V.CONSERVE_MEMORY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONSERVE_MEMORY()\n\nKeys used to specify control the behaviour of the painter. When\non, the painter avoids using more memory than it has to.  Thus,\nauxiliary data structures for faster rendering may not be built. \nIs off by default.\n"},
  {(char*)"HIGH_QUALITY", PyvtkPainter_HIGH_QUALITY, 1,
   (char*)"V.HIGH_QUALITY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIGH_QUALITY()\n\nKeys used to specify control the behaviour of the painter. When\noff, the painter may make approximations that will make the\nrendering go faster but may degrade image quality.  Is on by\ndefault.\n"},
  {(char*)"GetInformation", PyvtkPainter_GetInformation, 1,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nGet/Set the information object associated with this painter.\n"},
  {(char*)"SetInformation", PyvtkPainter_SetInformation, 1,
   (char*)"V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nGet/Set the information object associated with this painter.\n"},
  {(char*)"GetDelegatePainter", PyvtkPainter_GetDelegatePainter, 1,
   (char*)"V.GetDelegatePainter() -> vtkPainter\nC++: vtkPainter *GetDelegatePainter()\n\nSet/Get the painter to which this painter should propagare its\ndraw calls.\n"},
  {(char*)"SetDelegatePainter", PyvtkPainter_SetDelegatePainter, 1,
   (char*)"V.SetDelegatePainter(vtkPainter)\nC++: virtual void SetDelegatePainter(vtkPainter *)\n\nSet/Get the painter to which this painter should propagare its\ndraw calls.\n"},
  {(char*)"Render", PyvtkPainter_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkActor, int, bool)\nC++: virtual void Render(vtkRenderer *renderer, vtkActor *actor,\n    unsigned long typeflags, bool forceCompileOnly)\n\nGenerates rendering primitives of appropriate type(s). Multiple\ntypes of primitives can be requested by or-ring the primitive\nflags. Default implementation calls UpdateDelegatePainter() to\nupdate the deletagate painter and then calls RenderInternal().\nforceCompileOnly is passed to the display list painters.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPainter_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\npainter. The parameter window could be used to determine which\ngraphic resources to release. The call is propagated to the\ndelegate painter, if any.\n"},
  {(char*)"SetProgress", PyvtkPainter_SetProgress, 1,
   (char*)"V.SetProgress(float)\nC++: void SetProgress(double)\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgressMinValue", PyvtkPainter_GetProgressMinValue, 1,
   (char*)"V.GetProgressMinValue() -> float\nC++: double GetProgressMinValue()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgressMaxValue", PyvtkPainter_GetProgressMaxValue, 1,
   (char*)"V.GetProgressMaxValue() -> float\nC++: double GetProgressMaxValue()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgress", PyvtkPainter_GetProgress, 1,
   (char*)"V.GetProgress() -> float\nC++: double GetProgress()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetTimeToDraw", PyvtkPainter_GetTimeToDraw, 1,
   (char*)"V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nGet the time required to draw the geometry last time it was\nrendered. Default implementation adds the current TimeToDraw with\nthat of the delegate painter.\n"},
  {(char*)"UpdateBounds", PyvtkPainter_UpdateBounds, 1,
   (char*)"V.UpdateBounds([float, float, float, float, float, float])\nC++: virtual void UpdateBounds(double bounds[6])\n\nExpand or shrink the estimated bounds of the object based on the\ngeometric transformations performed in the painter. If the\npainter does not modify the geometry, the bounds are passed\nthrough.\n"},
  {(char*)"SetInput", PyvtkPainter_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\n\nSet the data object to paint. Currently we only support one data\nobject per painter chain.\n"},
  {(char*)"GetInput", PyvtkPainter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nSet the data object to paint. Currently we only support one data\nobject per painter chain.\n"},
  {(char*)"GetOutput", PyvtkPainter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: virtual vtkDataObject *GetOutput()\n\nGet the output data object from this painter. The default\nimplementation simply forwards the input data object as the\noutput.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPainter_Methods,
    "vtkPainter", modulename,
    NULL, NULL,
    PyvtkPainter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0x1);
    if (o && PyDict_SetItemString(d, (char *)"VERTS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x2);
    if (o && PyDict_SetItemString(d, (char *)"LINES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x4);
    if (o && PyDict_SetItemString(d, (char *)"POLYS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x8);
    if (o && PyDict_SetItemString(d, (char *)"STRIPS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPainter_Doc()
{
  static const char *docstring[] = {
    "vtkPainter - Abstract class for drawing poly data.\n\n",
    "Superclass: vtkObject\n\n",
    "This defines the interface for a Painter. Painters are helpers used\nby Mapper to perform the rendering. The mapper sets up a chain of\npainters and passes the render request to the painter. Every painter\nmay have a delegate painter to which the render request is forwarded.\nThe Painter may modify the request or data before passing it to the\ndelegate painter. All the information to control the render",
    "ing must\nbe passed to the painter using the vtkInformation object. A concrete\npainter may read special keys from the vtkInformation object and\naffect the rendering.\n\nSee Also:\n\nvtkPainterPolyDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

