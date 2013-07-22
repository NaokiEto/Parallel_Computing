// python wrapper for vtkImageSeedConnectivity
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
#include "vtkImageSeedConnectivity.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSeedConnectivity(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSeedConnectivity(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSeedConnectivityNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSeedConnectivityNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageSeedConnectivity_Doc();


static PyObject *
PyvtkImageSeedConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

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
      tempr = op->vtkImageSeedConnectivity::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

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
      tempr = op->vtkImageSeedConnectivity::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  vtkImageSeedConnectivity *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSeedConnectivity::NewInstance();
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
PyvtkImageSeedConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageSeedConnectivity *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageSeedConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_RemoveAllSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSeeds();
      }
    else
      {
      op->vtkImageSeedConnectivity::RemoveAllSeeds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_AddSeed_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddSeed(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSeedConnectivity_AddSeed_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddSeed(temp0, temp1);
      }
    else
      {
      op->vtkImageSeedConnectivity::AddSeed(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSeedConnectivity_AddSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageSeedConnectivity_AddSeed_s1(self, args);
    case 2:
      return PyvtkImageSeedConnectivity_AddSeed_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddSeed");
  return NULL;
}



static PyObject *
PyvtkImageSeedConnectivity_SetInputConnectValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputConnectValue(temp0);
      }
    else
      {
      op->vtkImageSeedConnectivity::SetInputConnectValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetInputConnectValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnectValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputConnectValue();
      }
    else
      {
      tempr = op->vtkImageSeedConnectivity::GetInputConnectValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetOutputConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputConnectedValue(temp0);
      }
    else
      {
      op->vtkImageSeedConnectivity::SetOutputConnectedValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetOutputConnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputConnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputConnectedValue();
      }
    else
      {
      tempr = op->vtkImageSeedConnectivity::GetOutputConnectedValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetOutputUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputUnconnectedValue(temp0);
      }
    else
      {
      op->vtkImageSeedConnectivity::SetOutputUnconnectedValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetOutputUnconnectedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputUnconnectedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputUnconnectedValue();
      }
    else
      {
      tempr = op->vtkImageSeedConnectivity::GetOutputUnconnectedValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetConnector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  vtkImageConnector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConnector();
      }
    else
      {
      tempr = op->vtkImageSeedConnectivity::GetConnector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageSeedConnectivity::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeedConnectivity_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeedConnectivity *op = static_cast<vtkImageSeedConnectivity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionality();
      }
    else
      {
      tempr = op->vtkImageSeedConnectivity::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSeedConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSeedConnectivity_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSeedConnectivity_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSeedConnectivity_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSeedConnectivity\nC++: vtkImageSeedConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSeedConnectivity_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSeedConnectivity\nC++: vtkImageSeedConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveAllSeeds", PyvtkImageSeedConnectivity_RemoveAllSeeds, 1,
   (char*)"V.RemoveAllSeeds()\nC++: void RemoveAllSeeds()\n\nMethods for manipulating the seed pixels.\n"},
  {(char*)"AddSeed", PyvtkImageSeedConnectivity_AddSeed, 1,
   (char*)"V.AddSeed(int, int, int)\nC++: void AddSeed(int i0, int i1, int i2)\nV.AddSeed(int, int)\nC++: void AddSeed(int i0, int i1)\n\nMethods for manipulating the seed pixels.\n"},
  {(char*)"SetInputConnectValue", PyvtkImageSeedConnectivity_SetInputConnectValue, 1,
   (char*)"V.SetInputConnectValue(int)\nC++: void SetInputConnectValue(int a)\n\nSet/Get what value is considered as connecting pixels.\n"},
  {(char*)"GetInputConnectValue", PyvtkImageSeedConnectivity_GetInputConnectValue, 1,
   (char*)"V.GetInputConnectValue() -> int\nC++: int GetInputConnectValue()\n\nSet/Get what value is considered as connecting pixels.\n"},
  {(char*)"SetOutputConnectedValue", PyvtkImageSeedConnectivity_SetOutputConnectedValue, 1,
   (char*)"V.SetOutputConnectedValue(int)\nC++: void SetOutputConnectedValue(int a)\n\nSet/Get the value to set connected pixels to.\n"},
  {(char*)"GetOutputConnectedValue", PyvtkImageSeedConnectivity_GetOutputConnectedValue, 1,
   (char*)"V.GetOutputConnectedValue() -> int\nC++: int GetOutputConnectedValue()\n\nSet/Get the value to set connected pixels to.\n"},
  {(char*)"SetOutputUnconnectedValue", PyvtkImageSeedConnectivity_SetOutputUnconnectedValue, 1,
   (char*)"V.SetOutputUnconnectedValue(int)\nC++: void SetOutputUnconnectedValue(int a)\n\nSet/Get the value to set unconnected pixels to.\n"},
  {(char*)"GetOutputUnconnectedValue", PyvtkImageSeedConnectivity_GetOutputUnconnectedValue, 1,
   (char*)"V.GetOutputUnconnectedValue() -> int\nC++: int GetOutputUnconnectedValue()\n\nSet/Get the value to set unconnected pixels to.\n"},
  {(char*)"GetConnector", PyvtkImageSeedConnectivity_GetConnector, 1,
   (char*)"V.GetConnector() -> vtkImageConnector\nC++: vtkImageConnector *GetConnector()\n\nGet the vtkImageCOnnector used by this filter.\n"},
  {(char*)"SetDimensionality", PyvtkImageSeedConnectivity_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int a)\n\nSet the number of axes to use in connectivity.\n"},
  {(char*)"GetDimensionality", PyvtkImageSeedConnectivity_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nSet the number of axes to use in connectivity.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSeedConnectivity_StaticNew()
{
  return vtkImageSeedConnectivity::New();
}

PyObject *PyVTKClass_vtkImageSeedConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSeedConnectivity_StaticNew,
    PyvtkImageSeedConnectivity_Methods,
    "vtkImageSeedConnectivity", modulename,
    NULL, NULL,
    PyvtkImageSeedConnectivity_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageSeedConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkImageSeedConnectivity - SeedConnectivity with user defined seeds.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageSeedConnectivity marks pixels connected to user supplied\nseeds. The input must be unsigned char, and the output is also\nunsigned char.  If a seed supplied by the user does not have pixel\nvalue \"InputTrueValue\", then the image is scanned +x, +y, +z until a\npixel is encountered with value \"InputTrueValue\".  This new pixel is\nused as the seed .  Any pixel with out value \"InputTrueValue\" is\nco",
    "nsider off.  The output pixels values are 0 for any off pixel in\ninput, \"OutputTrueValue\" for any pixels connected to seeds, and\n\"OutputUnconnectedValue\" for any on pixels not connected to seeds. \nThe same seeds are used for all images in the image set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSeedConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSeedConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSeedConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

