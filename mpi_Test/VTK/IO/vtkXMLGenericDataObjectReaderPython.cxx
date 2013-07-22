// python wrapper for vtkXMLGenericDataObjectReader
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
#include "vtkXMLGenericDataObjectReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLGenericDataObjectReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLGenericDataObjectReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLGenericDataObjectReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLGenericDataObjectReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLGenericDataObjectReader_Doc();


static PyObject *
PyvtkXMLGenericDataObjectReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

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
      tempr = op->vtkXMLGenericDataObjectReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

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
      tempr = op->vtkXMLGenericDataObjectReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkXMLGenericDataObjectReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::NewInstance();
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
PyvtkXMLGenericDataObjectReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLGenericDataObjectReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLGenericDataObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLGenericDataObjectReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLGenericDataObjectReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLGenericDataObjectReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkXMLGenericDataObjectReader_GetHierarchicalBoxDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalBoxDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkHierarchicalBoxDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchicalBoxDataSetOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetHierarchicalBoxDataSetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetHyperOctreeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperOctreeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkHyperOctree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHyperOctreeOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetHyperOctreeOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetImageDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDataOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetImageDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetMultiBlockDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiBlockDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMultiBlockDataSetOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetMultiBlockDataSetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectilinearGridOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetRectilinearGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredGridOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridOutput();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCells();
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_SetupEmptyOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupEmptyOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetupEmptyOutput();
      }
    else
      {
      op->vtkXMLGenericDataObjectReader::SetupEmptyOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLGenericDataObjectReader_ReadOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLGenericDataObjectReader *op = static_cast<vtkXMLGenericDataObjectReader *>(vp);

  char *temp0 = NULL;
  bool temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadOutputType(temp0, temp1);
      }
    else
      {
      tempr = op->vtkXMLGenericDataObjectReader::ReadOutputType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLGenericDataObjectReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLGenericDataObjectReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLGenericDataObjectReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLGenericDataObjectReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLGenericDataObjectReader\nC++: vtkXMLGenericDataObjectReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLGenericDataObjectReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLGenericDataObjectReader\nC++: vtkXMLGenericDataObjectReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLGenericDataObjectReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {(char*)"GetHierarchicalBoxDataSetOutput", PyvtkXMLGenericDataObjectReader_GetHierarchicalBoxDataSetOutput, 1,
   (char*)"V.GetHierarchicalBoxDataSetOutput() -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *GetHierarchicalBoxDataSetOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetHyperOctreeOutput", PyvtkXMLGenericDataObjectReader_GetHyperOctreeOutput, 1,
   (char*)"V.GetHyperOctreeOutput() -> vtkHyperOctree\nC++: vtkHyperOctree *GetHyperOctreeOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetImageDataOutput", PyvtkXMLGenericDataObjectReader_GetImageDataOutput, 1,
   (char*)"V.GetImageDataOutput() -> vtkImageData\nC++: vtkImageData *GetImageDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetMultiBlockDataSetOutput", PyvtkXMLGenericDataObjectReader_GetMultiBlockDataSetOutput, 1,
   (char*)"V.GetMultiBlockDataSetOutput() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetMultiBlockDataSetOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetPolyDataOutput", PyvtkXMLGenericDataObjectReader_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkXMLGenericDataObjectReader_GetRectilinearGridOutput, 1,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetStructuredGridOutput", PyvtkXMLGenericDataObjectReader_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkXMLGenericDataObjectReader_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as various concrete types. This method is\ntypically used when you know exactly what type of data is being\nread.  Otherwise, use the general GetOutput() method. If the\nwrong type is used NULL is returned.  (You must also set the\nfilename of the object prior to getting the output.)\n"},
  {(char*)"GetNumberOfPoints", PyvtkXMLGenericDataObjectReader_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nOverridden method.\n"},
  {(char*)"GetNumberOfCells", PyvtkXMLGenericDataObjectReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nOverridden method.\n"},
  {(char*)"SetupEmptyOutput", PyvtkXMLGenericDataObjectReader_SetupEmptyOutput, 1,
   (char*)"V.SetupEmptyOutput()\nC++: void SetupEmptyOutput()\n\nOverridden method. Not Used. Delegated.\n"},
  {(char*)"ReadOutputType", PyvtkXMLGenericDataObjectReader_ReadOutputType, 1,
   (char*)"V.ReadOutputType(string, bool) -> int\nC++: virtual int ReadOutputType(const char *name, bool &parallel)\n\nThis method can be used to find out the type of output expected\nwithout needing to read the whole file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLGenericDataObjectReader_StaticNew()
{
  return vtkXMLGenericDataObjectReader::New();
}

PyObject *PyVTKClass_vtkXMLGenericDataObjectReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLGenericDataObjectReader_StaticNew,
    PyvtkXMLGenericDataObjectReader_Methods,
    "vtkXMLGenericDataObjectReader", modulename,
    NULL, NULL,
    PyvtkXMLGenericDataObjectReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLGenericDataObjectReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLGenericDataObjectReader - Read any type of vtk data object\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLGenericDataObjectReader reads any type of vtk data object\nencoded in XML format.\n\nSee Also:\n\nvtkGenericDataObjectReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLGenericDataObjectReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLGenericDataObjectReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLGenericDataObjectReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

