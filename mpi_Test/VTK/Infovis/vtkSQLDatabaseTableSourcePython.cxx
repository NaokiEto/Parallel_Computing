// python wrapper for vtkSQLDatabaseTableSource
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
#include "vtkStdString.h"
#include "vtkSQLDatabaseTableSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLDatabaseTableSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLDatabaseTableSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLDatabaseTableSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLDatabaseTableSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSQLDatabaseTableSource_Doc();


static PyObject *
PyvtkSQLDatabaseTableSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

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
      tempr = op->vtkSQLDatabaseTableSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

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
      tempr = op->vtkSQLDatabaseTableSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkSQLDatabaseTableSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLDatabaseTableSource::NewInstance();
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
PyvtkSQLDatabaseTableSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLDatabaseTableSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLDatabaseTableSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetURL();
      }
    else
      {
      tempr = op->vtkSQLDatabaseTableSource::GetURL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetURL(temp0);
      }
    else
      {
      op->vtkSQLDatabaseTableSource::SetURL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetPassword(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassword");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassword(temp0);
      }
    else
      {
      op->vtkSQLDatabaseTableSource::SetPassword(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuery();
      }
    else
      {
      tempr = op->vtkSQLDatabaseTableSource::GetQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuery(temp0);
      }
    else
      {
      op->vtkSQLDatabaseTableSource::SetQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkSQLDatabaseTableSource::SetPedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPedigreeIdArrayName();
      }
    else
      {
      tempr = op->vtkSQLDatabaseTableSource::GetPedigreeIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePedigreeIds(temp0);
      }
    else
      {
      op->vtkSQLDatabaseTableSource::SetGeneratePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeneratePedigreeIds();
      }
    else
      {
      tempr = op->vtkSQLDatabaseTableSource::GetGeneratePedigreeIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOn();
      }
    else
      {
      op->vtkSQLDatabaseTableSource::GeneratePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOff();
      }
    else
      {
      op->vtkSQLDatabaseTableSource::GeneratePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseTableSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLDatabaseTableSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLDatabaseTableSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLDatabaseTableSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLDatabaseTableSource\nC++: vtkSQLDatabaseTableSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLDatabaseTableSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLDatabaseTableSource\nC++: vtkSQLDatabaseTableSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetURL", PyvtkSQLDatabaseTableSource_GetURL, 1,
   (char*)"V.GetURL() -> string\nC++: vtkStdString GetURL()\n\n"},
  {(char*)"SetURL", PyvtkSQLDatabaseTableSource_SetURL, 1,
   (char*)"V.SetURL(string)\nC++: void SetURL(const vtkStdString &url)\n\n"},
  {(char*)"SetPassword", PyvtkSQLDatabaseTableSource_SetPassword, 1,
   (char*)"V.SetPassword(string)\nC++: void SetPassword(const vtkStdString &password)\n\n"},
  {(char*)"GetQuery", PyvtkSQLDatabaseTableSource_GetQuery, 1,
   (char*)"V.GetQuery() -> string\nC++: vtkStdString GetQuery()\n\n"},
  {(char*)"SetQuery", PyvtkSQLDatabaseTableSource_SetQuery, 1,
   (char*)"V.SetQuery(string)\nC++: void SetQuery(const vtkStdString &query)\n\n"},
  {(char*)"SetPedigreeIdArrayName", PyvtkSQLDatabaseTableSource_SetPedigreeIdArrayName, 1,
   (char*)"V.SetPedigreeIdArrayName(string)\nC++: void SetPedigreeIdArrayName(char *)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {(char*)"GetPedigreeIdArrayName", PyvtkSQLDatabaseTableSource_GetPedigreeIdArrayName, 1,
   (char*)"V.GetPedigreeIdArrayName() -> string\nC++: char *GetPedigreeIdArrayName()\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {(char*)"SetGeneratePedigreeIds", PyvtkSQLDatabaseTableSource_SetGeneratePedigreeIds, 1,
   (char*)"V.SetGeneratePedigreeIds(bool)\nC++: void SetGeneratePedigreeIds(bool a)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GetGeneratePedigreeIds", PyvtkSQLDatabaseTableSource_GetGeneratePedigreeIds, 1,
   (char*)"V.GetGeneratePedigreeIds() -> bool\nC++: bool GetGeneratePedigreeIds()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GeneratePedigreeIdsOn", PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOn, 1,
   (char*)"V.GeneratePedigreeIdsOn()\nC++: void GeneratePedigreeIdsOn()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GeneratePedigreeIdsOff", PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOff, 1,
   (char*)"V.GeneratePedigreeIdsOff()\nC++: void GeneratePedigreeIdsOff()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLDatabaseTableSource_StaticNew()
{
  return vtkSQLDatabaseTableSource::New();
}

PyObject *PyVTKClass_vtkSQLDatabaseTableSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLDatabaseTableSource_StaticNew,
    PyvtkSQLDatabaseTableSource_Methods,
    "vtkSQLDatabaseTableSource", modulename,
    NULL, NULL,
    PyvtkSQLDatabaseTableSource_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSQLDatabaseTableSource_Doc()
{
  static const char *docstring[] = {
    "vtkSQLDatabaseTableSource - Generates a vtkTable based on an SQL\nquery.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This class combines vtkSQLDatabase, vtkSQLQuery, and vtkQueryToTable\nto provide a convenience class for generating tables from databases.\nAlso this class can be easily wrapped and used within ParaView /\nOverView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLDatabaseTableSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLDatabaseTableSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLDatabaseTableSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

