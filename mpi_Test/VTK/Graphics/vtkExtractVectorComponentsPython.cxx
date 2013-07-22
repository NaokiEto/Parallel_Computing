// python wrapper for vtkExtractVectorComponents
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
#include "vtkExtractVectorComponents.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractVectorComponents(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractVectorComponents(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractVectorComponentsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractVectorComponentsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkExtractVectorComponents_Doc();


static PyObject *
PyvtkExtractVectorComponents_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

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
      tempr = op->vtkExtractVectorComponents::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

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
      tempr = op->vtkExtractVectorComponents::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  vtkExtractVectorComponents *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractVectorComponents::NewInstance();
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
PyvtkExtractVectorComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractVectorComponents *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractVectorComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

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
      op->vtkExtractVectorComponents::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVxComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVxComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVxComponent();
      }
    else
      {
      tempr = op->vtkExtractVectorComponents::GetVxComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVyComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVyComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVyComponent();
      }
    else
      {
      tempr = op->vtkExtractVectorComponents::GetVyComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVzComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVzComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVzComponent();
      }
    else
      {
      tempr = op->vtkExtractVectorComponents::GetVzComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SetExtractToFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractToFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractToFieldData(temp0);
      }
    else
      {
      op->vtkExtractVectorComponents::SetExtractToFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetExtractToFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractToFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractToFieldData();
      }
    else
      {
      tempr = op->vtkExtractVectorComponents::GetExtractToFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_ExtractToFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractToFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractToFieldDataOn();
      }
    else
      {
      op->vtkExtractVectorComponents::ExtractToFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_ExtractToFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractToFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractToFieldDataOff();
      }
    else
      {
      op->vtkExtractVectorComponents::ExtractToFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractVectorComponents_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractVectorComponents_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractVectorComponents_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractVectorComponents_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractVectorComponents\nC++: vtkExtractVectorComponents *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractVectorComponents_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractVectorComponents\nC++: vtkExtractVectorComponents *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkExtractVectorComponents_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSpecify the input data or filter.\n"},
  {(char*)"GetVxComponent", PyvtkExtractVectorComponents_GetVxComponent, 1,
   (char*)"V.GetVxComponent() -> vtkDataSet\nC++: vtkDataSet *GetVxComponent()\n\nGet the output dataset representing velocity x-component. If\noutput is NULL then input hasn't been set, which is necessary for\nabstract objects. (Note: this method returns the same information\nas the GetOutput() method with an index of 0.)\n"},
  {(char*)"GetVyComponent", PyvtkExtractVectorComponents_GetVyComponent, 1,
   (char*)"V.GetVyComponent() -> vtkDataSet\nC++: vtkDataSet *GetVyComponent()\n\nGet the output dataset representing velocity y-component. If\noutput is NULL then input hasn't been set, which is necessary for\nabstract objects. (Note: this method returns the same information\nas the GetOutput() method with an index of 1.) Note that if\nExtractToFieldData is true, this output will be empty.\n"},
  {(char*)"GetVzComponent", PyvtkExtractVectorComponents_GetVzComponent, 1,
   (char*)"V.GetVzComponent() -> vtkDataSet\nC++: vtkDataSet *GetVzComponent()\n\nGet the output dataset representing velocity z-component. If\noutput is NULL then input hasn't been set, which is necessary for\nabstract objects. (Note: this method returns the same information\nas the GetOutput() method with an index of 2.) Note that if\nExtractToFieldData is true, this output will be empty.\n"},
  {(char*)"SetExtractToFieldData", PyvtkExtractVectorComponents_SetExtractToFieldData, 1,
   (char*)"V.SetExtractToFieldData(int)\nC++: void SetExtractToFieldData(int a)\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {(char*)"GetExtractToFieldData", PyvtkExtractVectorComponents_GetExtractToFieldData, 1,
   (char*)"V.GetExtractToFieldData() -> int\nC++: int GetExtractToFieldData()\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {(char*)"ExtractToFieldDataOn", PyvtkExtractVectorComponents_ExtractToFieldDataOn, 1,
   (char*)"V.ExtractToFieldDataOn()\nC++: void ExtractToFieldDataOn()\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {(char*)"ExtractToFieldDataOff", PyvtkExtractVectorComponents_ExtractToFieldDataOff, 1,
   (char*)"V.ExtractToFieldDataOff()\nC++: void ExtractToFieldDataOff()\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractVectorComponents_StaticNew()
{
  return vtkExtractVectorComponents::New();
}

PyObject *PyVTKClass_vtkExtractVectorComponentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractVectorComponents_StaticNew,
    PyvtkExtractVectorComponents_Methods,
    "vtkExtractVectorComponents", modulename,
    NULL, NULL,
    PyvtkExtractVectorComponents_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractVectorComponents_Doc()
{
  static const char *docstring[] = {
    "vtkExtractVectorComponents - extract components of vector as separate\nscalars\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkExtractVectorComponents is a filter that extracts vector\ncomponents as separate scalars. This is accomplished by creating\nthree different outputs. Each output is the same as the input, except\nthat the scalar values will be one of the three components of the\nvector. These can be found in the VxComponent, VyComponent, and\nVzComponent. Alternatively, if the ExtractToFieldData flag is set,\nthe filt",
    "er will put all the components in the field data. The first\ncomponent will be the scalar and the others will be non-attribute\narrays.\n\nCaveats:\n\nThis filter is unusual in that it creates multiple outputs. If you\nuse the GetOutput() method, you will be retrieving the x vector\ncomponent.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractVectorComponents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractVectorComponentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractVectorComponents", o) != 0)
    {
    Py_DECREF(o);
    }

}

