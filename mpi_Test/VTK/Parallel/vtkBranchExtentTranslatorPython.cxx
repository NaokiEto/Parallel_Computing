// python wrapper for vtkBranchExtentTranslator
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
#include "vtkBranchExtentTranslator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBranchExtentTranslator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBranchExtentTranslator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBranchExtentTranslatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBranchExtentTranslatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtentTranslatorNew
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtentTranslatorNew
#endif

static const char **PyvtkBranchExtentTranslator_Doc();


static PyObject *
PyvtkBranchExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

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
      tempr = op->vtkBranchExtentTranslator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

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
      tempr = op->vtkBranchExtentTranslator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  vtkBranchExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBranchExtentTranslator::NewInstance();
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
PyvtkBranchExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBranchExtentTranslator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBranchExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_SetOriginalSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetOriginalSource(temp0);
      }
    else
      {
      op->vtkBranchExtentTranslator::SetOriginalSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_GetOriginalSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalSource();
      }
    else
      {
      tempr = op->vtkBranchExtentTranslator::GetOriginalSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->PieceToExtent();
      }
    else
      {
      tempr = op->vtkBranchExtentTranslator::PieceToExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_SetAssignedPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssignedPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAssignedPiece(temp0);
      }
    else
      {
      op->vtkBranchExtentTranslator::SetAssignedPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_GetAssignedPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssignedPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssignedPiece();
      }
    else
      {
      tempr = op->vtkBranchExtentTranslator::GetAssignedPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_SetAssignedNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssignedNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAssignedNumberOfPieces(temp0);
      }
    else
      {
      op->vtkBranchExtentTranslator::SetAssignedNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBranchExtentTranslator_GetAssignedNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssignedNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBranchExtentTranslator *op = static_cast<vtkBranchExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssignedNumberOfPieces();
      }
    else
      {
      tempr = op->vtkBranchExtentTranslator::GetAssignedNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBranchExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkBranchExtentTranslator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBranchExtentTranslator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBranchExtentTranslator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBranchExtentTranslator\nC++: vtkBranchExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBranchExtentTranslator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBranchExtentTranslator\nC++: vtkBranchExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOriginalSource", PyvtkBranchExtentTranslator_SetOriginalSource, 1,
   (char*)"V.SetOriginalSource(vtkImageData)\nC++: virtual void SetOriginalSource(vtkImageData *)\n\nThis is the original upstream image source.\n"},
  {(char*)"GetOriginalSource", PyvtkBranchExtentTranslator_GetOriginalSource, 1,
   (char*)"V.GetOriginalSource() -> vtkImageData\nC++: vtkImageData *GetOriginalSource()\n\nThis is the original upstream image source.\n"},
  {(char*)"PieceToExtent", PyvtkBranchExtentTranslator_PieceToExtent, 1,
   (char*)"V.PieceToExtent() -> int\nC++: int PieceToExtent()\n\nGenerates the extent from the pieces.\n"},
  {(char*)"SetAssignedPiece", PyvtkBranchExtentTranslator_SetAssignedPiece, 1,
   (char*)"V.SetAssignedPiece(int)\nC++: void SetAssignedPiece(int a)\n\nThis unstructured extent/piece is store here for the users\nconvenience. It is not used internally.  The intent was to let an\n\"assignment\" be made when the translator/first source is created.\n The translator/assignment can be used for any new filter that\nuses the original source as output. Branches will then have the\nsame assignment.\n"},
  {(char*)"GetAssignedPiece", PyvtkBranchExtentTranslator_GetAssignedPiece, 1,
   (char*)"V.GetAssignedPiece() -> int\nC++: int GetAssignedPiece()\n\nThis unstructured extent/piece is store here for the users\nconvenience. It is not used internally.  The intent was to let an\n\"assignment\" be made when the translator/first source is created.\n The translator/assignment can be used for any new filter that\nuses the original source as output. Branches will then have the\nsame assignment.\n"},
  {(char*)"SetAssignedNumberOfPieces", PyvtkBranchExtentTranslator_SetAssignedNumberOfPieces, 1,
   (char*)"V.SetAssignedNumberOfPieces(int)\nC++: void SetAssignedNumberOfPieces(int a)\n\nThis unstructured extent/piece is store here for the users\nconvenience. It is not used internally.  The intent was to let an\n\"assignment\" be made when the translator/first source is created.\n The translator/assignment can be used for any new filter that\nuses the original source as output. Branches will then have the\nsame assignment.\n"},
  {(char*)"GetAssignedNumberOfPieces", PyvtkBranchExtentTranslator_GetAssignedNumberOfPieces, 1,
   (char*)"V.GetAssignedNumberOfPieces() -> int\nC++: int GetAssignedNumberOfPieces()\n\nThis unstructured extent/piece is store here for the users\nconvenience. It is not used internally.  The intent was to let an\n\"assignment\" be made when the translator/first source is created.\n The translator/assignment can be used for any new filter that\nuses the original source as output. Branches will then have the\nsame assignment.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBranchExtentTranslator_StaticNew()
{
  return vtkBranchExtentTranslator::New();
}

PyObject *PyVTKClass_vtkBranchExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBranchExtentTranslator_StaticNew,
    PyvtkBranchExtentTranslator_Methods,
    "vtkBranchExtentTranslator", modulename,
    NULL, NULL,
    PyvtkBranchExtentTranslator_Doc(),
    PyVTKClass_vtkExtentTranslatorNew(modulename));
  return cls;
}

const char **PyvtkBranchExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkBranchExtentTranslator - Uses alternative source for whole extent.\n\n",
    "Superclass: vtkExtentTranslator\n\n",
    "vtkBranchExtentTranslator is like extent translator, but it uses an\nalternative source as a whole extent. The whole extent passed is\nassumed to be a subextent of the original source.  we simply take the\nintersection of the split extent and the whole extdent passed in.  We\nare attempting to make branching pipelines request consistent extents\nwith the same piece requests.\n\nCaveats:\n\nThis object is s",
    "till under development.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBranchExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBranchExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBranchExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

