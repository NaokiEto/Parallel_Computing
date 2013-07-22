// python wrapper for vtkImageDataStreamer
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
#include "vtkImageDataStreamer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDataStreamer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDataStreamer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDataStreamerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDataStreamerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageDataStreamer_Doc();


static PyObject *
PyvtkImageDataStreamer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

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
      tempr = op->vtkImageDataStreamer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

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
      tempr = op->vtkImageDataStreamer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  vtkImageDataStreamer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDataStreamer::NewInstance();
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
PyvtkImageDataStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDataStreamer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDataStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_SetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfStreamDivisions(temp0);
      }
    else
      {
      op->vtkImageDataStreamer::SetNumberOfStreamDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_GetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfStreamDivisions();
      }
    else
      {
      tempr = op->vtkImageDataStreamer::GetNumberOfStreamDivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkImageDataStreamer::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateWholeExtent();
      }
    else
      {
      op->vtkImageDataStreamer::UpdateWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_SetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      op->SetExtentTranslator(temp0);
      }
    else
      {
      op->vtkImageDataStreamer::SetExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_GetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslator();
      }
    else
      {
      tempr = op->vtkImageDataStreamer::GetExtentTranslator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataStreamer_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataStreamer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataStreamer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataStreamer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDataStreamer\nC++: vtkImageDataStreamer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataStreamer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataStreamer\nC++: vtkImageDataStreamer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfStreamDivisions", PyvtkImageDataStreamer_SetNumberOfStreamDivisions, 1,
   (char*)"V.SetNumberOfStreamDivisions(int)\nC++: void SetNumberOfStreamDivisions(int a)\n\nSet how many pieces to divide the input into. void\nSetNumberOfStreamDivisions(int num); int\nGetNumberOfStreamDivisions();\n"},
  {(char*)"GetNumberOfStreamDivisions", PyvtkImageDataStreamer_GetNumberOfStreamDivisions, 1,
   (char*)"V.GetNumberOfStreamDivisions() -> int\nC++: int GetNumberOfStreamDivisions()\n\nSet how many pieces to divide the input into. void\nSetNumberOfStreamDivisions(int num); int\nGetNumberOfStreamDivisions();\n"},
  {(char*)"Update", PyvtkImageDataStreamer_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\n"},
  {(char*)"UpdateWholeExtent", PyvtkImageDataStreamer_UpdateWholeExtent, 1,
   (char*)"V.UpdateWholeExtent()\nC++: virtual void UpdateWholeExtent()\n\n"},
  {(char*)"SetExtentTranslator", PyvtkImageDataStreamer_SetExtentTranslator, 1,
   (char*)"V.SetExtentTranslator(vtkExtentTranslator)\nC++: virtual void SetExtentTranslator(vtkExtentTranslator *)\n\nGet the extent translator that will be used to split the requests\n"},
  {(char*)"GetExtentTranslator", PyvtkImageDataStreamer_GetExtentTranslator, 1,
   (char*)"V.GetExtentTranslator() -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetExtentTranslator()\n\nGet the extent translator that will be used to split the requests\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataStreamer_StaticNew()
{
  return vtkImageDataStreamer::New();
}

PyObject *PyVTKClass_vtkImageDataStreamerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataStreamer_StaticNew,
    PyvtkImageDataStreamer_Methods,
    "vtkImageDataStreamer", modulename,
    NULL, NULL,
    PyvtkImageDataStreamer_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataStreamer_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataStreamer - Initiates streaming on image data.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "To satisfy a request, this filter calls update on its input many\ntimes with smaller update extents.  All processing up stream streams\nsmaller pieces.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataStreamer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataStreamerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataStreamer", o) != 0)
    {
    Py_DECREF(o);
    }

}

