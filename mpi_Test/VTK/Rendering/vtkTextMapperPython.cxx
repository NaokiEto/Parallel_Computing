// python wrapper for vtkTextMapper
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
#include "vtkTextMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTextMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTextMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkTextMapper_Doc();


static PyObject *
PyvtkTextMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

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
      tempr = op->vtkTextMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

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
      tempr = op->vtkTextMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTextMapper::NewInstance();
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
PyvtkTextMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTextMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTextMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSize(temp0, temp1);
      }
    else
      {
      op->vtkTextMapper::GetSize(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth(temp0);
      }
    else
      {
      tempr = op->vtkTextMapper::GetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight(temp0);
      }
    else
      {
      tempr = op->vtkTextMapper::GetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkTextMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkTextMapper::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkTextMapper::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkTextMapper::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkTextMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkTextMapper::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextMapper_GetNumberOfLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLines(temp0);
      }
    else
      {
      tempr = op->vtkTextMapper::GetNumberOfLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextMapper_GetNumberOfLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLines();
      }
    else
      {
      tempr = op->vtkTextMapper::GetNumberOfLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextMapper_GetNumberOfLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTextMapper_GetNumberOfLines_s1(self, args);
    case 0:
      return PyvtkTextMapper_GetNumberOfLines_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfLines");
  return NULL;
}



static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->SetConstrainedFontSize(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetConstrainedFontSize");

  vtkTextMapper *temp0 = NULL;
  vtkViewport *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextMapper") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    tempr = vtkTextMapper::SetConstrainedFontSize(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTextMapper_SetConstrainedFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextMapper_SetConstrainedFontSize_s1(self, args);
    case 4:
      return PyvtkTextMapper_SetConstrainedFontSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetConstrainedFontSize");
  return NULL;
}



static PyObject *
PyvtkTextMapper_GetSystemFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSystemFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextMapper *op = static_cast<vtkTextMapper *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSystemFontSize(temp0);
      }
    else
      {
      tempr = op->vtkTextMapper::GetSystemFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkTextMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTextMapper\nC++: vtkTextMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextMapper\nC++: vtkTextMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSize", PyvtkTextMapper_GetSize, 1,
   (char*)"V.GetSize(vtkViewport, [int, int])\nC++: virtual void GetSize(vtkViewport *, int size[2])\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {(char*)"GetWidth", PyvtkTextMapper_GetWidth, 1,
   (char*)"V.GetWidth(vtkViewport) -> int\nC++: virtual int GetWidth(vtkViewport *v)\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {(char*)"GetHeight", PyvtkTextMapper_GetHeight, 1,
   (char*)"V.GetHeight(vtkViewport) -> int\nC++: virtual int GetHeight(vtkViewport *v)\n\nReturn the size[2]/width/height of the rectangle required to draw\nthis mapper (in pixels).\n"},
  {(char*)"SetInput", PyvtkTextMapper_SetInput, 1,
   (char*)"V.SetInput(string)\nC++: virtual void SetInput(const char *inputString)\n\nSet the input text string to the mapper.  The mapper recognizes\n\"\\n\" as a carriage return/linefeed (line separator).\n"},
  {(char*)"GetInput", PyvtkTextMapper_GetInput, 1,
   (char*)"V.GetInput() -> string\nC++: char *GetInput()\n\nSet the input text string to the mapper.  The mapper recognizes\n\"\\n\" as a carriage return/linefeed (line separator).\n"},
  {(char*)"SetTextProperty", PyvtkTextMapper_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {(char*)"GetTextProperty", PyvtkTextMapper_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property.\n"},
  {(char*)"ShallowCopy", PyvtkTextMapper_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkTextMapper)\nC++: void ShallowCopy(vtkTextMapper *tm)\n\nShallow copy of an actor.\n"},
  {(char*)"GetNumberOfLines", PyvtkTextMapper_GetNumberOfLines, 1,
   (char*)"V.GetNumberOfLines(string) -> int\nC++: int GetNumberOfLines(const char *input)\nV.GetNumberOfLines() -> int\nC++: int GetNumberOfLines()\n\nDetermine the number of lines in the input string (delimited by\n\"\\n\").\n"},
  {(char*)"SetConstrainedFontSize", PyvtkTextMapper_SetConstrainedFontSize, 1,
   (char*)"V.SetConstrainedFontSize(vtkViewport, int, int) -> int\nC++: virtual int SetConstrainedFontSize(vtkViewport *,\n    int targetWidth, int targetHeight)\nV.SetConstrainedFontSize(vtkTextMapper, vtkViewport, int, int)\n    -> int\nC++: static int SetConstrainedFontSize(vtkTextMapper *,\n    vtkViewport *, int targetWidth, int targetHeight)\n\nSet and return the font size required to make this mapper fit in\na given target rectangle (width x height, in pixels). A static\nversion of the method is also available for convenience to other\nclasses (e.g., widgets).\n"},
  {(char*)"GetSystemFontSize", PyvtkTextMapper_GetSystemFontSize, 1,
   (char*)"V.GetSystemFontSize(int) -> int\nC++: virtual int GetSystemFontSize(int size)\n\nGet the available system font size matching a font size.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextMapper_StaticNew()
{
  return vtkTextMapper::New();
}

PyObject *PyVTKClass_vtkTextMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextMapper_StaticNew,
    PyvtkTextMapper_Methods,
    "vtkTextMapper", modulename,
    NULL, NULL,
    PyvtkTextMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));
  return cls;
}

const char **PyvtkTextMapper_Doc()
{
  static const char *docstring[] = {
    "vtkTextMapper - 2D text annotation\n\n",
    "Superclass: vtkMapper2D\n\n",
    "vtkTextMapper provides 2D text annotation support for VTK.  It is a\nvtkMapper2D that can be associated with a vtkActor2D and placed into\na vtkRenderer.\n\nTo use vtkTextMapper, specify an input text string.\n\nSee Also:\n\nvtkMapper2D vtkActor2D vtkLegendBoxActor vtkCaptionActor2D\nvtkVectorText vtkTextProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

