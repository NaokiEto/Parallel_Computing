// python wrapper for vtkFreeTypeStringToImage
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
#include "vtkFreeTypeStringToImage.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFreeTypeStringToImage(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFreeTypeStringToImage(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFreeTypeStringToImageNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFreeTypeStringToImageNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStringToImageNew
extern "C" { PyObject *PyVTKClass_vtkStringToImageNew(const char *); }
#define DECLARED_PyVTKClass_vtkStringToImageNew
#endif

static const char **PyvtkFreeTypeStringToImage_Doc();


static PyObject *
PyvtkFreeTypeStringToImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

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
      tempr = op->vtkFreeTypeStringToImage::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

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
      tempr = op->vtkFreeTypeStringToImage::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkFreeTypeStringToImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFreeTypeStringToImage::NewInstance();
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
PyvtkFreeTypeStringToImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFreeTypeStringToImage *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFreeTypeStringToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkVector2i tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFreeTypeStringToImage::GetBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyObject *
PyvtkFreeTypeStringToImage_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkVector2i tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFreeTypeStringToImage::GetBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}

static PyMethodDef PyvtkFreeTypeStringToImage_GetBounds_Methods[] = {
  {NULL, PyvtkFreeTypeStringToImage_GetBounds_s1, 1,
   (char*)"@OO *vtkTextProperty unicode"},
  {NULL, PyvtkFreeTypeStringToImage_GetBounds_s2, 1,
   (char*)"@Os *vtkTextProperty"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFreeTypeStringToImage_GetBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeStringToImage_GetBounds_Methods;
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
PyvtkFreeTypeStringToImage_RenderString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  vtkImageData *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderString(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkFreeTypeStringToImage::RenderString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFreeTypeStringToImage_RenderString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  vtkImageData *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderString(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkFreeTypeStringToImage::RenderString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFreeTypeStringToImage_RenderString_Methods[] = {
  {NULL, PyvtkFreeTypeStringToImage_RenderString_s1, 1,
   (char*)"@OOO *vtkTextProperty unicode *vtkImageData"},
  {NULL, PyvtkFreeTypeStringToImage_RenderString_s2, 1,
   (char*)"@OsO *vtkTextProperty *vtkImageData"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFreeTypeStringToImage_RenderString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeStringToImage_RenderString_Methods;
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
PyvtkFreeTypeStringToImage_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

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
      op->vtkFreeTypeStringToImage::SetScaleToPowerOfTwo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeStringToImage_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeStringToImage *op = static_cast<vtkFreeTypeStringToImage *>(vp);

  vtkFreeTypeStringToImage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFreeTypeStringToImage"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkFreeTypeStringToImage::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFreeTypeStringToImage_Methods[] = {
  {(char*)"GetClassName", PyvtkFreeTypeStringToImage_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFreeTypeStringToImage_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFreeTypeStringToImage_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFreeTypeStringToImage\nC++: vtkFreeTypeStringToImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFreeTypeStringToImage_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFreeTypeStringToImage\nC++: vtkFreeTypeStringToImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkFreeTypeStringToImage_GetBounds, 1,
   (char*)"V.GetBounds(vtkTextProperty, unicode) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkUnicodeString &string)\nV.GetBounds(vtkTextProperty, string) -> vtkVector2i\nC++: virtual vtkVector2i GetBounds(vtkTextProperty *property,\n    const vtkStdString &string)\n\nGiven a text property and a string, get the bounding box [xmin,\nxmax] x [ymin, ymax]. Note that this is the bounding box of the\narea where actual pixels will be written, given a\ntext/pen/baseline location of (0,0). For example, if the string\nstarts with a 'space', or depending on the orientation, you can\nend up with a [-20, -10] x [5, 10] bbox (the math to get the real\nbbox is straightforward). Return 1 on success, 0 otherwise. You\ncan use IsBoundingBoxValid() to test if the computed bbox is\nvalid (it may not if GetBoundingBox() failed or if the string was\nempty).\n"},
  {(char*)"RenderString", PyvtkFreeTypeStringToImage_RenderString, 1,
   (char*)"V.RenderString(vtkTextProperty, unicode, vtkImageData) -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkUnicodeString &string, vtkImageData *data)\nV.RenderString(vtkTextProperty, string, vtkImageData) -> int\nC++: virtual int RenderString(vtkTextProperty *property,\n    const vtkStdString &string, vtkImageData *data)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData.\n"},
  {(char*)"SetScaleToPowerOfTwo", PyvtkFreeTypeStringToImage_SetScaleToPowerOfTwo, 1,
   (char*)"V.SetScaleToPowerOfTwo(bool)\nC++: virtual void SetScaleToPowerOfTwo(bool scale)\n\nShould we produce images at powers of 2, makes rendering on old\nOpenGL hardware easier. Default is false.\n"},
  {(char*)"DeepCopy", PyvtkFreeTypeStringToImage_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkFreeTypeStringToImage)\nC++: void DeepCopy(vtkFreeTypeStringToImage *utility)\n\nMake a deep copy of the supplied utility class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFreeTypeStringToImage_StaticNew()
{
  return vtkFreeTypeStringToImage::New();
}

PyObject *PyVTKClass_vtkFreeTypeStringToImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFreeTypeStringToImage_StaticNew,
    PyvtkFreeTypeStringToImage_Methods,
    "vtkFreeTypeStringToImage", modulename,
    NULL, NULL,
    PyvtkFreeTypeStringToImage_Doc(),
    PyVTKClass_vtkStringToImageNew(modulename));
  return cls;
}

const char **PyvtkFreeTypeStringToImage_Doc()
{
  static const char *docstring[] = {
    "vtkFreeTypeStringToImage - uses Qt to render the supplied text to an\nimage.\n\n",
    "Superclass: vtkStringToImage\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFreeTypeStringToImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFreeTypeStringToImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFreeTypeStringToImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

