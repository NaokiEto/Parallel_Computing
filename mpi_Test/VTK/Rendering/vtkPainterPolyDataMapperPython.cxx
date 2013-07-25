// python wrapper for vtkPainterPolyDataMapper
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
#include "vtkPainterPolyDataMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPainterPolyDataMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPainterPolyDataMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPainterPolyDataMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPainterPolyDataMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataMapperNew
#endif

static const char **PyvtkPainterPolyDataMapper_Doc();


static PyObject *
PyvtkPainterPolyDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

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
      tempr = op->vtkPainterPolyDataMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

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
      tempr = op->vtkPainterPolyDataMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkPainterPolyDataMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPainterPolyDataMapper::NewInstance();
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
PyvtkPainterPolyDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPainterPolyDataMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPainterPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->RenderPiece(temp0, temp1);
      }
    else
      {
      op->vtkPainterPolyDataMapper::RenderPiece(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_GetPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPainter();
      }
    else
      {
      tempr = op->vtkPainterPolyDataMapper::GetPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_SetPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPainter"))
    {
    if (ap.IsBound())
      {
      op->SetPainter(temp0);
      }
    else
      {
      op->vtkPainterPolyDataMapper::SetPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkPainterPolyDataMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_MapDataArrayToVertexAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToVertexAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3 = -1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPainterPolyDataMapper::MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_MapDataArrayToMultiTextureAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToMultiTextureAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3 = -1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPainterPolyDataMapper::MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_RemoveVertexAttributeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertexAttributeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveVertexAttributeMapping(temp0);
      }
    else
      {
      op->vtkPainterPolyDataMapper::RemoveVertexAttributeMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_RemoveAllVertexAttributeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVertexAttributeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllVertexAttributeMappings();
      }
    else
      {
      op->vtkPainterPolyDataMapper::RemoveAllVertexAttributeMappings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_GetSelectionPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionPainter();
      }
    else
      {
      tempr = op->vtkPainterPolyDataMapper::GetSelectionPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_SetSelectionPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  vtkPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPainter"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionPainter(temp0);
      }
    else
      {
      op->vtkPainterPolyDataMapper::SetSelectionPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPainterPolyDataMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPainterPolyDataMapper *op = static_cast<vtkPainterPolyDataMapper *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSupportsSelection();
      }
    else
      {
      tempr = op->vtkPainterPolyDataMapper::GetSupportsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPainterPolyDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkPainterPolyDataMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPainterPolyDataMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPainterPolyDataMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPainterPolyDataMapper\nC++: vtkPainterPolyDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPainterPolyDataMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPainterPolyDataMapper\nC++: vtkPainterPolyDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderPiece", PyvtkPainterPolyDataMapper_RenderPiece, 1,
   (char*)"V.RenderPiece(vtkRenderer, vtkActor)\nC++: virtual void RenderPiece(vtkRenderer *ren, vtkActor *act)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {(char*)"GetPainter", PyvtkPainterPolyDataMapper_GetPainter, 1,
   (char*)"V.GetPainter() -> vtkPainter\nC++: vtkPainter *GetPainter()\n\nGet/Set the painter used to do the actual rendering. By default,\nvtkDefaultPainter is used to build the rendering painter chain\nfor color mapping/clipping etc. followed by a vtkChooserPainter\nwhich renders the primitives.\n"},
  {(char*)"SetPainter", PyvtkPainterPolyDataMapper_SetPainter, 1,
   (char*)"V.SetPainter(vtkPainter)\nC++: void SetPainter(vtkPainter *)\n\nGet/Set the painter used to do the actual rendering. By default,\nvtkDefaultPainter is used to build the rendering painter chain\nfor color mapping/clipping etc. followed by a vtkChooserPainter\nwhich renders the primitives.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkPainterPolyDataMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. Merely propagates the call to the\npainter.\n"},
  {(char*)"MapDataArrayToVertexAttribute", PyvtkPainterPolyDataMapper_MapDataArrayToVertexAttribute, 1,
   (char*)"V.MapDataArrayToVertexAttribute(string, string, int, int)\nC++: virtual void MapDataArrayToVertexAttribute(\n    const char *vertexAttributeName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1)\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. vertexAttributeName is the name of the\nvertex attribute. dataArrayName is the name of the data array.\nfieldAssociation indicates when the data array is a point data\narray or cell data array (vtkDataObject::FIELD_ASSOCIATION_POINTS\nor (vtkDataObject::FIELD_ASSOCIATION_CELLS). componentno\nindicates which component from the data array must be passed as\nthe attribute. If -1, then all components are passed.\n"},
  {(char*)"MapDataArrayToMultiTextureAttribute", PyvtkPainterPolyDataMapper_MapDataArrayToMultiTextureAttribute, 1,
   (char*)"V.MapDataArrayToMultiTextureAttribute(int, string, int, int)\nC++: virtual void MapDataArrayToMultiTextureAttribute(int unit,\n    const char *dataArrayName, int fieldAssociation,\n    int componentno=-1)\n\n"},
  {(char*)"RemoveVertexAttributeMapping", PyvtkPainterPolyDataMapper_RemoveVertexAttributeMapping, 1,
   (char*)"V.RemoveVertexAttributeMapping(string)\nC++: virtual void RemoveVertexAttributeMapping(\n    const char *vertexAttributeName)\n\nRemove a vertex attribute mapping.\n"},
  {(char*)"RemoveAllVertexAttributeMappings", PyvtkPainterPolyDataMapper_RemoveAllVertexAttributeMappings, 1,
   (char*)"V.RemoveAllVertexAttributeMappings()\nC++: virtual void RemoveAllVertexAttributeMappings()\n\nRemove all vertex attributes.\n"},
  {(char*)"GetSelectionPainter", PyvtkPainterPolyDataMapper_GetSelectionPainter, 1,
   (char*)"V.GetSelectionPainter() -> vtkPainter\nC++: vtkPainter *GetSelectionPainter()\n\nGet/Set the painter used when rendering the selection pass.\n"},
  {(char*)"SetSelectionPainter", PyvtkPainterPolyDataMapper_SetSelectionPainter, 1,
   (char*)"V.SetSelectionPainter(vtkPainter)\nC++: void SetSelectionPainter(vtkPainter *)\n\nGet/Set the painter used when rendering the selection pass.\n"},
  {(char*)"GetSupportsSelection", PyvtkPainterPolyDataMapper_GetSupportsSelection, 1,
   (char*)"V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPainterPolyDataMapper_StaticNew()
{
  return vtkPainterPolyDataMapper::New();
}

PyObject *PyVTKClass_vtkPainterPolyDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPainterPolyDataMapper_StaticNew,
    PyvtkPainterPolyDataMapper_Methods,
    "vtkPainterPolyDataMapper", modulename,
    NULL, NULL,
    PyvtkPainterPolyDataMapper_Doc(),
    PyVTKClass_vtkPolyDataMapperNew(modulename));
  return cls;
}

const char **PyvtkPainterPolyDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkPainterPolyDataMapper - PolyDataMapper using painters\n\n",
    "Superclass: vtkPolyDataMapper\n\n",
    "PolyDataMapper that uses painters to do the actual rendering.\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPainterPolyDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPainterPolyDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPainterPolyDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}
