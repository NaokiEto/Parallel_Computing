// python wrapper for vtkClipHyperOctree
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
#include "vtkClipHyperOctree.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClipHyperOctree(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClipHyperOctree(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClipHyperOctreeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClipHyperOctreeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkClipHyperOctree_Doc();


static PyObject *
PyvtkClipHyperOctree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

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
      tempr = op->vtkClipHyperOctree::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

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
      tempr = op->vtkClipHyperOctree::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  vtkClipHyperOctree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::NewInstance();
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
PyvtkClipHyperOctree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClipHyperOctree *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClipHyperOctree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkClipHyperOctree::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkClipHyperOctree::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInsideOut();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetInsideOut();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkClipHyperOctree::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkClipHyperOctree::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetClipFunction(temp0);
      }
    else
      {
      op->vtkClipHyperOctree::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipFunction();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetClipFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClipScalars(temp0);
      }
    else
      {
      op->vtkClipHyperOctree::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClipScalars();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetGenerateClipScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkClipHyperOctree::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkClipHyperOctree::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClippedOutput(temp0);
      }
    else
      {
      op->vtkClipHyperOctree::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClippedOutput();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetGenerateClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkClipHyperOctree::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkClipHyperOctree::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippedOutput();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkClipHyperOctree::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkClipHyperOctree::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkClipHyperOctree::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipHyperOctree_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipHyperOctree *op = static_cast<vtkClipHyperOctree *>(vp);

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
      tempr = op->vtkClipHyperOctree::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipHyperOctree_Methods[] = {
  {(char*)"GetClassName", PyvtkClipHyperOctree_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipHyperOctree_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipHyperOctree_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClipHyperOctree\nC++: vtkClipHyperOctree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipHyperOctree_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipHyperOctree\nC++: vtkClipHyperOctree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkClipHyperOctree_SetValue, 1,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"GetValue", PyvtkClipHyperOctree_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"SetInsideOut", PyvtkClipHyperOctree_SetInsideOut, 1,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"GetInsideOut", PyvtkClipHyperOctree_GetInsideOut, 1,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOn", PyvtkClipHyperOctree_InsideOutOn, 1,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOff", PyvtkClipHyperOctree_InsideOutOff, 1,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"SetClipFunction", PyvtkClipHyperOctree_SetClipFunction, 1,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetClipFunction", PyvtkClipHyperOctree_GetClipFunction, 1,
   (char*)"V.GetClipFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetClipFunction()\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkClipHyperOctree_SetGenerateClipScalars, 1,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkClipHyperOctree_GetGenerateClipScalars, 1,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkClipHyperOctree_GenerateClipScalarsOn, 1,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkClipHyperOctree_GenerateClipScalarsOff, 1,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkClipHyperOctree_SetGenerateClippedOutput, 1,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkClipHyperOctree_GetGenerateClippedOutput, 1,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkClipHyperOctree_GenerateClippedOutputOn, 1,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkClipHyperOctree_GenerateClippedOutputOff, 1,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetClippedOutput", PyvtkClipHyperOctree_GetClippedOutput, 1,
   (char*)"V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {(char*)"SetLocator", PyvtkClipHyperOctree_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkClipHyperOctree_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkClipHyperOctree_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetMTime", PyvtkClipHyperOctree_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator and clip function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipHyperOctree_StaticNew()
{
  return vtkClipHyperOctree::New();
}

PyObject *PyVTKClass_vtkClipHyperOctreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipHyperOctree_StaticNew,
    PyvtkClipHyperOctree_Methods,
    "vtkClipHyperOctree", modulename,
    NULL, NULL,
    PyvtkClipHyperOctree_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkClipHyperOctree_Doc()
{
  static const char *docstring[] = {
    "vtkClipHyperOctree - clip an hyperoctree with user-specified implicit\nfunction or input scalar data\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkClipHyperOctree is a filter that clips an hyperoctree using either\nany subclass of vtkImplicitFunction, or the input scalar data.\nClipping means that it actually \"cuts\" through the leaves (cells) of\nthe hyperoctree, returning everything inside of the specified\nimplicit function (or greater than the scalar value) including\n\"pieces\" of a cell. (Compare this with vtkExtractGeometry, which\npulls ou",
    "t entire, uncut cells.) The output of this filter is an\nunstructured grid.\n\nTo use this filter, you must decide if you will be clipping with an\nimplicit function, or whether you will be using the input scalar\ndata.  If you want to clip with an implicit function, you must:\n1) define an implicit function\n2) set it with the SetClipFunction method\n3) apply the GenerateClipScalarsOn method If a ClipFun",
    "ction is not\n   specified, or GenerateClipScalars is off (the default), then the\n   input's scalar data will be used to clip the polydata.\n\nYou can also specify a scalar value, which is used to decide what is\ninside and outside of the implicit function. You can also reverse the\nsense of what inside/outside is by setting the InsideOut instance\nvariable. (The clipping algorithm proceeds by computing",
    " an implicit\nfunction value or using the input scalar data for each point in the\ndataset. This is compared to the scalar value to determine\ninside/outside.)\n\nThis filter can be configured to compute a second output. The second\noutput is the part of the cell that is clipped away. Set the\nGenerateClippedData boolean on if you wish to access this output\ndata.\n\nCaveats:\n\nvtkClipHyperOctree will triang",
    "ulate all types of 3D cells (i.e.,\ncreate tetrahedra). This is true even if the cell is not actually\ncut. This is necessary to preserve compatibility across face\nneighbors. 2D cells will only be triangulated if the cutting function\npasses through them.\n\nSee Also:\n\nvtkImplicitFunction vtkCutter vtkClipVolume vtkClipPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipHyperOctree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipHyperOctreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipHyperOctree", o) != 0)
    {
    Py_DECREF(o);
    }

}

