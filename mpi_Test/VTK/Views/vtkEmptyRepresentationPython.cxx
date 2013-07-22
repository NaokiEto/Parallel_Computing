// python wrapper for vtkEmptyRepresentation
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
#include "vtkEmptyRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEmptyRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEmptyRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEmptyRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEmptyRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataRepresentationNew
#endif

static const char **PyvtkEmptyRepresentation_Doc();


static PyObject *
PyvtkEmptyRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

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
      tempr = op->vtkEmptyRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEmptyRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

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
      tempr = op->vtkEmptyRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEmptyRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  vtkEmptyRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEmptyRepresentation::NewInstance();
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
PyvtkEmptyRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEmptyRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEmptyRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalAnnotationOutputPort();
      }
    else
      {
      tempr = op->vtkEmptyRepresentation::GetInternalAnnotationOutputPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalAnnotationOutputPort(temp0);
      }
    else
      {
      tempr = op->vtkEmptyRepresentation::GetInternalAnnotationOutputPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalAnnotationOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEmptyRepresentation *op = static_cast<vtkEmptyRepresentation *>(vp);

  int temp0;
  int temp1;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalAnnotationOutputPort(temp0, temp1);
      }
    else
      {
      tempr = op->vtkEmptyRepresentation::GetInternalAnnotationOutputPort(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s1(self, args);
    case 1:
      return PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s2(self, args);
    case 2:
      return PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalAnnotationOutputPort");
  return NULL;
}


static PyMethodDef PyvtkEmptyRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkEmptyRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEmptyRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEmptyRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEmptyRepresentation\nC++: vtkEmptyRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEmptyRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEmptyRepresentation\nC++: vtkEmptyRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInternalAnnotationOutputPort", PyvtkEmptyRepresentation_GetInternalAnnotationOutputPort, 1,
   (char*)"V.GetInternalAnnotationOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort()\nV.GetInternalAnnotationOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port)\nV.GetInternalAnnotationOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalAnnotationOutputPort(\n    int port, int conn)\n\nSince this representation has no inputs, override superclass\nimplementation with one that ignores \"port\" and \"conn\" and still\nallows it to have an annotation output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEmptyRepresentation_StaticNew()
{
  return vtkEmptyRepresentation::New();
}

PyObject *PyVTKClass_vtkEmptyRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEmptyRepresentation_StaticNew,
    PyvtkEmptyRepresentation_Methods,
    "vtkEmptyRepresentation", modulename,
    NULL, NULL,
    PyvtkEmptyRepresentation_Doc(),
    PyVTKClass_vtkDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkEmptyRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkEmptyRepresentation - \n\n",
    "Superclass: vtkDataRepresentation\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEmptyRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEmptyRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEmptyRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

