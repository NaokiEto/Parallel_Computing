// python wrapper for vtkVectorText
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
#include "vtkVectorText.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVectorText(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVectorText(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVectorTextNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVectorTextNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVectorText_Doc();


static PyObject *
PyvtkVectorText_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

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
      tempr = op->vtkVectorText::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorText_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

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
      tempr = op->vtkVectorText::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorText_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  vtkVectorText *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVectorText::NewInstance();
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
PyvtkVectorText_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVectorText *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVectorText::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorText_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0);
      }
    else
      {
      op->vtkVectorText::SetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVectorText_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetText();
      }
    else
      {
      tempr = op->vtkVectorText::GetText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVectorText_Methods[] = {
  {(char*)"GetClassName", PyvtkVectorText_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVectorText_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVectorText_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVectorText\nC++: vtkVectorText *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVectorText_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVectorText\nC++: vtkVectorText *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetText", PyvtkVectorText_SetText, 1,
   (char*)"V.SetText(string)\nC++: void SetText(char *)\n\nSet/Get the text to be drawn.\n"},
  {(char*)"GetText", PyvtkVectorText_GetText, 1,
   (char*)"V.GetText() -> string\nC++: char *GetText()\n\nSet/Get the text to be drawn.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVectorText_StaticNew()
{
  return vtkVectorText::New();
}

PyObject *PyVTKClass_vtkVectorTextNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVectorText_StaticNew,
    PyvtkVectorText_Methods,
    "vtkVectorText", modulename,
    NULL, NULL,
    PyvtkVectorText_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVectorText_Doc()
{
  static const char *docstring[] = {
    "vtkVectorText - create polygonal text\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "See Also:\n\nvtkTextMapper vtkCaptionActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVectorText(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVectorTextNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVectorText", o) != 0)
    {
    Py_DECREF(o);
    }

}

