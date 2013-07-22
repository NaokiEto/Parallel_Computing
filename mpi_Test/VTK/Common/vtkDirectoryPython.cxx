// python wrapper for vtkDirectory
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
#include "vtkDirectory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDirectory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDirectory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDirectoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDirectoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDirectory_Doc();


static PyObject *
PyvtkDirectory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

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
      tempr = op->vtkDirectory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

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
      tempr = op->vtkDirectory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  vtkDirectory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDirectory::NewInstance();
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
PyvtkDirectory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDirectory *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDirectory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Open(temp0);
      }
    else
      {
      tempr = op->vtkDirectory::Open(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFiles();
      }
    else
      {
      tempr = op->vtkDirectory::GetNumberOfFiles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  vtkIdType temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFile(temp0);
      }
    else
      {
      tempr = op->vtkDirectory::GetFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_FileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->FileIsDirectory(temp0);
      }
    else
      {
      tempr = op->vtkDirectory::FileIsDirectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFiles();
      }
    else
      {
      tempr = op->vtkDirectory::GetFiles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetCurrentWorkingDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentWorkingDirectory");

  char *temp0 = NULL;
  unsigned int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    tempr = vtkDirectory::GetCurrentWorkingDirectory(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_MakeDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeDirectory");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDirectory::MakeDirectory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_DeleteDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteDirectory");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDirectory::DeleteDirectory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_Rename(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Rename");

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    tempr = vtkDirectory::Rename(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDirectory_CreateDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateDirectory");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDirectory::CreateDirectory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkDirectory_Methods[] = {
  {(char*)"GetClassName", PyvtkDirectory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nReturn the class name as a string.\n"},
  {(char*)"IsA", PyvtkDirectory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nReturn the class name as a string.\n"},
  {(char*)"NewInstance", PyvtkDirectory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDirectory\nC++: vtkDirectory *NewInstance()\n\nReturn the class name as a string.\n"},
  {(char*)"SafeDownCast", PyvtkDirectory_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDirectory\nC++: vtkDirectory *SafeDownCast(vtkObject* o)\n\nReturn the class name as a string.\n"},
  {(char*)"Open", PyvtkDirectory_Open, 1,
   (char*)"V.Open(string) -> int\nC++: int Open(const char *dir)\n\nOpen the specified directory and load the names of the files in\nthat directory. 0 is returned if the directory can not be opened,\n1 if it is opened.\n"},
  {(char*)"GetNumberOfFiles", PyvtkDirectory_GetNumberOfFiles, 1,
   (char*)"V.GetNumberOfFiles() -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturn the number of files in the current directory.\n"},
  {(char*)"GetFile", PyvtkDirectory_GetFile, 1,
   (char*)"V.GetFile(int) -> string\nC++: const char *GetFile(vtkIdType index)\n\nReturn the file at the given index, the indexing is 0 based\n"},
  {(char*)"FileIsDirectory", PyvtkDirectory_FileIsDirectory, 1,
   (char*)"V.FileIsDirectory(string) -> int\nC++: int FileIsDirectory(const char *name)\n\nReturn true if the file is a directory.  If the file is not an\nabsolute path, it is assumed to be relative to the opened\ndirectory. If no directory has been opened, it is assumed to be\nrelative to the current working directory.\n"},
  {(char*)"GetFiles", PyvtkDirectory_GetFiles, 1,
   (char*)"V.GetFiles() -> vtkStringArray\nC++: vtkStringArray *GetFiles()\n\nGet an array that contains all the file names.\n"},
  {(char*)"GetCurrentWorkingDirectory", PyvtkDirectory_GetCurrentWorkingDirectory, 1,
   (char*)"V.GetCurrentWorkingDirectory(string, int) -> string\nC++: static const char *GetCurrentWorkingDirectory(char *buf,\n    unsigned int len)\n\nGet the current working directory.\n"},
  {(char*)"MakeDirectory", PyvtkDirectory_MakeDirectory, 1,
   (char*)"V.MakeDirectory(string) -> int\nC++: static int MakeDirectory(const char *dir)\n\nCreate directory.\n"},
  {(char*)"DeleteDirectory", PyvtkDirectory_DeleteDirectory, 1,
   (char*)"V.DeleteDirectory(string) -> int\nC++: static int DeleteDirectory(const char *dir)\n\nRemove a directory.\n"},
  {(char*)"Rename", PyvtkDirectory_Rename, 1,
   (char*)"V.Rename(string, string) -> int\nC++: static int Rename(const char *oldname, const char *newname)\n\nRename a file or directory.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"CreateDirectory", PyvtkDirectory_CreateDirectory, 1,
   (char*)"V.CreateDirectory(string) -> int\nC++: static int CreateDirectory(const char *dir)\n\n@deprecated Replaced by vtkDirectory::MakeDirectory() as of VTK\n5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDirectory_StaticNew()
{
  return vtkDirectory::New();
}

PyObject *PyVTKClass_vtkDirectoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDirectory_StaticNew,
    PyvtkDirectory_Methods,
    "vtkDirectory", modulename,
    NULL, NULL,
    PyvtkDirectory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDirectory_Doc()
{
  static const char *docstring[] = {
    "vtkDirectory - OS independent class for access and manipulation of\nsystem directories\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDirectory provides a portable way of finding the names of the\nfiles in a system directory.  It also provides methods of\nmanipulating directories.\n\nCaveats:\n\nvtkDirectory works with windows and unix only.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDirectory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDirectoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDirectory", o) != 0)
    {
    Py_DECREF(o);
    }

}

