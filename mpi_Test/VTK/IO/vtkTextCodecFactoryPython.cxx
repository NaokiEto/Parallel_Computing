// python wrapper for vtkTextCodecFactory
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
#include "vtkTextCodecFactory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTextCodecFactory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTextCodecFactory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextCodecFactoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextCodecFactoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTextCodecFactory_Doc();


static PyObject *
PyvtkTextCodecFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodecFactory *op = static_cast<vtkTextCodecFactory *>(vp);

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
      tempr = op->vtkTextCodecFactory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodecFactory *op = static_cast<vtkTextCodecFactory *>(vp);

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
      tempr = op->vtkTextCodecFactory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodecFactory *op = static_cast<vtkTextCodecFactory *>(vp);

  vtkTextCodecFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTextCodecFactory::NewInstance();
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
PyvtkTextCodecFactory_UnRegisterAllCreateCallbacks(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterAllCreateCallbacks");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTextCodecFactory::UnRegisterAllCreateCallbacks();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_CodecForName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CodecForName");

  char *temp0 = NULL;
  vtkTextCodec *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTextCodecFactory::CodecForName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_Initialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTextCodecFactory::Initialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextCodecFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkTextCodecFactory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextCodecFactory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextCodecFactory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTextCodecFactory\nC++: vtkTextCodecFactory *NewInstance()\n\n"},
  {(char*)"UnRegisterAllCreateCallbacks", PyvtkTextCodecFactory_UnRegisterAllCreateCallbacks, 1,
   (char*)"V.UnRegisterAllCreateCallbacks()\nC++: static void UnRegisterAllCreateCallbacks()\n\nProvides mechanism to register/unregister additional callbacks to\ncreate concrete subclasses of vtkTextCodecFactory to handle\ndifferent protocols. The registered callbacks are tried in the\norder they are registered.\n"},
  {(char*)"CodecForName", PyvtkTextCodecFactory_CodecForName, 1,
   (char*)"V.CodecForName(string) -> vtkTextCodec\nC++: static vtkTextCodec *CodecForName(const char *CodecName)\n\nGiven a codec/storage name try to find one of our registered\ncodecs that can handle it.  This is non-deterministic, very messy\nand should not be your first thing to try. The registered\ncallbacks are tried in the order they are registered.\n"},
  {(char*)"Initialize", PyvtkTextCodecFactory_Initialize, 1,
   (char*)"V.Initialize()\nC++: static void Initialize()\n\nInitialize core text codecs - needed for the static compilation\ncase.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextCodecFactory_StaticNew()
{
  return vtkTextCodecFactory::New();
}

PyObject *PyVTKClass_vtkTextCodecFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextCodecFactory_StaticNew,
    PyvtkTextCodecFactory_Methods,
    "vtkTextCodecFactory", modulename,
    NULL, NULL,
    PyvtkTextCodecFactory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTextCodecFactory_Doc()
{
  static const char *docstring[] = {
    "vtkTextCodecFactory - maintain a list of text codecs and return\ninstances\n\n",
    "Superclass: vtkObject\n\n",
    "A single class to hold registered codecs and return instances of them\nbased on either a decriptive name (UTF16 or latin-1) or by asking who\ncan handle a given vtkstd::vector<unsigned char>\n\nThanks:\n\nThanks to Tim Shed from Sandia National Laboratories for his work on\nthe concepts and to Marcus Hanwell and Jeff Baumes of Kitware for\nkeeping me out of the weeds\n\nSee Also:\n\nvtkTextCodec\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextCodecFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextCodecFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextCodecFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

