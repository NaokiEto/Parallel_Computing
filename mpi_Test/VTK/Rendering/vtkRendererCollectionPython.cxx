// python wrapper for vtkRendererCollection
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
#include "vtkRendererCollection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRendererCollection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRendererCollection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRendererCollectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRendererCollectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkRendererCollection_Doc();


static PyObject *
PyvtkRendererCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

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
      tempr = op->vtkRendererCollection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

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
      tempr = op->vtkRendererCollection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  vtkRendererCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRendererCollection::NewInstance();
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
PyvtkRendererCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRendererCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRendererCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkRendererCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextItem();
      }
    else
      {
      tempr = op->vtkRendererCollection::GetNextItem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRendererCollection::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_GetFirstRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFirstRenderer();
      }
    else
      {
      tempr = op->vtkRendererCollection::GetFirstRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRendererCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkRendererCollection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRendererCollection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRendererCollection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRendererCollection\nC++: vtkRendererCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRendererCollection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRendererCollection\nC++: vtkRendererCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkRendererCollection_AddItem, 1,
   (char*)"V.AddItem(vtkRenderer)\nC++: void AddItem(vtkRenderer *a)\n\nAdd a Renderer to the list.\n"},
  {(char*)"GetNextItem", PyvtkRendererCollection_GetNextItem, 1,
   (char*)"V.GetNextItem() -> vtkRenderer\nC++: vtkRenderer *GetNextItem()\n\nGet the next Renderer in the list. Return NULL when at the end of\nthe list.\n"},
  {(char*)"Render", PyvtkRendererCollection_Render, 1,
   (char*)"V.Render()\nC++: void Render()\n\nForward the Render() method to each renderer in the list.\n"},
  {(char*)"GetFirstRenderer", PyvtkRendererCollection_GetFirstRenderer, 1,
   (char*)"V.GetFirstRenderer() -> vtkRenderer\nC++: vtkRenderer *GetFirstRenderer()\n\nGet the first Renderer in the list. Return NULL when at the end\nof the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRendererCollection_StaticNew()
{
  return vtkRendererCollection::New();
}

PyObject *PyVTKClass_vtkRendererCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRendererCollection_StaticNew,
    PyvtkRendererCollection_Methods,
    "vtkRendererCollection", modulename,
    NULL, NULL,
    PyvtkRendererCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkRendererCollection_Doc()
{
  static const char *docstring[] = {
    "vtkRendererCollection - a list of renderers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkRendererCollection represents and provides methods to manipulate a\nlist of renderers (i.e., vtkRenderer and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkRenderer vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRendererCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRendererCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRendererCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

