// python wrapper for vtkBYUWriter
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
#include "vtkBYUWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBYUWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBYUWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBYUWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBYUWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkBYUWriter_Doc();


static PyObject *
PyvtkBYUWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

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
      tempr = op->vtkBYUWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

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
      tempr = op->vtkBYUWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  vtkBYUWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBYUWriter::NewInstance();
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
PyvtkBYUWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBYUWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBYUWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeometryFileName(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetGeometryFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometryFileName();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetGeometryFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementFileName(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetDisplacementFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplacementFileName();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetDisplacementFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarFileName(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetScalarFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarFileName();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetScalarFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureFileName(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetTextureFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureFileName();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetTextureFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteDisplacement(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetWriteDisplacement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteDisplacement();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetWriteDisplacement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteDisplacementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDisplacementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteDisplacementOn();
      }
    else
      {
      op->vtkBYUWriter::WriteDisplacementOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteDisplacementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDisplacementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteDisplacementOff();
      }
    else
      {
      op->vtkBYUWriter::WriteDisplacementOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteScalar(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetWriteScalar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteScalar();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetWriteScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteScalarOn();
      }
    else
      {
      op->vtkBYUWriter::WriteScalarOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteScalarOff();
      }
    else
      {
      op->vtkBYUWriter::WriteScalarOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_SetWriteTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteTexture(temp0);
      }
    else
      {
      op->vtkBYUWriter::SetWriteTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_GetWriteTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteTexture();
      }
    else
      {
      tempr = op->vtkBYUWriter::GetWriteTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteTextureOn();
      }
    else
      {
      op->vtkBYUWriter::WriteTextureOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUWriter_WriteTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUWriter *op = static_cast<vtkBYUWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteTextureOff();
      }
    else
      {
      op->vtkBYUWriter::WriteTextureOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBYUWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkBYUWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBYUWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBYUWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBYUWriter\nC++: vtkBYUWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBYUWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBYUWriter\nC++: vtkBYUWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometryFileName", PyvtkBYUWriter_SetGeometryFileName, 1,
   (char*)"V.SetGeometryFileName(string)\nC++: void SetGeometryFileName(char *)\n\nSpecify the name of the geometry file to write.\n"},
  {(char*)"GetGeometryFileName", PyvtkBYUWriter_GetGeometryFileName, 1,
   (char*)"V.GetGeometryFileName() -> string\nC++: char *GetGeometryFileName()\n\nSpecify the name of the geometry file to write.\n"},
  {(char*)"SetDisplacementFileName", PyvtkBYUWriter_SetDisplacementFileName, 1,
   (char*)"V.SetDisplacementFileName(string)\nC++: void SetDisplacementFileName(char *)\n\nSpecify the name of the displacement file to write.\n"},
  {(char*)"GetDisplacementFileName", PyvtkBYUWriter_GetDisplacementFileName, 1,
   (char*)"V.GetDisplacementFileName() -> string\nC++: char *GetDisplacementFileName()\n\nSpecify the name of the displacement file to write.\n"},
  {(char*)"SetScalarFileName", PyvtkBYUWriter_SetScalarFileName, 1,
   (char*)"V.SetScalarFileName(string)\nC++: void SetScalarFileName(char *)\n\nSpecify the name of the scalar file to write.\n"},
  {(char*)"GetScalarFileName", PyvtkBYUWriter_GetScalarFileName, 1,
   (char*)"V.GetScalarFileName() -> string\nC++: char *GetScalarFileName()\n\nSpecify the name of the scalar file to write.\n"},
  {(char*)"SetTextureFileName", PyvtkBYUWriter_SetTextureFileName, 1,
   (char*)"V.SetTextureFileName(string)\nC++: void SetTextureFileName(char *)\n\nSpecify the name of the texture file to write.\n"},
  {(char*)"GetTextureFileName", PyvtkBYUWriter_GetTextureFileName, 1,
   (char*)"V.GetTextureFileName() -> string\nC++: char *GetTextureFileName()\n\nSpecify the name of the texture file to write.\n"},
  {(char*)"SetWriteDisplacement", PyvtkBYUWriter_SetWriteDisplacement, 1,
   (char*)"V.SetWriteDisplacement(int)\nC++: void SetWriteDisplacement(int a)\n\nTurn on/off writing the displacement file.\n"},
  {(char*)"GetWriteDisplacement", PyvtkBYUWriter_GetWriteDisplacement, 1,
   (char*)"V.GetWriteDisplacement() -> int\nC++: int GetWriteDisplacement()\n\nTurn on/off writing the displacement file.\n"},
  {(char*)"WriteDisplacementOn", PyvtkBYUWriter_WriteDisplacementOn, 1,
   (char*)"V.WriteDisplacementOn()\nC++: void WriteDisplacementOn()\n\nTurn on/off writing the displacement file.\n"},
  {(char*)"WriteDisplacementOff", PyvtkBYUWriter_WriteDisplacementOff, 1,
   (char*)"V.WriteDisplacementOff()\nC++: void WriteDisplacementOff()\n\nTurn on/off writing the displacement file.\n"},
  {(char*)"SetWriteScalar", PyvtkBYUWriter_SetWriteScalar, 1,
   (char*)"V.SetWriteScalar(int)\nC++: void SetWriteScalar(int a)\n\nTurn on/off writing the scalar file.\n"},
  {(char*)"GetWriteScalar", PyvtkBYUWriter_GetWriteScalar, 1,
   (char*)"V.GetWriteScalar() -> int\nC++: int GetWriteScalar()\n\nTurn on/off writing the scalar file.\n"},
  {(char*)"WriteScalarOn", PyvtkBYUWriter_WriteScalarOn, 1,
   (char*)"V.WriteScalarOn()\nC++: void WriteScalarOn()\n\nTurn on/off writing the scalar file.\n"},
  {(char*)"WriteScalarOff", PyvtkBYUWriter_WriteScalarOff, 1,
   (char*)"V.WriteScalarOff()\nC++: void WriteScalarOff()\n\nTurn on/off writing the scalar file.\n"},
  {(char*)"SetWriteTexture", PyvtkBYUWriter_SetWriteTexture, 1,
   (char*)"V.SetWriteTexture(int)\nC++: void SetWriteTexture(int a)\n\nTurn on/off writing the texture file.\n"},
  {(char*)"GetWriteTexture", PyvtkBYUWriter_GetWriteTexture, 1,
   (char*)"V.GetWriteTexture() -> int\nC++: int GetWriteTexture()\n\nTurn on/off writing the texture file.\n"},
  {(char*)"WriteTextureOn", PyvtkBYUWriter_WriteTextureOn, 1,
   (char*)"V.WriteTextureOn()\nC++: void WriteTextureOn()\n\nTurn on/off writing the texture file.\n"},
  {(char*)"WriteTextureOff", PyvtkBYUWriter_WriteTextureOff, 1,
   (char*)"V.WriteTextureOff()\nC++: void WriteTextureOff()\n\nTurn on/off writing the texture file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBYUWriter_StaticNew()
{
  return vtkBYUWriter::New();
}

PyObject *PyVTKClass_vtkBYUWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBYUWriter_StaticNew,
    PyvtkBYUWriter_Methods,
    "vtkBYUWriter", modulename,
    NULL, NULL,
    PyvtkBYUWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkBYUWriter_Doc()
{
  static const char *docstring[] = {
    "vtkBYUWriter - write MOVIE.BYU files\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "vtkBYUWriter writes MOVIE.BYU polygonal files. These files consist of\na geometry file (.g), a scalar file (.s), a displacement or vector\nfile (.d), and a 2D texture coordinate file (.t). These files must be\nspecified to the object, the appropriate boolean variables must be\ntrue, and data must be available from the input for the files to be\nwritten. WARNING: this writer does not currently write tri",
    "angle\nstrips. Use vtkTriangleFilter to convert strips to triangles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBYUWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBYUWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBYUWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

