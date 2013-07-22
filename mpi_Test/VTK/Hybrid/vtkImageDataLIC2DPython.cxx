// python wrapper for vtkImageDataLIC2D
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
#include "vtkImageDataLIC2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDataLIC2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDataLIC2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDataLIC2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDataLIC2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageDataLIC2D_Doc();


static PyObject *
PyvtkImageDataLIC2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

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
      tempr = op->vtkImageDataLIC2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

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
      tempr = op->vtkImageDataLIC2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  vtkImageDataLIC2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::NewInstance();
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
PyvtkImageDataLIC2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDataLIC2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDataLIC2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  vtkRenderWindow *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetContext(temp0);
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContext();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSteps(temp0);
      }
    else
      {
      op->vtkImageDataLIC2D::SetSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSteps();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStepSize(temp0);
      }
    else
      {
      op->vtkImageDataLIC2D::SetStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetStepSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepSizeMinValue();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetStepSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetStepSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepSizeMaxValue();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetStepSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepSize();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetStepSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkImageDataLIC2D::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetMagnificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnificationMinValue();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetMagnificationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetMagnificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnificationMaxValue();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetMagnificationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnification();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetMagnification();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLExtensionsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpenGLExtensionsSupported();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetOpenGLExtensionsSupported();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetFBOSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFBOSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFBOSuccess();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetFBOSuccess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetLICSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICSuccess();
      }
    else
      {
      tempr = op->vtkImageDataLIC2D::GetLICSuccess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataLIC2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataLIC2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataLIC2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataLIC2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataLIC2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkImageDataLIC2D_SetContext, 1,
   (char*)"V.SetContext(vtkRenderWindow) -> int\nC++: int SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {(char*)"GetContext", PyvtkImageDataLIC2D_GetContext, 1,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {(char*)"SetSteps", PyvtkImageDataLIC2D_SetSteps, 1,
   (char*)"V.SetSteps(int)\nC++: void SetSteps(int a)\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {(char*)"GetSteps", PyvtkImageDataLIC2D_GetSteps, 1,
   (char*)"V.GetSteps() -> int\nC++: int GetSteps()\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {(char*)"SetStepSize", PyvtkImageDataLIC2D_SetStepSize, 1,
   (char*)"V.SetStepSize(float)\nC++: void SetStepSize(double)\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell lengthh is the length of the\ndiagonal of a cell. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"GetStepSizeMinValue", PyvtkImageDataLIC2D_GetStepSizeMinValue, 1,
   (char*)"V.GetStepSizeMinValue() -> float\nC++: double GetStepSizeMinValue()\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell lengthh is the length of the\ndiagonal of a cell. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"GetStepSizeMaxValue", PyvtkImageDataLIC2D_GetStepSizeMaxValue, 1,
   (char*)"V.GetStepSizeMaxValue() -> float\nC++: double GetStepSizeMaxValue()\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell lengthh is the length of the\ndiagonal of a cell. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"GetStepSize", PyvtkImageDataLIC2D_GetStepSize, 1,
   (char*)"V.GetStepSize() -> float\nC++: double GetStepSize()\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell lengthh is the length of the\ndiagonal of a cell. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"SetMagnification", PyvtkImageDataLIC2D_SetMagnification, 1,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int)\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnificationMinValue", PyvtkImageDataLIC2D_GetMagnificationMinValue, 1,
   (char*)"V.GetMagnificationMinValue() -> int\nC++: int GetMagnificationMinValue()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnificationMaxValue", PyvtkImageDataLIC2D_GetMagnificationMaxValue, 1,
   (char*)"V.GetMagnificationMaxValue() -> int\nC++: int GetMagnificationMaxValue()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnification", PyvtkImageDataLIC2D_GetMagnification, 1,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetOpenGLExtensionsSupported", PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported, 1,
   (char*)"V.GetOpenGLExtensionsSupported() -> int\nC++: int GetOpenGLExtensionsSupported()\n\nCheck if the required OpenGL extensions / GPU are supported.\n"},
  {(char*)"GetFBOSuccess", PyvtkImageDataLIC2D_GetFBOSuccess, 1,
   (char*)"V.GetFBOSuccess() -> int\nC++: int GetFBOSuccess()\n\nCheck if FBO is started properly.\n"},
  {(char*)"GetLICSuccess", PyvtkImageDataLIC2D_GetLICSuccess, 1,
   (char*)"V.GetLICSuccess() -> int\nC++: int GetLICSuccess()\n\nCheck if LIC runs properly.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataLIC2D_StaticNew()
{
  return vtkImageDataLIC2D::New();
}

PyObject *PyVTKClass_vtkImageDataLIC2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataLIC2D_StaticNew,
    PyvtkImageDataLIC2D_Methods,
    "vtkImageDataLIC2D", modulename,
    NULL, NULL,
    PyvtkImageDataLIC2D_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataLIC2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataLIC2D\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "GPU implementation of a Line Integral Convolution, a technique for\n imaging  vector fields.\n\n\n The input on port 0 is an vtkImageData with extents of a 2D image.\nIt needs\n a vector field on point data.\n Port 1 is a special port for customized noise input. It is an\noptional port.\n If not present, noise is generated by the filter. Even if\nnone-power-of-two\n texture are supported, giving a power-of-t",
    "wo image may result in\nfaster\n execution on the GPU.\n If noise input is not specified, then the filter using\nvtkImageNoiseSource to\n generate a 128x128 noise texture.\n This filter only works on point vectors. One can use a\n vtkCellDataToPointData filter to convert cell vectors to point\nvectors.\n\nRequired OpenGL Extensins:\n\n\n GL_ARB_texture_non_power_of_two\n GL_VERSION_2_0\n GL_ARB_texture_float\n GL",
    "_ARB_draw_buffers\n GL_EXT_framebuffer_object\n GL_ARB_pixel_buffer_object\n\nSee Also:\n\n\n vtkImageAlgorithm vtkImageNoiseSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataLIC2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataLIC2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataLIC2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

