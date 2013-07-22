// python wrapper for vtkAlgorithmOutput
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
#include "vtkAlgorithmOutput.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAlgorithmOutput(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAlgorithmOutput(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAlgorithmOutputNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAlgorithmOutputNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAlgorithmOutput_Doc();


static PyObject *
PyvtkAlgorithmOutput_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

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
      tempr = op->vtkAlgorithmOutput::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

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
      tempr = op->vtkAlgorithmOutput::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAlgorithmOutput::NewInstance();
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
PyvtkAlgorithmOutput_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAlgorithmOutput::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_SetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndex(temp0);
      }
    else
      {
      op->vtkAlgorithmOutput::SetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndex();
      }
    else
      {
      tempr = op->vtkAlgorithmOutput::GetIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_GetProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  vtkAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProducer();
      }
    else
      {
      tempr = op->vtkAlgorithmOutput::GetProducer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_SetProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetProducer(temp0);
      }
    else
      {
      op->vtkAlgorithmOutput::SetProducer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithmOutput_Methods[] = {
  {(char*)"GetClassName", PyvtkAlgorithmOutput_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAlgorithmOutput_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAlgorithmOutput_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAlgorithmOutput_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIndex", PyvtkAlgorithmOutput_SetIndex, 1,
   (char*)"V.SetIndex(int)\nC++: void SetIndex(int index)\n\n"},
  {(char*)"GetIndex", PyvtkAlgorithmOutput_GetIndex, 1,
   (char*)"V.GetIndex() -> int\nC++: int GetIndex()\n\n"},
  {(char*)"GetProducer", PyvtkAlgorithmOutput_GetProducer, 1,
   (char*)"V.GetProducer() -> vtkAlgorithm\nC++: vtkAlgorithm *GetProducer()\n\n"},
  {(char*)"SetProducer", PyvtkAlgorithmOutput_SetProducer, 1,
   (char*)"V.SetProducer(vtkAlgorithm)\nC++: void SetProducer(vtkAlgorithm *producer)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAlgorithmOutput_StaticNew()
{
  return vtkAlgorithmOutput::New();
}

PyObject *PyVTKClass_vtkAlgorithmOutputNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAlgorithmOutput_StaticNew,
    PyvtkAlgorithmOutput_Methods,
    "vtkAlgorithmOutput", modulename,
    NULL, NULL,
    PyvtkAlgorithmOutput_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAlgorithmOutput_Doc()
{
  static const char *docstring[] = {
    "vtkAlgorithmOutput - Proxy object to connect input/output ports.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAlgorithmOutput is a proxy object returned by the GetOutputPort\nmethod of vtkAlgorithm.  It may be passed to the SetInputConnection,\nAddInputConnection, or RemoveInputConnection methods of another\nvtkAlgorithm to establish a connection between an output and input\nport.  The connection is not stored in the proxy object: it is simply\na convenience for creating or removing connections.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAlgorithmOutput(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAlgorithmOutputNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAlgorithmOutput", o) != 0)
    {
    Py_DECREF(o);
    }

}

