// python wrapper for vtkXMLShader
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
#include "vtkXMLShader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLShader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLShader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLShaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLShaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLShader_Doc();


static PyObject *
PyvtkXMLShader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

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
      tempr = op->vtkXMLShader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

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
      tempr = op->vtkXMLShader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  vtkXMLShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLShader::NewInstance();
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
PyvtkXMLShader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLShader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLShader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  vtkXMLDataElement *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRootElement();
      }
    else
      {
      tempr = op->vtkXMLShader::GetRootElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_SetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  vtkXMLDataElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
    {
    if (ap.IsBound())
      {
      op->SetRootElement(temp0);
      }
    else
      {
      op->vtkXMLShader::SetRootElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetLanguage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLanguage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLanguage();
      }
    else
      {
      tempr = op->vtkXMLShader::GetLanguage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetScope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScope();
      }
    else
      {
      tempr = op->vtkXMLShader::GetScope();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocation();
      }
    else
      {
      tempr = op->vtkXMLShader::GetLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStyle();
      }
    else
      {
      tempr = op->vtkXMLShader::GetStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetName();
      }
    else
      {
      tempr = op->vtkXMLShader::GetName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEntry();
      }
    else
      {
      tempr = op->vtkXMLShader::GetEntry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_GetCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLShader *op = static_cast<vtkXMLShader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCode();
      }
    else
      {
      tempr = op->vtkXMLShader::GetCode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLShader_LocateFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LocateFile");

  char *temp0 = NULL;
  char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkXMLShader::LocateFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLShader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLShader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLShader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLShader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLShader\nC++: vtkXMLShader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLShader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLShader\nC++: vtkXMLShader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRootElement", PyvtkXMLShader_GetRootElement, 1,
   (char*)"V.GetRootElement() -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetRootElement()\n\nGet/Set the XML root element that describes this shader.\n"},
  {(char*)"SetRootElement", PyvtkXMLShader_SetRootElement, 1,
   (char*)"V.SetRootElement(vtkXMLDataElement)\nC++: void SetRootElement(vtkXMLDataElement *)\n\nGet/Set the XML root element that describes this shader.\n"},
  {(char*)"GetLanguage", PyvtkXMLShader_GetLanguage, 1,
   (char*)"V.GetLanguage() -> int\nC++: int GetLanguage()\n\nReturns the shader's language as defined in the XML description.\n"},
  {(char*)"GetScope", PyvtkXMLShader_GetScope, 1,
   (char*)"V.GetScope() -> int\nC++: int GetScope()\n\nReturns the type of the shader as defined in the XML description.\n"},
  {(char*)"GetLocation", PyvtkXMLShader_GetLocation, 1,
   (char*)"V.GetLocation() -> int\nC++: int GetLocation()\n\nReturns the location of the shader as defined in the XML\ndescription.\n"},
  {(char*)"GetStyle", PyvtkXMLShader_GetStyle, 1,
   (char*)"V.GetStyle() -> int\nC++: int GetStyle()\n\nReturns the style of the shader as optionaly defined in the XML\ndescription. If not present, default style is 1. \"style=2\" means\nit is a shader without a main(). In style 2, the \"main\" function\nfor the vertex shader part is void propFuncVS(void), the main\nfunction for the fragment shader part is void propFuncFS(). This\nis useful when combining a shader at the actor level and a shader\ndefines at the renderer level, like the depth peeling pass.\n\\post valid_result: result==1 || result==2\n"},
  {(char*)"GetName", PyvtkXMLShader_GetName, 1,
   (char*)"V.GetName() -> string\nC++: const char *GetName()\n\nGet the name of the Shader.\n"},
  {(char*)"GetEntry", PyvtkXMLShader_GetEntry, 1,
   (char*)"V.GetEntry() -> string\nC++: const char *GetEntry()\n\nGet the entry point to the shader code as defined in the XML.\n"},
  {(char*)"GetCode", PyvtkXMLShader_GetCode, 1,
   (char*)"V.GetCode() -> string\nC++: const char *GetCode()\n\nGet the shader code.\n"},
  {(char*)"LocateFile", PyvtkXMLShader_LocateFile, 1,
   (char*)"V.LocateFile(string) -> string\nC++: static char *LocateFile(const char *filename)\n\nSearches the file in the VTK_MATERIALS_DIRS. Note that this\nallocates new memory for the string. The caller must delete it.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLShader_StaticNew()
{
  return vtkXMLShader::New();
}

PyObject *PyVTKClass_vtkXMLShaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLShader_StaticNew,
    PyvtkXMLShader_Methods,
    "vtkXMLShader", modulename,
    NULL, NULL,
    PyvtkXMLShader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"LANGUAGE_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LANGUAGE_MIXED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"LANGUAGE_CG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"LANGUAGE_GLSL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SCOPE_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SCOPE_MIXED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SCOPE_VERTEX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SCOPE_FRAGMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"LOCATION_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LOCATION_INLINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"LOCATION_FILE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"LOCATION_LIBRARY", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkXMLShader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLShader - encapsulates a Shader XML description.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLShader encapsulates the XML description for a Shader. It\nprovides convenient access to various attributes/properties of a\nshader.\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLShader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLShaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLShader", o) != 0)
    {
    Py_DECREF(o);
    }

}

