// python wrapper for vtkXMLUtilities
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
#include "vtkXMLUtilities.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLUtilities(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLUtilities(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLUtilitiesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLUtilitiesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLUtilities_Doc();


static PyObject *
PyvtkXMLUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUtilities *op = static_cast<vtkXMLUtilities *>(vp);

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
      tempr = op->vtkXMLUtilities::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUtilities *op = static_cast<vtkXMLUtilities *>(vp);

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
      tempr = op->vtkXMLUtilities::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUtilities *op = static_cast<vtkXMLUtilities *>(vp);

  vtkXMLUtilities *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLUtilities::NewInstance();
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
PyvtkXMLUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLUtilities *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUtilities_ReadElementFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReadElementFromString");

  char *temp0 = NULL;
  int temp1 = VTK_ENCODING_NONE;
  vtkXMLDataElement *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkXMLUtilities::ReadElementFromString(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUtilities_ReadElementFromFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReadElementFromFile");

  char *temp0 = NULL;
  int temp1 = VTK_ENCODING_NONE;
  vtkXMLDataElement *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkXMLUtilities::ReadElementFromFile(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUtilities_FactorElements(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FactorElements");

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    vtkXMLUtilities::FactorElements(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUtilities_UnFactorElements(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnFactorElements");

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    vtkXMLUtilities::UnFactorElements(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUtilities_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUtilities_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUtilities_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLUtilities\nC++: vtkXMLUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUtilities_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUtilities\nC++: vtkXMLUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReadElementFromString", PyvtkXMLUtilities_ReadElementFromString, 1,
   (char*)"V.ReadElementFromString(string, int) -> vtkXMLDataElement\nC++: static vtkXMLDataElement *ReadElementFromString(\n    const char *str, int encoding=VTK_ENCODING_NONE)\n\nRead a vtkXMLDataElement from a stream, string or file. The\n'encoding' parameter will be used to set the internal encoding of\nthe attributes of the data elements created by those functions\n(conversion from the XML stream encoding to that new encoding\nwill be performed automatically). If set to VTK_ENCODING_NONE,\nthe encoding won't be changed and will default to the default\nvtkXMLDataElement encoding. Return the root element on success,\nNULL otherwise. Note that you have to call Delete() on the\nelement returned by that function to ensure it is freed properly.\n"},
  {(char*)"ReadElementFromFile", PyvtkXMLUtilities_ReadElementFromFile, 1,
   (char*)"V.ReadElementFromFile(string, int) -> vtkXMLDataElement\nC++: static vtkXMLDataElement *ReadElementFromFile(\n    const char *filename, int encoding=VTK_ENCODING_NONE)\n\nRead a vtkXMLDataElement from a stream, string or file. The\n'encoding' parameter will be used to set the internal encoding of\nthe attributes of the data elements created by those functions\n(conversion from the XML stream encoding to that new encoding\nwill be performed automatically). If set to VTK_ENCODING_NONE,\nthe encoding won't be changed and will default to the default\nvtkXMLDataElement encoding. Return the root element on success,\nNULL otherwise. Note that you have to call Delete() on the\nelement returned by that function to ensure it is freed properly.\n"},
  {(char*)"FactorElements", PyvtkXMLUtilities_FactorElements, 1,
   (char*)"V.FactorElements(vtkXMLDataElement)\nC++: static void FactorElements(vtkXMLDataElement *tree)\n\nFactor and unfactor a tree. This operation looks for duplicate\nelements in the tree, and replace them with references to a pool\nof elements. Unfactoring a non-factored element is harmless.\n"},
  {(char*)"UnFactorElements", PyvtkXMLUtilities_UnFactorElements, 1,
   (char*)"V.UnFactorElements(vtkXMLDataElement)\nC++: static void UnFactorElements(vtkXMLDataElement *tree)\n\nFactor and unfactor a tree. This operation looks for duplicate\nelements in the tree, and replace them with references to a pool\nof elements. Unfactoring a non-factored element is harmless.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLUtilities_StaticNew()
{
  return vtkXMLUtilities::New();
}

PyObject *PyVTKClass_vtkXMLUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLUtilities_StaticNew,
    PyvtkXMLUtilities_Methods,
    "vtkXMLUtilities", modulename,
    NULL, NULL,
    PyvtkXMLUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkXMLUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUtilities - XML utilities.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLUtilities provides XML-related convenience functions.\n\nSee Also:\n\nvtkXMLDataElement\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

