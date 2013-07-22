// python wrapper for vtkLogoRepresentation
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
#include "vtkLogoRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLogoRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLogoRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLogoRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLogoRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBorderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderRepresentationNew
#endif

static const char **PyvtkLogoRepresentation_Doc();


static PyObject *
PyvtkLogoRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

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
      tempr = op->vtkLogoRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

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
      tempr = op->vtkLogoRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkLogoRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLogoRepresentation::NewInstance();
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
PyvtkLogoRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLogoRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLogoRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImage();
      }
    else
      {
      tempr = op->vtkLogoRepresentation::GetImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_SetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetImageProperty(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::SetImageProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_GetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageProperty();
      }
    else
      {
      tempr = op->vtkLogoRepresentation::GetImageProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkLogoRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkLogoRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

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
      op->vtkLogoRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLogoRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogoRepresentation *op = static_cast<vtkLogoRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkLogoRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLogoRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkLogoRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class methods.\n"},
  {(char*)"IsA", PyvtkLogoRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkLogoRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLogoRepresentation\nC++: vtkLogoRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkLogoRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLogoRepresentation\nC++: vtkLogoRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK class methods.\n"},
  {(char*)"SetImage", PyvtkLogoRepresentation_SetImage, 1,
   (char*)"V.SetImage(vtkImageData)\nC++: virtual void SetImage(vtkImageData *img)\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {(char*)"GetImage", PyvtkLogoRepresentation_GetImage, 1,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {(char*)"SetImageProperty", PyvtkLogoRepresentation_SetImageProperty, 1,
   (char*)"V.SetImageProperty(vtkProperty2D)\nC++: virtual void SetImageProperty(vtkProperty2D *p)\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {(char*)"GetImageProperty", PyvtkLogoRepresentation_GetImageProperty, 1,
   (char*)"V.GetImageProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetImageProperty()\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {(char*)"BuildRepresentation", PyvtkLogoRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSatisfy the superclasses' API.\n"},
  {(char*)"GetActors2D", PyvtkLogoRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *pc)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLogoRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkLogoRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLogoRepresentation_StaticNew()
{
  return vtkLogoRepresentation::New();
}

PyObject *PyVTKClass_vtkLogoRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLogoRepresentation_StaticNew,
    PyvtkLogoRepresentation_Methods,
    "vtkLogoRepresentation", modulename,
    NULL, NULL,
    PyvtkLogoRepresentation_Doc(),
    PyVTKClass_vtkBorderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkLogoRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkLogoRepresentation - represent the vtkLogoWidget\n\n",
    "Superclass: vtkBorderRepresentation\n\n",
    "See Also:\n\nvtkLogoWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLogoRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLogoRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLogoRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

