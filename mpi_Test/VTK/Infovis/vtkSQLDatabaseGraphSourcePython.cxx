// python wrapper for vtkSQLDatabaseGraphSource
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
#include "vtkStdString.h"
#include "vtkSQLDatabaseGraphSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLDatabaseGraphSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLDatabaseGraphSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLDatabaseGraphSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLDatabaseGraphSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkSQLDatabaseGraphSource_Doc();


static PyObject *
PyvtkSQLDatabaseGraphSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

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
      tempr = op->vtkSQLDatabaseGraphSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

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
      tempr = op->vtkSQLDatabaseGraphSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkSQLDatabaseGraphSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::NewInstance();
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
PyvtkSQLDatabaseGraphSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLDatabaseGraphSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLDatabaseGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetURL();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::GetURL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetURL(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetURL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetPassword(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassword");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassword(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetPassword(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GetEdgeQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeQuery();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::GetEdgeQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetEdgeQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeQuery(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetEdgeQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GetVertexQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexQuery();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::GetVertexQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetVertexQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexQuery(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetVertexQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_AddLinkVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  char *temp0 = NULL;
  char *temp1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->AddLinkVertex(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::AddLinkVertex(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_ClearLinkVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLinkVertices();
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::ClearLinkVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_AddLinkEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddLinkEdge(temp0, temp1);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::AddLinkEdge(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_ClearLinkEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLinkEdges();
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::ClearLinkEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GetGenerateEdgePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateEdgePedigreeIds();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::GetGenerateEdgePedigreeIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetGenerateEdgePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateEdgePedigreeIds(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetGenerateEdgePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GenerateEdgePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePedigreeIdsOn();
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::GenerateEdgePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GenerateEdgePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePedigreeIdsOff();
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::GenerateEdgePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgePedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetEdgePedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgePedigreeIdArrayName();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::GetEdgePedigreeIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirected(temp0);
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::SetDirected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirected();
      }
    else
      {
      tempr = op->vtkSQLDatabaseGraphSource::GetDirected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOn();
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::DirectedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseGraphSource_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseGraphSource *op = static_cast<vtkSQLDatabaseGraphSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOff();
      }
    else
      {
      op->vtkSQLDatabaseGraphSource::DirectedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseGraphSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLDatabaseGraphSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLDatabaseGraphSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLDatabaseGraphSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLDatabaseGraphSource\nC++: vtkSQLDatabaseGraphSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLDatabaseGraphSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLDatabaseGraphSource\nC++: vtkSQLDatabaseGraphSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetURL", PyvtkSQLDatabaseGraphSource_GetURL, 1,
   (char*)"V.GetURL() -> string\nC++: vtkStdString GetURL()\n\n"},
  {(char*)"SetURL", PyvtkSQLDatabaseGraphSource_SetURL, 1,
   (char*)"V.SetURL(string)\nC++: void SetURL(const vtkStdString &url)\n\n"},
  {(char*)"SetPassword", PyvtkSQLDatabaseGraphSource_SetPassword, 1,
   (char*)"V.SetPassword(string)\nC++: void SetPassword(const vtkStdString &password)\n\n"},
  {(char*)"GetEdgeQuery", PyvtkSQLDatabaseGraphSource_GetEdgeQuery, 1,
   (char*)"V.GetEdgeQuery() -> string\nC++: vtkStdString GetEdgeQuery()\n\n"},
  {(char*)"SetEdgeQuery", PyvtkSQLDatabaseGraphSource_SetEdgeQuery, 1,
   (char*)"V.SetEdgeQuery(string)\nC++: void SetEdgeQuery(const vtkStdString &query)\n\n"},
  {(char*)"GetVertexQuery", PyvtkSQLDatabaseGraphSource_GetVertexQuery, 1,
   (char*)"V.GetVertexQuery() -> string\nC++: vtkStdString GetVertexQuery()\n\n"},
  {(char*)"SetVertexQuery", PyvtkSQLDatabaseGraphSource_SetVertexQuery, 1,
   (char*)"V.SetVertexQuery(string)\nC++: void SetVertexQuery(const vtkStdString &query)\n\n"},
  {(char*)"AddLinkVertex", PyvtkSQLDatabaseGraphSource_AddLinkVertex, 1,
   (char*)"V.AddLinkVertex(string, string, int)\nC++: void AddLinkVertex(const char *column, const char *domain=0,\n    int hidden=0)\n\n"},
  {(char*)"ClearLinkVertices", PyvtkSQLDatabaseGraphSource_ClearLinkVertices, 1,
   (char*)"V.ClearLinkVertices()\nC++: void ClearLinkVertices()\n\n"},
  {(char*)"AddLinkEdge", PyvtkSQLDatabaseGraphSource_AddLinkEdge, 1,
   (char*)"V.AddLinkEdge(string, string)\nC++: void AddLinkEdge(const char *column1, const char *column2)\n\n"},
  {(char*)"ClearLinkEdges", PyvtkSQLDatabaseGraphSource_ClearLinkEdges, 1,
   (char*)"V.ClearLinkEdges()\nC++: void ClearLinkEdges()\n\n"},
  {(char*)"GetGenerateEdgePedigreeIds", PyvtkSQLDatabaseGraphSource_GetGenerateEdgePedigreeIds, 1,
   (char*)"V.GetGenerateEdgePedigreeIds() -> bool\nC++: bool GetGenerateEdgePedigreeIds()\n\nIf on (default), generate edge pedigree ids. If off, assign an\narray to be edge pedigree ids.\n"},
  {(char*)"SetGenerateEdgePedigreeIds", PyvtkSQLDatabaseGraphSource_SetGenerateEdgePedigreeIds, 1,
   (char*)"V.SetGenerateEdgePedigreeIds(bool)\nC++: void SetGenerateEdgePedigreeIds(bool a)\n\nIf on (default), generate edge pedigree ids. If off, assign an\narray to be edge pedigree ids.\n"},
  {(char*)"GenerateEdgePedigreeIdsOn", PyvtkSQLDatabaseGraphSource_GenerateEdgePedigreeIdsOn, 1,
   (char*)"V.GenerateEdgePedigreeIdsOn()\nC++: void GenerateEdgePedigreeIdsOn()\n\nIf on (default), generate edge pedigree ids. If off, assign an\narray to be edge pedigree ids.\n"},
  {(char*)"GenerateEdgePedigreeIdsOff", PyvtkSQLDatabaseGraphSource_GenerateEdgePedigreeIdsOff, 1,
   (char*)"V.GenerateEdgePedigreeIdsOff()\nC++: void GenerateEdgePedigreeIdsOff()\n\nIf on (default), generate edge pedigree ids. If off, assign an\narray to be edge pedigree ids.\n"},
  {(char*)"SetEdgePedigreeIdArrayName", PyvtkSQLDatabaseGraphSource_SetEdgePedigreeIdArrayName, 1,
   (char*)"V.SetEdgePedigreeIdArrayName(string)\nC++: void SetEdgePedigreeIdArrayName(char *)\n\nUse this array name for setting or generating edge pedigree ids.\n"},
  {(char*)"GetEdgePedigreeIdArrayName", PyvtkSQLDatabaseGraphSource_GetEdgePedigreeIdArrayName, 1,
   (char*)"V.GetEdgePedigreeIdArrayName() -> string\nC++: char *GetEdgePedigreeIdArrayName()\n\nUse this array name for setting or generating edge pedigree ids.\n"},
  {(char*)"SetDirected", PyvtkSQLDatabaseGraphSource_SetDirected, 1,
   (char*)"V.SetDirected(bool)\nC++: void SetDirected(bool a)\n\nIf on (default), generate a directed output graph. If off,\ngenerate an undirected output graph.\n"},
  {(char*)"GetDirected", PyvtkSQLDatabaseGraphSource_GetDirected, 1,
   (char*)"V.GetDirected() -> bool\nC++: bool GetDirected()\n\nIf on (default), generate a directed output graph. If off,\ngenerate an undirected output graph.\n"},
  {(char*)"DirectedOn", PyvtkSQLDatabaseGraphSource_DirectedOn, 1,
   (char*)"V.DirectedOn()\nC++: void DirectedOn()\n\nIf on (default), generate a directed output graph. If off,\ngenerate an undirected output graph.\n"},
  {(char*)"DirectedOff", PyvtkSQLDatabaseGraphSource_DirectedOff, 1,
   (char*)"V.DirectedOff()\nC++: void DirectedOff()\n\nIf on (default), generate a directed output graph. If off,\ngenerate an undirected output graph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLDatabaseGraphSource_StaticNew()
{
  return vtkSQLDatabaseGraphSource::New();
}

PyObject *PyVTKClass_vtkSQLDatabaseGraphSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLDatabaseGraphSource_StaticNew,
    PyvtkSQLDatabaseGraphSource_Methods,
    "vtkSQLDatabaseGraphSource", modulename,
    NULL, NULL,
    PyvtkSQLDatabaseGraphSource_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSQLDatabaseGraphSource_Doc()
{
  static const char *docstring[] = {
    "vtkSQLDatabaseGraphSource - Generates a vtkGraph based on an SQL\nquery.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "This class combines vtkSQLDatabase, vtkSQLQuery, and vtkQueryToGraph\nto provide a convenience class for generating graphs from databases.\nAlso this class can be easily wrapped and used within ParaView /\nOverView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLDatabaseGraphSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLDatabaseGraphSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLDatabaseGraphSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

