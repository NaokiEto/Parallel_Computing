// python wrapper for vtkExtractSelectedRows
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
#include "vtkExtractSelectedRows.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectedRows(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectedRows(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectedRowsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectedRowsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkExtractSelectedRows_Doc();


static PyObject *
PyvtkExtractSelectedRows_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

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
      tempr = op->vtkExtractSelectedRows::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

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
      tempr = op->vtkExtractSelectedRows::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  vtkExtractSelectedRows *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectedRows::NewInstance();
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
PyvtkExtractSelectedRows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelectedRows *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelectedRows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkExtractSelectedRows::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SetAnnotationLayersConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLayersConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLayersConnection(temp0);
      }
    else
      {
      op->vtkExtractSelectedRows::SetAnnotationLayersConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExtractSelectedRows::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SetAddOriginalRowIdsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddOriginalRowIdsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddOriginalRowIdsArray(temp0);
      }
    else
      {
      op->vtkExtractSelectedRows::SetAddOriginalRowIdsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_GetAddOriginalRowIdsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddOriginalRowIdsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAddOriginalRowIdsArray();
      }
    else
      {
      tempr = op->vtkExtractSelectedRows::GetAddOriginalRowIdsArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalRowIdsArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddOriginalRowIdsArrayOn();
      }
    else
      {
      op->vtkExtractSelectedRows::AddOriginalRowIdsArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalRowIdsArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddOriginalRowIdsArrayOff();
      }
    else
      {
      op->vtkExtractSelectedRows::AddOriginalRowIdsArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedRows_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedRows_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedRows_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedRows_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectedRows\nC++: vtkExtractSelectedRows *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedRows_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedRows\nC++: vtkExtractSelectedRows *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSelectionConnection", PyvtkExtractSelectedRows_SetSelectionConnection, 1,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\nselection).\n"},
  {(char*)"SetAnnotationLayersConnection", PyvtkExtractSelectedRows_SetAnnotationLayersConnection, 1,
   (char*)"V.SetAnnotationLayersConnection(vtkAlgorithmOutput)\nC++: void SetAnnotationLayersConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the third input (i.e. the\nannotation layers).\n"},
  {(char*)"FillInputPortInformation", PyvtkExtractSelectedRows_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSpecify the first vtkGraph input and the second vtkSelection\ninput.\n"},
  {(char*)"SetAddOriginalRowIdsArray", PyvtkExtractSelectedRows_SetAddOriginalRowIdsArray, 1,
   (char*)"V.SetAddOriginalRowIdsArray(bool)\nC++: void SetAddOriginalRowIdsArray(bool a)\n\nWhen set, a column named vtkOriginalRowIds will be added to the\noutput. False by default.\n"},
  {(char*)"GetAddOriginalRowIdsArray", PyvtkExtractSelectedRows_GetAddOriginalRowIdsArray, 1,
   (char*)"V.GetAddOriginalRowIdsArray() -> bool\nC++: bool GetAddOriginalRowIdsArray()\n\nWhen set, a column named vtkOriginalRowIds will be added to the\noutput. False by default.\n"},
  {(char*)"AddOriginalRowIdsArrayOn", PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOn, 1,
   (char*)"V.AddOriginalRowIdsArrayOn()\nC++: void AddOriginalRowIdsArrayOn()\n\nWhen set, a column named vtkOriginalRowIds will be added to the\noutput. False by default.\n"},
  {(char*)"AddOriginalRowIdsArrayOff", PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOff, 1,
   (char*)"V.AddOriginalRowIdsArrayOff()\nC++: void AddOriginalRowIdsArrayOff()\n\nWhen set, a column named vtkOriginalRowIds will be added to the\noutput. False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedRows_StaticNew()
{
  return vtkExtractSelectedRows::New();
}

PyObject *PyVTKClass_vtkExtractSelectedRowsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedRows_StaticNew,
    PyvtkExtractSelectedRows_Methods,
    "vtkExtractSelectedRows", modulename,
    NULL, NULL,
    PyvtkExtractSelectedRows_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedRows_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedRows - return selected rows of a table\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "The first input is a vtkTable to extract rows from. The second input\nis a vtkSelection containing the selected indices. The third input is\na vtkAnnotationLayers containing selected indices. The field type of\nthe input selection is ignored when converted to row indices.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedRows(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedRowsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedRows", o) != 0)
    {
    Py_DECREF(o);
    }

}

