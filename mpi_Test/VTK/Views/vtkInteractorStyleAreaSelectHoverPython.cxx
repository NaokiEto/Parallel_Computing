// python wrapper for vtkInteractorStyleAreaSelectHover
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
#include "vtkInteractorStyleAreaSelectHover.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleAreaSelectHover(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleAreaSelectHover(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleAreaSelectHoverNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleAreaSelectHoverNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleRubberBand2DNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleRubberBand2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleRubberBand2DNew
#endif

static const char **PyvtkInteractorStyleAreaSelectHover_Doc();


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

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
      tempr = op->vtkInteractorStyleAreaSelectHover::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

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
      tempr = op->vtkInteractorStyleAreaSelectHover::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  vtkInteractorStyleAreaSelectHover *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleAreaSelectHover::NewInstance();
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
PyvtkInteractorStyleAreaSelectHover_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleAreaSelectHover *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleAreaSelectHover::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  vtkAreaLayout *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayout"))
    {
    if (ap.IsBound())
      {
      op->SetLayout(temp0);
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::SetLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  vtkAreaLayout *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayout();
      }
    else
      {
      tempr = op->vtkInteractorStyleAreaSelectHover::GetLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelField(temp0);
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::SetLabelField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelField();
      }
    else
      {
      tempr = op->vtkInteractorStyleAreaSelectHover::GetLabelField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRectangularCoordinates(temp0);
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::SetUseRectangularCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseRectangularCoordinates();
      }
    else
      {
      tempr = op->vtkInteractorStyleAreaSelectHover::GetUseRectangularCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOn();
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::UseRectangularCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOff();
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::UseRectangularCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetHighLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetHighLightColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::SetHighLightColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHighLightWidth(temp0);
      }
    else
      {
      op->vtkInteractorStyleAreaSelectHover::SetHighLightWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHighLightWidth();
      }
    else
      {
      tempr = op->vtkInteractorStyleAreaSelectHover::GetHighLightWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetIdAtPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdAtPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  int temp0;
  int temp1;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIdAtPos(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInteractorStyleAreaSelectHover::GetIdAtPos(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleAreaSelectHover_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleAreaSelectHover_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleAreaSelectHover_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleAreaSelectHover_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleAreaSelectHover\nC++: vtkInteractorStyleAreaSelectHover *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleAreaSelectHover_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleAreaSelectHover\nC++: vtkInteractorStyleAreaSelectHover *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLayout", PyvtkInteractorStyleAreaSelectHover_SetLayout, 1,
   (char*)"V.SetLayout(vtkAreaLayout)\nC++: void SetLayout(vtkAreaLayout *layout)\n\nMust be set to the vtkAreaLayout used to compute the bounds of\neach vertex.\n"},
  {(char*)"GetLayout", PyvtkInteractorStyleAreaSelectHover_GetLayout, 1,
   (char*)"V.GetLayout() -> vtkAreaLayout\nC++: vtkAreaLayout *GetLayout()\n\nMust be set to the vtkAreaLayout used to compute the bounds of\neach vertex.\n"},
  {(char*)"SetLabelField", PyvtkInteractorStyleAreaSelectHover_SetLabelField, 1,
   (char*)"V.SetLabelField(string)\nC++: void SetLabelField(char *)\n\nThe name of the field to use when displaying text in the hover\nballoon.\n"},
  {(char*)"GetLabelField", PyvtkInteractorStyleAreaSelectHover_GetLabelField, 1,
   (char*)"V.GetLabelField() -> string\nC++: char *GetLabelField()\n\nThe name of the field to use when displaying text in the hover\nballoon.\n"},
  {(char*)"SetUseRectangularCoordinates", PyvtkInteractorStyleAreaSelectHover_SetUseRectangularCoordinates, 1,
   (char*)"V.SetUseRectangularCoordinates(bool)\nC++: void SetUseRectangularCoordinates(bool a)\n\nDetermine whether or not to use rectangular coordinates instead\nof polar coordinates.\n"},
  {(char*)"GetUseRectangularCoordinates", PyvtkInteractorStyleAreaSelectHover_GetUseRectangularCoordinates, 1,
   (char*)"V.GetUseRectangularCoordinates() -> bool\nC++: bool GetUseRectangularCoordinates()\n\nDetermine whether or not to use rectangular coordinates instead\nof polar coordinates.\n"},
  {(char*)"UseRectangularCoordinatesOn", PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOn, 1,
   (char*)"V.UseRectangularCoordinatesOn()\nC++: void UseRectangularCoordinatesOn()\n\nDetermine whether or not to use rectangular coordinates instead\nof polar coordinates.\n"},
  {(char*)"UseRectangularCoordinatesOff", PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOff, 1,
   (char*)"V.UseRectangularCoordinatesOff()\nC++: void UseRectangularCoordinatesOff()\n\nDetermine whether or not to use rectangular coordinates instead\nof polar coordinates.\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleAreaSelectHover_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: void OnMouseMove()\n\nOverridden from vtkInteractorStyleImage to provide the desired\ninteraction behavior.\n"},
  {(char*)"SetInteractor", PyvtkInteractorStyleAreaSelectHover_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *rwi)\n\nSet the interactor that this interactor style works with.\n"},
  {(char*)"SetHighLightColor", PyvtkInteractorStyleAreaSelectHover_SetHighLightColor, 1,
   (char*)"V.SetHighLightColor(float, float, float)\nC++: void SetHighLightColor(double r, double g, double b)\n\nSet the color used to highlight the hovered vertex.\n"},
  {(char*)"SetHighLightWidth", PyvtkInteractorStyleAreaSelectHover_SetHighLightWidth, 1,
   (char*)"V.SetHighLightWidth(float)\nC++: void SetHighLightWidth(double lw)\n\nThe width of the line around the hovered vertex.\n"},
  {(char*)"GetHighLightWidth", PyvtkInteractorStyleAreaSelectHover_GetHighLightWidth, 1,
   (char*)"V.GetHighLightWidth() -> float\nC++: double GetHighLightWidth()\n\nThe width of the line around the hovered vertex.\n"},
  {(char*)"GetIdAtPos", PyvtkInteractorStyleAreaSelectHover_GetIdAtPos, 1,
   (char*)"V.GetIdAtPos(int, int) -> int\nC++: vtkIdType GetIdAtPos(int x, int y)\n\nObtain the tree vertex id at the position specified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleAreaSelectHover_StaticNew()
{
  return vtkInteractorStyleAreaSelectHover::New();
}

PyObject *PyVTKClass_vtkInteractorStyleAreaSelectHoverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleAreaSelectHover_StaticNew,
    PyvtkInteractorStyleAreaSelectHover_Methods,
    "vtkInteractorStyleAreaSelectHover", modulename,
    NULL, NULL,
    PyvtkInteractorStyleAreaSelectHover_Doc(),
    PyVTKClass_vtkInteractorStyleRubberBand2DNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleAreaSelectHover_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleAreaSelectHover - An interactor style for an area\ntree view\n\n",
    "Superclass: vtkInteractorStyleRubberBand2D\n\n",
    "The vtkInteractorStyleAreaSelectHover specifically works with\npipelines that create a hierarchical tree.  Such pipelines will have\na vtkAreaLayout filter which must be passed to this interactor style\nfor it to function correctly. This interactor style allows only 2D\npanning and zooming, rubber band selection and provides a balloon\ncontaining the name of the vertex hovered over.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleAreaSelectHover(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleAreaSelectHoverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleAreaSelectHover", o) != 0)
    {
    Py_DECREF(o);
    }

}

