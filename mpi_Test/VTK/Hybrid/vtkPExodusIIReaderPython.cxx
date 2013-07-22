// python wrapper for vtkPExodusIIReader
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
#include "vtkPExodusIIReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPExodusIIReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPExodusIIReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPExodusIIReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPExodusIIReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExodusIIReaderNew
extern "C" { PyObject *PyVTKClass_vtkExodusIIReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkExodusIIReaderNew
#endif

static const char **PyvtkPExodusIIReader_Doc();


static PyObject *
PyvtkPExodusIIReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      tempr = op->vtkPExodusIIReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      tempr = op->vtkPExodusIIReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkPExodusIIReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::NewInstance();
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
PyvtkPExodusIIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPExodusIIReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPExodusIIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePattern();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetFilePattern();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePrefix();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetFilePrefix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFileRange(temp0, temp1);
      }
    else
      {
      op->vtkPExodusIIReader::SetFileRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileRange();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetFileRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      op->vtkPExodusIIReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFileNames();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetNumberOfFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFiles();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetNumberOfFiles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfElements();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetTotalNumberOfElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfNodes();
      }
    else
      {
      tempr = op->vtkPExodusIIReader::GetTotalNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_UpdateTimeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateTimeInformation();
      }
    else
      {
      op->vtkPExodusIIReader::UpdateTimeInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->Broadcast(temp0);
      }
    else
      {
      op->vtkPExodusIIReader::Broadcast(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPExodusIIReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPExodusIIReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExodusIIReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExodusIIReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPExodusIIReader\nC++: vtkPExodusIIReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExodusIIReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExodusIIReader\nC++: vtkPExodusIIReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPExodusIIReader_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {(char*)"GetController", PyvtkPExodusIIReader_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {(char*)"SetFilePattern", PyvtkPExodusIIReader_SetFilePattern, 1,
   (char*)"V.SetFilePattern(string)\nC++: void SetFilePattern(char *)\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"GetFilePattern", PyvtkPExodusIIReader_GetFilePattern, 1,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"SetFilePrefix", PyvtkPExodusIIReader_SetFilePrefix, 1,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"GetFilePrefix", PyvtkPExodusIIReader_GetFilePrefix, 1,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"SetFileRange", PyvtkPExodusIIReader_SetFileRange, 1,
   (char*)"V.SetFileRange(int, int)\nC++: void SetFileRange(int, int)\n\nSet the range of files that are being loaded. The range for\nsingle file should add to 0.\n"},
  {(char*)"GetFileRange", PyvtkPExodusIIReader_GetFileRange, 1,
   (char*)"V.GetFileRange() -> (int, int)\nC++: int *GetFileRange()\n\n"},
  {(char*)"SetFileName", PyvtkPExodusIIReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *name)\n\n"},
  {(char*)"GetNumberOfFileNames", PyvtkPExodusIIReader_GetNumberOfFileNames, 1,
   (char*)"V.GetNumberOfFileNames() -> int\nC++: int GetNumberOfFileNames()\n\nReturn number of file names set in SetFileNames\n"},
  {(char*)"GetNumberOfFiles", PyvtkPExodusIIReader_GetNumberOfFiles, 1,
   (char*)"V.GetNumberOfFiles() -> int\nC++: int GetNumberOfFiles()\n\nReturn the number of files to be read.\n"},
  {(char*)"GetTotalNumberOfElements", PyvtkPExodusIIReader_GetTotalNumberOfElements, 1,
   (char*)"V.GetTotalNumberOfElements() -> int\nC++: virtual vtkIdType GetTotalNumberOfElements()\n\n"},
  {(char*)"GetTotalNumberOfNodes", PyvtkPExodusIIReader_GetTotalNumberOfNodes, 1,
   (char*)"V.GetTotalNumberOfNodes() -> int\nC++: virtual vtkIdType GetTotalNumberOfNodes()\n\n"},
  {(char*)"UpdateTimeInformation", PyvtkPExodusIIReader_UpdateTimeInformation, 1,
   (char*)"V.UpdateTimeInformation()\nC++: virtual void UpdateTimeInformation()\n\nCalls UpdateTimeInformation() on all serial readers so they'll\nre-read their time info from the file. The last time step that\nthey all have in common is stored in LastCommonTimeStep, which is\nused in RequestInformation() to override the output time-specific\ninformation keys with the range of times that ALL readers can\nactually read.\n"},
  {(char*)"Broadcast", PyvtkPExodusIIReader_Broadcast, 1,
   (char*)"V.Broadcast(vtkMultiProcessController)\nC++: virtual void Broadcast(vtkMultiProcessController *ctrl)\n\nSends metadata (that read from the input file, not settings\nmodified through this API) from the rank 0 node to all other\nprocesses in a job.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExodusIIReader_StaticNew()
{
  return vtkPExodusIIReader::New();
}

PyObject *PyVTKClass_vtkPExodusIIReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExodusIIReader_StaticNew,
    PyvtkPExodusIIReader_Methods,
    "vtkPExodusIIReader", modulename,
    NULL, NULL,
    PyvtkPExodusIIReader_Doc(),
    PyVTKClass_vtkExodusIIReaderNew(modulename));
  return cls;
}

const char **PyvtkPExodusIIReader_Doc()
{
  static const char *docstring[] = {
    "vtkPExodusIIReader - Read Exodus II files (.exii)\n\n",
    "Superclass: vtkExodusIIReader\n\n",
    "vtkPExodusIIReader is a unstructured grid source object that reads\nExodusII files. Most of the meta data associated with the file is\nloaded when UpdateInformation is called. This includes information\nlike Title, number of blocks, number and names of arrays. This data\ncan be retrieved from methods in this reader. Separate arrays that\nare meant to be a single vector, are combined internally for\nconv",
    "enience. To be combined, the array names have to be identical\nexcept for a trailing X,Y and Z (or x,y,z). By default all cell and\npoint arrays are loaded. However, the user can flag arrays not to\nload with the methods \"SetPointDataArrayLoadFlag\" and\n\"SetCellDataArrayLoadFlag\". The reader responds to piece requests by\nloading only a range of the possible blocks. Unused points are\nfiltered out inter",
    "nally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExodusIIReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExodusIIReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExodusIIReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

