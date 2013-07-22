// python wrapper for vtkMNIObjectWriter
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
#include "vtkMNIObjectWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMNIObjectWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMNIObjectWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMNIObjectWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMNIObjectWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkMNIObjectWriter_Doc();


static PyObject *
PyvtkMNIObjectWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

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
      tempr = op->vtkMNIObjectWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

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
      tempr = op->vtkMNIObjectWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkMNIObjectWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMNIObjectWriter::NewInstance();
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
PyvtkMNIObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMNIObjectWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMNIObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileExtensions();
      }
    else
      {
      tempr = op->vtkMNIObjectWriter::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescriptiveName();
      }
    else
      {
      tempr = op->vtkMNIObjectWriter::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkMNIObjectWriter::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkMNIObjectWriter::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->SetMapper(temp0);
      }
    else
      {
      op->vtkMNIObjectWriter::SetMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapper();
      }
    else
      {
      tempr = op->vtkMNIObjectWriter::GetMapper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkMNIObjectWriter::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectWriter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectWriter *op = static_cast<vtkMNIObjectWriter *>(vp);

  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkMNIObjectWriter::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMNIObjectWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkMNIObjectWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMNIObjectWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMNIObjectWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMNIObjectWriter\nC++: vtkMNIObjectWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMNIObjectWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMNIObjectWriter\nC++: vtkMNIObjectWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileExtensions", PyvtkMNIObjectWriter_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMNIObjectWriter_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"SetProperty", PyvtkMNIObjectWriter_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty)\nC++: virtual void SetProperty(vtkProperty *property)\n\nSet the property associated with the object.  Optional. This is\nuseful for exporting an actor.\n"},
  {(char*)"GetProperty", PyvtkMNIObjectWriter_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nSet the property associated with the object.  Optional. This is\nuseful for exporting an actor.\n"},
  {(char*)"SetMapper", PyvtkMNIObjectWriter_SetMapper, 1,
   (char*)"V.SetMapper(vtkMapper)\nC++: virtual void SetMapper(vtkMapper *mapper)\n\nSet the mapper associated with the object.  Optional. This is\nuseful for exporting an actor with the same colors that are used\nto display the actor within VTK.\n"},
  {(char*)"GetMapper", PyvtkMNIObjectWriter_GetMapper, 1,
   (char*)"V.GetMapper() -> vtkMapper\nC++: virtual vtkMapper *GetMapper()\n\nSet the mapper associated with the object.  Optional. This is\nuseful for exporting an actor with the same colors that are used\nto display the actor within VTK.\n"},
  {(char*)"SetLookupTable", PyvtkMNIObjectWriter_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkLookupTable)\nC++: virtual void SetLookupTable(vtkLookupTable *table)\n\nSet the lookup table associated with the object.  This will be\nused to convert scalar values to colors, if a mapper is not set.\n"},
  {(char*)"GetLookupTable", PyvtkMNIObjectWriter_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\nSet the lookup table associated with the object.  This will be\nused to convert scalar values to colors, if a mapper is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMNIObjectWriter_StaticNew()
{
  return vtkMNIObjectWriter::New();
}

PyObject *PyVTKClass_vtkMNIObjectWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMNIObjectWriter_StaticNew,
    PyvtkMNIObjectWriter_Methods,
    "vtkMNIObjectWriter", modulename,
    NULL, NULL,
    PyvtkMNIObjectWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkMNIObjectWriter_Doc()
{
  static const char *docstring[] = {
    "vtkMNIObjectWriter - A writer for MNI surface mesh files.\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "The MNI .obj file format is used to store geometrical data.  This\nfile format was developed at the McConnell Brain Imaging Centre at\nthe Montreal Neurological Institute and is used by their software.\nOnly polygon and line files are supported by this writer.  For these\nformats, all data elements are written including normals, colors, and\nsurface properties.  ASCII and binary file types are supporte",
    "d.\n\nSee Also:\n\nvtkMINCImageReader vtkMNIObjectReader vtkMNITransformReader\n\nThanks:\n\nThanks to David Gobbi for writing this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMNIObjectWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMNIObjectWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMNIObjectWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

