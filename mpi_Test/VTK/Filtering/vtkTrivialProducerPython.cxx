// python wrapper for vtkTrivialProducer
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
#include "vtkTrivialProducer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTrivialProducer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTrivialProducer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTrivialProducerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTrivialProducerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkTrivialProducer_Doc();


static PyObject *
PyvtkTrivialProducer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrivialProducer *op = static_cast<vtkTrivialProducer *>(vp);

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
      tempr = op->vtkTrivialProducer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTrivialProducer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrivialProducer *op = static_cast<vtkTrivialProducer *>(vp);

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
      tempr = op->vtkTrivialProducer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTrivialProducer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrivialProducer *op = static_cast<vtkTrivialProducer *>(vp);

  vtkTrivialProducer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTrivialProducer::NewInstance();
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
PyvtkTrivialProducer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTrivialProducer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTrivialProducer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTrivialProducer_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrivialProducer *op = static_cast<vtkTrivialProducer *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkTrivialProducer::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTrivialProducer_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrivialProducer *op = static_cast<vtkTrivialProducer *>(vp);

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
      tempr = op->vtkTrivialProducer::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTrivialProducer_Methods[] = {
  {(char*)"GetClassName", PyvtkTrivialProducer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTrivialProducer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTrivialProducer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTrivialProducer\nC++: vtkTrivialProducer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTrivialProducer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTrivialProducer\nC++: vtkTrivialProducer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutput", PyvtkTrivialProducer_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *output)\n\nSet the data object that is \"produced\" by this producer.  It is\nnever really modified.\n"},
  {(char*)"GetMTime", PyvtkTrivialProducer_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time of this producer is the newer of this object or\nthe assigned output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTrivialProducer_StaticNew()
{
  return vtkTrivialProducer::New();
}

PyObject *PyVTKClass_vtkTrivialProducerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTrivialProducer_StaticNew,
    PyvtkTrivialProducer_Methods,
    "vtkTrivialProducer", modulename,
    NULL, NULL,
    PyvtkTrivialProducer_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTrivialProducer_Doc()
{
  static const char *docstring[] = {
    "vtkTrivialProducer - Producer for stand-alone data objects.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkTrivialProducer allows stand-alone data objects to be connected as\ninputs in a pipeline.  All data objects that are connected to a\npipeline involving vtkAlgorithm must have a producer.  This trivial\nproducer allows data objects that are hand-constructed in a program\nwithout another vtk producer to be connected.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTrivialProducer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTrivialProducerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTrivialProducer", o) != 0)
    {
    Py_DECREF(o);
    }

}

