// python wrapper for vtkBrush
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
#include "vtkColor.h"
#include "vtkBrush.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBrush(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBrush(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBrushNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBrushNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBrush_Doc();


static PyObject *
PyvtkBrush_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

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
      tempr = op->vtkBrush::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

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
      tempr = op->vtkBrush::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkBrush *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBrush::NewInstance();
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
PyvtkBrush_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBrush *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBrush::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColorF(temp0);
      }
    else
      {
      op->vtkBrush::SetColorF(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColorF(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBrush::SetColorF(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetColorF(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBrush::SetColorF(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBrush_SetColorF_s1(self, args);
    case 3:
      return PyvtkBrush_SetColorF_s2(self, args);
    case 4:
      return PyvtkBrush_SetColorF_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return NULL;
}



static PyObject *
PyvtkBrush_SetOpacityF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacityF(temp0);
      }
    else
      {
      op->vtkBrush::SetOpacityF(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0[3];
  unsigned char save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkBrush::SetColor(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBrush::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBrush::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkColor4ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
    {
    if (ap.IsBound())
      {
      op->SetColor(*temp0);
      }
    else
      {
      op->vtkBrush::SetColor(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBrush_SetColor_Methods[] = {
  {NULL, PyvtkBrush_SetColor_s1, 1,
   (char*)"@O *b"},
  {NULL, PyvtkBrush_SetColor_s4, 1,
   (char*)"@O &vtkColor4ub"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBrush_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBrush_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkBrush_SetColor_s2(self, args);
    case 4:
      return PyvtkBrush_SetColor_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkBrush_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkBrush::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetColorF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColorF(temp0);
      }
    else
      {
      op->vtkBrush::GetColorF(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0[4];
  unsigned char save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColor(temp0);
      }
    else
      {
      op->vtkBrush::GetColor(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetColorObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkColor4ub tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorObject();
      }
    else
      {
      tempr = op->vtkBrush::GetColorObject();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkBrush::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture();
      }
    else
      {
      tempr = op->vtkBrush::GetTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_SetTextureProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureProperties(temp0);
      }
    else
      {
      op->vtkBrush::SetTextureProperties(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_GetTextureProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureProperties();
      }
    else
      {
      tempr = op->vtkBrush::GetTextureProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrush_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkBrush::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBrush_Methods[] = {
  {(char*)"GetClassName", PyvtkBrush_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBrush_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBrush_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBrush\nC++: vtkBrush *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBrush_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBrush\nC++: vtkBrush *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorF", PyvtkBrush_SetColorF, 1,
   (char*)"V.SetColorF([float, float, float])\nC++: void SetColorF(double color[3])\nV.SetColorF(float, float, float)\nC++: void SetColorF(double r, double g, double b)\nV.SetColorF(float, float, float, float)\nC++: void SetColorF(double r, double g, double b, double a)\n\nSet the color of the brush with three component doubles (RGB),\nranging from 0.0 to 1.0.\n"},
  {(char*)"SetOpacityF", PyvtkBrush_SetOpacityF, 1,
   (char*)"V.SetOpacityF(float)\nC++: void SetOpacityF(double a)\n\nSet the opacity with a double, ranging from 0.0 (transparent) to\n1.0 (opaque).\n"},
  {(char*)"SetColor", PyvtkBrush_SetColor, 1,
   (char*)"V.SetColor([int, int, int])\nC++: void SetColor(unsigned char color[3])\nV.SetColor(int, int, int)\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b)\nV.SetColor(int, int, int, int)\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(vtkColor4ub)\nC++: void SetColor(const vtkColor4ub &color)\n\nSet the color of the brush with three component unsigned chars\n(RGB), ranging from 0 to 255.\n"},
  {(char*)"SetOpacity", PyvtkBrush_SetOpacity, 1,
   (char*)"V.SetOpacity(int)\nC++: void SetOpacity(unsigned char a)\n\nSet the opacity with an unsigned char, ranging from 0\n(transparent) to 255 (opaque).\n"},
  {(char*)"GetColorF", PyvtkBrush_GetColorF, 1,
   (char*)"V.GetColorF([float, float, float, float])\nC++: void GetColorF(double color[4])\n\nGet the color of the brush - expects a double of length 4 to copy\ninto.\n"},
  {(char*)"GetColor", PyvtkBrush_GetColor, 1,
   (char*)"V.GetColor([int, int, int, int])\nC++: void GetColor(unsigned char color[4])\n\nGet the color of the brush - expects an unsigned char of length\n4.\n"},
  {(char*)"GetColorObject", PyvtkBrush_GetColorObject, 1,
   (char*)"V.GetColorObject() -> vtkColor4ub\nC++: vtkColor4ub GetColorObject()\n\nGet the color of the brush.\n"},
  {(char*)"SetTexture", PyvtkBrush_SetTexture, 1,
   (char*)"V.SetTexture(vtkImageData)\nC++: void SetTexture(vtkImageData *image)\n\nSet the texture that will be used to fill polygons By default, no\ntexture is set. The image will be registered with the brush (ref\ncount is incremented) To disable the texture, set Texture to 0.\n"},
  {(char*)"GetTexture", PyvtkBrush_GetTexture, 1,
   (char*)"V.GetTexture() -> vtkImageData\nC++: vtkImageData *GetTexture()\n\n"},
  {(char*)"SetTextureProperties", PyvtkBrush_SetTextureProperties, 1,
   (char*)"V.SetTextureProperties(int)\nC++: void SetTextureProperties(int a)\n\n"},
  {(char*)"GetTextureProperties", PyvtkBrush_GetTextureProperties, 1,
   (char*)"V.GetTextureProperties() -> int\nC++: int GetTextureProperties()\n\n"},
  {(char*)"DeepCopy", PyvtkBrush_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkBrush)\nC++: void DeepCopy(vtkBrush *brush)\n\nMake a deep copy of the supplied brush.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBrush_StaticNew()
{
  return vtkBrush::New();
}

PyObject *PyVTKClass_vtkBrushNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBrush_StaticNew,
    PyvtkBrush_Methods,
    "vtkBrush", modulename,
    NULL, NULL,
    PyvtkBrush_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0x01);
    if (o && PyDict_SetItemString(d, (char *)"Nearest", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x02);
    if (o && PyDict_SetItemString(d, (char *)"Linear", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x04);
    if (o && PyDict_SetItemString(d, (char *)"Stretch", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x08);
    if (o && PyDict_SetItemString(d, (char *)"Repeat", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkBrush_Doc()
{
  static const char *docstring[] = {
    "vtkBrush - provides a brush that fills shapes drawn by vtkContext2D.\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkBrush defines the fill (or pattern) of shapes that are drawn\nby vtkContext2D. The color is stored as four unsigned chars (RGBA),\nwhere the opacity defaults to 255, but can be modified separately to\nthe other components. Ideally we would use a lightweight color class\nto store and pass around colors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBrush(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBrushNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBrush", o) != 0)
    {
    Py_DECREF(o);
    }

}

