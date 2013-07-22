// python wrapper for vtkVisibleCellSelector
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
#include "vtkVisibleCellSelector.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVisibleCellSelector(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVisibleCellSelector(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVisibleCellSelectorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVisibleCellSelectorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVisibleCellSelector_Doc();


static PyObject *
PyvtkVisibleCellSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

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
      tempr = op->vtkVisibleCellSelector::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

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
      tempr = op->vtkVisibleCellSelector::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkVisibleCellSelector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVisibleCellSelector::NewInstance();
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
PyvtkVisibleCellSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVisibleCellSelector *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVisibleCellSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkVisibleCellSelector::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_SetArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetArea(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVisibleCellSelector::SetArea(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_GetArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->GetArea(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVisibleCellSelector::GetArea(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_SetProcessorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessorId(temp0);
      }
    else
      {
      op->vtkVisibleCellSelector::SetProcessorId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_GetProcessorId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessorId();
      }
    else
      {
      tempr = op->vtkVisibleCellSelector::GetProcessorId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_SetRenderPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
    {
    if (ap.IsBound())
      {
      op->SetRenderPasses(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVisibleCellSelector::SetRenderPasses(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Select();
      }
    else
      {
      op->vtkVisibleCellSelector::Select();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_GetSelectedIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetSelectedIds(temp0);
      }
    else
      {
      op->vtkVisibleCellSelector::GetSelectedIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVisibleCellSelector_GetSelectedIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->GetSelectedIds(temp0);
      }
    else
      {
      op->vtkVisibleCellSelector::GetSelectedIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVisibleCellSelector_GetSelectedIds_Methods[] = {
  {NULL, PyvtkVisibleCellSelector_GetSelectedIds_s1, 1,
   (char*)"@O *vtkIdTypeArray"},
  {NULL, PyvtkVisibleCellSelector_GetSelectedIds_s2, 1,
   (char*)"@O *vtkSelection"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkVisibleCellSelector_GetSelectedIds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVisibleCellSelector_GetSelectedIds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSelectedIds");
  return NULL;
}



static PyObject *
PyvtkVisibleCellSelector_GetSelectedVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->GetSelectedVertices(temp0, temp1);
      }
    else
      {
      op->vtkVisibleCellSelector::GetSelectedVertices(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_GetActorFromId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActorFromId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkIdType temp0;
  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActorFromId(temp0);
      }
    else
      {
      tempr = op->vtkVisibleCellSelector::GetActorFromId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibleCellSelector_PrintSelectedIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintSelectedIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibleCellSelector *op = static_cast<vtkVisibleCellSelector *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->PrintSelectedIds(temp0);
      }
    else
      {
      op->vtkVisibleCellSelector::PrintSelectedIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVisibleCellSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkVisibleCellSelector_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVisibleCellSelector_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVisibleCellSelector_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVisibleCellSelector\nC++: vtkVisibleCellSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVisibleCellSelector_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVisibleCellSelector\nC++: vtkVisibleCellSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkVisibleCellSelector_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nCall to let this know where to select within.\n"},
  {(char*)"SetArea", PyvtkVisibleCellSelector_SetArea, 1,
   (char*)"V.SetArea(int, int, int, int)\nC++: void SetArea(unsigned int x0, unsigned int y0,\n    unsigned int x1, unsigned int y1)\n\nCall to set the selection area region. This crops the selected\narea to the renderers pixel limits.\n"},
  {(char*)"GetArea", PyvtkVisibleCellSelector_GetArea, 1,
   (char*)"V.GetArea(int, int, int, int)\nC++: void GetArea(unsigned int &x0, unsigned int &y0,\n    unsigned int &x1, unsigned int &y1)\n\nThe caller of SetArea can use to check for cropped limits.\n"},
  {(char*)"SetProcessorId", PyvtkVisibleCellSelector_SetProcessorId, 1,
   (char*)"V.SetProcessorId(int)\nC++: virtual void SetProcessorId(unsigned int pid)\n\nCall to let this know what processor number to render as in the\nprocessor select pass. Internally this adds 1 to pid because 0 is\nreserved for miss.\n"},
  {(char*)"GetProcessorId", PyvtkVisibleCellSelector_GetProcessorId, 1,
   (char*)"V.GetProcessorId() -> int\nC++: unsigned int GetProcessorId()\n\nCall to let this know what processor number to render as in the\nprocessor select pass. Internally this adds 1 to pid because 0 is\nreserved for miss.\n"},
  {(char*)"SetRenderPasses", PyvtkVisibleCellSelector_SetRenderPasses, 1,
   (char*)"V.SetRenderPasses(int, int, int, int, int, int)\nC++: void SetRenderPasses(int DoProcessor, int DoActor,\n    int DoCellIdHi, int DoCellIdMid, int DoCellIdLo,\n    int DoVertexId=0)\n\nCall to let this know what selection render passes to do. If you\nhave only one processor or one actor, you can leave DoProcessor\nand DoActor as false (the default). If you have less than 2^48\ncells in any actor, you do not need the CellIdHi pass, or\nsimilarly if you have less than 2^24 cells, you do not need\nDoCellIdMid. The DoPointId will enable another render pass for\ndetermining visible vertices.\n"},
  {(char*)"Select", PyvtkVisibleCellSelector_Select, 1,
   (char*)"V.Select()\nC++: void Select()\n\nExecute the selection algorithm.\n"},
  {(char*)"GetSelectedIds", PyvtkVisibleCellSelector_GetSelectedIds, 1,
   (char*)"V.GetSelectedIds(vtkIdTypeArray)\nC++: void GetSelectedIds(vtkIdTypeArray *ToCopyInto)\nV.GetSelectedIds(vtkSelection)\nC++: void GetSelectedIds(vtkSelection *ToCopyInto)\n\nAfter Select(), this will return the list of selected Ids. The\nProcessorId and Actor Id are returned in the first two\ncomponents. The CellId is returned in the last two components\n(only 64 bits total).\n"},
  {(char*)"GetSelectedVertices", PyvtkVisibleCellSelector_GetSelectedVertices, 1,
   (char*)"V.GetSelectedVertices(vtkIdTypeArray, vtkIdTypeArray)\nC++: void GetSelectedVertices(vtkIdTypeArray *VertexPointers,\n    vtkIdTypeArray *VertexIds)\n\nAfter Select(), (assuming DoVertexId is on), the will return\narrays that describe which cell vertices are visible. The\nVertexPointers array contains one index into the VertexIds array\nfor every visible cell. Any index may be -1 in which case no\nvertices were visible for that cell. The VertexIds array contains\na set of integers for each cell that has visible vertices. The\nfirst entry in the set is the number of visible vertices. The\nrest are visible vertex ranks. A set such at 2,0,4, means that a\nparticular polygon's first and fifth vertices were visible.\n"},
  {(char*)"GetActorFromId", PyvtkVisibleCellSelector_GetActorFromId, 1,
   (char*)"V.GetActorFromId(int) -> vtkProp\nC++: vtkProp *GetActorFromId(vtkIdType id)\n\nAfter a select, this will return a pointer to the actor\ncorresponding to a particular id. This will return NULL if id is\nout of range.\n"},
  {(char*)"PrintSelectedIds", PyvtkVisibleCellSelector_PrintSelectedIds, 1,
   (char*)"V.PrintSelectedIds(vtkIdTypeArray)\nC++: void PrintSelectedIds(vtkIdTypeArray *IdsToPrint)\n\nFor debugging - prints out the list of selected ids.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVisibleCellSelector_StaticNew()
{
  return vtkVisibleCellSelector::New();
}

PyObject *PyVTKClass_vtkVisibleCellSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVisibleCellSelector_StaticNew,
    PyvtkVisibleCellSelector_Methods,
    "vtkVisibleCellSelector", modulename,
    NULL, NULL,
    PyvtkVisibleCellSelector_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVisibleCellSelector_Doc()
{
  static const char *docstring[] = {
    "vtkVisibleCellSelector - A helper that orchestrates color buffer\n\n",
    "Superclass: vtkObject\n\n",
    "DEPRECATED: Please refer to vtkHardwareSelector instead. This class\ncan be used to determine what cells are visible within a given\nrectangle of the RenderWindow. To use it, call in order,\nSetRenderer(), SetArea(), SetProcessorId(), SetRenderPasses(), and\nthen Select(). Select will cause the attached vtkRenderer to render\nin a special color mode, where each cell is given it own color so\nthat later ",
    "inspection of the Rendered Pixels can determine what cells\nare visible. In practice up to five different rendering passes may\noccur depending on your choices in SetRenderPasses. After Select(), a\nlist of the visible cells can be obtained by calling\nGetSelectedIds().\n\nLimitations: Antialiasing will break this class. If your graphics\ncard settings force their use this class will return invalid resul",
    "ts.\n\nCurrently only cells from PolyDataMappers can be selected from. When\nvtkRenderer is put into a SelectMode, it temporarily swaps in a new\nvtkIdentColoredPainter to do the color index rendering of each cell\nin each vtkProp that it renders. Until alternatives to\nvtkIdentColoredPainter exist that can do a similar coloration of\nother vtkDataSet types, only polygonal data can be selected. If you\nne",
    "ed to select other data types, consider using vtkDataSetMapper and\nturning on it's PassThroughCellIds feature, or using\nvtkFrustumExtractor.\n\nOnly Opaque geometry in Actors is selected from. Assemblies and\nLODMappers are not currently supported.\n\nDuring selection, visible datasets that can not be selected from are\ntemporarily hidden so as not to produce invalid indices from their\ncolors.\n\nSee Also",
    ":\n\nvtkIdentColoredPainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVisibleCellSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVisibleCellSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVisibleCellSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

