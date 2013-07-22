// python wrapper for vtkMNITagPointReader
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
#include "vtkMNITagPointReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMNITagPointReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMNITagPointReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMNITagPointReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMNITagPointReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMNITagPointReader_Doc();


static PyObject *
PyvtkMNITagPointReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  vtkMNITagPointReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMNITagPointReader::NewInstance();
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
PyvtkMNITagPointReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMNITagPointReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMNITagPointReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkMNITagPointReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkMNITagPointReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkMNITagPointReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetNumberOfVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVolumes();
      }
    else
      {
      tempr = op->vtkMNITagPointReader::GetNumberOfVolumes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMNITagPointReader_GetPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMNITagPointReader_GetPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMNITagPointReader_GetPoints_s1(self, args);
    case 0:
      return PyvtkMNITagPointReader_GetPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoints");
  return NULL;
}



static PyObject *
PyvtkMNITagPointReader_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetLabelText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetStructureIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructureIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetStructureIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetPatientIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

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
      tempr = op->vtkMNITagPointReader::GetPatientIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITagPointReader_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITagPointReader *op = static_cast<vtkMNITagPointReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComments();
      }
    else
      {
      tempr = op->vtkMNITagPointReader::GetComments();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMNITagPointReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMNITagPointReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMNITagPointReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMNITagPointReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMNITagPointReader\nC++: vtkMNITagPointReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMNITagPointReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMNITagPointReader\nC++: vtkMNITagPointReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMNITagPointReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the file name.\n"},
  {(char*)"GetFileName", PyvtkMNITagPointReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the file name.\n"},
  {(char*)"GetFileExtensions", PyvtkMNITagPointReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMNITagPointReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"CanReadFile", PyvtkMNITagPointReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the specified file can be read.\n"},
  {(char*)"GetNumberOfVolumes", PyvtkMNITagPointReader_GetNumberOfVolumes, 1,
   (char*)"V.GetNumberOfVolumes() -> int\nC++: virtual int GetNumberOfVolumes()\n\nGet the number of volumes specified by the file, which will be\nequal to one or two.  There will be an output point set for each\nvolume, so really, this parameter just tells you the number of\noutputs to expect from this reader.\n"},
  {(char*)"GetPoints", PyvtkMNITagPointReader_GetPoints, 1,
   (char*)"V.GetPoints(int) -> vtkPoints\nC++: virtual vtkPoints *GetPoints(int port)\nV.GetPoints() -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\nGet the points.  These are also provided in the first and second\noutput ports of the reader.  This method will return NULL if\nthere is no data.\n"},
  {(char*)"GetLabelText", PyvtkMNITagPointReader_GetLabelText, 1,
   (char*)"V.GetLabelText() -> vtkStringArray\nC++: virtual vtkStringArray *GetLabelText()\n\nGet the labels.  These same labels are provided in the output\npoint sets, as the PointData data array named \"LabelText\". This\nwill return NULL if there were no labels in the file.\n"},
  {(char*)"GetWeights", PyvtkMNITagPointReader_GetWeights, 1,
   (char*)"V.GetWeights() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetWeights()\n\nGet the weights.  These are also provided in the output point\nsets, as the PointData data array named \"Weights\". This will\nreturn NULL if there were no weights in the file.\n"},
  {(char*)"GetStructureIds", PyvtkMNITagPointReader_GetStructureIds, 1,
   (char*)"V.GetStructureIds() -> vtkIntArray\nC++: virtual vtkIntArray *GetStructureIds()\n\nGet the structure ids.  These are also provided in the output\npoint sets, as the PointData data array named \"StructureIds\".\nThis will return NULL if there were no ids in the file.\n"},
  {(char*)"GetPatientIds", PyvtkMNITagPointReader_GetPatientIds, 1,
   (char*)"V.GetPatientIds() -> vtkIntArray\nC++: virtual vtkIntArray *GetPatientIds()\n\nGet the patient ids.  These are also provided in the output point\nsets, as the PointData data array named \"PatientIds\". This will\nreturn NULL if there were no ids in the file.\n"},
  {(char*)"GetComments", PyvtkMNITagPointReader_GetComments, 1,
   (char*)"V.GetComments() -> string\nC++: virtual const char *GetComments()\n\nGet any comments that are included in the file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMNITagPointReader_StaticNew()
{
  return vtkMNITagPointReader::New();
}

PyObject *PyVTKClass_vtkMNITagPointReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMNITagPointReader_StaticNew,
    PyvtkMNITagPointReader_Methods,
    "vtkMNITagPointReader", modulename,
    NULL, NULL,
    PyvtkMNITagPointReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMNITagPointReader_Doc()
{
  static const char *docstring[] = {
    "vtkMNITagPointReader - A reader for MNI tag files.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "The MNI .tag file format is used to store labeled points, it can\nstore either one or two point sets.  All point sets must have the\nsame number of points and they will share the same labels.  This file\nformat was developed at the McConnell Brain Imaging Centre at the\nMontreal Neurological Institute and is used by their software. The\nlabels are stored as a vtkStringArray in the PointData of the outp",
    "ut\ndataset, which is a vtkPolyData.\n\nSee Also:\n\nvtkMINCImageReader vtkMNIObjectReader vtkMNITransformReader\n\nThanks:\n\nThanks to David Gobbi for contributing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMNITagPointReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMNITagPointReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMNITagPointReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

