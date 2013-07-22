// python wrapper for vtkQuadratureSchemeDictionaryGenerator
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
#include "vtkQuadratureSchemeDictionaryGenerator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkQuadratureSchemeDictionaryGenerator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkQuadratureSchemeDictionaryGenerator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkQuadratureSchemeDictionaryGeneratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkQuadratureSchemeDictionaryGeneratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkQuadratureSchemeDictionaryGenerator_Doc();


static PyObject *
PyvtkQuadratureSchemeDictionaryGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDictionaryGenerator *op = static_cast<vtkQuadratureSchemeDictionaryGenerator *>(vp);

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
      tempr = op->vtkQuadratureSchemeDictionaryGenerator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDictionaryGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDictionaryGenerator *op = static_cast<vtkQuadratureSchemeDictionaryGenerator *>(vp);

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
      tempr = op->vtkQuadratureSchemeDictionaryGenerator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadratureSchemeDictionaryGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadratureSchemeDictionaryGenerator *op = static_cast<vtkQuadratureSchemeDictionaryGenerator *>(vp);

  vtkQuadratureSchemeDictionaryGenerator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkQuadratureSchemeDictionaryGenerator::NewInstance();
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
PyvtkQuadratureSchemeDictionaryGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkQuadratureSchemeDictionaryGenerator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkQuadratureSchemeDictionaryGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadratureSchemeDictionaryGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadratureSchemeDictionaryGenerator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadratureSchemeDictionaryGenerator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadratureSchemeDictionaryGenerator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkQuadratureSchemeDictionaryGenerator\nC++: vtkQuadratureSchemeDictionaryGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadratureSchemeDictionaryGenerator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkQuadratureSchemeDictionaryGenerator\nC++: vtkQuadratureSchemeDictionaryGenerator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadratureSchemeDictionaryGenerator_StaticNew()
{
  return vtkQuadratureSchemeDictionaryGenerator::New();
}

PyObject *PyVTKClass_vtkQuadratureSchemeDictionaryGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadratureSchemeDictionaryGenerator_StaticNew,
    PyvtkQuadratureSchemeDictionaryGenerator_Methods,
    "vtkQuadratureSchemeDictionaryGenerator", modulename,
    NULL, NULL,
    PyvtkQuadratureSchemeDictionaryGenerator_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkQuadratureSchemeDictionaryGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkQuadratureSchemeDictionaryGenerator\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Given an unstructured grid on its input this filter generates for\neach data array in point data dictionary (ie an instance of\nvtkInformationQuadratureSchemeDefinitionVectorKey). This filter has\nbeen introduced to facilitate testing of the vtkQuadrature* classes\nas these cannot operate with the dictionary. This class is for\ntesting and should not be used for application development.\n\nSee also:\n\nvtk",
    "QuadraturePointInterpolator, vtkQuadraturePointsGenerator,\nvtkQuadratureSchemeDefinition\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadratureSchemeDictionaryGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadratureSchemeDictionaryGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadratureSchemeDictionaryGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

