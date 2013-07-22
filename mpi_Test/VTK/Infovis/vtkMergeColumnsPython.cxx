// python wrapper for vtkMergeColumns
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
#include "vtkMergeColumns.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMergeColumns(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMergeColumns(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMergeColumnsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMergeColumnsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkMergeColumns_Doc();


static PyObject *
PyvtkMergeColumns_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

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
      tempr = op->vtkMergeColumns::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

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
      tempr = op->vtkMergeColumns::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  vtkMergeColumns *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMergeColumns::NewInstance();
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
PyvtkMergeColumns_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMergeColumns *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMergeColumns::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_SetMergedColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergedColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergedColumnName(temp0);
      }
    else
      {
      op->vtkMergeColumns::SetMergedColumnName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_GetMergedColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergedColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergedColumnName();
      }
    else
      {
      tempr = op->vtkMergeColumns::GetMergedColumnName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeColumns_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeColumns_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeColumns_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeColumns_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMergeColumns\nC++: vtkMergeColumns *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeColumns_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeColumns\nC++: vtkMergeColumns *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMergedColumnName", PyvtkMergeColumns_SetMergedColumnName, 1,
   (char*)"V.SetMergedColumnName(string)\nC++: void SetMergedColumnName(char *)\n\nThe name to give the merged column created by this filter.\n"},
  {(char*)"GetMergedColumnName", PyvtkMergeColumns_GetMergedColumnName, 1,
   (char*)"V.GetMergedColumnName() -> string\nC++: char *GetMergedColumnName()\n\nThe name to give the merged column created by this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeColumns_StaticNew()
{
  return vtkMergeColumns::New();
}

PyObject *PyVTKClass_vtkMergeColumnsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeColumns_StaticNew,
    PyvtkMergeColumns_Methods,
    "vtkMergeColumns", modulename,
    NULL, NULL,
    PyvtkMergeColumns_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeColumns_Doc()
{
  static const char *docstring[] = {
    "vtkMergeColumns - merge two columns into a single column\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkMergeColumns replaces two columns in a table with a single column\ncontaining data in both columns.  The columns are set using\n\n\n  SetInputArrayToProcess(0, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_ROWS, \"col1\")\n\nand\n\n\n  SetInputArrayToProcess(1, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_ROWS, \"col2\")\n\nwhere \"col1\" and \"col2\" are the names of the columns to merge. The\nuser may also specify the name o",
    "f the merged column. The arrays must\nbe of the same type. If the arrays are numeric, the values are summed\nin the merged column. If the arrays are strings, the values are\nconcatenated.  The strings are separated by a space if they are both\nnonempty.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeColumns(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeColumnsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeColumns", o) != 0)
    {
    Py_DECREF(o);
    }

}

