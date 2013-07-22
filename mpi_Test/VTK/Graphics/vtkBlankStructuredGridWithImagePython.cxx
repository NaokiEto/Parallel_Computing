// python wrapper for vtkBlankStructuredGridWithImage
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
#include "vtkBlankStructuredGridWithImage.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBlankStructuredGridWithImage(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBlankStructuredGridWithImage(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBlankStructuredGridWithImageNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBlankStructuredGridWithImageNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkBlankStructuredGridWithImage_Doc();


static PyObject *
PyvtkBlankStructuredGridWithImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

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
      tempr = op->vtkBlankStructuredGridWithImage::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

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
      tempr = op->vtkBlankStructuredGridWithImage::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  vtkBlankStructuredGridWithImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBlankStructuredGridWithImage::NewInstance();
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
PyvtkBlankStructuredGridWithImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBlankStructuredGridWithImage *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBlankStructuredGridWithImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_SetBlankingInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlankingInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetBlankingInput(temp0);
      }
    else
      {
      op->vtkBlankStructuredGridWithImage::SetBlankingInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_GetBlankingInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlankingInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlankingInput();
      }
    else
      {
      tempr = op->vtkBlankStructuredGridWithImage::GetBlankingInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGridWithImage_Methods[] = {
  {(char*)"GetClassName", PyvtkBlankStructuredGridWithImage_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlankStructuredGridWithImage_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlankStructuredGridWithImage_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBlankStructuredGridWithImage\nC++: vtkBlankStructuredGridWithImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlankStructuredGridWithImage_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlankStructuredGridWithImage\nC++: vtkBlankStructuredGridWithImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBlankingInput", PyvtkBlankStructuredGridWithImage_SetBlankingInput, 1,
   (char*)"V.SetBlankingInput(vtkImageData)\nC++: void SetBlankingInput(vtkImageData *input)\n\nSet / get the input image used to perform the blanking.\n"},
  {(char*)"GetBlankingInput", PyvtkBlankStructuredGridWithImage_GetBlankingInput, 1,
   (char*)"V.GetBlankingInput() -> vtkImageData\nC++: vtkImageData *GetBlankingInput()\n\nSet / get the input image used to perform the blanking.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlankStructuredGridWithImage_StaticNew()
{
  return vtkBlankStructuredGridWithImage::New();
}

PyObject *PyVTKClass_vtkBlankStructuredGridWithImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlankStructuredGridWithImage_StaticNew,
    PyvtkBlankStructuredGridWithImage_Methods,
    "vtkBlankStructuredGridWithImage", modulename,
    NULL, NULL,
    PyvtkBlankStructuredGridWithImage_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBlankStructuredGridWithImage_Doc()
{
  static const char *docstring[] = {
    "vtkBlankStructuredGridWithImage - blank a structured grid with an\nimage\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "This filter can be used to set the blanking in a structured grid with\nan image. The filter takes two inputs: the structured grid to blank,\nand the image used to set the blanking. Make sure that the dimensions\nof both the image and the structured grid are identical.\n\nNote that the image is interpreted as follows: zero values indicate\nthat the structured grid point is blanked; non-zero values indica",
    "te\nthat the structured grid point is visible. The blanking data must be\nunsigned char.\n\nSee Also:\n\nvtkStructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlankStructuredGridWithImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlankStructuredGridWithImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlankStructuredGridWithImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

