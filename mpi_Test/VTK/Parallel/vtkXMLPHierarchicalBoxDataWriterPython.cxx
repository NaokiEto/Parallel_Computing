// python wrapper for vtkXMLPHierarchicalBoxDataWriter
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
#include "vtkXMLPHierarchicalBoxDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPHierarchicalBoxDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPHierarchicalBoxDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew
#endif

static const char **PyvtkXMLPHierarchicalBoxDataWriter_Doc();


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

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
      tempr = op->vtkXMLPHierarchicalBoxDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

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
      tempr = op->vtkXMLPHierarchicalBoxDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  vtkXMLPHierarchicalBoxDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPHierarchicalBoxDataWriter::NewInstance();
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
PyvtkXMLPHierarchicalBoxDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPHierarchicalBoxDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPHierarchicalBoxDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkXMLPHierarchicalBoxDataWriter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkXMLPHierarchicalBoxDataWriter::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPHierarchicalBoxDataWriter_SetWriteMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPHierarchicalBoxDataWriter *op = static_cast<vtkXMLPHierarchicalBoxDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteMetaFile(temp0);
      }
    else
      {
      op->vtkXMLPHierarchicalBoxDataWriter::SetWriteMetaFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPHierarchicalBoxDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPHierarchicalBoxDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPHierarchicalBoxDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPHierarchicalBoxDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPHierarchicalBoxDataWriter\nC++: vtkXMLPHierarchicalBoxDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPHierarchicalBoxDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPHierarchicalBoxDataWriter\nC++: vtkXMLPHierarchicalBoxDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkXMLPHierarchicalBoxDataWriter_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {(char*)"GetController", PyvtkXMLPHierarchicalBoxDataWriter_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {(char*)"SetWriteMetaFile", PyvtkXMLPHierarchicalBoxDataWriter_SetWriteMetaFile, 1,
   (char*)"V.SetWriteMetaFile(int)\nC++: virtual void SetWriteMetaFile(int flag)\n\nSet whether this instance will write the meta-file. WriteMetaFile\nis set to flag only on process 0 and all other processes have\nWriteMetaFile set to 0 by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPHierarchicalBoxDataWriter_StaticNew()
{
  return vtkXMLPHierarchicalBoxDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPHierarchicalBoxDataWriter_StaticNew,
    PyvtkXMLPHierarchicalBoxDataWriter_Methods,
    "vtkXMLPHierarchicalBoxDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPHierarchicalBoxDataWriter_Doc(),
    PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPHierarchicalBoxDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPHierarchicalBoxDataWriter - parallel writer for\n\n",
    "Superclass: vtkXMLHierarchicalBoxDataWriter\n\n",
    "vtkXMLPCompositeDataWriter writes (in parallel or serially) the VTK\nXML multi-group, multi-block hierarchical and hierarchical box files.\nXML multi-group data files are meta-files that point to a list of\nserial VTK XML files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPHierarchicalBoxDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPHierarchicalBoxDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPHierarchicalBoxDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

