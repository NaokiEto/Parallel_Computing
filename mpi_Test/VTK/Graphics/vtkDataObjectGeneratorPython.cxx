// python wrapper for vtkDataObjectGenerator
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
#include "vtkDataObjectGenerator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataObjectGenerator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataObjectGenerator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataObjectGeneratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataObjectGeneratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkDataObjectGenerator_Doc();


static PyObject *
PyvtkDataObjectGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

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
      tempr = op->vtkDataObjectGenerator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

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
      tempr = op->vtkDataObjectGenerator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  vtkDataObjectGenerator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataObjectGenerator::NewInstance();
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
PyvtkDataObjectGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataObjectGenerator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataObjectGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_SetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgram(temp0);
      }
    else
      {
      op->vtkDataObjectGenerator::SetProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_GetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgram();
      }
    else
      {
      tempr = op->vtkDataObjectGenerator::GetProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectGenerator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectGenerator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectGenerator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataObjectGenerator\nC++: vtkDataObjectGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectGenerator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectGenerator\nC++: vtkDataObjectGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProgram", PyvtkDataObjectGenerator_SetProgram, 1,
   (char*)"V.SetProgram(string)\nC++: void SetProgram(char *)\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {(char*)"GetProgram", PyvtkDataObjectGenerator_GetProgram, 1,
   (char*)"V.GetProgram() -> string\nC++: char *GetProgram()\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectGenerator_StaticNew()
{
  return vtkDataObjectGenerator::New();
}

PyObject *PyVTKClass_vtkDataObjectGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectGenerator_StaticNew,
    PyvtkDataObjectGenerator_Methods,
    "vtkDataObjectGenerator", modulename,
    NULL, NULL,
    PyvtkDataObjectGenerator_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataObjectGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectGenerator - produces simple (composite or atomic) data \n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkDataObjectGenerator parses a string and produces dataobjects from\nthe dataobject template names it sees in the string. For example, if\nthe string contains \"ID1\" the generator will create a vtkImageData.\n\"UF1\", \"RG1\", \"SG1\", \"PD1\", and \"UG1\" will produce vtkUniformGrid,\nvtkRectilinearGrid, vtkStructuredGrid, vtkPolyData and\nvtkUnstructuredGrid respectively. \"PD2\" will produce an alternate\nvtkPol",
    "yData. You can compose composite datasets from the atomic ones\nlisted above by placing them within one of the two composite dataset\nidentifiers\n- \"MB{}\" or \"HB[]\". \"MB{ ID1 PD1 MB{} }\" for example will create a\n  vtkMultiBlockDataSet consisting of three blocks: image data, poly\n  data, multi-block (empty). Hierarchical Box data sets additionally\n  require the notion of groups, declared within \"()\"",
    " braces, to\n  specify AMR depth. \"HB[ (UF1)(UF1)(UF1) ]\" will create a\n  vtkHierarchicalBoxDataSet representing an octree that is three\n  levels deep, in which the firstmost cell in each level is refined.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

