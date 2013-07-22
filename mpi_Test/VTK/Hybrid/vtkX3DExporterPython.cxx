// python wrapper for vtkX3DExporter
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
#include "vtkX3DExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkX3DExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkX3DExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkX3DExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkX3DExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkX3DExporter_Doc();


static PyObject *
PyvtkX3DExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

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
      tempr = op->vtkX3DExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

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
      tempr = op->vtkX3DExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  vtkX3DExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkX3DExporter::NewInstance();
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
PyvtkX3DExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkX3DExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkX3DExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpeed(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpeed();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetSpeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinary(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetBinary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBinaryMinValue();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetBinaryMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBinaryMaxValue();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetBinaryMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOn();
      }
    else
      {
      op->vtkX3DExporter::BinaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOff();
      }
    else
      {
      op->vtkX3DExporter::BinaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBinary();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFastest(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetFastest(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastestMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFastestMinValue();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetFastestMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastestMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFastestMaxValue();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetFastestMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_FastestOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FastestOn();
      }
    else
      {
      op->vtkX3DExporter::FastestOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_FastestOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FastestOff();
      }
    else
      {
      op->vtkX3DExporter::FastestOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFastest();
      }
    else
      {
      tempr = op->vtkX3DExporter::GetFastest();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkX3DExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkX3DExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkX3DExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkX3DExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkX3DExporter\nC++: vtkX3DExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkX3DExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkX3DExporter\nC++: vtkX3DExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkX3DExporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the output file name.\n"},
  {(char*)"GetFileName", PyvtkX3DExporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the output file name.\n"},
  {(char*)"SetSpeed", PyvtkX3DExporter_SetSpeed, 1,
   (char*)"V.SetSpeed(float)\nC++: void SetSpeed(double a)\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {(char*)"GetSpeed", PyvtkX3DExporter_GetSpeed, 1,
   (char*)"V.GetSpeed() -> float\nC++: double GetSpeed()\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {(char*)"SetBinary", PyvtkX3DExporter_SetBinary, 1,
   (char*)"V.SetBinary(int)\nC++: void SetBinary(int)\n\nTurn on binary mode\n"},
  {(char*)"GetBinaryMinValue", PyvtkX3DExporter_GetBinaryMinValue, 1,
   (char*)"V.GetBinaryMinValue() -> int\nC++: int GetBinaryMinValue()\n\nTurn on binary mode\n"},
  {(char*)"GetBinaryMaxValue", PyvtkX3DExporter_GetBinaryMaxValue, 1,
   (char*)"V.GetBinaryMaxValue() -> int\nC++: int GetBinaryMaxValue()\n\nTurn on binary mode\n"},
  {(char*)"BinaryOn", PyvtkX3DExporter_BinaryOn, 1,
   (char*)"V.BinaryOn()\nC++: void BinaryOn()\n\nTurn on binary mode\n"},
  {(char*)"BinaryOff", PyvtkX3DExporter_BinaryOff, 1,
   (char*)"V.BinaryOff()\nC++: void BinaryOff()\n\nTurn on binary mode\n"},
  {(char*)"GetBinary", PyvtkX3DExporter_GetBinary, 1,
   (char*)"V.GetBinary() -> int\nC++: int GetBinary()\n\nTurn on binary mode\n"},
  {(char*)"SetFastest", PyvtkX3DExporter_SetFastest, 1,
   (char*)"V.SetFastest(int)\nC++: void SetFastest(int)\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"GetFastestMinValue", PyvtkX3DExporter_GetFastestMinValue, 1,
   (char*)"V.GetFastestMinValue() -> int\nC++: int GetFastestMinValue()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"GetFastestMaxValue", PyvtkX3DExporter_GetFastestMaxValue, 1,
   (char*)"V.GetFastestMaxValue() -> int\nC++: int GetFastestMaxValue()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"FastestOn", PyvtkX3DExporter_FastestOn, 1,
   (char*)"V.FastestOn()\nC++: void FastestOn()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"FastestOff", PyvtkX3DExporter_FastestOff, 1,
   (char*)"V.FastestOff()\nC++: void FastestOff()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"GetFastest", PyvtkX3DExporter_GetFastest, 1,
   (char*)"V.GetFastest() -> int\nC++: int GetFastest()\n\nIn binary mode use fastest instead of best compression\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkX3DExporter_StaticNew()
{
  return vtkX3DExporter::New();
}

PyObject *PyVTKClass_vtkX3DExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkX3DExporter_StaticNew,
    PyvtkX3DExporter_Methods,
    "vtkX3DExporter", modulename,
    NULL, NULL,
    PyvtkX3DExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkX3DExporter_Doc()
{
  static const char *docstring[] = {
    "vtkX3DExporter - create an x3d file\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkX3DExporter is a render window exporter which writes out the\nrenderered scene into an X3D file. X3D is an XML-based format for\nrepresentation 3D scenes (similar to VRML). Check out\nhttp://www.web3d.org/x3d/ for more details.\n\nThanks:\n\nX3DExporter is contributed by Christophe Mouton at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkX3DExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkX3DExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkX3DExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

