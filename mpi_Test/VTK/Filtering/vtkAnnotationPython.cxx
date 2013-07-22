// python wrapper for vtkAnnotation
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
#include "vtkAnnotation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAnnotation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAnnotation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAnnotationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAnnotationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkAnnotation_Doc();


static PyObject *
PyvtkAnnotation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

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
      tempr = op->vtkAnnotation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

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
      tempr = op->vtkAnnotation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkAnnotation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAnnotation::NewInstance();
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
PyvtkAnnotation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAnnotation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelection();
      }
    else
      {
      tempr = op->vtkAnnotation::GetSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkAnnotation::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkAnnotation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkAnnotation::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotation_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkAnnotation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkAnnotation::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotation_GetData_Methods[] = {
  {NULL, PyvtkAnnotation_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkAnnotation_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAnnotation_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnotation_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkAnnotation_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkAnnotation_LABEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LABEL");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::LABEL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_COLOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COLOR");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::COLOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_OPACITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "OPACITY");

  vtkInformationDoubleKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::OPACITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_ICON_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ICON_INDEX");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::ICON_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_ENABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ENABLE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::ENABLE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_HIDE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIDE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::HIDE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA");

  vtkInformationDataObjectKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAnnotation::DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAnnotation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAnnotation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAnnotation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

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
      tempr = op->vtkAnnotation::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotation_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAnnotation\nC++: vtkAnnotation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotation\nC++: vtkAnnotation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSelection", PyvtkAnnotation_GetSelection, 1,
   (char*)"V.GetSelection() -> vtkSelection\nC++: vtkSelection *GetSelection()\n\nThe selection to which this set of annotations will apply.\n"},
  {(char*)"SetSelection", PyvtkAnnotation_SetSelection, 1,
   (char*)"V.SetSelection(vtkSelection)\nC++: virtual void SetSelection(vtkSelection *selection)\n\nThe selection to which this set of annotations will apply.\n"},
  {(char*)"GetData", PyvtkAnnotation_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkAnnotation\nC++: static vtkAnnotation *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkAnnotation\nC++: static vtkAnnotation *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkAnnotation stored inside an information object.\n"},
  {(char*)"LABEL", PyvtkAnnotation_LABEL, 1,
   (char*)"V.LABEL() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *LABEL()\n\nThe label for this annotation.\n"},
  {(char*)"COLOR", PyvtkAnnotation_COLOR, 1,
   (char*)"V.COLOR() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *COLOR()\n\nThe color for this annotation. This is stored as an RGB triple\nwith values between 0 and 1.\n"},
  {(char*)"OPACITY", PyvtkAnnotation_OPACITY, 1,
   (char*)"V.OPACITY() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *OPACITY()\n\nThe color for this annotation. This is stored as a value between\n0 and 1.\n"},
  {(char*)"ICON_INDEX", PyvtkAnnotation_ICON_INDEX, 1,
   (char*)"V.ICON_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ICON_INDEX()\n\nAn icon index for this annotation.\n"},
  {(char*)"ENABLE", PyvtkAnnotation_ENABLE, 1,
   (char*)"V.ENABLE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ENABLE()\n\nWhether or not this annotation is enabled. A value of 1 means\nenabled, 0 disabled.\n"},
  {(char*)"HIDE", PyvtkAnnotation_HIDE, 1,
   (char*)"V.HIDE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIDE()\n\nWhether or not this annotation is visible.\n"},
  {(char*)"DATA", PyvtkAnnotation_DATA, 1,
   (char*)"V.DATA() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA()\n\nAssociate a vtkDataObject with this annotation\n"},
  {(char*)"Initialize", PyvtkAnnotation_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize the annotation to an empty state.\n"},
  {(char*)"ShallowCopy", PyvtkAnnotation_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *other)\n\nMake this annotation have the same properties and have the same\nselection of another annotation.\n"},
  {(char*)"DeepCopy", PyvtkAnnotation_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *other)\n\nMake this annotation have the same properties and have a copy of\nthe selection of another annotation.\n"},
  {(char*)"GetMTime", PyvtkAnnotation_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the modified time of this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotation_StaticNew()
{
  return vtkAnnotation::New();
}

PyObject *PyVTKClass_vtkAnnotationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotation_StaticNew,
    PyvtkAnnotation_Methods,
    "vtkAnnotation", modulename,
    NULL, NULL,
    PyvtkAnnotation_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkAnnotation_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotation - Stores a collection of annotation artifacts.\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkAnnotation is a collection of annotation properties along with an\nassociated selection indicating the portion of data the annotation\nrefers to.\n\nThanks:\n\nTimothy M. Shead (tshead@sandia.gov) at Sandia National Laboratories\ncontributed code to this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotation", o) != 0)
    {
    Py_DECREF(o);
    }

}

