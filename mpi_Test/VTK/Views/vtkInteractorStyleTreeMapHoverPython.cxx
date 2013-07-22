// python wrapper for vtkInteractorStyleTreeMapHover
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
#include "vtkInteractorStyleTreeMapHover.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleTreeMapHover(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleTreeMapHover(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleTreeMapHoverNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTreeMapHoverNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleImageNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleImageNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleImageNew
#endif

static const char **PyvtkInteractorStyleTreeMapHover_Doc();


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      tempr = op->vtkInteractorStyleTreeMapHover::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      tempr = op->vtkInteractorStyleTreeMapHover::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkInteractorStyleTreeMapHover *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleTreeMapHover::NewInstance();
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
PyvtkInteractorStyleTreeMapHover_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleTreeMapHover *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleTreeMapHover::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkTreeMapLayout *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTreeMapLayout"))
    {
    if (ap.IsBound())
      {
      op->SetLayout(temp0);
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::SetLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkTreeMapLayout *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayout();
      }
    else
      {
      tempr = op->vtkInteractorStyleTreeMapHover::GetLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetTreeMapToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeMapToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkTreeMapToPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTreeMapToPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetTreeMapToPolyData(temp0);
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::SetTreeMapToPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetTreeMapToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeMapToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkTreeMapToPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTreeMapToPolyData();
      }
    else
      {
      tempr = op->vtkInteractorStyleTreeMapHover::GetTreeMapToPolyData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->vtkInteractorStyleTreeMapHover::SetLabelField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      tempr = op->vtkInteractorStyleTreeMapHover::GetLabelField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_HighLightItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighLightItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->HighLightItem(temp0);
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::HighLightItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_HighLightCurrentSelectedItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighLightCurrentSelectedItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HighLightCurrentSelectedItem();
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::HighLightCurrentSelectedItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->vtkInteractorStyleTreeMapHover::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetHighLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->vtkInteractorStyleTreeMapHover::SetHighLightColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetSelectionLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->SetSelectionLightColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::SetSelectionLightColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      op->vtkInteractorStyleTreeMapHover::SetHighLightWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

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
      tempr = op->vtkInteractorStyleTreeMapHover::GetHighLightWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_SetSelectionWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionWidth(temp0);
      }
    else
      {
      op->vtkInteractorStyleTreeMapHover::SetSelectionWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTreeMapHover_GetSelectionWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTreeMapHover *op = static_cast<vtkInteractorStyleTreeMapHover *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionWidth();
      }
    else
      {
      tempr = op->vtkInteractorStyleTreeMapHover::GetSelectionWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTreeMapHover_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleTreeMapHover_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleTreeMapHover_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleTreeMapHover_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleTreeMapHover\nC++: vtkInteractorStyleTreeMapHover *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleTreeMapHover_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleTreeMapHover\nC++: vtkInteractorStyleTreeMapHover *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLayout", PyvtkInteractorStyleTreeMapHover_SetLayout, 1,
   (char*)"V.SetLayout(vtkTreeMapLayout)\nC++: void SetLayout(vtkTreeMapLayout *layout)\n\nMust be set to the vtkTreeMapLayout used to compute the bounds of\neach vertex for the tree map.\n"},
  {(char*)"GetLayout", PyvtkInteractorStyleTreeMapHover_GetLayout, 1,
   (char*)"V.GetLayout() -> vtkTreeMapLayout\nC++: vtkTreeMapLayout *GetLayout()\n\nMust be set to the vtkTreeMapLayout used to compute the bounds of\neach vertex for the tree map.\n"},
  {(char*)"SetTreeMapToPolyData", PyvtkInteractorStyleTreeMapHover_SetTreeMapToPolyData, 1,
   (char*)"V.SetTreeMapToPolyData(vtkTreeMapToPolyData)\nC++: void SetTreeMapToPolyData(vtkTreeMapToPolyData *filter)\n\nMust be set to the vtkTreeMapToPolyData used to convert the tree\nmap into polydata.\n"},
  {(char*)"GetTreeMapToPolyData", PyvtkInteractorStyleTreeMapHover_GetTreeMapToPolyData, 1,
   (char*)"V.GetTreeMapToPolyData() -> vtkTreeMapToPolyData\nC++: vtkTreeMapToPolyData *GetTreeMapToPolyData()\n\nMust be set to the vtkTreeMapToPolyData used to convert the tree\nmap into polydata.\n"},
  {(char*)"SetLabelField", PyvtkInteractorStyleTreeMapHover_SetLabelField, 1,
   (char*)"V.SetLabelField(string)\nC++: void SetLabelField(char *)\n\nThe name of the field to use when displaying text in the hover\nballoon.\n"},
  {(char*)"GetLabelField", PyvtkInteractorStyleTreeMapHover_GetLabelField, 1,
   (char*)"V.GetLabelField() -> string\nC++: char *GetLabelField()\n\nThe name of the field to use when displaying text in the hover\nballoon.\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleTreeMapHover_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: void OnMouseMove()\n\nOverridden from vtkInteractorStyleImage to provide the desired\ninteraction behavior.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleTreeMapHover_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: void OnLeftButtonUp()\n\nOverridden from vtkInteractorStyleImage to provide the desired\ninteraction behavior.\n"},
  {(char*)"HighLightItem", PyvtkInteractorStyleTreeMapHover_HighLightItem, 1,
   (char*)"V.HighLightItem(int)\nC++: void HighLightItem(vtkIdType id)\n\nHighlights a specific vertex.\n"},
  {(char*)"HighLightCurrentSelectedItem", PyvtkInteractorStyleTreeMapHover_HighLightCurrentSelectedItem, 1,
   (char*)"V.HighLightCurrentSelectedItem()\nC++: void HighLightCurrentSelectedItem()\n\nHighlights a specific vertex.\n"},
  {(char*)"SetInteractor", PyvtkInteractorStyleTreeMapHover_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *rwi)\n\n"},
  {(char*)"SetHighLightColor", PyvtkInteractorStyleTreeMapHover_SetHighLightColor, 1,
   (char*)"V.SetHighLightColor(float, float, float)\nC++: void SetHighLightColor(double r, double g, double b)\n\nSet the color used to highlight the hovered vertex.\n"},
  {(char*)"SetSelectionLightColor", PyvtkInteractorStyleTreeMapHover_SetSelectionLightColor, 1,
   (char*)"V.SetSelectionLightColor(float, float, float)\nC++: void SetSelectionLightColor(double r, double g, double b)\n\nSet the color used to highlight the selected vertex.\n"},
  {(char*)"SetHighLightWidth", PyvtkInteractorStyleTreeMapHover_SetHighLightWidth, 1,
   (char*)"V.SetHighLightWidth(float)\nC++: void SetHighLightWidth(double lw)\n\nThe width of the line around the hovered vertex.\n"},
  {(char*)"GetHighLightWidth", PyvtkInteractorStyleTreeMapHover_GetHighLightWidth, 1,
   (char*)"V.GetHighLightWidth() -> float\nC++: double GetHighLightWidth()\n\nThe width of the line around the hovered vertex.\n"},
  {(char*)"SetSelectionWidth", PyvtkInteractorStyleTreeMapHover_SetSelectionWidth, 1,
   (char*)"V.SetSelectionWidth(float)\nC++: void SetSelectionWidth(double lw)\n\nThe width of the line around the selected vertex.\n"},
  {(char*)"GetSelectionWidth", PyvtkInteractorStyleTreeMapHover_GetSelectionWidth, 1,
   (char*)"V.GetSelectionWidth() -> float\nC++: double GetSelectionWidth()\n\nThe width of the line around the selected vertex.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleTreeMapHover_StaticNew()
{
  return vtkInteractorStyleTreeMapHover::New();
}

PyObject *PyVTKClass_vtkInteractorStyleTreeMapHoverNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleTreeMapHover_StaticNew,
    PyvtkInteractorStyleTreeMapHover_Methods,
    "vtkInteractorStyleTreeMapHover", modulename,
    NULL, NULL,
    PyvtkInteractorStyleTreeMapHover_Doc(),
    PyVTKClass_vtkInteractorStyleImageNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleTreeMapHover_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleTreeMapHover - An interactor style for a tree map\nview\n\n",
    "Superclass: vtkInteractorStyleImage\n\n",
    "The vtkInteractorStyleTreeMapHover specifically works with pipelines\nthat create a tree map.  Such pipelines will have a vtkTreeMapLayout\nfilter and a vtkTreeMapToPolyData filter, both of which must be\npassed to this interactor style for it to function correctly. This\ninteractor style allows only 2D panning and zooming, and additionally\nprovides a balloon containing the name of the vertex hovered ",
    "over,\nand allows the user to highlight a vertex by clicking on it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleTreeMapHover(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleTreeMapHoverNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleTreeMapHover", o) != 0)
    {
    Py_DECREF(o);
    }

}

