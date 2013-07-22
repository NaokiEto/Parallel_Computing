// python wrapper for vtkSynchronizedTemplates2D
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
#include "vtkSynchronizedTemplates2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSynchronizedTemplates2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSynchronizedTemplates2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSynchronizedTemplates2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSynchronizedTemplates2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSynchronizedTemplates2D_Doc();


static PyObject *
PyvtkSynchronizedTemplates2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

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
      tempr = op->vtkSynchronizedTemplates2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

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
      tempr = op->vtkSynchronizedTemplates2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  vtkSynchronizedTemplates2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSynchronizedTemplates2D::NewInstance();
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
PyvtkSynchronizedTemplates2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSynchronizedTemplates2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSynchronizedTemplates2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

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
      tempr = op->vtkSynchronizedTemplates2D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkSynchronizedTemplates2D::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0);
      }
    else
      {
      tempr = op->vtkSynchronizedTemplates2D::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkSynchronizedTemplates2D::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfContours();
      }
    else
      {
      tempr = op->vtkSynchronizedTemplates2D::GetNumberOfContours();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkSynchronizedTemplates2D::GenerateValues(temp0, temp1);
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
PyvtkSynchronizedTemplates2D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSynchronizedTemplates2D::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSynchronizedTemplates2D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSynchronizedTemplates2D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkSynchronizedTemplates2D_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkSynchronizedTemplates2D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeScalars(temp0);
      }
    else
      {
      op->vtkSynchronizedTemplates2D::SetComputeScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeScalars();
      }
    else
      {
      tempr = op->vtkSynchronizedTemplates2D::GetComputeScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOn();
      }
    else
      {
      op->vtkSynchronizedTemplates2D::ComputeScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOff();
      }
    else
      {
      op->vtkSynchronizedTemplates2D::ComputeScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayComponent(temp0);
      }
    else
      {
      op->vtkSynchronizedTemplates2D::SetArrayComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates2D *op = static_cast<vtkSynchronizedTemplates2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayComponent();
      }
    else
      {
      tempr = op->vtkSynchronizedTemplates2D::GetArrayComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSynchronizedTemplates2D_Methods[] = {
  {(char*)"GetClassName", PyvtkSynchronizedTemplates2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSynchronizedTemplates2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSynchronizedTemplates2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSynchronizedTemplates2D\nC++: vtkSynchronizedTemplates2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSynchronizedTemplates2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSynchronizedTemplates2D\nC++: vtkSynchronizedTemplates2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkSynchronizedTemplates2D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nBecause we delegate to vtkContourValues\n"},
  {(char*)"SetValue", PyvtkSynchronizedTemplates2D_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {(char*)"GetValue", PyvtkSynchronizedTemplates2D_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {(char*)"SetNumberOfContours", PyvtkSynchronizedTemplates2D_SetNumberOfContours, 1,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {(char*)"GetNumberOfContours", PyvtkSynchronizedTemplates2D_GetNumberOfContours, 1,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {(char*)"GenerateValues", PyvtkSynchronizedTemplates2D_GenerateValues, 1,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {(char*)"SetComputeScalars", PyvtkSynchronizedTemplates2D_SetComputeScalars, 1,
   (char*)"V.SetComputeScalars(int)\nC++: void SetComputeScalars(int a)\n\nOption to set the point scalars of the output.  The scalars will\nbe the iso value of course.  By default this flag is on.\n"},
  {(char*)"GetComputeScalars", PyvtkSynchronizedTemplates2D_GetComputeScalars, 1,
   (char*)"V.GetComputeScalars() -> int\nC++: int GetComputeScalars()\n\nOption to set the point scalars of the output.  The scalars will\nbe the iso value of course.  By default this flag is on.\n"},
  {(char*)"ComputeScalarsOn", PyvtkSynchronizedTemplates2D_ComputeScalarsOn, 1,
   (char*)"V.ComputeScalarsOn()\nC++: void ComputeScalarsOn()\n\nOption to set the point scalars of the output.  The scalars will\nbe the iso value of course.  By default this flag is on.\n"},
  {(char*)"ComputeScalarsOff", PyvtkSynchronizedTemplates2D_ComputeScalarsOff, 1,
   (char*)"V.ComputeScalarsOff()\nC++: void ComputeScalarsOff()\n\nOption to set the point scalars of the output.  The scalars will\nbe the iso value of course.  By default this flag is on.\n"},
  {(char*)"SetArrayComponent", PyvtkSynchronizedTemplates2D_SetArrayComponent, 1,
   (char*)"V.SetArrayComponent(int)\nC++: void SetArrayComponent(int a)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {(char*)"GetArrayComponent", PyvtkSynchronizedTemplates2D_GetArrayComponent, 1,
   (char*)"V.GetArrayComponent() -> int\nC++: int GetArrayComponent()\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSynchronizedTemplates2D_StaticNew()
{
  return vtkSynchronizedTemplates2D::New();
}

PyObject *PyVTKClass_vtkSynchronizedTemplates2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSynchronizedTemplates2D_StaticNew,
    PyvtkSynchronizedTemplates2D_Methods,
    "vtkSynchronizedTemplates2D", modulename,
    NULL, NULL,
    PyvtkSynchronizedTemplates2D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSynchronizedTemplates2D_Doc()
{
  static const char *docstring[] = {
    "vtkSynchronizedTemplates2D - generate isoline(s) from a structured\npoints set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSynchronizedTemplates2D is a 2D implementation of the synchronized\ntemplate algorithm. Note that vtkContourFilter will automatically use\nthis class when appropriate.\n\nCaveats:\n\nThis filter is specialized to 2D images.\n\nSee Also:\n\nvtkContourFilter vtkSynchronizedTemplates3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSynchronizedTemplates2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSynchronizedTemplates2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSynchronizedTemplates2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

