// python wrapper for vtkImageReader2Factory
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
#include "vtkImageReader2Factory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageReader2Factory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageReader2Factory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageReader2FactoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageReader2FactoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageReader2Factory_Doc();


static PyObject *
PyvtkImageReader2Factory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

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
      tempr = op->vtkImageReader2Factory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

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
      tempr = op->vtkImageReader2Factory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

  vtkImageReader2Factory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageReader2Factory::NewInstance();
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
PyvtkImageReader2Factory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageReader2Factory *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageReader2Factory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_RegisterReader(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterReader");

  vtkImageReader2 *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2"))
    {
    vtkImageReader2Factory::RegisterReader(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_CreateImageReader2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateImageReader2");

  char *temp0 = NULL;
  vtkImageReader2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkImageReader2Factory::CreateImageReader2(temp0);

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
PyvtkImageReader2Factory_GetRegisteredReaders(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRegisteredReaders");

  vtkImageReader2Collection *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2Collection"))
    {
    vtkImageReader2Factory::GetRegisteredReaders(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageReader2Factory_Methods[] = {
  {(char*)"GetClassName", PyvtkImageReader2Factory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageReader2Factory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageReader2Factory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageReader2Factory\nC++: vtkImageReader2Factory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageReader2Factory_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageReader2Factory\nC++: vtkImageReader2Factory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RegisterReader", PyvtkImageReader2Factory_RegisterReader, 1,
   (char*)"V.RegisterReader(vtkImageReader2)\nC++: static void RegisterReader(vtkImageReader2 *r)\n\n"},
  {(char*)"CreateImageReader2", PyvtkImageReader2Factory_CreateImageReader2, 1,
   (char*)"V.CreateImageReader2(string) -> vtkImageReader2\nC++: static vtkImageReader2 *CreateImageReader2(const char *path)\n\n"},
  {(char*)"GetRegisteredReaders", PyvtkImageReader2Factory_GetRegisteredReaders, 1,
   (char*)"V.GetRegisteredReaders(vtkImageReader2Collection)\nC++: static void GetRegisteredReaders(vtkImageReader2Collection *)\n\nThe caller must allocate the vtkImageReader2Collection and pass\nin the pointer to this method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageReader2Factory_StaticNew()
{
  return vtkImageReader2Factory::New();
}

PyObject *PyVTKClass_vtkImageReader2FactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageReader2Factory_StaticNew,
    PyvtkImageReader2Factory_Methods,
    "vtkImageReader2Factory", modulename,
    NULL, NULL,
    PyvtkImageReader2Factory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImageReader2Factory_Doc()
{
  static const char *docstring[] = {
    "vtkImageReader2Factory - Superclass of binary file readers.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageReader2Factory: This class is used to create a\nvtkImageReader2 object given a path name to a file.  It calls\nCanReadFile on all available readers until one of them returns true. \nThe available reader list comes from three places.  In the\nInitializeReaders function of this class, built-in VTK classes are\nadded to the list, users can call RegisterReader, or users can create\na vtkObjectFactor",
    "y that has CreateObject method that returns a new\nvtkImageReader2 sub class when given the string\n\"vtkImageReaderObject\".  This way applications can be extended with\nnew readers via a plugin dll or by calling RegisterReader. Of course\nall of the readers that are part of the vtk release are made\nautomatically available.\n\nSee Also:\n\nvtkImageReader2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageReader2Factory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageReader2FactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageReader2Factory", o) != 0)
    {
    Py_DECREF(o);
    }

}

