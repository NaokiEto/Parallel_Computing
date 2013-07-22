// python wrapper for vtkMNITagPointWriter
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
#include "vtkMNITagPointWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMNITagPointWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMNITagPointWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMNITagPointWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMNITagPointWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataSetWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetWriterNew
#endif

static const char **PyvtkMNITagPointWriter_Doc();


static PyObject *
PyvtkMNITagPointWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

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
      tempr = op->vtkMNITagPointWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

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
      tempr = op->vtkMNITagPointWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkMNITagPointWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::NewInstance();
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
PyvtkMNITagPointWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMNITagPointWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMNITagPointWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileExtensions();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescriptiveName();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  int temp0;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0, temp1);
      }
    else
      {
      op->vtkMNITagPointWriter::SetPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_SetPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkMNITagPointWriter::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_SetPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMNITagPointWriter_SetPoints_s1(self, args);
    case 1:
      return PyvtkMNITagPointWriter_SetPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoints");
  return NULL;
}



static PyObject *
PyvtkMNITagPointWriter_GetPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  int temp0;
  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints(temp0);
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_GetPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMNITagPointWriter_GetPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMNITagPointWriter_GetPoints_s1(self, args);
    case 0:
      return PyvtkMNITagPointWriter_GetPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoints");
  return NULL;
}



