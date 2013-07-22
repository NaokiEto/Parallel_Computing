// python wrapper for vtkCompositeDataPipeline
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
#include "vtkCompositeDataPipeline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeDataPipeline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeDataPipeline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
extern "C" { PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
#endif

static const char **PyvtkCompositeDataPipeline_Doc();


static PyObject *
PyvtkCompositeDataPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

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
      tempr = op->vtkCompositeDataPipeline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

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
      tempr = op->vtkCompositeDataPipeline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  vtkCompositeDataPipeline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeDataPipeline::NewInstance();
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
PyvtkCompositeDataPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositeDataPipeline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositeDataPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_GetCompositeOutputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositeOutputData(temp0);
      }
    else
      {
      tempr = op->vtkCompositeDataPipeline::GetCompositeOutputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_REQUIRES_TIME_DOWNSTREAM(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUIRES_TIME_DOWNSTREAM");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCompositeDataPipeline::REQUIRES_TIME_DOWNSTREAM();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_COMPOSITE_DATA_META_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_DATA_META_DATA");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCompositeDataPipeline::COMPOSITE_DATA_META_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_UPDATE_COMPOSITE_INDICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_COMPOSITE_INDICES");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCompositeDataPipeline::UPDATE_COMPOSITE_INDICES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_COMPOSITE_INDICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_INDICES");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCompositeDataPipeline::COMPOSITE_INDICES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_COMPOSITE_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_INDEX");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCompositeDataPipeline::COMPOSITE_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataPipeline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataPipeline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataPipeline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeDataPipeline\nC++: vtkCompositeDataPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataPipeline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataPipeline\nC++: vtkCompositeDataPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCompositeOutputData", PyvtkCompositeDataPipeline_GetCompositeOutputData, 1,
   (char*)"V.GetCompositeOutputData(int) -> vtkDataObject\nC++: vtkDataObject *GetCompositeOutputData(int port)\n\nReturns the data object stored with the DATA_OBJECT() in the\noutput port\n"},
  {(char*)"REQUIRES_TIME_DOWNSTREAM", PyvtkCompositeDataPipeline_REQUIRES_TIME_DOWNSTREAM, 1,
   (char*)"V.REQUIRES_TIME_DOWNSTREAM() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *REQUIRES_TIME_DOWNSTREAM()\n\nvtkCompositeDataPipeline specific keys\n"},
  {(char*)"COMPOSITE_DATA_META_DATA", PyvtkCompositeDataPipeline_COMPOSITE_DATA_META_DATA, 1,
   (char*)"V.COMPOSITE_DATA_META_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *COMPOSITE_DATA_META_DATA(\n    )\n\nCOMPOSITE_DATA_META_DATA is a key placed in the output-port\ninformation by readers/sources producing composite datasets. This\nmeta-data provides information about the structure of the\ncomposite dataset and things like data-bounds etc.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {(char*)"UPDATE_COMPOSITE_INDICES", PyvtkCompositeDataPipeline_UPDATE_COMPOSITE_INDICES, 1,
   (char*)"V.UPDATE_COMPOSITE_INDICES() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *UPDATE_COMPOSITE_INDICES(\n    )\n\nUPDATE_COMPOSITE_INDICES is a key placed in the request to\nrequest a set of composite indices from a reader/source producing\ncomposite dataset. Typically, the reader publishes its structure\nusing COMPOSITE_DATA_META_DATA() and then the sink requests\nblocks of interest using UPDATE_COMPOSITE_INDICES(). Note that\nUPDATE_COMPOSITE_INDICES has to be sorted vector with increasing\nindices.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {(char*)"COMPOSITE_INDICES", PyvtkCompositeDataPipeline_COMPOSITE_INDICES, 1,
   (char*)"V.COMPOSITE_INDICES() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *COMPOSITE_INDICES()\n\nCOMPOSITE_INDICES() is put in the output information by the\nexecutive if the request has UPDATE_COMPOSITE_INDICES() using the\ngenerated composite dataset's structure. Note that\nCOMPOSITE_INDICES has to be sorted vector with increasing\nindices.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {(char*)"COMPOSITE_INDEX", PyvtkCompositeDataPipeline_COMPOSITE_INDEX, 1,
   (char*)"V.COMPOSITE_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPOSITE_INDEX()\n\nCOMPOSITE_INDEX() is added to the leaf nodes of the meta-data\ncomposite dataset (COMPOSITE_DATA_META_DATA) during\nREQUEST_INFORMATION(). Filters downstream can use this index to\nrequest specific datasets when creating\nUPDATE_COMPOSITE_INDICES().\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataPipeline_StaticNew()
{
  return vtkCompositeDataPipeline::New();
}

PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataPipeline_StaticNew,
    PyvtkCompositeDataPipeline_Methods,
    "vtkCompositeDataPipeline", modulename,
    NULL, NULL,
    PyvtkCompositeDataPipeline_Doc(),
    PyVTKClass_vtkStreamingDemandDrivenPipelineNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataPipeline - Executive supporting composite datasets.\n\n",
    "Superclass: vtkStreamingDemandDrivenPipeline\n\n",
    "vtkCompositeDataPipeline is an executive that supports the processing\nof composite dataset. It supports algorithms that are aware of\ncomposite dataset as well as those that are not. Type checking is\nperformed at run time. Algorithms that are not composite\ndataset-aware have to support all dataset types contained in the\ncomposite dataset. The pipeline execution can be summarized as\nfollows:\n\n* REQU",
    "EST_INFORMATION: The producers have to provide information\n  about the contents of the composite dataset in this pass. Sources\n  that can produce more than one piece (note that a piece is\n  different than a block; each piece consistes of 0 or more blocks)\n  should set MAXIMUM_NUMBER_OF_PIECES to -1.\n\n* REQUEST_UPDATE_EXTENT: This pass is identical to the one\n  implemented in vtkStreamingDemandDriv",
    "enPipeline\n\n* REQUEST_DATA: This is where the algorithms execute. If the\n  vtkCompositeDataPipeline is assigned to a simple filter, it will\n  invoke the  vtkStreamingDemandDrivenPipeline passes in a loop,\n  passing a different block each time and will collect the results in\na composite dataset.\n\nSee also:\n\n\n vtkCompositeDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

