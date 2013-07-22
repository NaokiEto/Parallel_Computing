// python wrapper for vtkShaderProgram
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
#include "vtkShaderProgram.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkShaderProgram(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkShaderProgram(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkShaderProgramNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkShaderProgramNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkShaderProgram_Doc();


static PyObject *
PyvtkShaderProgram_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

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
      tempr = op->vtkShaderProgram::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

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
      tempr = op->vtkShaderProgram::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShaderProgram *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkShaderProgram::NewInstance();
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
PyvtkShaderProgram_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

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
      tempr = op->vtkShaderProgram::GetMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkXMLMaterial *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLMaterial"))
    {
    if (ap.IsBound())
      {
      op->SetMaterial(temp0);
      }
    else
      {
      op->vtkShaderProgram::SetMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_AddShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShader *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShader"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddShader(temp0);
      }
    else
      {
      tempr = op->vtkShaderProgram::AddShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_RemoveShader_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveShader(temp0);
      }
    else
      {
      op->vtkShaderProgram::RemoveShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkShaderProgram_RemoveShader_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShader *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShader"))
    {
    if (ap.IsBound())
      {
      op->RemoveShader(temp0);
      }
    else
      {
      op->vtkShaderProgram::RemoveShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShaderProgram_RemoveShader_Methods[] = {
  {NULL, PyvtkShaderProgram_RemoveShader_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkShaderProgram_RemoveShader_s2, 1,
   (char*)"@O *vtkShader"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkShaderProgram_RemoveShader(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkShaderProgram_RemoveShader_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveShader");
  return NULL;
}



static PyObject *
PyvtkShaderProgram_NewShaderIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewShaderIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkCollectionIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewShaderIterator();
      }
    else
      {
      tempr = op->vtkShaderProgram::NewShaderIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetNumberOfShaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfShaders();
      }
    else
      {
      tempr = op->vtkShaderProgram::GetNumberOfShaders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_CreateShaderProgram(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateShaderProgram");

  int temp0;
  vtkShaderProgram *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkShaderProgram::CreateShaderProgram(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_ReadMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadMaterial();
      }
    else
      {
      op->vtkShaderProgram::ReadMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0, temp1);
      }
    else
      {
      op->vtkShaderProgram::PostRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

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
      op->vtkShaderProgram::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderProgram_GetShaderDeviceAdapter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderDeviceAdapter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProgram *op = static_cast<vtkShaderProgram *>(vp);

  vtkShaderDeviceAdapter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaderDeviceAdapter();
      }
    else
      {
      tempr = op->vtkShaderProgram::GetShaderDeviceAdapter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkShaderProgram_Methods[] = {
  {(char*)"GetClassName", PyvtkShaderProgram_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShaderProgram_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShaderProgram_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkShaderProgram\nC++: vtkShaderProgram *NewInstance()\n\n"},
  {(char*)"GetMaterial", PyvtkShaderProgram_GetMaterial, 1,
   (char*)"V.GetMaterial() -> vtkXMLMaterial\nC++: vtkXMLMaterial *GetMaterial()\n\n"},
  {(char*)"SetMaterial", PyvtkShaderProgram_SetMaterial, 1,
   (char*)"V.SetMaterial(vtkXMLMaterial)\nC++: virtual void SetMaterial(vtkXMLMaterial *)\n\n"},
  {(char*)"AddShader", PyvtkShaderProgram_AddShader, 1,
   (char*)"V.AddShader(vtkShader) -> int\nC++: int AddShader(vtkShader *shader)\n\n"},
  {(char*)"RemoveShader", PyvtkShaderProgram_RemoveShader, 1,
   (char*)"V.RemoveShader(int)\nC++: void RemoveShader(int index)\nV.RemoveShader(vtkShader)\nC++: void RemoveShader(vtkShader *shader)\n\nRemove a shader at the given index.\n"},
  {(char*)"NewShaderIterator", PyvtkShaderProgram_NewShaderIterator, 1,
   (char*)"V.NewShaderIterator() -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewShaderIterator()\n\nReturns a new iterator to iterate over the shaders.\n"},
  {(char*)"GetNumberOfShaders", PyvtkShaderProgram_GetNumberOfShaders, 1,
   (char*)"V.GetNumberOfShaders() -> int\nC++: int GetNumberOfShaders()\n\nReturns the number of shaders available in this shader program.\n"},
  {(char*)"CreateShaderProgram", PyvtkShaderProgram_CreateShaderProgram, 1,
   (char*)"V.CreateShaderProgram(int) -> vtkShaderProgram\nC++: static vtkShaderProgram *CreateShaderProgram(int type)\n\n"},
  {(char*)"ReadMaterial", PyvtkShaderProgram_ReadMaterial, 1,
   (char*)"V.ReadMaterial()\nC++: virtual void ReadMaterial()\n\n"},
  {(char*)"Render", PyvtkShaderProgram_Render, 1,
   (char*)"V.Render(vtkActor, vtkRenderer)\nC++: virtual void Render(vtkActor *, vtkRenderer *)\n\n"},
  {(char*)"PostRender", PyvtkShaderProgram_PostRender, 1,
   (char*)"V.PostRender(vtkActor, vtkRenderer)\nC++: virtual void PostRender(vtkActor *, vtkRenderer *)\n\nCalled to unload the shaders after the actor has been rendered.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkShaderProgram_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetShaderDeviceAdapter", PyvtkShaderProgram_GetShaderDeviceAdapter, 1,
   (char*)"V.GetShaderDeviceAdapter() -> vtkShaderDeviceAdapter\nC++: vtkShaderDeviceAdapter *GetShaderDeviceAdapter()\n\nGet the vtkShaderDeviceAdapter which can be used to execute this\nshader program.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkShaderProgramNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkShaderProgram_Methods,
    "vtkShaderProgram", modulename,
    NULL, NULL,
    PyvtkShaderProgram_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkShaderProgram_Doc()
{
  static const char *docstring[] = {
    "vtkShaderProgram\n\n",
    "Superclass: vtkObject\n\n",
    "vtkShaderProgram is a superclass for managing Hardware Shaders\ndefined in the XML Material file and interfacing VTK to those\nshaders. It's concrete descendants are responsible for installing\nvertex and fragment programs to the graphics hardware.\n\nShader Operations are shader library operations that are performed:\n\non individual shaders, that is, without consideration of the partner\nshader.\n\nProgra",
    "m Operations are shader library operations that treat the:\n\nvertex and fragment shader as a single unit.\n\nDesign:\n\nThis class is a Strategy pattern for 'Program' operations, which\ntreat vertex/fragment shader pairs as a single 'Program', as required\nby some shader libraries (GLSL). Typically, 'Shader' operations are\ndelegated to instances of vtkShader (managed by descendants of this\nclass) while '",
    "Program' operations are handled by descendants of this\nclass, vtkCgShaderProgram, vtkGLSLShaderProgram.\n\nSee Also:\n\nvtkCgShaderProgram, vtkGLSLShaderProgram\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShaderProgram(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShaderProgramNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShaderProgram", o) != 0)
    {
    Py_DECREF(o);
    }

}