static PyObject *
PyvtkMNITagPointWriter_SetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetLabelText(temp0);
      }
    else
      {
      op->vtkMNITagPointWriter::SetLabelText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelText();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetLabelText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->SetWeights(temp0);
      }
    else
      {
      op->vtkMNITagPointWriter::SetWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWeights();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetStructureIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStructureIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkIntArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->SetStructureIds(temp0);
      }
    else
      {
      op->vtkMNITagPointWriter::SetStructureIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetStructureIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructureIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkIntArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructureIds();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetStructureIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetPatientIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkIntArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->SetPatientIds(temp0);
      }
    else
      {
      op->vtkMNITagPointWriter::SetPatientIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetPatientIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  vtkIntArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientIds();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetPatientIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_SetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComments(temp0);
      }
    else
      {
      op->vtkMNITagPointWriter::SetComments(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComments();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::GetComments();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Write();
      }
    else
      {
      tempr = op->vtkMNITagPointWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointWriter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointWriter *op = static_cast<vtkMNITagPointWriter *>(vp);

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
      tempr = op->vtkMNITagPointWriter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMNITagPointWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkMNITagPointWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMNITagPointWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMNITagPointWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMNITagPointWriter\nC++: vtkMNITagPointWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMNITagPointWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMNITagPointWriter\nC++: vtkMNITagPointWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileExtensions", PyvtkMNITagPointWriter_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMNITagPointWriter_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"SetPoints", PyvtkMNITagPointWriter_SetPoints, 1,
   (char*)"V.SetPoints(int, vtkPoints)\nC++: virtual void SetPoints(int port, vtkPoints *points)\nV.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *points)\n\nSet the points (unless you set them as inputs).\n"},
  {(char*)"GetPoints", PyvtkMNITagPointWriter_GetPoints, 1,
   (char*)"V.GetPoints(int) -> vtkPoints\nC++: virtual vtkPoints *GetPoints(int port)\nV.GetPoints() -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\nSet the points (unless you set them as inputs).\n"},
  {(char*)"SetLabelText", PyvtkMNITagPointWriter_SetLabelText, 1,
   (char*)"V.SetLabelText(vtkStringArray)\nC++: virtual void SetLabelText(vtkStringArray *a)\n\nSet the labels (unless the input PointData has an array called\nLabelText). Labels are optional.\n"},
  {(char*)"GetLabelText", PyvtkMNITagPointWriter_GetLabelText, 1,
   (char*)"V.GetLabelText() -> vtkStringArray\nC++: vtkStringArray *GetLabelText()\n\nSet the labels (unless the input PointData has an array called\nLabelText). Labels are optional.\n"},
  {(char*)"SetWeights", PyvtkMNITagPointWriter_SetWeights, 1,
   (char*)"V.SetWeights(vtkDoubleArray)\nC++: virtual void SetWeights(vtkDoubleArray *a)\n\nSet the weights (unless the input PointData has an array called\nWeights).  Weights are optional.\n"},
  {(char*)"GetWeights", PyvtkMNITagPointWriter_GetWeights, 1,
   (char*)"V.GetWeights() -> vtkDoubleArray\nC++: vtkDoubleArray *GetWeights()\n\nSet the weights (unless the input PointData has an array called\nWeights).  Weights are optional.\n"},
  {(char*)"SetStructureIds", PyvtkMNITagPointWriter_SetStructureIds, 1,
   (char*)"V.SetStructureIds(vtkIntArray)\nC++: virtual void SetStructureIds(vtkIntArray *a)\n\nSet the structure ids (unless the input PointData has an array\ncalled StructureIds).  These are optional.\n"},
  {(char*)"GetStructureIds", PyvtkMNITagPointWriter_GetStructureIds, 1,
   (char*)"V.GetStructureIds() -> vtkIntArray\nC++: vtkIntArray *GetStructureIds()\n\nSet the structure ids (unless the input PointData has an array\ncalled StructureIds).  These are optional.\n"},
  {(char*)"SetPatientIds", PyvtkMNITagPointWriter_SetPatientIds, 1,
   (char*)"V.SetPatientIds(vtkIntArray)\nC++: virtual void SetPatientIds(vtkIntArray *a)\n\nSet the structure ids (unless the input PointData has an array\ncalled PatientIds).  These are optional.\n"},
  {(char*)"GetPatientIds", PyvtkMNITagPointWriter_GetPatientIds, 1,
   (char*)"V.GetPatientIds() -> vtkIntArray\nC++: vtkIntArray *GetPatientIds()\n\nSet the structure ids (unless the input PointData has an array\ncalled PatientIds).  These are optional.\n"},
  {(char*)"SetComments", PyvtkMNITagPointWriter_SetComments, 1,
   (char*)"V.SetComments(string)\nC++: void SetComments(char *)\n\nSet comments to be added to the file.\n"},
  {(char*)"GetComments", PyvtkMNITagPointWriter_GetComments, 1,
   (char*)"V.GetComments() -> string\nC++: char *GetComments()\n\nSet comments to be added to the file.\n"},
  {(char*)"Write", PyvtkMNITagPointWriter_Write, 1,
   (char*)"V.Write() -> int\nC++: virtual int Write()\n\nWrite the file.\n"},
  {(char*)"GetMTime", PyvtkMNITagPointWriter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMNITagPointWriter_StaticNew()
{
  return vtkMNITagPointWriter::New();
}

PyObject *PyVTKClass_vtkMNITagPointWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMNITagPointWriter_StaticNew,
    PyvtkMNITagPointWriter_Methods,
    "vtkMNITagPointWriter", modulename,
    NULL, NULL,
    PyvtkMNITagPointWriter_Doc(),
    PyVTKClass_vtkDataSetWriterNew(modulename));
  return cls;
}

const char **PyvtkMNITagPointWriter_Doc()
{
  static const char *docstring[] = {
    "vtkMNITagPointWriter - A writer for MNI tag point files.\n\n",
    "Superclass: vtkDataSetWriter\n\n",
    "The MNI .tag file format is used to store tag points, for use in\neither registration or labelling of data volumes.  This file format\nwas developed at the McConnell Brain Imaging Centre at the Montreal\nNeurological Institute and is used by their software. Tag points can\nbe stored for either one volume or two volumes, and this filter can\ntake one or two inputs.  Alternatively, the points to be writt",
    "en can\nbe specified by calling SetPoints().\n\nSee Also:\n\nvtkMINCImageReader vtkMNIObjectReader vtkMNITransformReader\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMNITagPointWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMNITagPointWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMNITagPointWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

