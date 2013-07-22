// python wrapper for vtkXMLFileReadTester
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
#include "vtkXMLFileReadTester.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLFileReadTester(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLFileReadTester(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLFileReadTesterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLFileReadTesterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkXMLFileReadTester_Doc();


static PyObject *
PyvtkXMLFileReadTester_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

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
      tempr = op->vtkXMLFileReadTester::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

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
      tempr = op->vtkXMLFileReadTester::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  vtkXMLFileReadTester *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLFileReadTester::NewInstance();
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
PyvtkXMLFileReadTester_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLFileReadTester *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLFileReadTester::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_TestReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->TestReadFile();
      }
    else
      {
      tempr = op->vtkXMLFileReadTester::TestReadFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkXMLFileReadTester::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkXMLFileReadTester::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileDataType();
      }
    else
      {
      tempr = op->vtkXMLFileReadTester::GetFileDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLFileReadTester_GetFileVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLFileReadTester *op = static_cast<vtkXMLFileReadTester *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileVersion();
      }
    else
      {
      tempr = op->vtkXMLFileReadTester::GetFileVersion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLFileReadTester_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLFileReadTester_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLFileReadTester_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLFileReadTester_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLFileReadTester\nC++: vtkXMLFileReadTester *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLFileReadTester_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLFileReadTester\nC++: vtkXMLFileReadTester *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TestReadFile", PyvtkXMLFileReadTester_TestReadFile, 1,
   (char*)"V.TestReadFile() -> int\nC++: int TestReadFile()\n\nTry to read the file given by FileName.  Returns 1 if the file is\na VTK XML file, and 0 otherwise.\n"},
  {(char*)"SetFileName", PyvtkXMLFileReadTester_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the file tested by TestReadFile().\n"},
  {(char*)"GetFileName", PyvtkXMLFileReadTester_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the file tested by TestReadFile().\n"},
  {(char*)"GetFileDataType", PyvtkXMLFileReadTester_GetFileDataType, 1,
   (char*)"V.GetFileDataType() -> string\nC++: char *GetFileDataType()\n\nGet the data type of the XML file tested.  If the file could not\nbe read, returns NULL.\n"},
  {(char*)"GetFileVersion", PyvtkXMLFileReadTester_GetFileVersion, 1,
   (char*)"V.GetFileVersion() -> string\nC++: char *GetFileVersion()\n\nGet the file version of the XML file tested.  If the file could\nnot be read, returns NULL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLFileReadTester_StaticNew()
{
  return vtkXMLFileReadTester::New();
}

PyObject *PyVTKClass_vtkXMLFileReadTesterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLFileReadTester_StaticNew,
    PyvtkXMLFileReadTester_Methods,
    "vtkXMLFileReadTester", modulename,
    NULL, NULL,
    PyvtkXMLFileReadTester_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));
  return cls;
}

const char **PyvtkXMLFileReadTester_Doc()
{
  static const char *docstring[] = {
    "vtkXMLFileReadTester - Utility class for vtkXMLReader and subclasses.\n\n",
    "Superclass: vtkXMLParser\n\n",
    "vtkXMLFileReadTester reads the smallest part of a file necessary to\ndetermine whether it is a VTK XML file.  If so, it extracts the file\ntype and version number.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLFileReadTester(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLFileReadTesterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLFileReadTester", o) != 0)
    {
    Py_DECREF(o);
    }

}

