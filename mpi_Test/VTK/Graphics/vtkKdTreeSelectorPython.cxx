// python wrapper for vtkKdTreeSelector
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
#include "vtkKdTreeSelector.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkKdTreeSelector(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkKdTreeSelector(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkKdTreeSelectorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkKdTreeSelectorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkKdTreeSelector_Doc();


static PyObject *
PyvtkKdTreeSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

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
      tempr = op->vtkKdTreeSelector::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

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
      tempr = op->vtkKdTreeSelector::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  vtkKdTreeSelector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::NewInstance();
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
PyvtkKdTreeSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkKdTreeSelector *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkKdTreeSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  vtkKdTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdTree"))
    {
    if (ap.IsBound())
      {
      op->SetKdTree(temp0);
      }
    else
      {
      op->vtkKdTreeSelector::SetKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  vtkKdTree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKdTree();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetKdTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSelectionBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetSelectionBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkKdTreeSelector::SetSelectionBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdTreeSelector_SetSelectionBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionBounds(temp0);
      }
    else
      {
      op->vtkKdTreeSelector::SetSelectionBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdTreeSelector_SetSelectionBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkKdTreeSelector_SetSelectionBounds_s1(self, args);
    case 1:
      return PyvtkKdTreeSelector_SetSelectionBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionBounds");
  return NULL;
}



static PyObject *
PyvtkKdTreeSelector_GetSelectionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionBounds();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetSelectionBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSelectionFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionFieldName(temp0);
      }
    else
      {
      op->vtkKdTreeSelector::SetSelectionFieldName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSelectionFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionFieldName();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetSelectionFieldName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSelectionAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionAttribute(temp0);
      }
    else
      {
      op->vtkKdTreeSelector::SetSelectionAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSelectionAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionAttribute();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetSelectionAttribute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSingleSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSingleSelection(temp0);
      }
    else
      {
      op->vtkKdTreeSelector::SetSingleSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSingleSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSingleSelection();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetSingleSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SingleSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleSelectionOn();
      }
    else
      {
      op->vtkKdTreeSelector::SingleSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SingleSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleSelectionOff();
      }
    else
      {
      op->vtkKdTreeSelector::SingleSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSingleSelectionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleSelectionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSingleSelectionThreshold(temp0);
      }
    else
      {
      op->vtkKdTreeSelector::SetSingleSelectionThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSingleSelectionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleSelectionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSingleSelectionThreshold();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetSingleSelectionThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkKdTreeSelector::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTreeSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkKdTreeSelector_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdTreeSelector_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdTreeSelector_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkKdTreeSelector\nC++: vtkKdTreeSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdTreeSelector_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdTreeSelector\nC++: vtkKdTreeSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKdTree", PyvtkKdTreeSelector_SetKdTree, 1,
   (char*)"V.SetKdTree(vtkKdTree)\nC++: void SetKdTree(vtkKdTree *tree)\n\nThe kd-tree to use to find selected ids. The kd-tree must be\ninitialized with the desired set of points. When this is set, the\noptional input is ignored.\n"},
  {(char*)"GetKdTree", PyvtkKdTreeSelector_GetKdTree, 1,
   (char*)"V.GetKdTree() -> vtkKdTree\nC++: vtkKdTree *GetKdTree()\n\nThe kd-tree to use to find selected ids. The kd-tree must be\ninitialized with the desired set of points. When this is set, the\noptional input is ignored.\n"},
  {(char*)"SetSelectionBounds", PyvtkKdTreeSelector_SetSelectionBounds, 1,
   (char*)"V.SetSelectionBounds(float, float, float, float, float, float)\nC++: void SetSelectionBounds(double, double, double, double,\n    double, double)\nV.SetSelectionBounds((float, float, float, float, float, float))\nC++: void SetSelectionBounds(double a[6])\n\n"},
  {(char*)"GetSelectionBounds", PyvtkKdTreeSelector_GetSelectionBounds, 1,
   (char*)"V.GetSelectionBounds() -> (float, float, float, float, float,\n    float)\nC++: double *GetSelectionBounds()\n\n"},
  {(char*)"SetSelectionFieldName", PyvtkKdTreeSelector_SetSelectionFieldName, 1,
   (char*)"V.SetSelectionFieldName(string)\nC++: void SetSelectionFieldName(char *)\n\nThe field name to use when generating the selection. If set,\ncreates a VALUES selection. If not set (or is set to NULL),\ncreates a INDICES selection. By default this is not set.\n"},
  {(char*)"GetSelectionFieldName", PyvtkKdTreeSelector_GetSelectionFieldName, 1,
   (char*)"V.GetSelectionFieldName() -> string\nC++: char *GetSelectionFieldName()\n\nThe field name to use when generating the selection. If set,\ncreates a VALUES selection. If not set (or is set to NULL),\ncreates a INDICES selection. By default this is not set.\n"},
  {(char*)"SetSelectionAttribute", PyvtkKdTreeSelector_SetSelectionAttribute, 1,
   (char*)"V.SetSelectionAttribute(int)\nC++: void SetSelectionAttribute(int a)\n\nThe field attribute to use when generating the selection. If set,\ncreates a PEDIGREEIDS or GLOBALIDS selection. If not set (or is\nset to -1), creates a INDICES selection. By default this is not\nset. NOTE: This should be set a constant in vtkDataSetAttributes,\nnot vtkSelection.\n"},
  {(char*)"GetSelectionAttribute", PyvtkKdTreeSelector_GetSelectionAttribute, 1,
   (char*)"V.GetSelectionAttribute() -> int\nC++: int GetSelectionAttribute()\n\nThe field attribute to use when generating the selection. If set,\ncreates a PEDIGREEIDS or GLOBALIDS selection. If not set (or is\nset to -1), creates a INDICES selection. By default this is not\nset. NOTE: This should be set a constant in vtkDataSetAttributes,\nnot vtkSelection.\n"},
  {(char*)"SetSingleSelection", PyvtkKdTreeSelector_SetSingleSelection, 1,
   (char*)"V.SetSingleSelection(bool)\nC++: void SetSingleSelection(bool a)\n\nWhether to only allow up to one value in the result. The item\nselected is closest to the center of the bounds, if there are any\npoints within the selection threshold. Default is off.\n"},
  {(char*)"GetSingleSelection", PyvtkKdTreeSelector_GetSingleSelection, 1,
   (char*)"V.GetSingleSelection() -> bool\nC++: bool GetSingleSelection()\n\nWhether to only allow up to one value in the result. The item\nselected is closest to the center of the bounds, if there are any\npoints within the selection threshold. Default is off.\n"},
  {(char*)"SingleSelectionOn", PyvtkKdTreeSelector_SingleSelectionOn, 1,
   (char*)"V.SingleSelectionOn()\nC++: void SingleSelectionOn()\n\nWhether to only allow up to one value in the result. The item\nselected is closest to the center of the bounds, if there are any\npoints within the selection threshold. Default is off.\n"},
  {(char*)"SingleSelectionOff", PyvtkKdTreeSelector_SingleSelectionOff, 1,
   (char*)"V.SingleSelectionOff()\nC++: void SingleSelectionOff()\n\nWhether to only allow up to one value in the result. The item\nselected is closest to the center of the bounds, if there are any\npoints within the selection threshold. Default is off.\n"},
  {(char*)"SetSingleSelectionThreshold", PyvtkKdTreeSelector_SetSingleSelectionThreshold, 1,
   (char*)"V.SetSingleSelectionThreshold(float)\nC++: void SetSingleSelectionThreshold(double a)\n\nThe threshold for the single selection. A single point is added\nto the selection if it is within this threshold from the bounds\ncenter. Default is 1.\n"},
  {(char*)"GetSingleSelectionThreshold", PyvtkKdTreeSelector_GetSingleSelectionThreshold, 1,
   (char*)"V.GetSingleSelectionThreshold() -> float\nC++: double GetSingleSelectionThreshold()\n\nThe threshold for the single selection. A single point is added\nto the selection if it is within this threshold from the bounds\ncenter. Default is 1.\n"},
  {(char*)"GetMTime", PyvtkKdTreeSelector_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdTreeSelector_StaticNew()
{
  return vtkKdTreeSelector::New();
}

PyObject *PyVTKClass_vtkKdTreeSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdTreeSelector_StaticNew,
    PyvtkKdTreeSelector_Methods,
    "vtkKdTreeSelector", modulename,
    NULL, NULL,
    PyvtkKdTreeSelector_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkKdTreeSelector_Doc()
{
  static const char *docstring[] = {
    "vtkKdTreeSelector - Selects point ids using a kd-tree.\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "If SetKdTree is used, the filter ignores the input and selects based\non that kd-tree.  If SetKdTree is not used, the filter builds a\nkd-tree using the input point set and uses that tree for selection. \nThe output is a vtkSelection containing the ids found in the kd-tree\nusing the specified bounds.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdTreeSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdTreeSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdTreeSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

