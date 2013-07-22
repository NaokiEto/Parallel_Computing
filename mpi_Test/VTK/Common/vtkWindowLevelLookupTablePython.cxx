// python wrapper for vtkWindowLevelLookupTable
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
#include "vtkWindowLevelLookupTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWindowLevelLookupTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWindowLevelLookupTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWindowLevelLookupTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWindowLevelLookupTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLookupTableNew
extern "C" { PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkLookupTableNew
#endif

static const char **PyvtkWindowLevelLookupTable_Doc();


static PyObject *
PyvtkWindowLevelLookupTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

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
      tempr = op->vtkWindowLevelLookupTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

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
      tempr = op->vtkWindowLevelLookupTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  vtkWindowLevelLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWindowLevelLookupTable::NewInstance();
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
PyvtkWindowLevelLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWindowLevelLookupTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWindowLevelLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkWindowLevelLookupTable::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindow(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindow();
      }
    else
      {
      tempr = op->vtkWindowLevelLookupTable::GetWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevel(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkWindowLevelLookupTable::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverseVideo(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetInverseVideo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverseVideo();
      }
    else
      {
      tempr = op->vtkWindowLevelLookupTable::GetInverseVideo();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseVideoOn();
      }
    else
      {
      op->vtkWindowLevelLookupTable::InverseVideoOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InverseVideoOff();
      }
    else
      {
      op->vtkWindowLevelLookupTable::InverseVideoOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

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
      op->SetMinimumTableValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumTableValue(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumTableValue");
  return NULL;
}



static PyObject *
PyvtkWindowLevelLookupTable_GetMinimumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumTableValue();
      }
    else
      {
      tempr = op->vtkWindowLevelLookupTable::GetMinimumTableValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

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
      op->SetMaximumTableValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumTableValue(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumTableValue");
  return NULL;
}



static PyObject *
PyvtkWindowLevelLookupTable_GetMaximumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumTableValue();
      }
    else
      {
      tempr = op->vtkWindowLevelLookupTable::GetMaximumTableValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMinimumColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMinimumColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumColor(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMinimumColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMinimumColor_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMinimumColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumColor");
  return NULL;
}

#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_GetMinimumColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  unsigned char temp0[4];
  unsigned char save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetMinimumColor(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::GetMinimumColor(temp0);
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
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetMaximumColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMaximumColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  unsigned char temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumColor(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::SetMaximumColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMaximumColor_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMaximumColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumColor");
  return NULL;
}

#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkWindowLevelLookupTable_GetMaximumColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  unsigned char temp0[4];
  unsigned char save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetMaximumColor(temp0);
      }
    else
      {
      op->vtkWindowLevelLookupTable::GetMaximumColor(temp0);
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
#endif

static PyMethodDef PyvtkWindowLevelLookupTable_Methods[] = {
  {(char*)"GetClassName", PyvtkWindowLevelLookupTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWindowLevelLookupTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWindowLevelLookupTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWindowLevelLookupTable\nC++: vtkWindowLevelLookupTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWindowLevelLookupTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWindowLevelLookupTable\nC++: vtkWindowLevelLookupTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Build", PyvtkWindowLevelLookupTable_Build, 1,
   (char*)"V.Build()\nC++: void Build()\n\nGenerate lookup table as a linear ramp between MinimumTableValue\nand MaximumTableValue.\n"},
  {(char*)"SetWindow", PyvtkWindowLevelLookupTable_SetWindow, 1,
   (char*)"V.SetWindow(float)\nC++: void SetWindow(double window)\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {(char*)"GetWindow", PyvtkWindowLevelLookupTable_GetWindow, 1,
   (char*)"V.GetWindow() -> float\nC++: double GetWindow()\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {(char*)"SetLevel", PyvtkWindowLevelLookupTable_SetLevel, 1,
   (char*)"V.SetLevel(float)\nC++: void SetLevel(double level)\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {(char*)"GetLevel", PyvtkWindowLevelLookupTable_GetLevel, 1,
   (char*)"V.GetLevel() -> float\nC++: double GetLevel()\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {(char*)"SetInverseVideo", PyvtkWindowLevelLookupTable_SetInverseVideo, 1,
   (char*)"V.SetInverseVideo(int)\nC++: void SetInverseVideo(int iv)\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"GetInverseVideo", PyvtkWindowLevelLookupTable_GetInverseVideo, 1,
   (char*)"V.GetInverseVideo() -> int\nC++: int GetInverseVideo()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"InverseVideoOn", PyvtkWindowLevelLookupTable_InverseVideoOn, 1,
   (char*)"V.InverseVideoOn()\nC++: void InverseVideoOn()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"InverseVideoOff", PyvtkWindowLevelLookupTable_InverseVideoOff, 1,
   (char*)"V.InverseVideoOff()\nC++: void InverseVideoOff()\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {(char*)"SetMinimumTableValue", PyvtkWindowLevelLookupTable_SetMinimumTableValue, 1,
   (char*)"V.SetMinimumTableValue(float, float, float, float)\nC++: void SetMinimumTableValue(double, double, double, double)\nV.SetMinimumTableValue((float, float, float, float))\nC++: void SetMinimumTableValue(double a[4])\n\n"},
  {(char*)"GetMinimumTableValue", PyvtkWindowLevelLookupTable_GetMinimumTableValue, 1,
   (char*)"V.GetMinimumTableValue() -> (float, float, float, float)\nC++: double *GetMinimumTableValue()\n\n"},
  {(char*)"SetMaximumTableValue", PyvtkWindowLevelLookupTable_SetMaximumTableValue, 1,
   (char*)"V.SetMaximumTableValue(float, float, float, float)\nC++: void SetMaximumTableValue(double, double, double, double)\nV.SetMaximumTableValue((float, float, float, float))\nC++: void SetMaximumTableValue(double a[4])\n\n"},
  {(char*)"GetMaximumTableValue", PyvtkWindowLevelLookupTable_GetMaximumTableValue, 1,
   (char*)"V.GetMaximumTableValue() -> (float, float, float, float)\nC++: double *GetMaximumTableValue()\n\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetMinimumColor", PyvtkWindowLevelLookupTable_SetMinimumColor, 1,
   (char*)"V.SetMinimumColor(int, int, int, int)\nC++: void SetMinimumColor(int r, int g, int b, int a)\nV.SetMinimumColor((int, int, int, int))\nC++: void SetMinimumColor(const unsigned char rgba[4])\n\n@deprecated For backwards compatibility: specify the color using\nintegers in the range [0,255].\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetMinimumColor", PyvtkWindowLevelLookupTable_GetMinimumColor, 1,
   (char*)"V.GetMinimumColor([int, int, int, int])\nC++: void GetMinimumColor(unsigned char rgba[4])\n\n@deprecated For backwards compatibility: specify the color using\nintegers in the range [0,255].\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetMaximumColor", PyvtkWindowLevelLookupTable_SetMaximumColor, 1,
   (char*)"V.SetMaximumColor(int, int, int, int)\nC++: void SetMaximumColor(int r, int g, int b, int a)\nV.SetMaximumColor((int, int, int, int))\nC++: void SetMaximumColor(const unsigned char rgba[4])\n\n@deprecated For backwards compatibility: specify the color using\nintegers in the range [0,255].\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetMaximumColor", PyvtkWindowLevelLookupTable_GetMaximumColor, 1,
   (char*)"V.GetMaximumColor([int, int, int, int])\nC++: void GetMaximumColor(unsigned char rgba[4])\n\n@deprecated For backwards compatibility: specify the color using\nintegers in the range [0,255].\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWindowLevelLookupTable_StaticNew()
{
  return vtkWindowLevelLookupTable::New();
}

PyObject *PyVTKClass_vtkWindowLevelLookupTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWindowLevelLookupTable_StaticNew,
    PyvtkWindowLevelLookupTable_Methods,
    "vtkWindowLevelLookupTable", modulename,
    NULL, NULL,
    PyvtkWindowLevelLookupTable_Doc(),
    PyVTKClass_vtkLookupTableNew(modulename));
  return cls;
}

const char **PyvtkWindowLevelLookupTable_Doc()
{
  static const char *docstring[] = {
    "vtkWindowLevelLookupTable - map scalar values into colors or colors\nto scalars; generate color table\n\n",
    "Superclass: vtkLookupTable\n\n",
    "vtkWindowLevelLookupTable is an object that is used by mapper objects\nto map scalar values into rgba (red-green-blue-alpha transparency)\ncolor specification, or rgba into scalar values. The color table can\nbe created by direct insertion of color values, or by specifying a\nwindow and level. Window / Level is used in medical imaging to\nspecify a linear greyscale ramp. The Level is the center of the ",
    "ramp.\n The Window is the width of the ramp.\n\nCaveats:\n\nvtkWindowLevelLookupTable is a reference counted object. Therefore,\nyou should always use operator \"new\" to construct new objects. This\nprocedure will avoid memory problems (see text).\n\nSee Also:\n\nvtkLogLookupTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWindowLevelLookupTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWindowLevelLookupTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWindowLevelLookupTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

