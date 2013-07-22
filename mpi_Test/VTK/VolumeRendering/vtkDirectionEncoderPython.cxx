// python wrapper for vtkDirectionEncoder
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
#include "vtkDirectionEncoder.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDirectionEncoder(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDirectionEncoder(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDirectionEncoderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDirectionEncoderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDirectionEncoder_Doc();


static PyObject *
PyvtkDirectionEncoder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

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
      tempr = op->vtkDirectionEncoder::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

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
      tempr = op->vtkDirectionEncoder::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  vtkDirectionEncoder *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDirectionEncoder::NewInstance();
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
PyvtkDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    tempr = op->GetEncodedDirection(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  int temp0;
  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetDecodedGradient(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectionEncoder *op = static_cast<vtkDirectionEncoder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfEncodedDirections();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDirectionEncoder_Methods[] = {
  {(char*)"GetClassName", PyvtkDirectionEncoder_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nGet the name of this class\n"},
  {(char*)"IsA", PyvtkDirectionEncoder_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nGet the name of this class\n"},
  {(char*)"NewInstance", PyvtkDirectionEncoder_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDirectionEncoder\nC++: vtkDirectionEncoder *NewInstance()\n\nGet the name of this class\n"},
  {(char*)"GetEncodedDirection", PyvtkDirectionEncoder_GetEncodedDirection, 1,
   (char*)"V.GetEncodedDirection([float, float, float]) -> int\nC++: virtual int GetEncodedDirection(float n[3])\n\nGiven a normal vector n, return the encoded direction\n"},
  {(char*)"GetDecodedGradient", PyvtkDirectionEncoder_GetDecodedGradient, 1,
   (char*)"V.GetDecodedGradient(int) -> (float, float, float)\nC++: virtual float *GetDecodedGradient(int value)\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {(char*)"GetNumberOfEncodedDirections", PyvtkDirectionEncoder_GetNumberOfEncodedDirections, 1,
   (char*)"V.GetNumberOfEncodedDirections() -> int\nC++: virtual int GetNumberOfEncodedDirections(void)\n\nReturn the number of encoded directions\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDirectionEncoderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDirectionEncoder_Methods,
    "vtkDirectionEncoder", modulename,
    NULL, NULL,
    PyvtkDirectionEncoder_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDirectionEncoder_Doc()
{
  static const char *docstring[] = {
    "vtkDirectionEncoder - encode a direction into a one or two byte value\n\n",
    "Superclass: vtkObject\n\n",
    "Given a direction, encode it into an integer value. This value should\nbe less than 65536, which is the maximum number of encoded directions\nsupported by this superclass. A direction encoded is used to encode\nnormals in a volume for use during volume rendering, and the amount\nof space that is allocated per normal is 2 bytes. This is an abstract\nsuperclass - see the subclasses for specific implement",
    "ation details.\n\nSee Also:\n\nvtkRecursiveSphereDirectionEncoder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDirectionEncoder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDirectionEncoderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDirectionEncoder", o) != 0)
    {
    Py_DECREF(o);
    }

}

