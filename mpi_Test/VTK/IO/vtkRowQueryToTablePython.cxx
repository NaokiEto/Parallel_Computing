// python wrapper for vtkRowQueryToTable
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
#include "vtkRowQueryToTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRowQueryToTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRowQueryToTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRowQueryToTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRowQueryToTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkRowQueryToTable_Doc();


static PyObject *
PyvtkRowQueryToTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQueryToTable *op = static_cast<vtkRowQueryToTable *>(vp);

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
      tempr = op->vtkRowQueryToTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQueryToTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQueryToTable *op = static_cast<vtkRowQueryToTable *>(vp);

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
      tempr = op->vtkRowQueryToTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQueryToTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQueryToTable *op = static_cast<vtkRowQueryToTable *>(vp);

  vtkRowQueryToTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRowQueryToTable::NewInstance();
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
PyvtkRowQueryToTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRowQueryToTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRowQueryToTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQueryToTable_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQueryToTable *op = static_cast<vtkRowQueryToTable *>(vp);

  vtkRowQuery *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRowQuery"))
    {
    if (ap.IsBound())
      {
      op->SetQuery(temp0);
      }
    else
      {
      op->vtkRowQueryToTable::SetQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRowQueryToTable_GetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQueryToTable *op = static_cast<vtkRowQueryToTable *>(vp);

  vtkRowQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuery();
      }
    else
      {
      tempr = op->vtkRowQueryToTable::GetQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQueryToTable_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQueryToTable *op = static_cast<vtkRowQueryToTable *>(vp);

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
      tempr = op->vtkRowQueryToTable::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRowQueryToTable_Methods[] = {
  {(char*)"GetClassName", PyvtkRowQueryToTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRowQueryToTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRowQueryToTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRowQueryToTable\nC++: vtkRowQueryToTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRowQueryToTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRowQueryToTable\nC++: vtkRowQueryToTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetQuery", PyvtkRowQueryToTable_SetQuery, 1,
   (char*)"V.SetQuery(vtkRowQuery)\nC++: void SetQuery(vtkRowQuery *query)\n\nThe query to execute.\n"},
  {(char*)"GetQuery", PyvtkRowQueryToTable_GetQuery, 1,
   (char*)"V.GetQuery() -> vtkRowQuery\nC++: vtkRowQuery *GetQuery()\n\nThe query to execute.\n"},
  {(char*)"GetMTime", PyvtkRowQueryToTable_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nUpdate the modified time based on the query.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRowQueryToTable_StaticNew()
{
  return vtkRowQueryToTable::New();
}

PyObject *PyVTKClass_vtkRowQueryToTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRowQueryToTable_StaticNew,
    PyvtkRowQueryToTable_Methods,
    "vtkRowQueryToTable", modulename,
    NULL, NULL,
    PyvtkRowQueryToTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRowQueryToTable_Doc()
{
  static const char *docstring[] = {
    "vtkRowQueryToTable - executes an sql query and retrieves results into\na table\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkRowQueryToTable creates a vtkTable with the results of an\narbitrary SQL query.  To use this filter, you first need an instance\nof a vtkSQLDatabase subclass.  You may use the database class to\nobtain a vtkRowQuery instance. Set that query on this filter to\nextract the query as a table.\n\nThanks:\n\nThanks to Andrew Wilson from Sandia National Laboratories for his\nwork on the database classes.\n\nSee ",
    "Also:\n\nvtkSQLDatabase vtkRowQuery\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRowQueryToTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRowQueryToTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRowQueryToTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

