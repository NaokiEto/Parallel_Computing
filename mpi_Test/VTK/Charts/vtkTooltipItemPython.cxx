// python wrapper for vtkTooltipItem
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
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkTooltipItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTooltipItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTooltipItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTooltipItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTooltipItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkTooltipItem_Doc();


static PyObject *
PyvtkTooltipItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

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
      tempr = op->vtkTooltipItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

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
      tempr = op->vtkTooltipItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkTooltipItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTooltipItem::NewInstance();
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
PyvtkTooltipItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTooltipItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTooltipItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkTooltipItem::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTooltipItem_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  float temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkTooltipItem::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTooltipItem_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPosition(*temp0);
      }
    else
      {
      op->vtkTooltipItem::SetPosition(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTooltipItem_SetPosition_Methods[] = {
  {NULL, PyvtkTooltipItem_SetPosition_s2, 1,
   (char*)"@O *f"},
  {NULL, PyvtkTooltipItem_SetPosition_s3, 1,
   (char*)"@O &vtkVector2f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTooltipItem_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTooltipItem_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTooltipItem_SetPosition_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkTooltipItem_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  float *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkTooltipItem::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetPositionVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkVector2f tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPositionVector();
      }
    else
      {
      tempr = op->vtkTooltipItem::GetPositionVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0);
      }
    else
      {
      op->vtkTooltipItem::SetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetText();
      }
    else
      {
      tempr = op->vtkTooltipItem::GetText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPen();
      }
    else
      {
      tempr = op->vtkTooltipItem::GetPen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkBrush *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBrush();
      }
    else
      {
      tempr = op->vtkTooltipItem::GetBrush();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_GetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperties();
      }
    else
      {
      tempr = op->vtkTooltipItem::GetTextProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkTooltipItem::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTooltipItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTooltipItem *op = static_cast<vtkTooltipItem *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkTooltipItem::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTooltipItem_Methods[] = {
  {(char*)"GetClassName", PyvtkTooltipItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTooltipItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTooltipItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTooltipItem\nC++: vtkTooltipItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTooltipItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTooltipItem\nC++: vtkTooltipItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkTooltipItem_SetPosition, 1,
   (char*)"V.SetPosition(float, float)\nC++: void SetPosition(float, float)\nV.SetPosition((float, float))\nC++: void SetPosition(float a[2])\nV.SetPosition(vtkVector2f)\nC++: void SetPosition(const vtkVector2f &pos)\n\n"},
  {(char*)"GetPosition", PyvtkTooltipItem_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float)\nC++: float *GetPosition()\n\n"},
  {(char*)"GetPositionVector", PyvtkTooltipItem_GetPositionVector, 1,
   (char*)"V.GetPositionVector() -> vtkVector2f\nC++: vtkVector2f GetPositionVector()\n\nGet position of the axis (in pixels).\n"},
  {(char*)"SetText", PyvtkTooltipItem_SetText, 1,
   (char*)"V.SetText(string)\nC++: virtual void SetText(const vtkStdString &title)\n\nGet/set the text of the item.\n"},
  {(char*)"GetText", PyvtkTooltipItem_GetText, 1,
   (char*)"V.GetText() -> string\nC++: virtual vtkStdString GetText()\n\nGet/set the text of the item.\n"},
  {(char*)"GetPen", PyvtkTooltipItem_GetPen, 1,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet a pointer to the vtkTextProperty object that controls the way\nthe text is rendered.\n"},
  {(char*)"GetBrush", PyvtkTooltipItem_GetBrush, 1,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet a pointer to the vtkPen object.\n"},
  {(char*)"GetTextProperties", PyvtkTooltipItem_GetTextProperties, 1,
   (char*)"V.GetTextProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperties()\n\nGet the vtkTextProperty that governs how the tooltip text is\ndisplayed.\n"},
  {(char*)"Update", PyvtkTooltipItem_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the geometry of the tooltip.\n"},
  {(char*)"Paint", PyvtkTooltipItem_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the tooltip.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTooltipItem_StaticNew()
{
  return vtkTooltipItem::New();
}

PyObject *PyVTKClass_vtkTooltipItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTooltipItem_StaticNew,
    PyvtkTooltipItem_Methods,
    "vtkTooltipItem", modulename,
    NULL, NULL,
    PyvtkTooltipItem_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkTooltipItem_Doc()
{
  static const char *docstring[] = {
    "vtkTooltipItem - takes care of drawing 2D axes\n\n",
    "Superclass: vtkContextItem\n\n",
    "The vtkTooltipItem is drawn in screen coordinates. It is used to\ndisplay a tooltip on a scene, giving additional information about an\nelement on the scene, such as in vtkChartXY. It takes care of\nensuring that it draws itself within the bounds of the screen.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTooltipItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTooltipItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTooltipItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

