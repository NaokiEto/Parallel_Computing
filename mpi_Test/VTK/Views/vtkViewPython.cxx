// python wrapper for vtkView
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
#include "vtkView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkView_Doc();


static PyObject *
PyvtkView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

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
      tempr = op->vtkView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

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
      tempr = op->vtkView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkView::NewInstance();
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
PyvtkView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->AddRepresentation(temp0);
      }
    else
      {
      op->vtkView::AddRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkView_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkView::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkView_AddRepresentationFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentationFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddRepresentationFromInputConnection(temp0);
      }
    else
      {
      tempr = op->vtkView::AddRepresentationFromInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_SetRepresentationFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetRepresentationFromInputConnection(temp0);
      }
    else
      {
      tempr = op->vtkView::SetRepresentationFromInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_AddRepresentationFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentationFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataObject *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddRepresentationFromInput(temp0);
      }
    else
      {
      tempr = op->vtkView::AddRepresentationFromInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_SetRepresentationFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataObject *temp0 = NULL;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetRepresentationFromInput(temp0);
      }
    else
      {
      tempr = op->vtkView::SetRepresentationFromInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_RemoveRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->RemoveRepresentation(temp0);
      }
    else
      {
      op->vtkView::RemoveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkView_RemoveRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveRepresentation(temp0);
      }
    else
      {
      op->vtkView::RemoveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkView_RemoveRepresentation_Methods[] = {
  {NULL, PyvtkView_RemoveRepresentation_s1, 1,
   (char*)"@O *vtkDataRepresentation"},
  {NULL, PyvtkView_RemoveRepresentation_s2, 1,
   (char*)"@O *vtkAlgorithmOutput"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkView_RemoveRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkView_RemoveRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveRepresentation");
  return NULL;
}



static PyObject *
PyvtkView_RemoveAllRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRepresentations();
      }
    else
      {
      op->vtkView::RemoveAllRepresentations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkView_GetNumberOfRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRepresentations();
      }
    else
      {
      tempr = op->vtkView::GetNumberOfRepresentations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  int temp0 = 0;
  vtkDataRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentation(temp0);
      }
    else
      {
      tempr = op->vtkView::GetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_IsRepresentationPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRepresentationPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkDataRepresentation *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsRepresentationPresent(temp0);
      }
    else
      {
      tempr = op->vtkView::IsRepresentationPresent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkView_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkViewTheme *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
    {
    if (ap.IsBound())
      {
      op->ApplyViewTheme(temp0);
      }
    else
      {
      op->vtkView::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkView_GetObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkCommand *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObserver();
      }
    else
      {
      tempr = op->vtkView::GetObserver();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkView_RegisterProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkObject *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->RegisterProgress(temp0, temp1);
      }
    else
      {
      op->vtkView::RegisterProgress(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkView_UnRegisterProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkView *op = static_cast<vtkView *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterProgress(temp0);
      }
    else
      {
      op->vtkView::UnRegisterProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkView_Methods[] = {
  {(char*)"GetClassName", PyvtkView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkView\nC++: vtkView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkView\nC++: vtkView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddRepresentation", PyvtkView_AddRepresentation, 1,
   (char*)"V.AddRepresentation(vtkDataRepresentation)\nC++: void AddRepresentation(vtkDataRepresentation *rep)\n\nAdds the representation to the view.\n"},
  {(char*)"SetRepresentation", PyvtkView_SetRepresentation, 1,
   (char*)"V.SetRepresentation(vtkDataRepresentation)\nC++: void SetRepresentation(vtkDataRepresentation *rep)\n\nSet the representation to the view.\n"},
  {(char*)"AddRepresentationFromInputConnection", PyvtkView_AddRepresentationFromInputConnection, 1,
   (char*)"V.AddRepresentationFromInputConnection(vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *AddRepresentationFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nConvenience method which creates a simple representation with the\nconnection and adds it to the view. Returns the representation\ninternally created. NOTE: The returned representation pointer is\nnot reference-counted, so you MUST call Register() on the\nrepresentation if you want to keep a reference to it.\n"},
  {(char*)"SetRepresentationFromInputConnection", PyvtkView_SetRepresentationFromInputConnection, 1,
   (char*)"V.SetRepresentationFromInputConnection(vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetRepresentationFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nConvenience method which sets the representation with the\nconnection and adds it to the view. Returns the representation\ninternally created. NOTE: The returned representation pointer is\nnot reference-counted, so you MUST call Register() on the\nrepresentation if you want to keep a reference to it.\n"},
  {(char*)"AddRepresentationFromInput", PyvtkView_AddRepresentationFromInput, 1,
   (char*)"V.AddRepresentationFromInput(vtkDataObject)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *AddRepresentationFromInput(\n    vtkDataObject *input)\n\nConvenience method which creates a simple representation with the\nspecified input and adds it to the view. NOTE: The returned\nrepresentation pointer is not reference-counted, so you MUST call\nRegister() on the representation if you want to keep a reference\nto it.\n"},
  {(char*)"SetRepresentationFromInput", PyvtkView_SetRepresentationFromInput, 1,
   (char*)"V.SetRepresentationFromInput(vtkDataObject)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetRepresentationFromInput(\n    vtkDataObject *input)\n\nConvenience method which sets the representation to the specified\ninput and adds it to the view. NOTE: The returned representation\npointer is not reference-counted, so you MUST call Register() on\nthe representation if you want to keep a reference to it.\n"},
  {(char*)"RemoveRepresentation", PyvtkView_RemoveRepresentation, 1,
   (char*)"V.RemoveRepresentation(vtkDataRepresentation)\nC++: void RemoveRepresentation(vtkDataRepresentation *rep)\nV.RemoveRepresentation(vtkAlgorithmOutput)\nC++: void RemoveRepresentation(vtkAlgorithmOutput *rep)\n\nRemoves the representation from the view.\n"},
  {(char*)"RemoveAllRepresentations", PyvtkView_RemoveAllRepresentations, 1,
   (char*)"V.RemoveAllRepresentations()\nC++: void RemoveAllRepresentations()\n\nRemoves all representations from the view.\n"},
  {(char*)"GetNumberOfRepresentations", PyvtkView_GetNumberOfRepresentations, 1,
   (char*)"V.GetNumberOfRepresentations() -> int\nC++: int GetNumberOfRepresentations()\n\nReturns the number of representations from first port(0) in this\nview.\n"},
  {(char*)"GetRepresentation", PyvtkView_GetRepresentation, 1,
   (char*)"V.GetRepresentation(int) -> vtkDataRepresentation\nC++: vtkDataRepresentation *GetRepresentation(int index=0)\n\nThe representation at a specified index.\n"},
  {(char*)"IsRepresentationPresent", PyvtkView_IsRepresentationPresent, 1,
   (char*)"V.IsRepresentationPresent(vtkDataRepresentation) -> bool\nC++: bool IsRepresentationPresent(vtkDataRepresentation *rep)\n\nCheck to see if a representation is present in the view.\n"},
  {(char*)"Update", PyvtkView_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the view.\n"},
  {(char*)"ApplyViewTheme", PyvtkView_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply a theme to the view.\n"},
  {(char*)"GetObserver", PyvtkView_GetObserver, 1,
   (char*)"V.GetObserver() -> vtkCommand\nC++: vtkCommand *GetObserver()\n\nReturns the observer that the subclasses can use to listen to\nadditional events. Additionally these subclasses should override\nProcessEvents() to handle these events.\n"},
  {(char*)"RegisterProgress", PyvtkView_RegisterProgress, 1,
   (char*)"V.RegisterProgress(vtkObject, string)\nC++: void RegisterProgress(vtkObject *algorithm,\n    const char *message=NULL)\n\nMeant for use by subclasses and vtkRepresentation subclasses.\nCall this method to register vtkObjects (generally vtkAlgorithm\nsubclasses) which fire vtkCommand::ProgressEvent with the view.\nThe view listens to vtkCommand::ProgressEvent and fires\nViewProgressEvent with ViewProgressEventCallData containing the\nmessage and the progress amount. If message is not provided, then\nthe class name for the algorithm is used.\n"},
  {(char*)"UnRegisterProgress", PyvtkView_UnRegisterProgress, 1,
   (char*)"V.UnRegisterProgress(vtkObject)\nC++: void UnRegisterProgress(vtkObject *algorithm)\n\nUnregister objects previously registered with RegisterProgress.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkView_StaticNew()
{
  return vtkView::New();
}

PyObject *PyVTKClass_vtkViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkView_StaticNew,
    PyvtkView_Methods,
    "vtkView", modulename,
    NULL, NULL,
    PyvtkView_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkView_Doc()
{
  static const char *docstring[] = {
    "vtkView - The superclass for all views.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkView is the superclass for views.  A view is generally an area of\nan application's canvas devoted to displaying one or more VTK data\nobjects. Associated representations (subclasses of\nvtkDataRepresentation) are responsible for converting the data into a\ndisplayable format.  These representations are then added to the\nview.\n\nFor views which display only one data object at a time you may set a\nda",
    "ta object or pipeline connection directly on the view itself (e.g.\nvtkGraphLayoutView, vtkLandscapeView, vtkTreeMapView). The view will\ninternally create a vtkDataRepresentation for the data.\n\nA view has the concept of linked selection.  If the same data is\ndisplayed in multiple views, their selections may be linked by\nsetting the same vtkAnnotationLink on their representations (see\nvtkDataReprese",
    "ntation).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkView", o) != 0)
    {
    Py_DECREF(o);
    }

}

