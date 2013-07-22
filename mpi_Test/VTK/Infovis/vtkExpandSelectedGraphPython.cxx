// python wrapper for vtkExpandSelectedGraph
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
#include "vtkExpandSelectedGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExpandSelectedGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExpandSelectedGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExpandSelectedGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExpandSelectedGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkExpandSelectedGraph_Doc();


static PyObject *
PyvtkExpandSelectedGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

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
      tempr = op->vtkExpandSelectedGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

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
      tempr = op->vtkExpandSelectedGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  vtkExpandSelectedGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExpandSelectedGraph::NewInstance();
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
PyvtkExpandSelectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExpandSelectedGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExpandSelectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGraphConnection(temp0);
      }
    else
      {
      op->vtkExpandSelectedGraph::SetGraphConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExpandSelectedGraph::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetBFSDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBFSDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBFSDistance(temp0);
      }
    else
      {
      op->vtkExpandSelectedGraph::SetBFSDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetBFSDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBFSDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBFSDistance();
      }
    else
      {
      tempr = op->vtkExpandSelectedGraph::GetBFSDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetIncludeShortestPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeShortestPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeShortestPaths(temp0);
      }
    else
      {
      op->vtkExpandSelectedGraph::SetIncludeShortestPaths(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetIncludeShortestPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeShortestPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIncludeShortestPaths();
      }
    else
      {
      tempr = op->vtkExpandSelectedGraph::GetIncludeShortestPaths();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IncludeShortestPathsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeShortestPathsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeShortestPathsOn();
      }
    else
      {
      op->vtkExpandSelectedGraph::IncludeShortestPathsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IncludeShortestPathsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeShortestPathsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeShortestPathsOff();
      }
    else
      {
      op->vtkExpandSelectedGraph::IncludeShortestPathsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDomain(temp0);
      }
    else
      {
      op->vtkExpandSelectedGraph::SetDomain(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDomain();
      }
    else
      {
      tempr = op->vtkExpandSelectedGraph::GetDomain();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetUseDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDomain(temp0);
      }
    else
      {
      op->vtkExpandSelectedGraph::SetUseDomain(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetUseDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseDomain();
      }
    else
      {
      tempr = op->vtkExpandSelectedGraph::GetUseDomain();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_UseDomainOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDomainOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDomainOn();
      }
    else
      {
      op->vtkExpandSelectedGraph::UseDomainOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_UseDomainOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDomainOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDomainOff();
      }
    else
      {
      op->vtkExpandSelectedGraph::UseDomainOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExpandSelectedGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkExpandSelectedGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExpandSelectedGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExpandSelectedGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExpandSelectedGraph\nC++: vtkExpandSelectedGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExpandSelectedGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExpandSelectedGraph\nC++: vtkExpandSelectedGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraphConnection", PyvtkExpandSelectedGraph_SetGraphConnection, 1,
   (char*)"V.SetGraphConnection(vtkAlgorithmOutput)\nC++: void SetGraphConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\ngraph).\n"},
  {(char*)"FillInputPortInformation", PyvtkExpandSelectedGraph_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSpecify the first vtkSelection input and the second vtkGraph\ninput.\n"},
  {(char*)"SetBFSDistance", PyvtkExpandSelectedGraph_SetBFSDistance, 1,
   (char*)"V.SetBFSDistance(int)\nC++: void SetBFSDistance(int a)\n\nSet/Get BFSDistance which controls how many 'hops' the selection\nis grown from each seed point in the selection set (defaults to\n1)\n"},
  {(char*)"GetBFSDistance", PyvtkExpandSelectedGraph_GetBFSDistance, 1,
   (char*)"V.GetBFSDistance() -> int\nC++: int GetBFSDistance()\n\nSet/Get BFSDistance which controls how many 'hops' the selection\nis grown from each seed point in the selection set (defaults to\n1)\n"},
  {(char*)"SetIncludeShortestPaths", PyvtkExpandSelectedGraph_SetIncludeShortestPaths, 1,
   (char*)"V.SetIncludeShortestPaths(bool)\nC++: void SetIncludeShortestPaths(bool a)\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {(char*)"GetIncludeShortestPaths", PyvtkExpandSelectedGraph_GetIncludeShortestPaths, 1,
   (char*)"V.GetIncludeShortestPaths() -> bool\nC++: bool GetIncludeShortestPaths()\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {(char*)"IncludeShortestPathsOn", PyvtkExpandSelectedGraph_IncludeShortestPathsOn, 1,
   (char*)"V.IncludeShortestPathsOn()\nC++: void IncludeShortestPathsOn()\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {(char*)"IncludeShortestPathsOff", PyvtkExpandSelectedGraph_IncludeShortestPathsOff, 1,
   (char*)"V.IncludeShortestPathsOff()\nC++: void IncludeShortestPathsOff()\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {(char*)"SetDomain", PyvtkExpandSelectedGraph_SetDomain, 1,
   (char*)"V.SetDomain(string)\nC++: void SetDomain(char *)\n\nSet/Get the vertex domain to use in the expansion.\n"},
  {(char*)"GetDomain", PyvtkExpandSelectedGraph_GetDomain, 1,
   (char*)"V.GetDomain() -> string\nC++: char *GetDomain()\n\nSet/Get the vertex domain to use in the expansion.\n"},
  {(char*)"SetUseDomain", PyvtkExpandSelectedGraph_SetUseDomain, 1,
   (char*)"V.SetUseDomain(bool)\nC++: void SetUseDomain(bool a)\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {(char*)"GetUseDomain", PyvtkExpandSelectedGraph_GetUseDomain, 1,
   (char*)"V.GetUseDomain() -> bool\nC++: bool GetUseDomain()\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {(char*)"UseDomainOn", PyvtkExpandSelectedGraph_UseDomainOn, 1,
   (char*)"V.UseDomainOn()\nC++: void UseDomainOn()\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {(char*)"UseDomainOff", PyvtkExpandSelectedGraph_UseDomainOff, 1,
   (char*)"V.UseDomainOff()\nC++: void UseDomainOff()\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExpandSelectedGraph_StaticNew()
{
  return vtkExpandSelectedGraph::New();
}

PyObject *PyVTKClass_vtkExpandSelectedGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExpandSelectedGraph_StaticNew,
    PyvtkExpandSelectedGraph_Methods,
    "vtkExpandSelectedGraph", modulename,
    NULL, NULL,
    PyvtkExpandSelectedGraph_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExpandSelectedGraph_Doc()
{
  static const char *docstring[] = {
    "vtkExpandSelectedGraph - expands a selection set of a vtkGraph\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "The first input is a vtkSelection containing the selected vertices.\nThe second input is a vtkGraph. This filter 'grows' the selection set\nin one of the following ways\n1) SetBFSDistance controls how many 'hops' the selection is grown\n   from each seed point in the selection set (defaults to 1)\n2) IncludeShortestPaths controls whether this filter tries to\n   'connect' the vertices in the selection s",
    "et by computing the\n   shortest path between the vertices (if such a path exists) Note:\n   IncludeShortestPaths is currently non-functional\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExpandSelectedGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExpandSelectedGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExpandSelectedGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

