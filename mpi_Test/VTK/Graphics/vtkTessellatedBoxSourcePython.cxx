// python wrapper for vtkTessellatedBoxSource
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
#include "vtkTessellatedBoxSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTessellatedBoxSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTessellatedBoxSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTessellatedBoxSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTessellatedBoxSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTessellatedBoxSource_Doc();


static PyObject *
PyvtkTessellatedBoxSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

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
      tempr = op->vtkTessellatedBoxSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

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
      tempr = op->vtkTessellatedBoxSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  vtkTessellatedBoxSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTessellatedBoxSource::NewInstance();
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
PyvtkTessellatedBoxSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTessellatedBoxSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTessellatedBoxSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkTessellatedBoxSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTessellatedBoxSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkTessellatedBoxSource::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTessellatedBoxSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkTessellatedBoxSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkTessellatedBoxSource_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkTessellatedBoxSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkTessellatedBoxSource::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevel(temp0);
      }
    else
      {
      op->vtkTessellatedBoxSource::SetLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkTessellatedBoxSource::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetDuplicateSharedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateSharedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDuplicateSharedPoints(temp0);
      }
    else
      {
      op->vtkTessellatedBoxSource::SetDuplicateSharedPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetDuplicateSharedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateSharedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDuplicateSharedPoints();
      }
    else
      {
      tempr = op->vtkTessellatedBoxSource::GetDuplicateSharedPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_DuplicateSharedPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateSharedPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateSharedPointsOn();
      }
    else
      {
      op->vtkTessellatedBoxSource::DuplicateSharedPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_DuplicateSharedPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateSharedPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateSharedPointsOff();
      }
    else
      {
      op->vtkTessellatedBoxSource::DuplicateSharedPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_SetQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuads(temp0);
      }
    else
      {
      op->vtkTessellatedBoxSource::SetQuads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_GetQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuads();
      }
    else
      {
      tempr = op->vtkTessellatedBoxSource::GetQuads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_QuadsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuadsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->QuadsOn();
      }
    else
      {
      op->vtkTessellatedBoxSource::QuadsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatedBoxSource_QuadsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuadsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatedBoxSource *op = static_cast<vtkTessellatedBoxSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->QuadsOff();
      }
    else
      {
      op->vtkTessellatedBoxSource::QuadsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTessellatedBoxSource_Methods[] = {
  {(char*)"GetClassName", PyvtkTessellatedBoxSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTessellatedBoxSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTessellatedBoxSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTessellatedBoxSource\nC++: vtkTessellatedBoxSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTessellatedBoxSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTessellatedBoxSource\nC++: vtkTessellatedBoxSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBounds", PyvtkTessellatedBoxSource_SetBounds, 1,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkTessellatedBoxSource_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"SetLevel", PyvtkTessellatedBoxSource_SetLevel, 1,
   (char*)"V.SetLevel(int)\nC++: void SetLevel(int a)\n\nSet the level of subdivision of the faces.\n\\pre positive_level: level>=0\n"},
  {(char*)"GetLevel", PyvtkTessellatedBoxSource_GetLevel, 1,
   (char*)"V.GetLevel() -> int\nC++: int GetLevel()\n\nLevel of subdivision of the faces. Initial value is 0.\n\\post positive_level: level>=0\n"},
  {(char*)"SetDuplicateSharedPoints", PyvtkTessellatedBoxSource_SetDuplicateSharedPoints, 1,
   (char*)"V.SetDuplicateSharedPoints(int)\nC++: void SetDuplicateSharedPoints(int a)\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {(char*)"GetDuplicateSharedPoints", PyvtkTessellatedBoxSource_GetDuplicateSharedPoints, 1,
   (char*)"V.GetDuplicateSharedPoints() -> int\nC++: int GetDuplicateSharedPoints()\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {(char*)"DuplicateSharedPointsOn", PyvtkTessellatedBoxSource_DuplicateSharedPointsOn, 1,
   (char*)"V.DuplicateSharedPointsOn()\nC++: void DuplicateSharedPointsOn()\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {(char*)"DuplicateSharedPointsOff", PyvtkTessellatedBoxSource_DuplicateSharedPointsOff, 1,
   (char*)"V.DuplicateSharedPointsOff()\nC++: void DuplicateSharedPointsOff()\n\nFlag to tell the source to duplicate points shared between faces\n(vertices of the box and internal edge points). Initial value is\nfalse. Implementation note: duplicating points is an easier\nmethod to implement than a minimal number of points.\n"},
  {(char*)"SetQuads", PyvtkTessellatedBoxSource_SetQuads, 1,
   (char*)"V.SetQuads(int)\nC++: void SetQuads(int a)\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {(char*)"GetQuads", PyvtkTessellatedBoxSource_GetQuads, 1,
   (char*)"V.GetQuads() -> int\nC++: int GetQuads()\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {(char*)"QuadsOn", PyvtkTessellatedBoxSource_QuadsOn, 1,
   (char*)"V.QuadsOn()\nC++: void QuadsOn()\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {(char*)"QuadsOff", PyvtkTessellatedBoxSource_QuadsOff, 1,
   (char*)"V.QuadsOff()\nC++: void QuadsOff()\n\nFlag to tell the source to generate either a quad or two triangle\nfor a set of four points. Initial value is false (generate\ntriangles).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTessellatedBoxSource_StaticNew()
{
  return vtkTessellatedBoxSource::New();
}

PyObject *PyVTKClass_vtkTessellatedBoxSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTessellatedBoxSource_StaticNew,
    PyvtkTessellatedBoxSource_Methods,
    "vtkTessellatedBoxSource", modulename,
    NULL, NULL,
    PyvtkTessellatedBoxSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTessellatedBoxSource_Doc()
{
  static const char *docstring[] = {
    "vtkTessellatedBoxSource - Create a polygonal representation of a box\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTessellatedBoxSource creates a axis-aligned box defined by its\nbounds and a level of subdivision. Connectivity is strong: points of\nthe vertices and inside the edges are shared between faces. In other\nwords, faces are connected. Each face looks like a grid of quads,\neach quad is composed of 2 triangles. Given a level of subdivision `l', each edge has\n`l'+2 points, `l' of them are internal edge ",
    "points, the 2 other ones\nare the vertices. Each face has a total of (`l'+2)*(`l'+2) points, 4\nof them are vertices, 4*`l' are internal edge points, it remains\n`l'^2 internal face points.\n\nThis source only generate geometry, no DataArrays like normals or\ntexture coordinates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTessellatedBoxSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTessellatedBoxSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTessellatedBoxSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

