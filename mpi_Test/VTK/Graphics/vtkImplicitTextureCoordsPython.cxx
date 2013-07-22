// python wrapper for vtkImplicitTextureCoords
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
#include "vtkImplicitTextureCoords.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitTextureCoords(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitTextureCoords(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitTextureCoordsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitTextureCoordsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkImplicitTextureCoords_Doc();


static PyObject *
PyvtkImplicitTextureCoords_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

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
      tempr = op->vtkImplicitTextureCoords::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

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
      tempr = op->vtkImplicitTextureCoords::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitTextureCoords *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitTextureCoords::NewInstance();
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
PyvtkImplicitTextureCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitTextureCoords *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetRFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetRFunction(temp0);
      }
    else
      {
      op->vtkImplicitTextureCoords::SetRFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetRFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRFunction();
      }
    else
      {
      tempr = op->vtkImplicitTextureCoords::GetRFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetSFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetSFunction(temp0);
      }
    else
      {
      op->vtkImplicitTextureCoords::SetSFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetSFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSFunction();
      }
    else
      {
      tempr = op->vtkImplicitTextureCoords::GetSFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetTFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetTFunction(temp0);
      }
    else
      {
      op->vtkImplicitTextureCoords::SetTFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetTFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTFunction();
      }
    else
      {
      tempr = op->vtkImplicitTextureCoords::GetTFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_SetFlipTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipTexture(temp0);
      }
    else
      {
      op->vtkImplicitTextureCoords::SetFlipTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_GetFlipTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipTexture();
      }
    else
      {
      tempr = op->vtkImplicitTextureCoords::GetFlipTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_FlipTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipTextureOn();
      }
    else
      {
      op->vtkImplicitTextureCoords::FlipTextureOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitTextureCoords_FlipTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitTextureCoords *op = static_cast<vtkImplicitTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipTextureOff();
      }
    else
      {
      op->vtkImplicitTextureCoords::FlipTextureOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitTextureCoords_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitTextureCoords_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitTextureCoords_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitTextureCoords_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitTextureCoords\nC++: vtkImplicitTextureCoords *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitTextureCoords_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitTextureCoords\nC++: vtkImplicitTextureCoords *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRFunction", PyvtkImplicitTextureCoords_SetRFunction, 1,
   (char*)"V.SetRFunction(vtkImplicitFunction)\nC++: virtual void SetRFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to compute the r texture coordinate.\n"},
  {(char*)"GetRFunction", PyvtkImplicitTextureCoords_GetRFunction, 1,
   (char*)"V.GetRFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetRFunction()\n\nSpecify an implicit function to compute the r texture coordinate.\n"},
  {(char*)"SetSFunction", PyvtkImplicitTextureCoords_SetSFunction, 1,
   (char*)"V.SetSFunction(vtkImplicitFunction)\nC++: virtual void SetSFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to compute the s texture coordinate.\n"},
  {(char*)"GetSFunction", PyvtkImplicitTextureCoords_GetSFunction, 1,
   (char*)"V.GetSFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetSFunction()\n\nSpecify an implicit function to compute the s texture coordinate.\n"},
  {(char*)"SetTFunction", PyvtkImplicitTextureCoords_SetTFunction, 1,
   (char*)"V.SetTFunction(vtkImplicitFunction)\nC++: virtual void SetTFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to compute the t texture coordinate.\n"},
  {(char*)"GetTFunction", PyvtkImplicitTextureCoords_GetTFunction, 1,
   (char*)"V.GetTFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetTFunction()\n\nSpecify an implicit function to compute the t texture coordinate.\n"},
  {(char*)"SetFlipTexture", PyvtkImplicitTextureCoords_SetFlipTexture, 1,
   (char*)"V.SetFlipTexture(int)\nC++: void SetFlipTexture(int a)\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {(char*)"GetFlipTexture", PyvtkImplicitTextureCoords_GetFlipTexture, 1,
   (char*)"V.GetFlipTexture() -> int\nC++: int GetFlipTexture()\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {(char*)"FlipTextureOn", PyvtkImplicitTextureCoords_FlipTextureOn, 1,
   (char*)"V.FlipTextureOn()\nC++: void FlipTextureOn()\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {(char*)"FlipTextureOff", PyvtkImplicitTextureCoords_FlipTextureOff, 1,
   (char*)"V.FlipTextureOff()\nC++: void FlipTextureOff()\n\nIf enabled, this will flip the sense of inside and outside the\nimplicit function (i.e., a rotation around the r-s-t=0.5 axis).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitTextureCoords_StaticNew()
{
  return vtkImplicitTextureCoords::New();
}

PyObject *PyVTKClass_vtkImplicitTextureCoordsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitTextureCoords_StaticNew,
    PyvtkImplicitTextureCoords_Methods,
    "vtkImplicitTextureCoords", modulename,
    NULL, NULL,
    PyvtkImplicitTextureCoords_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImplicitTextureCoords_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitTextureCoords - generate 1D, 2D, or 3D texture coordinates\nbased on implicit function(s)\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkImplicitTextureCoords is a filter to generate 1D, 2D, or 3D\ntexture coordinates from one, two, or three implicit functions,\nrespectively. In combinations with a vtkBooleanTexture map (or\nanother texture map of your own creation), the texture coordinates\ncan be used to highlight (via color or intensity) or cut (via\ntransparency) dataset geometry without any complex geometric\nprocessing. (Note: t",
    "he texture coordinates are referred to as r-s-t\ncoordinates.)\n\nThe texture coordinates are automatically normalized to lie between\n(0,1). Thus, no matter what the implicit functions evaluate to, the\nresulting texture coordinates lie between (0,1), with the zero\nimplicit function value mapped to the 0.5 texture coordinates value.\nDepending upon the maximum negative/positive implicit function\nvalues",
    ", the full (0,1) range may not be occupied (i.e., the\npositive/negative ranges are mapped using the same scale factor).\n\nA boolean variable InvertTexture is available to flip the texture\ncoordinates around 0.5 (value 1.0 becomes 0.0, 0.25->0.75). This is\nequivalent to flipping the texture map (but a whole lot easier).\n\nCaveats:\n\nYou can use the transformation capabilities of vtkImplicitFunction to",
    "\norient, translate, and scale the implicit functions. Also, the\ndimension of the texture coordinates is implicitly defined by the\nnumber of implicit functions defined.\n\nSee Also:\n\nvtkImplicitFunction vtkTexture vtkBooleanTexture vtkTransformTexture\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitTextureCoords(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitTextureCoordsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitTextureCoords", o) != 0)
    {
    Py_DECREF(o);
    }

}

