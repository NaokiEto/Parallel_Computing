// python wrapper for vtkImageMapper
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
#include "vtkImageMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapper2DNew
#endif

static const char **PyvtkImageMapper_Doc();


static PyObject *
PyvtkImageMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

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
      tempr = op->vtkImageMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

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
      tempr = op->vtkImageMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkImageMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMapper::NewInstance();
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
PyvtkImageMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkImageMapper::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorWindow(temp0);
      }
    else
      {
      op->vtkImageMapper::SetColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorWindow();
      }
    else
      {
      tempr = op->vtkImageMapper::GetColorWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorLevel(temp0);
      }
    else
      {
      op->vtkImageMapper::SetColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorLevel();
      }
    else
      {
      tempr = op->vtkImageMapper::GetColorLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZSlice(temp0);
      }
    else
      {
      op->vtkImageMapper::SetZSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZSlice();
      }
    else
      {
      tempr = op->vtkImageMapper::GetZSlice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeZMin();
      }
    else
      {
      tempr = op->vtkImageMapper::GetWholeZMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeZMax();
      }
    else
      {
      tempr = op->vtkImageMapper::GetWholeZMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderStart(temp0, temp1);
      }
    else
      {
      op->vtkImageMapper::RenderStart(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  vtkActor2D *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkActor2D"))
    {
    op->RenderData(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorShift();
      }
    else
      {
      tempr = op->vtkImageMapper::GetColorShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorScale();
      }
    else
      {
      tempr = op->vtkImageMapper::GetColorScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageMapper::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderToRectangle(temp0);
      }
    else
      {
      op->vtkImageMapper::SetRenderToRectangle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderToRectangle();
      }
    else
      {
      tempr = op->vtkImageMapper::GetRenderToRectangle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderToRectangleOn();
      }
    else
      {
      op->vtkImageMapper::RenderToRectangleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderToRectangleOff();
      }
    else
      {
      op->vtkImageMapper::RenderToRectangleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCustomExtents(temp0);
      }
    else
      {
      op->vtkImageMapper::SetUseCustomExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseCustomExtents();
      }
    else
      {
      tempr = op->vtkImageMapper::GetUseCustomExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomExtentsOn();
      }
    else
      {
      op->vtkImageMapper::UseCustomExtentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCustomExtentsOff();
      }
    else
      {
      op->vtkImageMapper::UseCustomExtentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_SetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomDisplayExtents(temp0);
      }
    else
      {
      op->vtkImageMapper::SetCustomDisplayExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapper_GetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCustomDisplayExtents();
      }
    else
      {
      tempr = op->vtkImageMapper::GetCustomDisplayExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMapper\nC++: vtkImageMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapper\nC++: vtkImageMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkImageMapper_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride Modifiedtime as we have added a lookuptable\n"},
  {(char*)"SetColorWindow", PyvtkImageMapper_SetColorWindow, 1,
   (char*)"V.SetColorWindow(float)\nC++: void SetColorWindow(double a)\n\nSet/Get the window value for window/level\n"},
  {(char*)"GetColorWindow", PyvtkImageMapper_GetColorWindow, 1,
   (char*)"V.GetColorWindow() -> float\nC++: double GetColorWindow()\n\nSet/Get the window value for window/level\n"},
  {(char*)"SetColorLevel", PyvtkImageMapper_SetColorLevel, 1,
   (char*)"V.SetColorLevel(float)\nC++: void SetColorLevel(double a)\n\nSet/Get the level value for window/level\n"},
  {(char*)"GetColorLevel", PyvtkImageMapper_GetColorLevel, 1,
   (char*)"V.GetColorLevel() -> float\nC++: double GetColorLevel()\n\nSet/Get the level value for window/level\n"},
  {(char*)"SetZSlice", PyvtkImageMapper_SetZSlice, 1,
   (char*)"V.SetZSlice(int)\nC++: void SetZSlice(int a)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetZSlice", PyvtkImageMapper_GetZSlice, 1,
   (char*)"V.GetZSlice() -> int\nC++: int GetZSlice()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetWholeZMin", PyvtkImageMapper_GetWholeZMin, 1,
   (char*)"V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetWholeZMax", PyvtkImageMapper_GetWholeZMax, 1,
   (char*)"V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"RenderStart", PyvtkImageMapper_RenderStart, 1,
   (char*)"V.RenderStart(vtkViewport, vtkActor2D)\nC++: void RenderStart(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw the image to the screen.\n"},
  {(char*)"RenderData", PyvtkImageMapper_RenderData, 1,
   (char*)"V.RenderData(vtkViewport, vtkImageData, vtkActor2D)\nC++: virtual void RenderData(vtkViewport *, vtkImageData *,\n    vtkActor2D *)\n\nFunction called by Render to actually draw the image to to the\nscreen\n"},
  {(char*)"GetColorShift", PyvtkImageMapper_GetColorShift, 1,
   (char*)"V.GetColorShift() -> float\nC++: double GetColorShift()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {(char*)"GetColorScale", PyvtkImageMapper_GetColorScale, 1,
   (char*)"V.GetColorScale() -> float\nC++: double GetColorScale()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {(char*)"SetInput", PyvtkImageMapper_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: virtual void SetInput(vtkImageData *input)\n\nSet the Input of a filter.\n"},
  {(char*)"GetInput", PyvtkImageMapper_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet the Input of a filter.\n"},
  {(char*)"SetRenderToRectangle", PyvtkImageMapper_SetRenderToRectangle, 1,
   (char*)"V.SetRenderToRectangle(int)\nC++: void SetRenderToRectangle(int a)\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"GetRenderToRectangle", PyvtkImageMapper_GetRenderToRectangle, 1,
   (char*)"V.GetRenderToRectangle() -> int\nC++: int GetRenderToRectangle()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"RenderToRectangleOn", PyvtkImageMapper_RenderToRectangleOn, 1,
   (char*)"V.RenderToRectangleOn()\nC++: void RenderToRectangleOn()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"RenderToRectangleOff", PyvtkImageMapper_RenderToRectangleOff, 1,
   (char*)"V.RenderToRectangleOff()\nC++: void RenderToRectangleOff()\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {(char*)"SetUseCustomExtents", PyvtkImageMapper_SetUseCustomExtents, 1,
   (char*)"V.SetUseCustomExtents(int)\nC++: void SetUseCustomExtents(int a)\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"GetUseCustomExtents", PyvtkImageMapper_GetUseCustomExtents, 1,
   (char*)"V.GetUseCustomExtents() -> int\nC++: int GetUseCustomExtents()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"UseCustomExtentsOn", PyvtkImageMapper_UseCustomExtentsOn, 1,
   (char*)"V.UseCustomExtentsOn()\nC++: void UseCustomExtentsOn()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"UseCustomExtentsOff", PyvtkImageMapper_UseCustomExtentsOff, 1,
   (char*)"V.UseCustomExtentsOff()\nC++: void UseCustomExtentsOff()\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {(char*)"SetCustomDisplayExtents", PyvtkImageMapper_SetCustomDisplayExtents, 1,
   (char*)"V.SetCustomDisplayExtents((int, int, int, int))\nC++: void SetCustomDisplayExtents(int a[4])\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {(char*)"GetCustomDisplayExtents", PyvtkImageMapper_GetCustomDisplayExtents, 1,
   (char*)"V.GetCustomDisplayExtents() -> (int, int, int, int)\nC++: int *GetCustomDisplayExtents()\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMapper_StaticNew()
{
  return vtkImageMapper::New();
}

PyObject *PyVTKClass_vtkImageMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMapper_StaticNew,
    PyvtkImageMapper_Methods,
    "vtkImageMapper", modulename,
    NULL, NULL,
    PyvtkImageMapper_Doc(),
    PyVTKClass_vtkMapper2DNew(modulename));
  return cls;
}

const char **PyvtkImageMapper_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapper - 2D image display\n\n",
    "Superclass: vtkMapper2D\n\n",
    "vtkImageMapper provides 2D image display support for vtk. It is a\nMapper2D subclass that can be associated with an Actor2D and placed\nwithin a RenderWindow or ImageWindow.\n\nSee Also:\n\nvtkMapper2D vtkActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

