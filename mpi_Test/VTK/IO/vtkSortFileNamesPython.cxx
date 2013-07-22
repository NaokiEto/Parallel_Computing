// python wrapper for vtkSortFileNames
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
#include "vtkSortFileNames.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSortFileNames(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSortFileNames(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSortFileNamesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSortFileNamesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSortFileNames_Doc();


static PyObject *
PyvtkSortFileNames_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

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
      tempr = op->vtkSortFileNames::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

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
      tempr = op->vtkSortFileNames::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  vtkSortFileNames *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSortFileNames::NewInstance();
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
PyvtkSortFileNames_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSortFileNames *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSortFileNames::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetGrouping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrouping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGrouping(temp0);
      }
    else
      {
      op->vtkSortFileNames::SetGrouping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetGrouping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrouping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrouping();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetGrouping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GroupingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GroupingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GroupingOn();
      }
    else
      {
      op->vtkSortFileNames::GroupingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GroupingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GroupingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GroupingOff();
      }
    else
      {
      op->vtkSortFileNames::GroupingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetNumericSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumericSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumericSort(temp0);
      }
    else
      {
      op->vtkSortFileNames::SetNumericSort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNumericSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumericSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumericSort();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetNumericSort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_NumericSortOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumericSortOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NumericSortOn();
      }
    else
      {
      op->vtkSortFileNames::NumericSortOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_NumericSortOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumericSortOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NumericSortOff();
      }
    else
      {
      op->vtkSortFileNames::NumericSortOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetIgnoreCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnoreCase(temp0);
      }
    else
      {
      op->vtkSortFileNames::SetIgnoreCase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetIgnoreCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIgnoreCase();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetIgnoreCase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_IgnoreCaseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreCaseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreCaseOn();
      }
    else
      {
      op->vtkSortFileNames::IgnoreCaseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_IgnoreCaseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreCaseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreCaseOff();
      }
    else
      {
      op->vtkSortFileNames::IgnoreCaseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetSkipDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSkipDirectories(temp0);
      }
    else
      {
      op->vtkSortFileNames::SetSkipDirectories(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetSkipDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSkipDirectories();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetSkipDirectories();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SkipDirectoriesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipDirectoriesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipDirectoriesOn();
      }
    else
      {
      op->vtkSortFileNames::SkipDirectoriesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SkipDirectoriesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipDirectoriesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipDirectoriesOff();
      }
    else
      {
      op->vtkSortFileNames::SkipDirectoriesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetInputFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetInputFileNames(temp0);
      }
    else
      {
      op->vtkSortFileNames::SetInputFileNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetInputFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputFileNames();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetInputFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileNames();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNumberOfGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfGroups();
      }
    else
      {
      tempr = op->vtkSortFileNames::GetNumberOfGroups();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNthGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNthGroup(temp0);
      }
    else
      {
      tempr = op->vtkSortFileNames::GetNthGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortFileNames_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSortFileNames::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSortFileNames_Methods[] = {
  {(char*)"GetClassName", PyvtkSortFileNames_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSortFileNames_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSortFileNames_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSortFileNames\nC++: vtkSortFileNames *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSortFileNames_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSortFileNames\nC++: vtkSortFileNames *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGrouping", PyvtkSortFileNames_SetGrouping, 1,
   (char*)"V.SetGrouping(int)\nC++: void SetGrouping(int a)\n\nSort the file names into groups, according to similarity in\nfilename name and path.  Files in different directories, or with\ndifferent extensions, or which do not fit into the same numbered\nseries will be placed into different groups.  This is off by\ndefault.\n"},
  {(char*)"GetGrouping", PyvtkSortFileNames_GetGrouping, 1,
   (char*)"V.GetGrouping() -> int\nC++: int GetGrouping()\n\nSort the file names into groups, according to similarity in\nfilename name and path.  Files in different directories, or with\ndifferent extensions, or which do not fit into the same numbered\nseries will be placed into different groups.  This is off by\ndefault.\n"},
  {(char*)"GroupingOn", PyvtkSortFileNames_GroupingOn, 1,
   (char*)"V.GroupingOn()\nC++: void GroupingOn()\n\nSort the file names into groups, according to similarity in\nfilename name and path.  Files in different directories, or with\ndifferent extensions, or which do not fit into the same numbered\nseries will be placed into different groups.  This is off by\ndefault.\n"},
  {(char*)"GroupingOff", PyvtkSortFileNames_GroupingOff, 1,
   (char*)"V.GroupingOff()\nC++: void GroupingOff()\n\nSort the file names into groups, according to similarity in\nfilename name and path.  Files in different directories, or with\ndifferent extensions, or which do not fit into the same numbered\nseries will be placed into different groups.  This is off by\ndefault.\n"},
  {(char*)"SetNumericSort", PyvtkSortFileNames_SetNumericSort, 1,
   (char*)"V.SetNumericSort(int)\nC++: void SetNumericSort(int a)\n\nSort the files numerically, rather than lexicographically. For\nfilenames that contain numbers, this means the order will be\n[\"file8.dat\", \"file9.dat\", \"file10.dat\"] instead of the usual\nalphabetic sorting order [\"file10.dat\" \"file8.dat\", \"file9.dat\"].\nNumericSort is off by default.\n"},
  {(char*)"GetNumericSort", PyvtkSortFileNames_GetNumericSort, 1,
   (char*)"V.GetNumericSort() -> int\nC++: int GetNumericSort()\n\nSort the files numerically, rather than lexicographically. For\nfilenames that contain numbers, this means the order will be\n[\"file8.dat\", \"file9.dat\", \"file10.dat\"] instead of the usual\nalphabetic sorting order [\"file10.dat\" \"file8.dat\", \"file9.dat\"].\nNumericSort is off by default.\n"},
  {(char*)"NumericSortOn", PyvtkSortFileNames_NumericSortOn, 1,
   (char*)"V.NumericSortOn()\nC++: void NumericSortOn()\n\nSort the files numerically, rather than lexicographically. For\nfilenames that contain numbers, this means the order will be\n[\"file8.dat\", \"file9.dat\", \"file10.dat\"] instead of the usual\nalphabetic sorting order [\"file10.dat\" \"file8.dat\", \"file9.dat\"].\nNumericSort is off by default.\n"},
  {(char*)"NumericSortOff", PyvtkSortFileNames_NumericSortOff, 1,
   (char*)"V.NumericSortOff()\nC++: void NumericSortOff()\n\nSort the files numerically, rather than lexicographically. For\nfilenames that contain numbers, this means the order will be\n[\"file8.dat\", \"file9.dat\", \"file10.dat\"] instead of the usual\nalphabetic sorting order [\"file10.dat\" \"file8.dat\", \"file9.dat\"].\nNumericSort is off by default.\n"},
  {(char*)"SetIgnoreCase", PyvtkSortFileNames_SetIgnoreCase, 1,
   (char*)"V.SetIgnoreCase(int)\nC++: void SetIgnoreCase(int a)\n\nIgnore case when sorting.  This flag is honored by both the\nsorting and the grouping. This is off by default.\n"},
  {(char*)"GetIgnoreCase", PyvtkSortFileNames_GetIgnoreCase, 1,
   (char*)"V.GetIgnoreCase() -> int\nC++: int GetIgnoreCase()\n\nIgnore case when sorting.  This flag is honored by both the\nsorting and the grouping. This is off by default.\n"},
  {(char*)"IgnoreCaseOn", PyvtkSortFileNames_IgnoreCaseOn, 1,
   (char*)"V.IgnoreCaseOn()\nC++: void IgnoreCaseOn()\n\nIgnore case when sorting.  This flag is honored by both the\nsorting and the grouping. This is off by default.\n"},
  {(char*)"IgnoreCaseOff", PyvtkSortFileNames_IgnoreCaseOff, 1,
   (char*)"V.IgnoreCaseOff()\nC++: void IgnoreCaseOff()\n\nIgnore case when sorting.  This flag is honored by both the\nsorting and the grouping. This is off by default.\n"},
  {(char*)"SetSkipDirectories", PyvtkSortFileNames_SetSkipDirectories, 1,
   (char*)"V.SetSkipDirectories(int)\nC++: void SetSkipDirectories(int a)\n\nSkip directories. If this flag is set, any input item that is a\ndirectory rather than a file will not be included in the output. \nThis is off by default.\n"},
  {(char*)"GetSkipDirectories", PyvtkSortFileNames_GetSkipDirectories, 1,
   (char*)"V.GetSkipDirectories() -> int\nC++: int GetSkipDirectories()\n\nSkip directories. If this flag is set, any input item that is a\ndirectory rather than a file will not be included in the output. \nThis is off by default.\n"},
  {(char*)"SkipDirectoriesOn", PyvtkSortFileNames_SkipDirectoriesOn, 1,
   (char*)"V.SkipDirectoriesOn()\nC++: void SkipDirectoriesOn()\n\nSkip directories. If this flag is set, any input item that is a\ndirectory rather than a file will not be included in the output. \nThis is off by default.\n"},
  {(char*)"SkipDirectoriesOff", PyvtkSortFileNames_SkipDirectoriesOff, 1,
   (char*)"V.SkipDirectoriesOff()\nC++: void SkipDirectoriesOff()\n\nSkip directories. If this flag is set, any input item that is a\ndirectory rather than a file will not be included in the output. \nThis is off by default.\n"},
  {(char*)"SetInputFileNames", PyvtkSortFileNames_SetInputFileNames, 1,
   (char*)"V.SetInputFileNames(vtkStringArray)\nC++: void SetInputFileNames(vtkStringArray *input)\n\nSet a list of file names to group and sort.\n"},
  {(char*)"GetInputFileNames", PyvtkSortFileNames_GetInputFileNames, 1,
   (char*)"V.GetInputFileNames() -> vtkStringArray\nC++: vtkStringArray *GetInputFileNames()\n\nSet a list of file names to group and sort.\n"},
  {(char*)"GetFileNames", PyvtkSortFileNames_GetFileNames, 1,
   (char*)"V.GetFileNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetFileNames()\n\nGet the full list of sorted filenames.\n"},
  {(char*)"GetNumberOfGroups", PyvtkSortFileNames_GetNumberOfGroups, 1,
   (char*)"V.GetNumberOfGroups() -> int\nC++: virtual int GetNumberOfGroups()\n\nGet the number of groups that the names were split into, if\ngrouping is on.  The filenames are automatically split into\ngroups, where the filenames in each group will be identical\nexcept for their series numbers.  If grouping is not on, this\nmethod will return zero.\n"},
  {(char*)"GetNthGroup", PyvtkSortFileNames_GetNthGroup, 1,
   (char*)"V.GetNthGroup(int) -> vtkStringArray\nC++: virtual vtkStringArray *GetNthGroup(int i)\n\nGet the Nth group of file names.  This method should only be used\nif grouping is on.  If grouping is off, it will always return\nnull.\n"},
  {(char*)"Update", PyvtkSortFileNames_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the output filenames from the input filenames. This method\nis called automatically by GetFileNames() and GetNumberOfGroups()\nif the input names have changed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSortFileNames_StaticNew()
{
  return vtkSortFileNames::New();
}

PyObject *PyVTKClass_vtkSortFileNamesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSortFileNames_StaticNew,
    PyvtkSortFileNames_Methods,
    "vtkSortFileNames", modulename,
    NULL, NULL,
    PyvtkSortFileNames_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSortFileNames_Doc()
{
  static const char *docstring[] = {
    "vtkSortFileNames - Group and sort a set of filenames\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSortFileNames will take a list of filenames (e.g. from a file load\ndialog) and sort them into one or more series.  If the input list of\nfilenames contains any directories, these can be removed before\nsorting using the SkipDirectories flag.  This class should be used\nwhere information about the series groupings can be determined by the\nfilenames, but it might not be successful in cases where the",
    "\ninformation about the series groupings is stored in the files\nthemselves (e.g DICOM).\n\nSee Also:\n\nvtkImageReader2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSortFileNames(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSortFileNamesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSortFileNames", o) != 0)
    {
    Py_DECREF(o);
    }

}

