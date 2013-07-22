// python wrapper for vtkLookupTableItem
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
#include "vtkLookupTableItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLookupTableItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLookupTableItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLookupTableItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLookupTableItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
#endif

static const char **PyvtkLookupTableItem_Doc();


static PyObject *
PyvtkLookupTableItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

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
      tempr = op->vtkLookupTableItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

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
      tempr = op->vtkLookupTableItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  vtkLookupTableItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLookupTableItem::NewInstance();
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
PyvtkLookupTableItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLookupTableItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLookupTableItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

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
      op->vtkLookupTableItem::GetBounds(temp0);
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
PyvtkLookupTableItem_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkLookupTableItem::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkLookupTableItem::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLookupTableItem_Methods[] = {
  {(char*)"GetClassName", PyvtkLookupTableItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLookupTableItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLookupTableItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLookupTableItem\nC++: vtkLookupTableItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLookupTableItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLookupTableItem\nC++: vtkLookupTableItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkLookupTableItem_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nReimplemented to return the range of the lookup table\n"},
  {(char*)"SetLookupTable", PyvtkLookupTableItem_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkLookupTable)\nC++: void SetLookupTable(vtkLookupTable *t)\n\n"},
  {(char*)"GetLookupTable", PyvtkLookupTableItem_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLookupTableItem_StaticNew()
{
  return vtkLookupTableItem::New();
}

PyObject *PyVTKClass_vtkLookupTableItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLookupTableItem_StaticNew,
    PyvtkLookupTableItem_Methods,
    "vtkLookupTableItem", modulename,
    NULL, NULL,
    PyvtkLookupTableItem_Doc(),
    PyVTKClass_vtkScalarsToColorsItemNew(modulename));
  return cls;
}

const char **PyvtkLookupTableItem_Doc()
{
  static const char *docstring[] = {
    "vtkLookupTableItem - no description provided.\n\n",
    "Superclass: vtkScalarsToColorsItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLookupTableItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLookupTableItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLookupTableItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

