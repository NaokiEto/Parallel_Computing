// python wrapper for vtkSpatialRepresentationFilter
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
#include "vtkSpatialRepresentationFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSpatialRepresentationFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSpatialRepresentationFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSpatialRepresentationFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSpatialRepresentationFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkSpatialRepresentationFilter_Doc();


static PyObject *
PyvtkSpatialRepresentationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

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
      tempr = op->vtkSpatialRepresentationFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

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
      tempr = op->vtkSpatialRepresentationFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkSpatialRepresentationFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSpatialRepresentationFilter::NewInstance();
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
PyvtkSpatialRepresentationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSpatialRepresentationFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSpatialRepresentationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SetSpatialRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLocator"))
    {
    if (ap.IsBound())
      {
      op->SetSpatialRepresentation(temp0);
      }
    else
      {
      op->vtkSpatialRepresentationFilter::SetSpatialRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetSpatialRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpatialRepresentation();
      }
    else
      {
      tempr = op->vtkSpatialRepresentationFilter::GetSpatialRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkSpatialRepresentationFilter::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  int temp0;
  vtkPolyData *tempr;
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
      tempr = op->vtkSpatialRepresentationFilter::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSpatialRepresentationFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkSpatialRepresentationFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSpatialRepresentationFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSpatialRepresentationFilter_GetOutput_s1(self, args);
    case 0:
      return PyvtkSpatialRepresentationFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkSpatialRepresentationFilter_ResetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetOutput();
      }
    else
      {
      op->vtkSpatialRepresentationFilter::ResetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkSpatialRepresentationFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkSpatialRepresentationFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSpatialRepresentationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSpatialRepresentationFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpatialRepresentationFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpatialRepresentationFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSpatialRepresentationFilter\nC++: vtkSpatialRepresentationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpatialRepresentationFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpatialRepresentationFilter\nC++: vtkSpatialRepresentationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSpatialRepresentation", PyvtkSpatialRepresentationFilter_SetSpatialRepresentation, 1,
   (char*)"V.SetSpatialRepresentation(vtkLocator)\nC++: virtual void SetSpatialRepresentation(vtkLocator *)\n\nSet/Get the locator that will be used to generate the\nrepresentation.\n"},
  {(char*)"GetSpatialRepresentation", PyvtkSpatialRepresentationFilter_GetSpatialRepresentation, 1,
   (char*)"V.GetSpatialRepresentation() -> vtkLocator\nC++: vtkLocator *GetSpatialRepresentation()\n\nSet/Get the locator that will be used to generate the\nrepresentation.\n"},
  {(char*)"GetLevel", PyvtkSpatialRepresentationFilter_GetLevel, 1,
   (char*)"V.GetLevel() -> int\nC++: int GetLevel()\n\nGet the maximum number of outputs actually available.\n"},
  {(char*)"GetOutput", PyvtkSpatialRepresentationFilter_GetOutput, 1,
   (char*)"V.GetOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetOutput(int level)\nV.GetOutput() -> vtkPolyData\nC++: vtkPolyData *GetOutput()\n\nA special form of the GetOutput() method that returns multiple\noutputs.\n"},
  {(char*)"ResetOutput", PyvtkSpatialRepresentationFilter_ResetOutput, 1,
   (char*)"V.ResetOutput()\nC++: void ResetOutput()\n\nReset requested output levels\n"},
  {(char*)"SetInput", PyvtkSpatialRepresentationFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkSpatialRepresentationFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpatialRepresentationFilter_StaticNew()
{
  return vtkSpatialRepresentationFilter::New();
}

PyObject *PyVTKClass_vtkSpatialRepresentationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpatialRepresentationFilter_StaticNew,
    PyvtkSpatialRepresentationFilter_Methods,
    "vtkSpatialRepresentationFilter", modulename,
    NULL, NULL,
    PyvtkSpatialRepresentationFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkSpatialRepresentationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSpatialRepresentationFilter - generate polygonal model of spatial\nsearch object (i.e., a vtkLocator)\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkSpatialRepresentationFilter generates an polygonal representation\nof a spatial search (vtkLocator) object. The representation varies\ndepending upon the nature of the spatial search object. For example,\nthe representation for vtkOBBTree is a collection of oriented\nbounding boxes. Ths input to this filter is a dataset of any type,\nand the output is polygonal data. You must also specify the spatia",
    "l\nsearch object to use.\n\nGenerally spatial search objects are used for collision detection and\nother geometric operations, but in this filter one or more levels of\nspatial searchers can be generated to form a geometric approximation\nto the input data. This is a form of data simplification, generally\nused to accelerate the rendering process. Or, this filter can be used\nas a debugging/ visualization",
    " aid for spatial search objects.\n\nThis filter can generate one or more output vtkPolyData corresponding\nto different levels in the spatial search tree. The output data is\nretrieved using the GetOutput(id) method, where id ranges from 0\n(root level) to Level. Note that the output for level \"id\" is not\ncomputed unless a GetOutput(id) method is issued. Thus, if you desire\nthree levels of output (say ",
    "2,4,7), you would have to invoke\nGetOutput(2), GetOutput(4), and GetOutput(7). (Also note that the\nLevel ivar is computed automatically depending on the size and nature\nof the input data.) There is also another GetOutput() method that\ntakes no parameters. This method returns the leafs of the spatial\nsearch tree, which may be at different levels.\n\nCaveats:\n\nYou can specify the number of levels of t",
    "o generate with the\nMaxLevels ivar. However, when the spatial search tree is built, this\nnumber of levels may not actually be generated. The actual number\navailable can be found in the Levels ivar. Note that the value of\nLevels may change after filter execution.\n\nSee Also:\n\nvtkLocator vtkPointLocator vtkCellLocator vtkOBBTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpatialRepresentationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpatialRepresentationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpatialRepresentationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(24);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_SPATIAL_REP_LEVEL", o) != 0)
    {
    Py_DECREF(o);
    }

}

