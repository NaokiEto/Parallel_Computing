// python wrapper for vtkButtonRepresentation
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
#include "vtkButtonRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkButtonRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkButtonRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkButtonRepresentation_Doc();


static PyObject *
PyvtkButtonRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

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
      tempr = op->vtkButtonRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

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
      tempr = op->vtkButtonRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  vtkButtonRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkButtonRepresentation::NewInstance();
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
PyvtkButtonRepresentation_SetNumberOfStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfStates(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::SetNumberOfStates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetNumberOfStatesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStatesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfStatesMinValue();
      }
    else
      {
      tempr = op->vtkButtonRepresentation::GetNumberOfStatesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetNumberOfStatesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStatesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfStatesMaxValue();
      }
    else
      {
      tempr = op->vtkButtonRepresentation::GetNumberOfStatesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetState();
      }
    else
      {
      tempr = op->vtkButtonRepresentation::GetState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_SetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetState(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::SetState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_NextState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NextState();
      }
    else
      {
      op->vtkButtonRepresentation::NextState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_PreviousState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreviousState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreviousState();
      }
    else
      {
      op->vtkButtonRepresentation::PreviousState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetHighlightState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighlightState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHighlightState();
      }
    else
      {
      tempr = op->vtkButtonRepresentation::GetHighlightState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkButtonRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkButtonRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkButtonRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkButtonRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkButtonRepresentation\nC++: vtkButtonRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SetNumberOfStates", PyvtkButtonRepresentation_SetNumberOfStates, 1,
   (char*)"V.SetNumberOfStates(int)\nC++: void SetNumberOfStates(int)\n\nRetrieve the current button state.\n"},
  {(char*)"GetNumberOfStatesMinValue", PyvtkButtonRepresentation_GetNumberOfStatesMinValue, 1,
   (char*)"V.GetNumberOfStatesMinValue() -> int\nC++: int GetNumberOfStatesMinValue()\n\nRetrieve the current button state.\n"},
  {(char*)"GetNumberOfStatesMaxValue", PyvtkButtonRepresentation_GetNumberOfStatesMaxValue, 1,
   (char*)"V.GetNumberOfStatesMaxValue() -> int\nC++: int GetNumberOfStatesMaxValue()\n\nRetrieve the current button state.\n"},
  {(char*)"GetState", PyvtkButtonRepresentation_GetState, 1,
   (char*)"V.GetState() -> int\nC++: int GetState()\n\nRetrieve the current button state.\n"},
  {(char*)"SetState", PyvtkButtonRepresentation_SetState, 1,
   (char*)"V.SetState(int)\nC++: virtual void SetState(int state)\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traveral. The \"state\" integral\nvalue will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {(char*)"NextState", PyvtkButtonRepresentation_NextState, 1,
   (char*)"V.NextState()\nC++: virtual void NextState()\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traveral. The \"state\" integral\nvalue will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {(char*)"PreviousState", PyvtkButtonRepresentation_PreviousState, 1,
   (char*)"V.PreviousState()\nC++: virtual void PreviousState()\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traveral. The \"state\" integral\nvalue will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {(char*)"Highlight", PyvtkButtonRepresentation_Highlight, 1,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int)\n\nThese methods control the appearance of the button as it is being\ninteracted with. Subclasses will behave differently depending on\ntheir particulars.  HighlightHovering is used when the mouse\npointer moves over the button. HighlightSelecting is set when the\nbutton is selected. Otherwise, the HighlightNormal is used. The\nHighlight() method will throw a vtkCommand::HighlightEvent.\n"},
  {(char*)"GetHighlightState", PyvtkButtonRepresentation_GetHighlightState, 1,
   (char*)"V.GetHighlightState() -> int\nC++: int GetHighlightState()\n\nThese methods control the appearance of the button as it is being\ninteracted with. Subclasses will behave differently depending on\ntheir particulars.  HighlightHovering is used when the mouse\npointer moves over the button. HighlightSelecting is set when the\nbutton is selected. Otherwise, the HighlightNormal is used. The\nHighlight() method will throw a vtkCommand::HighlightEvent.\n"},
  {(char*)"ShallowCopy", PyvtkButtonRepresentation_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nSatisfy some of vtkProp's API.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkButtonRepresentation_Methods,
    "vtkButtonRepresentation", modulename,
    NULL, NULL,
    PyvtkButtonRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Inside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"HighlightNormal", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"HighlightHovering", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"HighlightSelecting", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkButtonRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkButtonRepresentation - abstract class defines the representation\nfor a vtkButtonWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This abstract class is used to specify how the vtkButtonWidget should\ninteract with representations of the vtkButtonWidget. This class may\nbe subclassed so that alternative representations can be created. The\nclass defines an API, and a default implementation, that the\nvtkButtonWidget interacts with to render itself in the scene.\n\nThe vtkButtonWidget assumes an n-state button so that traveral\nmeth",
    "ods are available for changing, querying and manipulating state.\nDerived classed determine the actual appearance. The state is\nrepresented by an integral value 0<=state<numStates.\n\nTo use this representation, always begin by specifying the number of\nstates. Then follow with the necessary information to represent each\nstate (done through a subclass API).\n\nSee Also:\n\nvtkButtonWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkButtonRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkButtonRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkButtonRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

