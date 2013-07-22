// python wrapper for vtkProcess
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
#include "vtkProcess.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProcess(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProcess(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProcessNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProcessNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkProcess_Doc();


static PyObject *
PyvtkProcess_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

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
      tempr = op->vtkProcess::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcess_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

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
      tempr = op->vtkProcess::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcess_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

  vtkProcess *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProcess::NewInstance();
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
PyvtkProcess_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Execute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcess_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkProcess::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcess_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkProcess::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcess_GetReturnValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReturnValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcess *op = static_cast<vtkProcess *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReturnValue();
      }
    else
      {
      tempr = op->vtkProcess::GetReturnValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcess_Methods[] = {
  {(char*)"GetClassName", PyvtkProcess_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcess_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcess_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProcess\nC++: vtkProcess *NewInstance()\n\n"},
  {(char*)"Execute", PyvtkProcess_Execute, 1,
   (char*)"V.Execute()\nC++: virtual void Execute()\n\n"},
  {(char*)"GetController", PyvtkProcess_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGive access to the controller that launched the process. Initial\nvalue is NULL.\n"},
  {(char*)"SetController", PyvtkProcess_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *aController)\n\nThis method should not be called directly but set by the\ncontroller itself.\n"},
  {(char*)"GetReturnValue", PyvtkProcess_GetReturnValue, 1,
   (char*)"V.GetReturnValue() -> int\nC++: int GetReturnValue()\n\nValue set at the end of a call to Execute.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkProcessNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkProcess_Methods,
    "vtkProcess", modulename,
    NULL, NULL,
    PyvtkProcess_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkProcess_Doc()
{
  static const char *docstring[] = {
    "vtkProcess - a process that can be launched by a\nvtkMultiProcessController\n\n",
    "Superclass: vtkObject\n\n",
    "vtkProcess is an abstract class representing a process that can be\nlaunched by a vtkMultiProcessController. Concrete classes just have\nto implement Execute() method and make sure it set the proper value\nin ReturnValue.\n\nExample:\n\n\n class MyProcess: public vtkProcess\n ...\n vtkMultiProcessController *c;\n MyProcess *p=new MyProcess::New();\n p->SetArgs(argc,argv); // some parameters specific to the pr",
    "ocess\n p->SetX(10.0); // ...\n c->SetSingleProcess(p);\n c->SingleMethodExecute();\n int returnValue=p->GetReturnValue();\n\nSee Also:\n\nvtkMultiProcessController\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcess(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcessNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcess", o) != 0)
    {
    Py_DECREF(o);
    }

}

