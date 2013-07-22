// python wrapper for vtkPen
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
#include "vtkPen.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPen(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPen(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPenNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPenNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPen_Doc();


static PyObject *
PyvtkPen_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      tempr = op->vtkPen::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPen_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      tempr = op->vtkPen::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPen_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPen::NewInstance();
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
PyvtkPen_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPen *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPen::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPen_SetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineType(temp0);
      }
    else
      {
      op->vtkPen::SetLineType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPen_GetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineType();
      }
    else
      {
      tempr = op->vtkPen::GetLineType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPen_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColorF(temp0);
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
PyvtkPen_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColorF(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPen_SetColorF_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColorF(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPen_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPen_SetColorF_s1(self, args);
    case 3:
      return PyvtkPen_SetColorF_s2(self, args);
    case 4:
      return PyvtkPen_SetColorF_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return NULL;
}



static PyObject *
PyvtkPen_SetOpacityF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetOpacityF(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPen_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColor(temp0);
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
PyvtkPen_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPen_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPen_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetColor(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPen_SetColor_Methods[] = {
  {NULL, PyvtkPen_SetColor_s1, 1,
   (char*)"@O *b"},
  {NULL, PyvtkPen_SetColor_s4, 1,
   (char*)"@O &vtkColor4ub"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPen_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPen_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPen_SetColor_s2(self, args);
    case 4:
      return PyvtkPen_SetColor_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPen_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->vtkPen::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPen_GetColorF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->GetColorF(temp0);
      }
    else
      {
      op->vtkPen::GetColorF(temp0);
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
PyvtkPen_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      op->GetColor(temp0);
      }
    else
      {
      op->vtkPen::GetColor(temp0);
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
PyvtkPen_GetColorObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

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
      tempr = op->vtkPen::GetColorObject();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
      }
    }

  return result;
}


static PyObject *
PyvtkPen_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity();
      }
    else
      {
      tempr = op->vtkPen::GetOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPen_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkPen::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPen_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkPen::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPen_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPen *op = static_cast<vtkPen *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPen::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPen_Methods[] = {
  {(char*)"GetClassName", PyvtkPen_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPen_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPen_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPen\nC++: vtkPen *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPen_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPen\nC++: vtkPen *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLineType", PyvtkPen_SetLineType, 1,
   (char*)"V.SetLineType(int)\nC++: void SetLineType(int type)\n\nSet the type of line that the pen should draw. The default is\nsolid (1).\n"},
  {(char*)"GetLineType", PyvtkPen_GetLineType, 1,
   (char*)"V.GetLineType() -> int\nC++: int GetLineType()\n\nGet the type of line that the pen will draw.\n"},
  {(char*)"SetColorF", PyvtkPen_SetColorF, 1,
   (char*)"V.SetColorF([float, float, float])\nC++: void SetColorF(double color[3])\nV.SetColorF(float, float, float)\nC++: void SetColorF(double r, double g, double b)\nV.SetColorF(float, float, float, float)\nC++: void SetColorF(double r, double g, double b, double a)\n\nSet the color of the brush with three component doubles (RGB),\nranging from 0.0 to 1.0.\n"},
  {(char*)"SetOpacityF", PyvtkPen_SetOpacityF, 1,
   (char*)"V.SetOpacityF(float)\nC++: void SetOpacityF(double a)\n\nSet the opacity with a double, ranging from 0.0 (transparent) to\n1.0 (opaque).\n"},
  {(char*)"SetColor", PyvtkPen_SetColor, 1,
   (char*)"V.SetColor([int, int, int])\nC++: void SetColor(unsigned char color[3])\nV.SetColor(int, int, int)\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b)\nV.SetColor(int, int, int, int)\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(vtkColor4ub)\nC++: void SetColor(const vtkColor4ub &color)\n\nSet the color of the brush with three component unsigned chars\n(RGB), ranging from 0 to 255.\n"},
  {(char*)"SetOpacity", PyvtkPen_SetOpacity, 1,
   (char*)"V.SetOpacity(int)\nC++: void SetOpacity(unsigned char a)\n\nSet the opacity with an unsigned char, ranging from 0\n(transparent) to 255 (opaque).\n"},
  {(char*)"GetColorF", PyvtkPen_GetColorF, 1,
   (char*)"V.GetColorF([float, float, float])\nC++: void GetColorF(double color[3])\n\nGet the color of the brush - expects a double of length 3 to copy\ninto.\n"},
  {(char*)"GetColor", PyvtkPen_GetColor, 1,
   (char*)"V.GetColor([int, int, int])\nC++: void GetColor(unsigned char color[3])\n\nGet the color of the brush - expects an unsigned char of length\n3.\n"},
  {(char*)"GetColorObject", PyvtkPen_GetColorObject, 1,
   (char*)"V.GetColorObject() -> vtkColor4ub\nC++: vtkColor4ub GetColorObject()\n\nGet the color of the pen.\n"},
  {(char*)"GetOpacity", PyvtkPen_GetOpacity, 1,
   (char*)"V.GetOpacity() -> int\nC++: unsigned char GetOpacity()\n\nGet the opacity (unsigned char), ranging from 0 (transparent) to\n255 (opaque).\n"},
  {(char*)"SetWidth", PyvtkPen_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(float a)\n\nSet/Get the width of the pen.\n"},
  {(char*)"GetWidth", PyvtkPen_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: float GetWidth()\n\nSet/Get the width of the pen.\n"},
  {(char*)"DeepCopy", PyvtkPen_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkPen)\nC++: void DeepCopy(vtkPen *pen)\n\nMake a deep copy of the supplied pen.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPen_StaticNew()
{
  return vtkPen::New();
}

PyObject *PyVTKClass_vtkPenNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPen_StaticNew,
    PyvtkPen_Methods,
    "vtkPen", modulename,
    NULL, NULL,
    PyvtkPen_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NO_PEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SOLID_LINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"DASH_LINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"DOT_LINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"DASH_DOT_LINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"DASH_DOT_DOT_LINE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPen_Doc()
{
  static const char *docstring[] = {
    "vtkPen - provides a pen that draws the outlines of shapes drawn\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkPen defines the outline of shapes that are drawn by\nvtkContext2D. The color is stored as four unsigned chars (RGBA),\nwhere the opacity defaults to 255, but can be modified separately to\nthe other components. Ideally we would use a lightweight color class\nto store and pass around colors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPen(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPenNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPen", o) != 0)
    {
    Py_DECREF(o);
    }

}

