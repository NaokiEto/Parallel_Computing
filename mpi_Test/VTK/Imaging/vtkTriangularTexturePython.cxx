// python wrapper for vtkTriangularTexture
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
#include "vtkTriangularTexture.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTriangularTexture(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTriangularTexture(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTriangularTextureNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTriangularTextureNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkTriangularTexture_Doc();


static PyObject *
PyvtkTriangularTexture_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

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
      tempr = op->vtkTriangularTexture::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

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
      tempr = op->vtkTriangularTexture::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  vtkTriangularTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTriangularTexture::NewInstance();
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
PyvtkTriangularTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTriangularTexture *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTriangularTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkTriangularTexture::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkTriangularTexture::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXSize(temp0);
      }
    else
      {
      op->vtkTriangularTexture::SetXSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXSize();
      }
    else
      {
      tempr = op->vtkTriangularTexture::GetXSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYSize(temp0);
      }
    else
      {
      op->vtkTriangularTexture::SetYSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYSize();
      }
    else
      {
      tempr = op->vtkTriangularTexture::GetYSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_SetTexturePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTexturePattern(temp0);
      }
    else
      {
      op->vtkTriangularTexture::SetTexturePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePatternMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePatternMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexturePatternMinValue();
      }
    else
      {
      tempr = op->vtkTriangularTexture::GetTexturePatternMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePatternMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePatternMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexturePatternMaxValue();
      }
    else
      {
      tempr = op->vtkTriangularTexture::GetTexturePatternMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangularTexture_GetTexturePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTexture *op = static_cast<vtkTriangularTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexturePattern();
      }
    else
      {
      tempr = op->vtkTriangularTexture::GetTexturePattern();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTriangularTexture_Methods[] = {
  {(char*)"GetClassName", PyvtkTriangularTexture_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTriangularTexture_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTriangularTexture_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTriangularTexture\nC++: vtkTriangularTexture *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTriangularTexture_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTriangularTexture\nC++: vtkTriangularTexture *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScaleFactor", PyvtkTriangularTexture_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSet a Scale Factor.\n"},
  {(char*)"GetScaleFactor", PyvtkTriangularTexture_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSet a Scale Factor.\n"},
  {(char*)"SetXSize", PyvtkTriangularTexture_SetXSize, 1,
   (char*)"V.SetXSize(int)\nC++: void SetXSize(int a)\n\nSet the X texture map dimension. Default is 64.\n"},
  {(char*)"GetXSize", PyvtkTriangularTexture_GetXSize, 1,
   (char*)"V.GetXSize() -> int\nC++: int GetXSize()\n\nSet the X texture map dimension. Default is 64.\n"},
  {(char*)"SetYSize", PyvtkTriangularTexture_SetYSize, 1,
   (char*)"V.SetYSize(int)\nC++: void SetYSize(int a)\n\nSet the Y texture map dimension. Default is 64.\n"},
  {(char*)"GetYSize", PyvtkTriangularTexture_GetYSize, 1,
   (char*)"V.GetYSize() -> int\nC++: int GetYSize()\n\nSet the Y texture map dimension. Default is 64.\n"},
  {(char*)"SetTexturePattern", PyvtkTriangularTexture_SetTexturePattern, 1,
   (char*)"V.SetTexturePattern(int)\nC++: void SetTexturePattern(int)\n\nSet the texture pattern.\n   1 = opaque at centroid (default)\n   2 = opaque at vertices\n   3 = opaque in rings around vertices\n"},
  {(char*)"GetTexturePatternMinValue", PyvtkTriangularTexture_GetTexturePatternMinValue, 1,
   (char*)"V.GetTexturePatternMinValue() -> int\nC++: int GetTexturePatternMinValue()\n\nSet the texture pattern.\n   1 = opaque at centroid (default)\n   2 = opaque at vertices\n   3 = opaque in rings around vertices\n"},
  {(char*)"GetTexturePatternMaxValue", PyvtkTriangularTexture_GetTexturePatternMaxValue, 1,
   (char*)"V.GetTexturePatternMaxValue() -> int\nC++: int GetTexturePatternMaxValue()\n\nSet the texture pattern.\n   1 = opaque at centroid (default)\n   2 = opaque at vertices\n   3 = opaque in rings around vertices\n"},
  {(char*)"GetTexturePattern", PyvtkTriangularTexture_GetTexturePattern, 1,
   (char*)"V.GetTexturePattern() -> int\nC++: int GetTexturePattern()\n\nSet the texture pattern.\n   1 = opaque at centroid (default)\n   2 = opaque at vertices\n   3 = opaque in rings around vertices\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTriangularTexture_StaticNew()
{
  return vtkTriangularTexture::New();
}

PyObject *PyVTKClass_vtkTriangularTextureNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTriangularTexture_StaticNew,
    PyvtkTriangularTexture_Methods,
    "vtkTriangularTexture", modulename,
    NULL, NULL,
    PyvtkTriangularTexture_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTriangularTexture_Doc()
{
  static const char *docstring[] = {
    "vtkTriangularTexture - generate 2D triangular texture map\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkTriangularTexture is a filter that generates a 2D texture map\nbased on the paper \"Opacity-modulating Triangular Textures for Irregular\nSurfaces,\" by Penny Rheingans, IEEE Visualization '96, pp. 219-225.\nThe textures assume texture coordinates of (0,0), (1.0) and (.5,\nsqrt(3)/2). The sequence of texture values is the same along each\nedge of the triangular texture map. So, the assignment order of",
    "\ntexture coordinates is arbitrary.\n\nSee Also:\n\nvtkTriangularTCoords\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTriangularTexture(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTriangularTextureNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTriangularTexture", o) != 0)
    {
    Py_DECREF(o);
    }

}

