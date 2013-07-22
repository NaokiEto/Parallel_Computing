// python wrapper for vtkSQLGraphReader
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
#include "vtkSQLGraphReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLGraphReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLGraphReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLGraphReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLGraphReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkSQLGraphReader_Doc();


static PyObject *
PyvtkSQLGraphReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

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
      tempr = op->vtkSQLGraphReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

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
      tempr = op->vtkSQLGraphReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  vtkSQLGraphReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::NewInstance();
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
PyvtkSQLGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLGraphReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

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
      op->vtkSQLGraphReader::SetDirected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

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
      tempr = op->vtkSQLGraphReader::GetDirected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOn();
      }
    else
      {
      op->vtkSQLGraphReader::DirectedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOff();
      }
    else
      {
      op->vtkSQLGraphReader::DirectedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetVertexQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  vtkSQLQuery *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSQLQuery"))
    {
    if (ap.IsBound())
      {
      op->SetVertexQuery(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetVertexQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetVertexQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  vtkSQLQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexQuery();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetVertexQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetEdgeQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  vtkSQLQuery *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSQLQuery"))
    {
    if (ap.IsBound())
      {
      op->SetEdgeQuery(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetEdgeQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetEdgeQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  vtkSQLQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeQuery();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetEdgeQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetSourceField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceField(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetSourceField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetSourceField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSourceField();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetSourceField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetTargetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetField(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetTargetField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetTargetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetField();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetTargetField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetVertexIdField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIdField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexIdField(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetVertexIdField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetVertexIdField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIdField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexIdField();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetVertexIdField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetXField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXField(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetXField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetXField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXField();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetXField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetYField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYField(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetYField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetYField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYField();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetYField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetZField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZField(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetZField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetZField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZField();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetZField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_SetCollapseEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollapseEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCollapseEdges(temp0);
      }
    else
      {
      op->vtkSQLGraphReader::SetCollapseEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_GetCollapseEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCollapseEdges();
      }
    else
      {
      tempr = op->vtkSQLGraphReader::GetCollapseEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_CollapseEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollapseEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CollapseEdgesOn();
      }
    else
      {
      op->vtkSQLGraphReader::CollapseEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLGraphReader_CollapseEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollapseEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLGraphReader *op = static_cast<vtkSQLGraphReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CollapseEdgesOff();
      }
    else
      {
      op->vtkSQLGraphReader::CollapseEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLGraphReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLGraphReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLGraphReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLGraphReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLGraphReader\nC++: vtkSQLGraphReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLGraphReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLGraphReader\nC++: vtkSQLGraphReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDirected", PyvtkSQLGraphReader_SetDirected, 1,
   (char*)"V.SetDirected(bool)\nC++: void SetDirected(bool a)\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"GetDirected", PyvtkSQLGraphReader_GetDirected, 1,
   (char*)"V.GetDirected() -> bool\nC++: bool GetDirected()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"DirectedOn", PyvtkSQLGraphReader_DirectedOn, 1,
   (char*)"V.DirectedOn()\nC++: void DirectedOn()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"DirectedOff", PyvtkSQLGraphReader_DirectedOff, 1,
   (char*)"V.DirectedOff()\nC++: void DirectedOff()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {(char*)"SetVertexQuery", PyvtkSQLGraphReader_SetVertexQuery, 1,
   (char*)"V.SetVertexQuery(vtkSQLQuery)\nC++: virtual void SetVertexQuery(vtkSQLQuery *q)\n\nThe query that retrieves the node information.\n"},
  {(char*)"GetVertexQuery", PyvtkSQLGraphReader_GetVertexQuery, 1,
   (char*)"V.GetVertexQuery() -> vtkSQLQuery\nC++: vtkSQLQuery *GetVertexQuery()\n\nThe query that retrieves the node information.\n"},
  {(char*)"SetEdgeQuery", PyvtkSQLGraphReader_SetEdgeQuery, 1,
   (char*)"V.SetEdgeQuery(vtkSQLQuery)\nC++: virtual void SetEdgeQuery(vtkSQLQuery *q)\n\nThe query that retrieves the arc information.\n"},
  {(char*)"GetEdgeQuery", PyvtkSQLGraphReader_GetEdgeQuery, 1,
   (char*)"V.GetEdgeQuery() -> vtkSQLQuery\nC++: vtkSQLQuery *GetEdgeQuery()\n\nThe query that retrieves the arc information.\n"},
  {(char*)"SetSourceField", PyvtkSQLGraphReader_SetSourceField, 1,
   (char*)"V.SetSourceField(string)\nC++: void SetSourceField(char *)\n\nThe name of the field in the arc query for the source node of\neach arc.\n"},
  {(char*)"GetSourceField", PyvtkSQLGraphReader_GetSourceField, 1,
   (char*)"V.GetSourceField() -> string\nC++: char *GetSourceField()\n\nThe name of the field in the arc query for the source node of\neach arc.\n"},
  {(char*)"SetTargetField", PyvtkSQLGraphReader_SetTargetField, 1,
   (char*)"V.SetTargetField(string)\nC++: void SetTargetField(char *)\n\nThe name of the field in the arc query for the target node of\neach arc.\n"},
  {(char*)"GetTargetField", PyvtkSQLGraphReader_GetTargetField, 1,
   (char*)"V.GetTargetField() -> string\nC++: char *GetTargetField()\n\nThe name of the field in the arc query for the target node of\neach arc.\n"},
  {(char*)"SetVertexIdField", PyvtkSQLGraphReader_SetVertexIdField, 1,
   (char*)"V.SetVertexIdField(string)\nC++: void SetVertexIdField(char *)\n\nThe name of the field in the node query for the node ID.\n"},
  {(char*)"GetVertexIdField", PyvtkSQLGraphReader_GetVertexIdField, 1,
   (char*)"V.GetVertexIdField() -> string\nC++: char *GetVertexIdField()\n\nThe name of the field in the node query for the node ID.\n"},
  {(char*)"SetXField", PyvtkSQLGraphReader_SetXField, 1,
   (char*)"V.SetXField(string)\nC++: void SetXField(char *)\n\nThe name of the field in the node query for the node's x\ncoordinate.\n"},
  {(char*)"GetXField", PyvtkSQLGraphReader_GetXField, 1,
   (char*)"V.GetXField() -> string\nC++: char *GetXField()\n\nThe name of the field in the node query for the node's x\ncoordinate.\n"},
  {(char*)"SetYField", PyvtkSQLGraphReader_SetYField, 1,
   (char*)"V.SetYField(string)\nC++: void SetYField(char *)\n\nThe name of the field in the node query for the node's y\ncoordinate.\n"},
  {(char*)"GetYField", PyvtkSQLGraphReader_GetYField, 1,
   (char*)"V.GetYField() -> string\nC++: char *GetYField()\n\nThe name of the field in the node query for the node's y\ncoordinate.\n"},
  {(char*)"SetZField", PyvtkSQLGraphReader_SetZField, 1,
   (char*)"V.SetZField(string)\nC++: void SetZField(char *)\n\nThe name of the field in the node query for the node's z\ncoordinate.\n"},
  {(char*)"GetZField", PyvtkSQLGraphReader_GetZField, 1,
   (char*)"V.GetZField() -> string\nC++: char *GetZField()\n\nThe name of the field in the node query for the node's z\ncoordinate.\n"},
  {(char*)"SetCollapseEdges", PyvtkSQLGraphReader_SetCollapseEdges, 1,
   (char*)"V.SetCollapseEdges(bool)\nC++: void SetCollapseEdges(bool a)\n\nWhen set, creates a graph with no parallel arcs. Parallel arcs\nare combined into one arc. No cell fields are passed to the\noutput, except the vtkGhostLevels array if it exists, but a new\nfield \"weight\" is created that holds the number of duplicates of\nthat arc in the input.\n"},
  {(char*)"GetCollapseEdges", PyvtkSQLGraphReader_GetCollapseEdges, 1,
   (char*)"V.GetCollapseEdges() -> bool\nC++: bool GetCollapseEdges()\n\nWhen set, creates a graph with no parallel arcs. Parallel arcs\nare combined into one arc. No cell fields are passed to the\noutput, except the vtkGhostLevels array if it exists, but a new\nfield \"weight\" is created that holds the number of duplicates of\nthat arc in the input.\n"},
  {(char*)"CollapseEdgesOn", PyvtkSQLGraphReader_CollapseEdgesOn, 1,
   (char*)"V.CollapseEdgesOn()\nC++: void CollapseEdgesOn()\n\nWhen set, creates a graph with no parallel arcs. Parallel arcs\nare combined into one arc. No cell fields are passed to the\noutput, except the vtkGhostLevels array if it exists, but a new\nfield \"weight\" is created that holds the number of duplicates of\nthat arc in the input.\n"},
  {(char*)"CollapseEdgesOff", PyvtkSQLGraphReader_CollapseEdgesOff, 1,
   (char*)"V.CollapseEdgesOff()\nC++: void CollapseEdgesOff()\n\nWhen set, creates a graph with no parallel arcs. Parallel arcs\nare combined into one arc. No cell fields are passed to the\noutput, except the vtkGhostLevels array if it exists, but a new\nfield \"weight\" is created that holds the number of duplicates of\nthat arc in the input.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLGraphReader_StaticNew()
{
  return vtkSQLGraphReader::New();
}

PyObject *PyVTKClass_vtkSQLGraphReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLGraphReader_StaticNew,
    PyvtkSQLGraphReader_Methods,
    "vtkSQLGraphReader", modulename,
    NULL, NULL,
    PyvtkSQLGraphReader_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSQLGraphReader_Doc()
{
  static const char *docstring[] = {
    "vtkSQLGraphReader - read a vtkGraph from a database\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "Creates a vtkGraph using one or two vtkSQLQuery's.  The first\n(required) query must have one row for each arc in the graph. The\nquery must have two columns which represent the source and target\nnode ids.\n\nThe second (optional) query has one row for each node in the graph.\nThe table must have a field whose values match those in the arc\ntable. If the node table is not given, a node will be created f",
    "or\neach unique source or target identifier in the arc table.\n\nThe source, target, and node ID fields must be of the same type, and\nmust be either vtkStringArray or a subclass of vtkDataArray.\n\nAll columns in the queries, including the source, target, and node\nindex fields, are copied into the arc data and node data of the\nresulting vtkGraph.  If the node query is not given, the node data\nwill cont",
    "ain a single \"id\" column with the same type as the\nsource/target id arrays.\n\nIf parallel arcs are collected, not all the arc data is not copied\ninto the output.  Only the source and target id arrays will be\ntransferred. An additional vtkIdTypeArray column called \"weight\" is\ncreated which contains the number of times each arc appeared in the\ninput.\n\nIf the node query contains positional data, the u",
    "ser may specify the\nnames of these fields. These arrays must be data arrays.  The\nz-coordinate array is optional, and if not given the z-coordinates\nare set to zero.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLGraphReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLGraphReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLGraphReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

