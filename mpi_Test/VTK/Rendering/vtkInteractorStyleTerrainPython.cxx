// python wrapper for vtkInteractorStyleTerrain
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
#include "vtkInteractorStyleTerrain.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleTerrain(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleTerrain(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleTerrainNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTerrainNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleTerrain_Doc();


static PyObject *
PyvtkInteractorStyleTerrain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

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
      tempr = op->vtkInteractorStyleTerrain::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

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
      tempr = op->vtkInteractorStyleTerrain::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  vtkInteractorStyleTerrain *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleTerrain::NewInstance();
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
PyvtkInteractorStyleTerrain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleTerrain *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleTerrain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleTerrain::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rotate();
      }
    else
      {
      op->vtkInteractorStyleTerrain::Rotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkInteractorStyleTerrain::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkInteractorStyleTerrain::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_SetLatLongLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatLongLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLatLongLines(temp0);
      }
    else
      {
      op->vtkInteractorStyleTerrain::SetLatLongLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_GetLatLongLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatLongLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatLongLines();
      }
    else
      {
      tempr = op->vtkInteractorStyleTerrain::GetLatLongLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_LatLongLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LatLongLinesOn();
      }
    else
      {
      op->vtkInteractorStyleTerrain::LatLongLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_LatLongLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LatLongLinesOff();
      }
    else
      {
      op->vtkInteractorStyleTerrain::LatLongLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTerrain_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleTerrain_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleTerrain_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleTerrain_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleTerrain\nC++: vtkInteractorStyleTerrain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleTerrain_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleTerrain\nC++: vtkInteractorStyleTerrain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleTerrain_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleTerrain_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleTerrain_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleTerrain_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleTerrain_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleTerrain_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleTerrain_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnChar", PyvtkInteractorStyleTerrain_OnChar, 1,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {(char*)"Rotate", PyvtkInteractorStyleTerrain_Rotate, 1,
   (char*)"V.Rotate()\nC++: virtual void Rotate()\n\n"},
  {(char*)"Pan", PyvtkInteractorStyleTerrain_Pan, 1,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"Dolly", PyvtkInteractorStyleTerrain_Dolly, 1,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\n"},
  {(char*)"SetLatLongLines", PyvtkInteractorStyleTerrain_SetLatLongLines, 1,
   (char*)"V.SetLatLongLines(int)\nC++: void SetLatLongLines(int a)\n\nTurn on/off the latitude/longitude lines.\n"},
  {(char*)"GetLatLongLines", PyvtkInteractorStyleTerrain_GetLatLongLines, 1,
   (char*)"V.GetLatLongLines() -> int\nC++: int GetLatLongLines()\n\nTurn on/off the latitude/longitude lines.\n"},
  {(char*)"LatLongLinesOn", PyvtkInteractorStyleTerrain_LatLongLinesOn, 1,
   (char*)"V.LatLongLinesOn()\nC++: void LatLongLinesOn()\n\nTurn on/off the latitude/longitude lines.\n"},
  {(char*)"LatLongLinesOff", PyvtkInteractorStyleTerrain_LatLongLinesOff, 1,
   (char*)"V.LatLongLinesOff()\nC++: void LatLongLinesOff()\n\nTurn on/off the latitude/longitude lines.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleTerrain_StaticNew()
{
  return vtkInteractorStyleTerrain::New();
}

PyObject *PyVTKClass_vtkInteractorStyleTerrainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleTerrain_StaticNew,
    PyvtkInteractorStyleTerrain_Methods,
    "vtkInteractorStyleTerrain", modulename,
    NULL, NULL,
    PyvtkInteractorStyleTerrain_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleTerrain_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleTerrain - manipulate camera in scene with natural\nview up (e.g., terrain)\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "vtkInteractorStyleTerrain is used to manipulate a camera which is\nviewing a scene with a natural view up, e.g., terrain. The camera in\nsuch a scene is manipulated by specifying azimuth (angle around the\nview up vector) and elevation (the angle from the horizon).\n\nThe mouse binding for this class is as follows. Left mouse click\nfollowed rotates the camera around the focal point using both\nelevation",
    " and azimuth invocations on the camera. Left mouse motion in\nthe horizontal direction results in azimuth motion; left mouse motion\nin the vertical direction results in elevation motion. Therefore,\ndiagonal motion results in a combination of azimuth and elevation.\n(If the shift key is held during motion, then only one of elevation\nor azimuth is invoked, depending on the whether the mouse motion is\n",
    "primarily horizontal or vertical.) Middle mouse button pans the\ncamera across the scene (again the shift key has a similar effect on\nlimiting the motion to the vertical or horizontal direction. The\nright mouse is used to dolly (e.g., a type of zoom) towards or away\nfrom the focal point.\n\nThe class also supports some keypress events. The \"r\" key resets the\ncamera.  The \"e\" key invokes the exit call",
    "back and by default exits\nthe program. The \"f\" key sets a new camera focal point and flys\ntowards that point. The \"u\" key invokes the user event. The \"3\" key\ntoggles between stereo and non-stero mode. The \"l\" key toggles on/off\na latitude/longitude markers that can be used to estimate/control\nposition.\n\nSee Also:\n\nvtkInteractorObserver vtkInteractorStyle vtk3DWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleTerrain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleTerrainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleTerrain", o) != 0)
    {
    Py_DECREF(o);
    }

}

