// python wrapper for vtkUnstructuredGridVolumeMapper
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
#include "vtkUnstructuredGridVolumeMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridVolumeMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridVolumeMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkAbstractVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractVolumeMapperNew
#endif

static const char **PyvtkUnstructuredGridVolumeMapper_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  vtkUnstructuredGridVolumeMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeMapper::NewInstance();
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
PyvtkUnstructuredGridVolumeMapper_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridVolumeMapper_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeMapper_SetInput_Methods[] = {
  {NULL, PyvtkUnstructuredGridVolumeMapper_SetInput_s1, 1,
   (char*)"@O *vtkUnstructuredGrid"},
  {NULL, PyvtkUnstructuredGridVolumeMapper_SetInput_s2, 1,
   (char*)"@O *vtkDataSet"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUnstructuredGridVolumeMapper_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridVolumeMapper_SetInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridVolumeMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeMapper::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeMapper::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_SetBlendModeToComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToComposite();
      }
    else
      {
      op->vtkUnstructuredGridVolumeMapper::SetBlendModeToComposite();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_SetBlendModeToMaximumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMaximumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMaximumIntensity();
      }
    else
      {
      op->vtkUnstructuredGridVolumeMapper::SetBlendModeToMaximumIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendMode();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeMapper::GetBlendMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeMapper *op = static_cast<vtkUnstructuredGridVolumeMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeMapper\nC++: vtkUnstructuredGridVolumeMapper *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkUnstructuredGridVolumeMapper_SetInput, 1,
   (char*)"V.SetInput(vtkUnstructuredGrid)\nC++: virtual void SetInput(vtkUnstructuredGrid *)\nV.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *)\n\nSet/Get the input data\n"},
  {(char*)"GetInput", PyvtkUnstructuredGridVolumeMapper_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput()\n\nSet/Get the input data\n"},
  {(char*)"SetBlendMode", PyvtkUnstructuredGridVolumeMapper_SetBlendMode, 1,
   (char*)"V.SetBlendMode(int)\nC++: void SetBlendMode(int a)\n\n"},
  {(char*)"SetBlendModeToComposite", PyvtkUnstructuredGridVolumeMapper_SetBlendModeToComposite, 1,
   (char*)"V.SetBlendModeToComposite()\nC++: void SetBlendModeToComposite()\n\n"},
  {(char*)"SetBlendModeToMaximumIntensity", PyvtkUnstructuredGridVolumeMapper_SetBlendModeToMaximumIntensity, 1,
   (char*)"V.SetBlendModeToMaximumIntensity()\nC++: void SetBlendModeToMaximumIntensity()\n\n"},
  {(char*)"GetBlendMode", PyvtkUnstructuredGridVolumeMapper_GetBlendMode, 1,
   (char*)"V.GetBlendMode() -> int\nC++: int GetBlendMode()\n\n"},
  {(char*)"Render", PyvtkUnstructuredGridVolumeMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkUnstructuredGridVolumeMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridVolumeMapper_Methods,
    "vtkUnstructuredGridVolumeMapper", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeMapper_Doc(),
    PyVTKClass_vtkAbstractVolumeMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"COMPOSITE_BLEND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"MAXIMUM_INTENSITY_BLEND", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkUnstructuredGridVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeMapper - Abstract class for a unstructured\ngrid volume mapper\n\n",
    "Superclass: vtkAbstractVolumeMapper\n\n",
    "vtkUnstructuredGridVolumeMapper is the abstract definition of a\nvolume mapper for unstructured data (vtkUnstructuredGrid).  Several \nbasic types of volume mappers are supported as subclasses\n\nSee Also:\n\nvtkUnstructuredGridVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

