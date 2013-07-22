// python wrapper for vtkPolyDataStreamer
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
#include "vtkPolyDataStreamer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataStreamer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataStreamer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataStreamerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataStreamerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPolyDataStreamer_Doc();


static PyObject *
PyvtkPolyDataStreamer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

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
      tempr = op->vtkPolyDataStreamer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

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
      tempr = op->vtkPolyDataStreamer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  vtkPolyDataStreamer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataStreamer::NewInstance();
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
PyvtkPolyDataStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataStreamer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_SetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfStreamDivisions(temp0);
      }
    else
      {
      op->vtkPolyDataStreamer::SetNumberOfStreamDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_GetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfStreamDivisions();
      }
    else
      {
      tempr = op->vtkPolyDataStreamer::GetNumberOfStreamDivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_SetColorByPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorByPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorByPiece(temp0);
      }
    else
      {
      op->vtkPolyDataStreamer::SetColorByPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_GetColorByPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorByPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorByPiece();
      }
    else
      {
      tempr = op->vtkPolyDataStreamer::GetColorByPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_ColorByPieceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByPieceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorByPieceOn();
      }
    else
      {
      op->vtkPolyDataStreamer::ColorByPieceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_ColorByPieceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByPieceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorByPieceOff();
      }
    else
      {
      op->vtkPolyDataStreamer::ColorByPieceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataStreamer_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataStreamer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataStreamer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataStreamer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataStreamer\nC++: vtkPolyDataStreamer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataStreamer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataStreamer\nC++: vtkPolyDataStreamer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfStreamDivisions", PyvtkPolyDataStreamer_SetNumberOfStreamDivisions, 1,
   (char*)"V.SetNumberOfStreamDivisions(int)\nC++: void SetNumberOfStreamDivisions(int num)\n\nSet the number of pieces to divide the problem into.\n"},
  {(char*)"GetNumberOfStreamDivisions", PyvtkPolyDataStreamer_GetNumberOfStreamDivisions, 1,
   (char*)"V.GetNumberOfStreamDivisions() -> int\nC++: int GetNumberOfStreamDivisions()\n\nSet the number of pieces to divide the problem into.\n"},
  {(char*)"SetColorByPiece", PyvtkPolyDataStreamer_SetColorByPiece, 1,
   (char*)"V.SetColorByPiece(int)\nC++: void SetColorByPiece(int a)\n\nBy default, this option is off.  When it is on, cell scalars are\ngenerated based on which piece they are in.\n"},
  {(char*)"GetColorByPiece", PyvtkPolyDataStreamer_GetColorByPiece, 1,
   (char*)"V.GetColorByPiece() -> int\nC++: int GetColorByPiece()\n\nBy default, this option is off.  When it is on, cell scalars are\ngenerated based on which piece they are in.\n"},
  {(char*)"ColorByPieceOn", PyvtkPolyDataStreamer_ColorByPieceOn, 1,
   (char*)"V.ColorByPieceOn()\nC++: void ColorByPieceOn()\n\nBy default, this option is off.  When it is on, cell scalars are\ngenerated based on which piece they are in.\n"},
  {(char*)"ColorByPieceOff", PyvtkPolyDataStreamer_ColorByPieceOff, 1,
   (char*)"V.ColorByPieceOff()\nC++: void ColorByPieceOff()\n\nBy default, this option is off.  When it is on, cell scalars are\ngenerated based on which piece they are in.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataStreamer_StaticNew()
{
  return vtkPolyDataStreamer::New();
}

PyObject *PyVTKClass_vtkPolyDataStreamerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataStreamer_StaticNew,
    PyvtkPolyDataStreamer_Methods,
    "vtkPolyDataStreamer", modulename,
    NULL, NULL,
    PyvtkPolyDataStreamer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataStreamer_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataStreamer - Stream appends input pieces to the output.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPolyDataStreamer initiates streaming by requesting pieces from its\nsingle input it appends these pieces it to the requested output. Note\nthat since vtkPolyDataStreamer uses an append filter, all the\npolygons generated have to be kept in memory before rendering. If\nthese do not fit in the memory, it is possible to make the\nvtkPolyDataMapper stream. Since the mapper will render each piece\nseparat",
    "ely, all the polygons do not have to stored in memory.\n\nNote:\n\nThe output may be slightly different if the pipeline does not handle\nghost cells properly (i.e. you might see seames between the pieces).\n\nSee Also:\n\nvtkAppendFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataStreamer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataStreamerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataStreamer", o) != 0)
    {
    Py_DECREF(o);
    }

}

