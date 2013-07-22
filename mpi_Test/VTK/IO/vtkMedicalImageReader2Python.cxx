// python wrapper for vtkMedicalImageReader2
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
#include "vtkMedicalImageReader2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMedicalImageReader2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMedicalImageReader2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMedicalImageReader2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMedicalImageReader2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkMedicalImageReader2_Doc();


static PyObject *
PyvtkMedicalImageReader2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

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
      tempr = op->vtkMedicalImageReader2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

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
      tempr = op->vtkMedicalImageReader2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  vtkMedicalImageReader2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::NewInstance();
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
PyvtkMedicalImageReader2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMedicalImageReader2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMedicalImageReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetMedicalImageProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedicalImageProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  vtkMedicalImageProperties *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMedicalImageProperties();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetMedicalImageProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientName(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetPatientName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientName();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetPatientName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientID(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetPatientID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientID();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetPatientID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDate(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetDate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDate();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeries(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetSeries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSeries();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetSeries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetStudy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStudy(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetStudy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetStudy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudy();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetStudy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageNumber(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetImageNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageNumber();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetImageNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_SetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModality(temp0);
      }
    else
      {
      op->vtkMedicalImageReader2::SetModality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageReader2_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageReader2 *op = static_cast<vtkMedicalImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModality();
      }
    else
      {
      tempr = op->vtkMedicalImageReader2::GetModality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMedicalImageReader2_Methods[] = {
  {(char*)"GetClassName", PyvtkMedicalImageReader2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMedicalImageReader2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMedicalImageReader2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMedicalImageReader2\nC++: vtkMedicalImageReader2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMedicalImageReader2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMedicalImageReader2\nC++: vtkMedicalImageReader2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMedicalImageProperties", PyvtkMedicalImageReader2_GetMedicalImageProperties, 1,
   (char*)"V.GetMedicalImageProperties() -> vtkMedicalImageProperties\nC++: vtkMedicalImageProperties *GetMedicalImageProperties()\n\nGet the medical image properties object\n"},
  {(char*)"SetPatientName", PyvtkMedicalImageReader2_SetPatientName, 1,
   (char*)"V.SetPatientName(string)\nC++: virtual void SetPatientName(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetPatientName", PyvtkMedicalImageReader2_GetPatientName, 1,
   (char*)"V.GetPatientName() -> string\nC++: virtual const char *GetPatientName()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"SetPatientID", PyvtkMedicalImageReader2_SetPatientID, 1,
   (char*)"V.SetPatientID(string)\nC++: virtual void SetPatientID(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetPatientID", PyvtkMedicalImageReader2_GetPatientID, 1,
   (char*)"V.GetPatientID() -> string\nC++: virtual const char *GetPatientID()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"SetDate", PyvtkMedicalImageReader2_SetDate, 1,
   (char*)"V.SetDate(string)\nC++: virtual void SetDate(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetDate", PyvtkMedicalImageReader2_GetDate, 1,
   (char*)"V.GetDate() -> string\nC++: virtual const char *GetDate()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"SetSeries", PyvtkMedicalImageReader2_SetSeries, 1,
   (char*)"V.SetSeries(string)\nC++: virtual void SetSeries(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetSeries", PyvtkMedicalImageReader2_GetSeries, 1,
   (char*)"V.GetSeries() -> string\nC++: virtual const char *GetSeries()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"SetStudy", PyvtkMedicalImageReader2_SetStudy, 1,
   (char*)"V.SetStudy(string)\nC++: virtual void SetStudy(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetStudy", PyvtkMedicalImageReader2_GetStudy, 1,
   (char*)"V.GetStudy() -> string\nC++: virtual const char *GetStudy()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"SetImageNumber", PyvtkMedicalImageReader2_SetImageNumber, 1,
   (char*)"V.SetImageNumber(string)\nC++: virtual void SetImageNumber(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetImageNumber", PyvtkMedicalImageReader2_GetImageNumber, 1,
   (char*)"V.GetImageNumber() -> string\nC++: virtual const char *GetImageNumber()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"SetModality", PyvtkMedicalImageReader2_SetModality, 1,
   (char*)"V.SetModality(string)\nC++: virtual void SetModality(const char *)\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {(char*)"GetModality", PyvtkMedicalImageReader2_GetModality, 1,
   (char*)"V.GetModality() -> string\nC++: virtual const char *GetModality()\n\nFor backward compatibility, propagate calls to the\nMedicalImageProperties object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMedicalImageReader2_StaticNew()
{
  return vtkMedicalImageReader2::New();
}

PyObject *PyVTKClass_vtkMedicalImageReader2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMedicalImageReader2_StaticNew,
    PyvtkMedicalImageReader2_Methods,
    "vtkMedicalImageReader2", modulename,
    NULL, NULL,
    PyvtkMedicalImageReader2_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkMedicalImageReader2_Doc()
{
  static const char *docstring[] = {
    "vtkMedicalImageReader2 - vtkImageReader2 with medical meta data.\n\n",
    "Superclass: vtkImageReader2\n\n",
    "vtkMedicalImageReader2 is a parent class for medical image readers.\nIt provides a place to store patient information that may be stored\nin the image header.\n\nSee Also:\n\nvtkImageReader2 vtkGESignaReader vtkMedicalImageProperties\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMedicalImageReader2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMedicalImageReader2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMedicalImageReader2", o) != 0)
    {
    Py_DECREF(o);
    }

}

