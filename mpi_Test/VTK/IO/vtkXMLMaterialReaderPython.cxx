// python wrapper for vtkXMLMaterialReader
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
#include "vtkXMLMaterialReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLMaterialReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLMaterialReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLMaterialReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLMaterialReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLMaterialReader_Doc();


static PyObject *
PyvtkXMLMaterialReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

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
      tempr = op->vtkXMLMaterialReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

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
      tempr = op->vtkXMLMaterialReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

  vtkXMLMaterialReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLMaterialReader::NewInstance();
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
PyvtkXMLMaterialReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLMaterialReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLMaterialReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkXMLMaterialReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkXMLMaterialReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialReader_ReadMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadMaterial();
      }
    else
      {
      op->vtkXMLMaterialReader::ReadMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialReader_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialReader *op = static_cast<vtkXMLMaterialReader *>(vp);

  vtkXMLMaterial *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterial();
      }
    else
      {
      tempr = op->vtkXMLMaterialReader::GetMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMaterialReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMaterialReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMaterialReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMaterialReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLMaterialReader\nC++: vtkXMLMaterialReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMaterialReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMaterialReader\nC++: vtkXMLMaterialReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkXMLMaterialReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet and get file name.\n"},
  {(char*)"GetFileName", PyvtkXMLMaterialReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet and get file name.\n"},
  {(char*)"ReadMaterial", PyvtkXMLMaterialReader_ReadMaterial, 1,
   (char*)"V.ReadMaterial()\nC++: void ReadMaterial()\n\nRead the material file refered to in FileName. If the Reader\nhasn't changed since the last ReadMaterial(), it does not read\nthe file again.\n"},
  {(char*)"GetMaterial", PyvtkXMLMaterialReader_GetMaterial, 1,
   (char*)"V.GetMaterial() -> vtkXMLMaterial\nC++: vtkXMLMaterial *GetMaterial()\n\nGet the Material representation read by the reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMaterialReader_StaticNew()
{
  return vtkXMLMaterialReader::New();
}

PyObject *PyVTKClass_vtkXMLMaterialReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMaterialReader_StaticNew,
    PyvtkXMLMaterialReader_Methods,
    "vtkXMLMaterialReader", modulename,
    NULL, NULL,
    PyvtkXMLMaterialReader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkXMLMaterialReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMaterialReader - Provide access to elements in Material files\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLMaterialReader provides access to three types of\nvtkXMLDataElement found in XML Material Files. This class sorts them\nby type and integer id from 0-N for N elements of a specific type\nstarting with the first instance found.\n\nDesign:\n\nThis class is basically a Facade for vtkXMLMaterialParser. Currently\nfunctionality is to only provide access to vtkXMLDataElements but\nfurther extensions may re",
    "turn higher level data structures.\n\nHaving both an vtkXMLMaterialParser and a vtkXMLMaterialReader is\nconsistent with VTK's design for handling xml file and provides for\nfuture flexibility, that is better data handlers and interfacing with\na DOM xml parser.\n\nvtkProperty - defines values for some or all data members of\nvtkProperty\n\nvtkVertexShader - defines vertex shaders\n\nvtkFragmentShader - defin",
    "es fragment shaders\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMaterialReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMaterialReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMaterialReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

