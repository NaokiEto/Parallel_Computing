// python wrapper for vtkColorSeries
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
#include "vtkColorSeries.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkColorSeries(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkColorSeries(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkColorSeriesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkColorSeriesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkColorSeries_Doc();


static PyObject *
PyvtkColorSeries_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

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
      tempr = op->vtkColorSeries::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

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
      tempr = op->vtkColorSeries::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColorSeries *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkColorSeries::NewInstance();
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
PyvtkColorSeries_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkColorSeries *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkColorSeries::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorScheme(temp0);
      }
    else
      {
      op->vtkColorSeries::SetColorScheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorScheme();
      }
    else
      {
      tempr = op->vtkColorSeries::GetColorScheme();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColors();
      }
    else
      {
      tempr = op->vtkColorSeries::GetNumberOfColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColor(temp0);
      }
    else
      {
      tempr = op->vtkColorSeries::GetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorRepeating(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRepeating");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorRepeating(temp0);
      }
    else
      {
      tempr = op->vtkColorSeries::GetColorRepeating(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, *temp1);
      }
    else
      {
      op->vtkColorSeries::SetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_AddColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColor3ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->AddColor(*temp0);
      }
    else
      {
      op->vtkColorSeries::AddColor(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkColorSeries_InsertColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->InsertColor(temp0, *temp1);
      }
    else
      {
      op->vtkColorSeries::InsertColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_RemoveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColor(temp0);
      }
    else
      {
      op->vtkColorSeries::RemoveColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_ClearColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearColors();
      }
    else
      {
      op->vtkColorSeries::ClearColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColorSeries *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorSeries"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkColorSeries::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkColorSeries_Methods[] = {
  {(char*)"GetClassName", PyvtkColorSeries_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorSeries_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorSeries_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkColorSeries\nC++: vtkColorSeries *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorSeries_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorSeries\nC++: vtkColorSeries *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorScheme", PyvtkColorSeries_SetColorScheme, 1,
   (char*)"V.SetColorScheme(int)\nC++: void SetColorScheme(int scheme)\n\nSet the color scheme that should be used from those in the enum.\n"},
  {(char*)"GetColorScheme", PyvtkColorSeries_GetColorScheme, 1,
   (char*)"V.GetColorScheme() -> int\nC++: int GetColorScheme()\n\nGet the color scheme that is currently being used.\n"},
  {(char*)"GetNumberOfColors", PyvtkColorSeries_GetNumberOfColors, 1,
   (char*)"V.GetNumberOfColors() -> int\nC++: int GetNumberOfColors()\n\nGet the number of colors available in the current color scheme.\n"},
  {(char*)"GetColor", PyvtkColorSeries_GetColor, 1,
   (char*)"V.GetColor(int) -> vtkColor3ub\nC++: vtkColor3ub GetColor(int index)\n\nGet the color at the specified index. If the index is out of\nrange then black will be returned.\n"},
  {(char*)"GetColorRepeating", PyvtkColorSeries_GetColorRepeating, 1,
   (char*)"V.GetColorRepeating(int) -> vtkColor3ub\nC++: vtkColor3ub GetColorRepeating(int index)\n\nGet the color at the specified index. If the index is out of\nrange then the call wraps around, i.e. uses the mod operator.\n"},
  {(char*)"SetColor", PyvtkColorSeries_SetColor, 1,
   (char*)"V.SetColor(int, vtkColor3ub)\nC++: void SetColor(int index, const vtkColor3ub &color)\n\nSet the color at the specified index. Does nothing if the index\nis out of range.\n"},
  {(char*)"AddColor", PyvtkColorSeries_AddColor, 1,
   (char*)"V.AddColor(vtkColor3ub)\nC++: void AddColor(const vtkColor3ub &color)\n\nAdds the color to the end of the list.\n"},
  {(char*)"InsertColor", PyvtkColorSeries_InsertColor, 1,
   (char*)"V.InsertColor(int, vtkColor3ub)\nC++: void InsertColor(int index, const vtkColor3ub &color)\n\nInserts the color at the specified index in the list.\n"},
  {(char*)"RemoveColor", PyvtkColorSeries_RemoveColor, 1,
   (char*)"V.RemoveColor(int)\nC++: void RemoveColor(int index)\n\nRemoves the color at the specified index in the list.\n"},
  {(char*)"ClearColors", PyvtkColorSeries_ClearColors, 1,
   (char*)"V.ClearColors()\nC++: void ClearColors()\n\nClears the list of colors.\n"},
  {(char*)"DeepCopy", PyvtkColorSeries_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkColorSeries)\nC++: void DeepCopy(vtkColorSeries *chartColors)\n\nMake a deep copy of the supplied object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorSeries_StaticNew()
{
  return vtkColorSeries::New();
}

PyObject *PyVTKClass_vtkColorSeriesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorSeries_StaticNew,
    PyvtkColorSeries_Methods,
    "vtkColorSeries", modulename,
    NULL, NULL,
    PyvtkColorSeries_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SPECTRUM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"WARM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"COOL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"BLUES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"WILD_FLOWER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"CITRUS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"CUSTOM", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkColorSeries_Doc()
{
  static const char *docstring[] = {
    "vtkColorSeries - stores a list of colors.\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkColorSeries stores a list of colors. There are several schemes\navailable and functions to control several aspects of what colors are\nreturned. In essence a color scheme is set and colors are returned\nbased on the index requested.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorSeries(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorSeriesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorSeries", o) != 0)
    {
    Py_DECREF(o);
    }

}

