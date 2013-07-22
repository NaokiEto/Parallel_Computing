// python wrapper for vtkDIMACSGraphReader
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
#include "vtkDIMACSGraphReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDIMACSGraphReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDIMACSGraphReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDIMACSGraphReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDIMACSGraphReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkDIMACSGraphReader_Doc();


static PyObject *
PyvtkDIMACSGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

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
      tempr = op->vtkDIMACSGraphReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

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
      tempr = op->vtkDIMACSGraphReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  vtkDIMACSGraphReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDIMACSGraphReader::NewInstance();
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
PyvtkDIMACSGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDIMACSGraphReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDIMACSGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

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
      tempr = op->vtkDIMACSGraphReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

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
      op->vtkDIMACSGraphReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexAttributeArrayName();
      }
    else
      {
      tempr = op->vtkDIMACSGraphReader::GetVertexAttributeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexAttributeArrayName(temp0);
      }
    else
      {
      op->vtkDIMACSGraphReader::SetVertexAttributeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeAttributeArrayName();
      }
    else
      {
      tempr = op->vtkDIMACSGraphReader::GetEdgeAttributeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeAttributeArrayName(temp0);
      }
    else
      {
      op->vtkDIMACSGraphReader::SetEdgeAttributeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDIMACSGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDIMACSGraphReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDIMACSGraphReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDIMACSGraphReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDIMACSGraphReader\nC++: vtkDIMACSGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDIMACSGraphReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDIMACSGraphReader\nC++: vtkDIMACSGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkDIMACSGraphReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe DIMACS file name.\n"},
  {(char*)"SetFileName", PyvtkDIMACSGraphReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe DIMACS file name.\n"},
  {(char*)"GetVertexAttributeArrayName", PyvtkDIMACSGraphReader_GetVertexAttributeArrayName, 1,
   (char*)"V.GetVertexAttributeArrayName() -> string\nC++: char *GetVertexAttributeArrayName()\n\nVertex attribute array name\n"},
  {(char*)"SetVertexAttributeArrayName", PyvtkDIMACSGraphReader_SetVertexAttributeArrayName, 1,
   (char*)"V.SetVertexAttributeArrayName(string)\nC++: void SetVertexAttributeArrayName(char *)\n\nVertex attribute array name\n"},
  {(char*)"GetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName, 1,
   (char*)"V.GetEdgeAttributeArrayName() -> string\nC++: char *GetEdgeAttributeArrayName()\n\nEdge attribute array name\n"},
  {(char*)"SetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName, 1,
   (char*)"V.SetEdgeAttributeArrayName(string)\nC++: void SetEdgeAttributeArrayName(char *)\n\nEdge attribute array name\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDIMACSGraphReader_StaticNew()
{
  return vtkDIMACSGraphReader::New();
}

PyObject *PyVTKClass_vtkDIMACSGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDIMACSGraphReader_StaticNew,
    PyvtkDIMACSGraphReader_Methods,
    "vtkDIMACSGraphReader", modulename,
    NULL, NULL,
    PyvtkDIMACSGraphReader_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDIMACSGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkDIMACSGraphReader - reads vtkGraph data from a DIMACS\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkDIMACSGraphReader is a source object that reads vtkGraph data\nfiles from a DIMACS format. DIMACS graphs are undirected. See webpage\nfor format details.\n http://dimacs.rutgers.edu/Challenges/\n http://www.dis.uniroma1.it/~challenge9/format.shtml\n\nSee Also:\n\nvtkDIMACSGraphWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDIMACSGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDIMACSGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDIMACSGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

