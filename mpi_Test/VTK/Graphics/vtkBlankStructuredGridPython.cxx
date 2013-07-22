// python wrapper for vtkBlankStructuredGrid
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
#include "vtkBlankStructuredGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBlankStructuredGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBlankStructuredGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBlankStructuredGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBlankStructuredGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkBlankStructuredGrid_Doc();


static PyObject *
PyvtkBlankStructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

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
      tempr = op->vtkBlankStructuredGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

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
      tempr = op->vtkBlankStructuredGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  vtkBlankStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::NewInstance();
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
PyvtkBlankStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBlankStructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBlankStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinBlankingValue(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetMinBlankingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinBlankingValue();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetMinBlankingValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxBlankingValue(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetMaxBlankingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxBlankingValue();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetMaxBlankingValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayId(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetArrayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayId();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetArrayId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentMinValue();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentMaxValue();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponent();
      }
    else
      {
      tempr = op->vtkBlankStructuredGrid::GetComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkBlankStructuredGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlankStructuredGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlankStructuredGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBlankStructuredGrid\nC++: vtkBlankStructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlankStructuredGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlankStructuredGrid\nC++: vtkBlankStructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMinBlankingValue", PyvtkBlankStructuredGrid_SetMinBlankingValue, 1,
   (char*)"V.SetMinBlankingValue(float)\nC++: void SetMinBlankingValue(double a)\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"GetMinBlankingValue", PyvtkBlankStructuredGrid_GetMinBlankingValue, 1,
   (char*)"V.GetMinBlankingValue() -> float\nC++: double GetMinBlankingValue()\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"SetMaxBlankingValue", PyvtkBlankStructuredGrid_SetMaxBlankingValue, 1,
   (char*)"V.SetMaxBlankingValue(float)\nC++: void SetMaxBlankingValue(double a)\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"GetMaxBlankingValue", PyvtkBlankStructuredGrid_GetMaxBlankingValue, 1,
   (char*)"V.GetMaxBlankingValue() -> float\nC++: double GetMaxBlankingValue()\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"SetArrayName", PyvtkBlankStructuredGrid_SetArrayName, 1,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {(char*)"GetArrayName", PyvtkBlankStructuredGrid_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {(char*)"SetArrayId", PyvtkBlankStructuredGrid_SetArrayId, 1,
   (char*)"V.SetArrayId(int)\nC++: void SetArrayId(int a)\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {(char*)"GetArrayId", PyvtkBlankStructuredGrid_GetArrayId, 1,
   (char*)"V.GetArrayId() -> int\nC++: int GetArrayId()\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {(char*)"SetComponent", PyvtkBlankStructuredGrid_SetComponent, 1,
   (char*)"V.SetComponent(int)\nC++: void SetComponent(int)\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {(char*)"GetComponentMinValue", PyvtkBlankStructuredGrid_GetComponentMinValue, 1,
   (char*)"V.GetComponentMinValue() -> int\nC++: int GetComponentMinValue()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {(char*)"GetComponentMaxValue", PyvtkBlankStructuredGrid_GetComponentMaxValue, 1,
   (char*)"V.GetComponentMaxValue() -> int\nC++: int GetComponentMaxValue()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {(char*)"GetComponent", PyvtkBlankStructuredGrid_GetComponent, 1,
   (char*)"V.GetComponent() -> int\nC++: int GetComponent()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlankStructuredGrid_StaticNew()
{
  return vtkBlankStructuredGrid::New();
}

PyObject *PyVTKClass_vtkBlankStructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlankStructuredGrid_StaticNew,
    PyvtkBlankStructuredGrid_Methods,
    "vtkBlankStructuredGrid", modulename,
    NULL, NULL,
    PyvtkBlankStructuredGrid_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBlankStructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkBlankStructuredGrid - translate point attribute data into a\nblanking field\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkBlankStructuredGrid is a filter that sets the blanking field in a\nvtkStructuredGrid dataset. The blanking field is set by examining a\nspecified point attribute data array (e.g., scalars) and converting\nvalues in the data array to either a \"1\" (visible) or \"0\" (blanked)\nvalue in the blanking array. The values to be blanked are specified\nby giving a min/max range. All data values in the data arra",
    "y\nindicated and laying within the range specified (inclusive on both\nends) are translated to a \"off\" blanking value.\n\nSee Also:\n\nvtkStructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlankStructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlankStructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlankStructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

