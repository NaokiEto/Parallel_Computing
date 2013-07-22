// python wrapper for vtkImageRectilinearWipe
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
#include "vtkImageRectilinearWipe.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageRectilinearWipe(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageRectilinearWipe(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageRectilinearWipeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageRectilinearWipeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageRectilinearWipe_Doc();


static PyObject *
PyvtkImageRectilinearWipe_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

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
      tempr = op->vtkImageRectilinearWipe::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

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
      tempr = op->vtkImageRectilinearWipe::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  vtkImageRectilinearWipe *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageRectilinearWipe::NewInstance();
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
PyvtkImageRectilinearWipe_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageRectilinearWipe *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageRectilinearWipe::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0;
  int temp1;
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
      op->vtkImageRectilinearWipe::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0[2];
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
      op->vtkImageRectilinearWipe::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageRectilinearWipe_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageRectilinearWipe_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkImageRectilinearWipe_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int *tempr;
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
      tempr = op->vtkImageRectilinearWipe::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAxis(temp0, temp1);
      }
    else
      {
      op->vtkImageRectilinearWipe::SetAxis(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxis(temp0);
      }
    else
      {
      op->vtkImageRectilinearWipe::SetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageRectilinearWipe_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageRectilinearWipe_SetAxis_s1(self, args);
    case 1:
      return PyvtkImageRectilinearWipe_SetAxis_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return NULL;
}



static PyObject *
PyvtkImageRectilinearWipe_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxis();
      }
    else
      {
      tempr = op->vtkImageRectilinearWipe::GetAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageRectilinearWipe::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageRectilinearWipe::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWipe(temp0);
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipe(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_GetWipeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWipeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWipeMinValue();
      }
    else
      {
      tempr = op->vtkImageRectilinearWipe::GetWipeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_GetWipeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWipeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWipeMaxValue();
      }
    else
      {
      tempr = op->vtkImageRectilinearWipe::GetWipeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_GetWipe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWipe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWipe();
      }
    else
      {
      tempr = op->vtkImageRectilinearWipe::GetWipe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToQuad();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToQuad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToHorizontal();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToHorizontal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToVertical();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToVertical();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToLowerLeft();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToLowerLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToLowerRight();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToLowerRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToUpperLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToUpperLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToUpperLeft();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToUpperLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRectilinearWipe_SetWipeToUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWipeToUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRectilinearWipe *op = static_cast<vtkImageRectilinearWipe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWipeToUpperRight();
      }
    else
      {
      op->vtkImageRectilinearWipe::SetWipeToUpperRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageRectilinearWipe_Methods[] = {
  {(char*)"GetClassName", PyvtkImageRectilinearWipe_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageRectilinearWipe_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageRectilinearWipe_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageRectilinearWipe\nC++: vtkImageRectilinearWipe *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageRectilinearWipe_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageRectilinearWipe\nC++: vtkImageRectilinearWipe *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkImageRectilinearWipe_SetPosition, 1,
   (char*)"V.SetPosition(int, int)\nC++: void SetPosition(int, int)\nV.SetPosition((int, int))\nC++: void SetPosition(int a[2])\n\n"},
  {(char*)"GetPosition", PyvtkImageRectilinearWipe_GetPosition, 1,
   (char*)"V.GetPosition() -> (int, int)\nC++: int *GetPosition()\n\nSet/Get the location of the image transition. Note that position\nis specified in pixels.\n"},
  {(char*)"SetAxis", PyvtkImageRectilinearWipe_SetAxis, 1,
   (char*)"V.SetAxis(int, int)\nC++: void SetAxis(int, int)\nV.SetAxis((int, int))\nC++: void SetAxis(int a[2])\n\n"},
  {(char*)"GetAxis", PyvtkImageRectilinearWipe_GetAxis, 1,
   (char*)"V.GetAxis() -> (int, int)\nC++: int *GetAxis()\n\nSet/Get the location of the wipe axes. The default is X,Y (ie\nvector values of 0 and 1).\n"},
  {(char*)"SetInput1", PyvtkImageRectilinearWipe_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *in)\n\nSet the two inputs to this filter.\n"},
  {(char*)"SetInput2", PyvtkImageRectilinearWipe_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *in)\n\nSet the two inputs to this filter.\n"},
  {(char*)"SetWipe", PyvtkImageRectilinearWipe_SetWipe, 1,
   (char*)"V.SetWipe(int)\nC++: void SetWipe(int)\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"GetWipeMinValue", PyvtkImageRectilinearWipe_GetWipeMinValue, 1,
   (char*)"V.GetWipeMinValue() -> int\nC++: int GetWipeMinValue()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"GetWipeMaxValue", PyvtkImageRectilinearWipe_GetWipeMaxValue, 1,
   (char*)"V.GetWipeMaxValue() -> int\nC++: int GetWipeMaxValue()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"GetWipe", PyvtkImageRectilinearWipe_GetWipe, 1,
   (char*)"V.GetWipe() -> int\nC++: int GetWipe()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToQuad", PyvtkImageRectilinearWipe_SetWipeToQuad, 1,
   (char*)"V.SetWipeToQuad()\nC++: void SetWipeToQuad()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToHorizontal", PyvtkImageRectilinearWipe_SetWipeToHorizontal, 1,
   (char*)"V.SetWipeToHorizontal()\nC++: void SetWipeToHorizontal()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToVertical", PyvtkImageRectilinearWipe_SetWipeToVertical, 1,
   (char*)"V.SetWipeToVertical()\nC++: void SetWipeToVertical()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToLowerLeft", PyvtkImageRectilinearWipe_SetWipeToLowerLeft, 1,
   (char*)"V.SetWipeToLowerLeft()\nC++: void SetWipeToLowerLeft()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToLowerRight", PyvtkImageRectilinearWipe_SetWipeToLowerRight, 1,
   (char*)"V.SetWipeToLowerRight()\nC++: void SetWipeToLowerRight()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToUpperLeft", PyvtkImageRectilinearWipe_SetWipeToUpperLeft, 1,
   (char*)"V.SetWipeToUpperLeft()\nC++: void SetWipeToUpperLeft()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {(char*)"SetWipeToUpperRight", PyvtkImageRectilinearWipe_SetWipeToUpperRight, 1,
   (char*)"V.SetWipeToUpperRight()\nC++: void SetWipeToUpperRight()\n\nSpecify the wipe mode. This mode determnis how input 0 and input\n1 are combined to produce the output. Each mode uses one or both\nof the values stored in Position.\n  SetWipeToQuad - alternate input 0 and input 1 horizontally and\n    vertically. The Position specifies the location of the quad\n    intersection.\n  SetWipeToLowerLeft{LowerRight,UpperLeft.UpperRight} - 3 of one\n    input and 1 of the other. Select the location of input 0 to\nthe\n    LowerLeft{LowerRight,UpperLeft,UpperRight}. Position\n    selects the location of the corner.\n  SetWipeToHorizontal - alternate input 0 and input 1 with a\nvertical\n    split. Position[0] specifies the location of the vertical\n    transition between input 0 and input 1.\n  SetWipeToVertical - alternate input 0 and input 1 with a\n    horizontal split. Position[1] specifies the location of the\n    horizonal transition between input 0 and input 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageRectilinearWipe_StaticNew()
{
  return vtkImageRectilinearWipe::New();
}

PyObject *PyVTKClass_vtkImageRectilinearWipeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageRectilinearWipe_StaticNew,
    PyvtkImageRectilinearWipe_Methods,
    "vtkImageRectilinearWipe", modulename,
    NULL, NULL,
    PyvtkImageRectilinearWipe_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageRectilinearWipe_Doc()
{
  static const char *docstring[] = {
    "vtkImageRectilinearWipe - make a rectilinear combination of two\nimages.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageRectilinearWipe makes a rectilinear combination of two\nimages. The two input images must correspond in size, scalar type and\nnumber of components. The resulting image has four possible\nconfigurations called:\n  Quad - alternate input 0 and input 1 horizontally and\n    vertically. Select this with SetWipeModeToQuad. The Position\n    specifies the location of the quad intersection.\n  Corner -",
    " 3 of one input and 1 of the other. Select the location of\n    input 0 with with SetWipeModeToLowerLeft,\nSetWipeModeToLowerRight,\n    SetWipeModeToUpperLeft and SetWipeModeToUpperRight. The Position\n    selects the location of the corner.\n  Horizontal - alternate input 0 and input 1 with a vertical\n    split. Select this with SetWipeModeToHorizontal. Position[0]\n    specifies the location of the v",
    "ertical transition between input 0\n    and input 1.\n  Vertical - alternate input 0 and input 1 with a horizontal\n    split. Only the y The intersection point of the rectilinear\npoints\n    is controlled with the Point ivar.\n\nSee Also:\n\nvtkImageCheckerboard\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageRectilinearWipe(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageRectilinearWipeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageRectilinearWipe", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_QUAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_HORIZONTAL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_VERTICAL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_LOWER_LEFT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_LOWER_RIGHT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_UPPER_LEFT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WIPE_UPPER_RIGHT", o) != 0)
    {
    Py_DECREF(o);
    }

}

