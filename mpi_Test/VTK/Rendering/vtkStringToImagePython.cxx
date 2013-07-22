// python wrapper for vtkStringToImage
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
#include "vtkUnicodeString.h"
#include "vtkStdString.h"
#include "vtkStringToImage.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStringToImage(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStringToImage(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStringToImageNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStringToImageNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStringToImage_Doc();


static PyObject *
PyvtkStringToImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

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
      tempr = op->vtkStringToImage::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

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
      tempr = op->vtkStringToImage::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkStringToImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStringToImage::NewInstance();
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
PyvtkStringToImage_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkVector2i tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    tempr = op->GetBounds(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyObject *
PyvtkStringToImage_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkVector2i tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    tempr = op->GetBounds(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToImage_GetBounds_Methods[] = {
  {NULL, PyvtkStringToImage_GetBounds_s1, 1,
   (char*)"@OO *vtkTextProperty unicode"},
  {NULL, PyvtkStringToImage_GetBounds_s2, 1,
   (char*)"@Os *vtkTextProperty"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStringToImage_GetBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToImage_GetBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkStringToImage_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkImageData *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    tempr = op->RenderString(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStringToImage_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkImageData *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    tempr = op->RenderString(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToImage_RenderString_Methods[] = {
  {NULL, PyvtkStringToImage_RenderString_s1, 1,
   (char*)"@OOO *vtkTextProperty unicode *vtkImageData"},
  {NULL, PyvtkStringToImage_RenderString_s2, 1,
   (char*)"@OsO *vtkTextProperty *vtkImageData"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStringToImage_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToImage_RenderString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RenderString");
  return NULL;
}



static PyObject *
PyvtkStringToImage_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleToPowerOfTwo(temp0);
      }
    else
      {
      op->vtkStringToImage::SetScaleToPowerOfTwo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringToImage_GetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringToImage *op = static_cast<vtkStringToImage *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleToPowerOfTwo();
      }
    else
      {
      tempr = op->vtkStringToImage::GetScaleToPowerOfTwo();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStringToImage_Methods[] = {
  {(char*)"GetClassName", PyvtkStringToImage_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringToImage_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringToImage_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStringToImage\nC++: vtkStringToImage *NewInstance()\n\n"},
  {(char*)"GetBounds", PyvtkStringToImage_GetBounds, 1,
   (char*)"V.GetBounds(vtkTextProperty, unicode) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkUnicodeString &string)\nV.GetBounds(vtkTextProperty, string) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkStdString &string)\n\nGiven a text property and a string, get the bounding box [xmin,\nxmax] x [ymin, ymax]. Note that this is the bounding box of the\narea where actual pixels will be written, given a\ntext/pen/baseline location of (0,0). For example, if the string\nstarts with a 'space', or depending on the orientation, you can\nend up with a [-20, -10] x [5, 10] bbox (the math to get the real\nbbox is straightforward). Return 1 on success, 0 otherwise. You\ncan use IsBoundingBoxValid() to test if the computed bbox is\nvalid (it may not if GetBoundingBox() failed or if the string was\nempty).\n"},
  {(char*)"RenderString", PyvtkStringToImage_RenderString, 1,
   (char*)"V.RenderString(vtkTextProperty, unicode, vtkImageData) -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkUnicodeString &string, vtkImageData *data)\nV.RenderString(vtkTextProperty, string, vtkImageData) -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkStdString &string, vtkImageData *data)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkStringToImage_SetScaleToPowerOfTwo, 1,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {(char*)"GetScaleToPowerOfTwo", PyvtkStringToImage_GetScaleToPowerOfTwo, 1,
   (char*)"V.GetScaleToPowerOfTwo() -> bool\nC++: bool GetScaleToPowerOfTwo()\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStringToImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStringToImage_Methods,
    "vtkStringToImage", modulename,
    NULL, NULL,
    PyvtkStringToImage_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStringToImage_Doc()
{
  static const char *docstring[] = {
    "vtkStringToImage - uses Qt to render the supplied text to an image.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringToImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringToImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringToImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

