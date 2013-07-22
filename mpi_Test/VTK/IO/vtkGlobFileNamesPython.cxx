// python wrapper for vtkGlobFileNames
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
#include "vtkGlobFileNames.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGlobFileNames(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGlobFileNames(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGlobFileNamesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGlobFileNamesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGlobFileNames_Doc();


static PyObject *
PyvtkGlobFileNames_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

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
      tempr = op->vtkGlobFileNames::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

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
      tempr = op->vtkGlobFileNames::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  vtkGlobFileNames *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGlobFileNames::NewInstance();
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
PyvtkGlobFileNames_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGlobFileNames *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGlobFileNames::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkGlobFileNames::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirectory(temp0);
      }
    else
      {
      op->vtkGlobFileNames::SetDirectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirectory();
      }
    else
      {
      tempr = op->vtkGlobFileNames::GetDirectory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_AddFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddFileNames(temp0);
      }
    else
      {
      tempr = op->vtkGlobFileNames::AddFileNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SetRecurse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecurse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRecurse(temp0);
      }
    else
      {
      op->vtkGlobFileNames::SetRecurse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_RecurseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecurseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecurseOn();
      }
    else
      {
      op->vtkGlobFileNames::RecurseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_RecurseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecurseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecurseOff();
      }
    else
      {
      op->vtkGlobFileNames::RecurseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetRecurse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecurse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRecurse();
      }
    else
      {
      tempr = op->vtkGlobFileNames::GetRecurse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFileNames();
      }
    else
      {
      tempr = op->vtkGlobFileNames::GetNumberOfFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNthFileName(temp0);
      }
    else
      {
      tempr = op->vtkGlobFileNames::GetNthFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileNames();
      }
    else
      {
      tempr = op->vtkGlobFileNames::GetFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlobFileNames_Methods[] = {
  {(char*)"GetClassName", PyvtkGlobFileNames_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nReturn the class name as a string.\n"},
  {(char*)"IsA", PyvtkGlobFileNames_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nReturn the class name as a string.\n"},
  {(char*)"NewInstance", PyvtkGlobFileNames_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGlobFileNames\nC++: vtkGlobFileNames *NewInstance()\n\nReturn the class name as a string.\n"},
  {(char*)"SafeDownCast", PyvtkGlobFileNames_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlobFileNames\nC++: vtkGlobFileNames *SafeDownCast(vtkObject* o)\n\nReturn the class name as a string.\n"},
  {(char*)"Reset", PyvtkGlobFileNames_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the glob by clearing the list of output filenames.\n"},
  {(char*)"SetDirectory", PyvtkGlobFileNames_SetDirectory, 1,
   (char*)"V.SetDirectory(string)\nC++: void SetDirectory(char *)\n\nSet the directory in which to perform the glob.  If this is not\nset, then the current directory will be used.  Also, if you use a\nglob pattern that contains absolute path (one that starts with\n\"/\" or a drive letter) then that absolute path will be used and\nDirectory will be ignored.\n"},
  {(char*)"GetDirectory", PyvtkGlobFileNames_GetDirectory, 1,
   (char*)"V.GetDirectory() -> string\nC++: char *GetDirectory()\n\nSet the directory in which to perform the glob.  If this is not\nset, then the current directory will be used.  Also, if you use a\nglob pattern that contains absolute path (one that starts with\n\"/\" or a drive letter) then that absolute path will be used and\nDirectory will be ignored.\n"},
  {(char*)"AddFileNames", PyvtkGlobFileNames_AddFileNames, 1,
   (char*)"V.AddFileNames(string) -> int\nC++: int AddFileNames(const char *pattern)\n\nSearch for all files that match the given expression, sort them,\nand add them to the output.  This method can be called repeatedly\nto add files matching additional patterns. Returns 1 if\nsuccessful, otherwise returns zero.\n"},
  {(char*)"SetRecurse", PyvtkGlobFileNames_SetRecurse, 1,
   (char*)"V.SetRecurse(int)\nC++: void SetRecurse(int a)\n\nRecurse into subdirectories.\n"},
  {(char*)"RecurseOn", PyvtkGlobFileNames_RecurseOn, 1,
   (char*)"V.RecurseOn()\nC++: void RecurseOn()\n\nRecurse into subdirectories.\n"},
  {(char*)"RecurseOff", PyvtkGlobFileNames_RecurseOff, 1,
   (char*)"V.RecurseOff()\nC++: void RecurseOff()\n\nRecurse into subdirectories.\n"},
  {(char*)"GetRecurse", PyvtkGlobFileNames_GetRecurse, 1,
   (char*)"V.GetRecurse() -> int\nC++: int GetRecurse()\n\nRecurse into subdirectories.\n"},
  {(char*)"GetNumberOfFileNames", PyvtkGlobFileNames_GetNumberOfFileNames, 1,
   (char*)"V.GetNumberOfFileNames() -> int\nC++: int GetNumberOfFileNames()\n\nReturn the number of files found.\n"},
  {(char*)"GetNthFileName", PyvtkGlobFileNames_GetNthFileName, 1,
   (char*)"V.GetNthFileName(int) -> string\nC++: const char *GetNthFileName(int index)\n\nReturn the file at the given index, the indexing is 0 based.\n"},
  {(char*)"GetFileNames", PyvtkGlobFileNames_GetFileNames, 1,
   (char*)"V.GetFileNames() -> vtkStringArray\nC++: vtkStringArray *GetFileNames()\n\nGet an array that contains all the file names.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlobFileNames_StaticNew()
{
  return vtkGlobFileNames::New();
}

PyObject *PyVTKClass_vtkGlobFileNamesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlobFileNames_StaticNew,
    PyvtkGlobFileNames_Methods,
    "vtkGlobFileNames", modulename,
    NULL, NULL,
    PyvtkGlobFileNames_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGlobFileNames_Doc()
{
  static const char *docstring[] = {
    "vtkGlobFileNames - find files that match a wildcard pattern\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGlobFileNames is a utility for finding files and directories that\nmatch a given wildcard pattern.  Allowed wildcards are\n*, ?, [...], [!...]. The \"*\" wildcard matches any substring, the \"?\"\n   matches any single character, the [...] matches any one of the\n   enclosed characters, e.g. [abc] will match one of a, b, or c,\n   while [0-9] will match any digit, and [!...] will match any single\n   cha",
    "racter except for the ones within the brackets.  Special\n   treatment is given to \"/\" (or \"\\\" on Windows) because these are\n   path separators.  These are never matched by a wildcard, they are\n   only matched with another file separator.\n\nCaveats:\n\nThis function performs case-sensitive matches on UNIX and\ncase-insensitive matches on Windows.\n\nSee Also:\n\nvtkDirectory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlobFileNames(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlobFileNamesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlobFileNames", o) != 0)
    {
    Py_DECREF(o);
    }

}

