// python wrapper for vtkRenderPassCollection
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
#include "vtkRenderPassCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderPassCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderPassCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderPassCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderPassCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkRenderPassCollection_Doc();


static PyObject *
PyvtkRenderPassCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

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
      tempr = op->vtkRenderPassCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

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
      tempr = op->vtkRenderPassCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  vtkRenderPassCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderPassCollection::NewInstance();
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
PyvtkRenderPassCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderPassCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderPassCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkRenderPassCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_GetNextRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextRenderPass();
      }
    else
      {
      tempr = op->vtkRenderPassCollection::GetNextRenderPass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_GetLastRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  vtkRenderPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastRenderPass();
      }
    else
      {
      tempr = op->vtkRenderPassCollection::GetLastRenderPass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderPassCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderPassCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderPassCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderPassCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderPassCollection\nC++: vtkRenderPassCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderPassCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderPassCollection\nC++: vtkRenderPassCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkRenderPassCollection_AddItem, 1,
   (char*)"V.AddItem(vtkRenderPass)\nC++: void AddItem(vtkRenderPass *pass)\n\nAdd an RenderPass to the list.\n"},
  {(char*)"GetNextRenderPass", PyvtkRenderPassCollection_GetNextRenderPass, 1,
   (char*)"V.GetNextRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetNextRenderPass()\n\nGet the next RenderPass in the list.\n"},
  {(char*)"GetLastRenderPass", PyvtkRenderPassCollection_GetLastRenderPass, 1,
   (char*)"V.GetLastRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetLastRenderPass()\n\nGet the last RenderPass in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderPassCollection_StaticNew()
{
  return vtkRenderPassCollection::New();
}

PyObject *PyVTKClass_vtkRenderPassCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderPassCollection_StaticNew,
    PyvtkRenderPassCollection_Methods,
    "vtkRenderPassCollection", modulename,
    NULL, NULL,
    PyvtkRenderPassCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkRenderPassCollection_Doc()
{
  static const char *docstring[] = {
    "vtkRenderPassCollection - a list of RenderPasses\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkRenderPassCollection represents a list of RenderPasses (i.e.,\nvtkRenderPass and subclasses) and provides methods to manipulate the\nlist. The list is unsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkRenderPass vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderPassCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderPassCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderPassCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

