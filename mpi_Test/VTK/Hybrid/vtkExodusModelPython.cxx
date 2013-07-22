// python wrapper for vtkExodusModel
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
#include "vtkExodusModel.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExodusModel(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExodusModel(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExodusModelNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExodusModelNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExodusModel_Doc();


static PyObject *
PyvtkExodusModel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

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
      tempr = op->vtkExodusModel::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

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
      tempr = op->vtkExodusModel::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkExodusModel *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExodusModel::NewInstance();
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
PyvtkExodusModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExodusModel *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExodusModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_SetGlobalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetGlobalInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusModel::SetGlobalInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_AddUGridElementVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUGridElementVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddUGridElementVariable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExodusModel::AddUGridElementVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_RemoveUGridElementVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUGridElementVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveUGridElementVariable(temp0);
      }
    else
      {
      tempr = op->vtkExodusModel::RemoveUGridElementVariable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_AddUGridNodeVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUGridNodeVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddUGridNodeVariable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExodusModel::AddUGridNodeVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_RemoveUGridNodeVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUGridNodeVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveUGridNodeVariable(temp0);
      }
    else
      {
      tempr = op->vtkExodusModel::RemoveUGridNodeVariable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_SetLocalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->SetLocalInformation(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkExodusModel::SetLocalInformation(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_HasMetadata(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasMetadata");

  vtkUnstructuredGrid *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    tempr = vtkExodusModel::HasMetadata(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_GetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkModelMetadata *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModelMetadata();
      }
    else
      {
      tempr = op->vtkExodusModel::GetModelMetadata();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_SetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkModelMetadata *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkModelMetadata"))
    {
    if (ap.IsBound())
      {
      op->SetModelMetadata(temp0);
      }
    else
      {
      op->vtkExodusModel::SetModelMetadata(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_UnpackExodusModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnpackExodusModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->UnpackExodusModel(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusModel::UnpackExodusModel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_MergeExodusModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeExodusModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkExodusModel *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExodusModel"))
    {
    if (ap.IsBound())
      {
      tempr = op->MergeExodusModel(temp0);
      }
    else
      {
      tempr = op->vtkExodusModel::MergeExodusModel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_ExtractExodusModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractExodusModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  vtkUnstructuredGrid *temp1 = NULL;
  vtkExodusModel *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      tempr = op->ExtractExodusModel(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusModel::ExtractExodusModel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_PackExodusModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackExodusModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->PackExodusModel(temp0);
      }
    else
      {
      op->vtkExodusModel::PackExodusModel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusModel_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusModel *op = static_cast<vtkExodusModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkExodusModel::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusModel_Methods[] = {
  {(char*)"GetClassName", PyvtkExodusModel_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExodusModel_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExodusModel_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExodusModel\nC++: vtkExodusModel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExodusModel_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExodusModel\nC++: vtkExodusModel *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobalInformation", PyvtkExodusModel_SetGlobalInformation, 1,
   (char*)"V.SetGlobalInformation(int, int) -> int\nC++: int SetGlobalInformation(int fid, int compute_word_size)\n\nIn order to write a correct Exodus file from a\n  vtkUnstructuredGrid, we need to know the global data\n  which does not get represented in the UGrid.\n  Initialize, with an open Exodus file, all the global\n  fields of the ExodusModel object.  fid is the file handle\n  of the opened Exodus file.  compute_word_size is the\n  size of floating point values exchanged with the\n  the Exodus library.  (It's set in ex_open or ex_create.)\n  The global fields are those which don't depend on\n  which cells or field arrays are being read from the\n  file.\n"},
  {(char*)"AddUGridElementVariable", PyvtkExodusModel_AddUGridElementVariable, 1,
   (char*)"V.AddUGridElementVariable(string, string, int) -> int\nC++: int AddUGridElementVariable(char *ugridVarName,\n    char *origName, int numComponents)\n\nIn order to write Exodus files from vtkUnstructuredGrid\n  objects that were read from Exodus files, we need to know\n  the mapping from variable names in the UGrid to variable\n  names in the Exodus file.  (The Exodus reader combines\n  scalar variables with similar names into vectors in the\n  UGrid.)  When building the UGrid to which this\n  ExodusModel refers, add each element and node variable\n  name with this call, including the name of original variable\n  that yielded it's first component, and the number of\ncomponents.\n  If a variable is removed from the UGrid, remove it from\n  the ExodusModel.  (If this information is missing or\n  incomplete, the ExodusIIWriter can still do something\n  sensible in creating names for variables.)\n"},
  {(char*)"RemoveUGridElementVariable", PyvtkExodusModel_RemoveUGridElementVariable, 1,
   (char*)"V.RemoveUGridElementVariable(string) -> int\nC++: int RemoveUGridElementVariable(char *ugridVarName)\n\nIn order to write Exodus files from vtkUnstructuredGrid\n  objects that were read from Exodus files, we need to know\n  the mapping from variable names in the UGrid to variable\n  names in the Exodus file.  (The Exodus reader combines\n  scalar variables with similar names into vectors in the\n  UGrid.)  When building the UGrid to which this\n  ExodusModel refers, add each element and node variable\n  name with this call, including the name of original variable\n  that yielded it's first component, and the number of\ncomponents.\n  If a variable is removed from the UGrid, remove it from\n  the ExodusModel.  (If this information is missing or\n  incomplete, the ExodusIIWriter can still do something\n  sensible in creating names for variables.)\n"},
  {(char*)"AddUGridNodeVariable", PyvtkExodusModel_AddUGridNodeVariable, 1,
   (char*)"V.AddUGridNodeVariable(string, string, int) -> int\nC++: int AddUGridNodeVariable(char *ugridVarName, char *origName,\n    int numComponents)\n\n"},
  {(char*)"RemoveUGridNodeVariable", PyvtkExodusModel_RemoveUGridNodeVariable, 1,
   (char*)"V.RemoveUGridNodeVariable(string) -> int\nC++: int RemoveUGridNodeVariable(char *ugridVarName)\n\n"},
  {(char*)"SetLocalInformation", PyvtkExodusModel_SetLocalInformation, 1,
   (char*)"V.SetLocalInformation(vtkUnstructuredGrid, int, int, int, int)\n    -> int\nC++: int SetLocalInformation(vtkUnstructuredGrid *ugrid, int fid,\n    int timeStep, int newGeometry, int compute_word_size)\n\nSet the local information in the ExodusModel.  This is\n information which depends on which blocks were read in,\n and which time step was read in.\n (Example - count of cells in each block, values of global\n variables, node IDs for nodes in each node set.)\n Provide the ugrid, the time step (the first time step is 0),\n the handle of an open Exodus file, and the\n size of floating point values exchanged with the Exodus library.\n Also indicate with a 1 if the geometry has changed (new blocks\n or blocks removed) since the last call.  (When in doubt set to\n1.)\n Please call SetGlobalInformation once before calling\n SetLocalInformation.  SetLocalInformation may be called many\n times if different subsets of an Exodus file are read.  Each\n call replaces the previous local values.\n"},
  {(char*)"HasMetadata", PyvtkExodusModel_HasMetadata, 1,
   (char*)"V.HasMetadata(vtkUnstructuredGrid) -> int\nC++: static int HasMetadata(vtkUnstructuredGrid *grid)\n\nStatic function that returns 1 if the vtkUnstructuredGrid\n  has metadata packed into it's field arrays, 0 otherwise.\n"},
  {(char*)"GetModelMetadata", PyvtkExodusModel_GetModelMetadata, 1,
   (char*)"V.GetModelMetadata() -> vtkModelMetadata\nC++: vtkModelMetadata *GetModelMetadata()\n\nSet or get the underlying vtkModelMetadata object.\n"},
  {(char*)"SetModelMetadata", PyvtkExodusModel_SetModelMetadata, 1,
   (char*)"V.SetModelMetadata(vtkModelMetadata)\nC++: void SetModelMetadata(vtkModelMetadata *emData)\n\nSet or get the underlying vtkModelMetadata object.\n"},
  {(char*)"UnpackExodusModel", PyvtkExodusModel_UnpackExodusModel, 1,
   (char*)"V.UnpackExodusModel(vtkUnstructuredGrid, int) -> int\nC++: int UnpackExodusModel(vtkUnstructuredGrid *grid,\n    int deleteIt)\n\nOne way to initialize an ExodusModel object is to use\n   SetGlobalInformation, SetLocalInformation, and the Add/Remove\n   Variable calls to initialize it from an open Exodus file.\n\n\n   Another way is to initialize it with the ExodusModel which\n   has been packed into field arrays of a vtkUnstructuredGrid.\n   Set the second argument to 1 if you would like the packed\n   field arrays to be deleted after this ExodusModel is\n   initialized.\n   Returns 1 if there is no ExodusModel object associated with\n   the grid, 0 otherwise.\n"},
  {(char*)"MergeExodusModel", PyvtkExodusModel_MergeExodusModel, 1,
   (char*)"V.MergeExodusModel(vtkExodusModel) -> int\nC++: int MergeExodusModel(vtkExodusModel *em)\n\nMerge the supplied vtkExodusModel object into this one.  It is\n  assumed the two objects represent portions of the same\ndistributed\n  data set.  (So the list of block IDs is the same, and so on.)\n"},
  {(char*)"ExtractExodusModel", PyvtkExodusModel_ExtractExodusModel, 1,
   (char*)"V.ExtractExodusModel(vtkIdTypeArray, vtkUnstructuredGrid)\n    -> vtkExodusModel\nC++: vtkExodusModel *ExtractExodusModel(\n    vtkIdTypeArray *globalCellIdList, vtkUnstructuredGrid *grid)\n\nCreate a new vtkExodusModel object representing a subset of the\n   cells of this vtkExodusModel object.  We need a list of the\n   global IDs of the cells to be extracted, the grid which\n   generated the Exodus Model (so we can find the points\nassociated\n   with each cell), and the name of the grid's global cell ID\narray,\n   and the name of the grid's global node ID array.\n"},
  {(char*)"PackExodusModel", PyvtkExodusModel_PackExodusModel, 1,
   (char*)"V.PackExodusModel(vtkUnstructuredGrid)\nC++: void PackExodusModel(vtkUnstructuredGrid *grid)\n\nThe metadata encapsulated in a vtkExodusModel object can be\n   written to field arrays which are then stored in the\n   vtkUnstructuredGrid itself.  PackExodusModel creates these\n   field arrays and attaches them to the supplied grid.\n"},
  {(char*)"Reset", PyvtkExodusModel_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset all fields to their initial value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExodusModel_StaticNew()
{
  return vtkExodusModel::New();
}

PyObject *PyVTKClass_vtkExodusModelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExodusModel_StaticNew,
    PyvtkExodusModel_Methods,
    "vtkExodusModel", modulename,
    NULL, NULL,
    PyvtkExodusModel_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExodusModel_Doc()
{
  static const char *docstring[] = {
    "vtkExodusModel - Exodus Model\n\n",
    "Superclass: vtkObject\n\n",
    "A vtkUnstructuredGrid output by vtkExodusReader or vtkPExodusReader\n  is missing a great deal of initialization and static model data\n  that is in an Exodus II file.  (Global variables, properties,\n  node sets, side sets, and so on.)  This data can be stored in a\n  vtkModelMetadata object, which can be initialized using\n  this vtkExodusModel class.\n\n\n  This class can be initialized with a file han",
    "dle for an open Exodus\n  file, and the vtkUnstructuredGrid derived from that file.  The\nmethods\n  used would be SetGlobalInformation, SetLocalInformation,\n  AddUGridElementVariable and AddUGridNodeVariable.  The\nvtkExodusReader\n  does this.\n\n\n  It can also be initialized (using UnpackExodusModel) from a\n  vtkUnstructuredGrid that has had metadata packed into it's field\n  arrays with PackExodusMode",
    "l.   The vtkExodusIIWriter does this.\n\n\n  If you plan to write out the Exodus file (with vtkExodusIIWriter),\n  you should direct the Exodus reader to create a vtkExodusModel\nobject.\n  This will be used by the Exodus writer to create a correct Exodus\nII\n  file on output.  In addition, the vtkDistributedDataFilter is\n  cognizant of the ExodusModel object and will unpack, extract,\nmerge,\n  and pack t",
    "hese objects associated with the grids it is\npartitioning.\n\nSee also:\n\n\n  vtkExodusReader  vtkPExodusReader vtkExodusIIWriter\nvtkModelMetadata\n  vtkDistributedDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExodusModel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExodusModelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusModel", o) != 0)
    {
    Py_DECREF(o);
    }

}

