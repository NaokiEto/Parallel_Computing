// python wrapper for vtkXMLMaterial
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
#include "vtkXMLMaterial.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLMaterial(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLMaterial(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLMaterialNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLMaterialNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLMaterial_Doc();


static PyObject *
PyvtkXMLMaterial_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

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
      tempr = op->vtkXMLMaterial::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

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
      tempr = op->vtkXMLMaterial::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  vtkXMLMaterial *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLMaterial::NewInstance();
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
PyvtkXMLMaterial_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLMaterial *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLMaterial::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  vtkXMLMaterial *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkXMLMaterial::CreateInstance(temp0);

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
PyvtkXMLMaterial_GetNumberOfProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfProperties();
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetNumberOfProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetNumberOfTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTextures();
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetNumberOfTextures();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetNumberOfVertexShaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertexShaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVertexShaders();
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetNumberOfVertexShaders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetNumberOfFragmentShaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFragmentShaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFragmentShaders();
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetNumberOfFragmentShaders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int temp0 = 0;
  vtkXMLDataElement *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty(temp0);
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int temp0 = 0;
  vtkXMLDataElement *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture(temp0);
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetVertexShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int temp0 = 0;
  vtkXMLShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexShader(temp0);
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetVertexShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetFragmentShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int temp0 = 0;
  vtkXMLShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFragmentShader(temp0);
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetFragmentShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

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
      tempr = op->vtkXMLMaterial::GetRootElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_SetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

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
      op->vtkXMLMaterial::SetRootElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetShaderLanguage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderLanguage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderLanguage();
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetShaderLanguage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterial_GetShaderStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterial *op = static_cast<vtkXMLMaterial *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderStyle();
      }
    else
      {
      tempr = op->vtkXMLMaterial::GetShaderStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMaterial_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMaterial_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMaterial_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMaterial_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLMaterial\nC++: vtkXMLMaterial *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMaterial_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMaterial\nC++: vtkXMLMaterial *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkXMLMaterial_CreateInstance, 1,
   (char*)"V.CreateInstance(string) -> vtkXMLMaterial\nC++: static vtkXMLMaterial *CreateInstance(const char *name)\n\nCreate a new instance. It searches for the material using the\nfollowing order: first, check the MaterialLibrary; second, treat\nthe name as an absolute path and try to locate it; third, search\nthe Material repository. Returns null is it fails to locate the\nmaterial.\n"},
  {(char*)"GetNumberOfProperties", PyvtkXMLMaterial_GetNumberOfProperties, 1,
   (char*)"V.GetNumberOfProperties() -> int\nC++: int GetNumberOfProperties()\n\nGet number of elements of type Property.\n"},
  {(char*)"GetNumberOfTextures", PyvtkXMLMaterial_GetNumberOfTextures, 1,
   (char*)"V.GetNumberOfTextures() -> int\nC++: int GetNumberOfTextures()\n\nGet number of elements of type Texture.\n"},
  {(char*)"GetNumberOfVertexShaders", PyvtkXMLMaterial_GetNumberOfVertexShaders, 1,
   (char*)"V.GetNumberOfVertexShaders() -> int\nC++: int GetNumberOfVertexShaders()\n\nGet number of Vertex shaders.\n"},
  {(char*)"GetNumberOfFragmentShaders", PyvtkXMLMaterial_GetNumberOfFragmentShaders, 1,
   (char*)"V.GetNumberOfFragmentShaders() -> int\nC++: int GetNumberOfFragmentShaders()\n\nGet number of fragment shaders.\n"},
  {(char*)"GetProperty", PyvtkXMLMaterial_GetProperty, 1,
   (char*)"V.GetProperty(int) -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetProperty(int id=0)\n\nGet the ith vtkXMLDataElement of type <Property />.\n"},
  {(char*)"GetTexture", PyvtkXMLMaterial_GetTexture, 1,
   (char*)"V.GetTexture(int) -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetTexture(int id=0)\n\nGet the ith vtkXMLDataElement of type <Texture />.\n"},
  {(char*)"GetVertexShader", PyvtkXMLMaterial_GetVertexShader, 1,
   (char*)"V.GetVertexShader(int) -> vtkXMLShader\nC++: vtkXMLShader *GetVertexShader(int id=0)\n\nGet the ith vtkXMLDataElement of type <VertexShader />.\n"},
  {(char*)"GetFragmentShader", PyvtkXMLMaterial_GetFragmentShader, 1,
   (char*)"V.GetFragmentShader(int) -> vtkXMLShader\nC++: vtkXMLShader *GetFragmentShader(int id=0)\n\nGet the ith vtkXMLDataElement of type <FragmentShader />.\n"},
  {(char*)"GetRootElement", PyvtkXMLMaterial_GetRootElement, 1,
   (char*)"V.GetRootElement() -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetRootElement()\n\nGet/Set the XML root element that describes this material.\n"},
  {(char*)"SetRootElement", PyvtkXMLMaterial_SetRootElement, 1,
   (char*)"V.SetRootElement(vtkXMLDataElement)\nC++: void SetRootElement(vtkXMLDataElement *)\n\nGet/Set the XML root element that describes this material.\n"},
  {(char*)"GetShaderLanguage", PyvtkXMLMaterial_GetShaderLanguage, 1,
   (char*)"V.GetShaderLanguage() -> int\nC++: int GetShaderLanguage()\n\nGet the Language used by the shaders in this Material. The\nLanguage of a vtkXMLMaterial is based on the Language of it's\nshaders.\n"},
  {(char*)"GetShaderStyle", PyvtkXMLMaterial_GetShaderStyle, 1,
   (char*)"V.GetShaderStyle() -> int\nC++: int GetShaderStyle()\n\nGet the style the shaders.\n\\post valid_result: result==1 || result==2\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMaterial_StaticNew()
{
  return vtkXMLMaterial::New();
}

PyObject *PyVTKClass_vtkXMLMaterialNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMaterial_StaticNew,
    PyvtkXMLMaterial_Methods,
    "vtkXMLMaterial", modulename,
    NULL, NULL,
    PyvtkXMLMaterial_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkXMLMaterial_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMaterial - encapsulates a VTK Material description.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLMaterial encapsulates VTK Material description. It keeps a\npointer to vtkXMLDataElement that defines the material and provides\naccess to Shaders/Properties defined in it.\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMaterial(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMaterialNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMaterial", o) != 0)
    {
    Py_DECREF(o);
    }

}

