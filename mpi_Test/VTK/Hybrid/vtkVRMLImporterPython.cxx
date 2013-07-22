// python wrapper for vtkVRMLImporter
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
#include "vtkVRMLImporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVRMLImporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVRMLImporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVRMLImporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVRMLImporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImporterNew
extern "C" { PyObject *PyVTKClass_vtkImporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImporterNew
#endif

static const char **PyvtkVRMLImporter_Doc();


static PyObject *
PyvtkVRMLImporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

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
      tempr = op->vtkVRMLImporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

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
      tempr = op->vtkVRMLImporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  vtkVRMLImporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVRMLImporter::NewInstance();
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
PyvtkVRMLImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVRMLImporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVRMLImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetVRMLDEFObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVRMLDEFObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  vtkObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVRMLDEFObject(temp0);
      }
    else
      {
      tempr = op->vtkVRMLImporter::GetVRMLDEFObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_enterNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "enterNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->enterNode(temp0);
      }
    else
      {
      op->vtkVRMLImporter::enterNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_exitNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "exitNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->exitNode();
      }
    else
      {
      op->vtkVRMLImporter::exitNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_enterField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "enterField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->enterField(temp0);
      }
    else
      {
      op->vtkVRMLImporter::enterField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_exitField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "exitField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->exitField();
      }
    else
      {
      op->vtkVRMLImporter::exitField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_useNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "useNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->useNode(temp0);
      }
    else
      {
      op->vtkVRMLImporter::useNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

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
      op->vtkVRMLImporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLImporter *op = static_cast<vtkVRMLImporter *>(vp);

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
      tempr = op->vtkVRMLImporter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVRMLImporter_Methods[] = {
  {(char*)"GetClassName", PyvtkVRMLImporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVRMLImporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVRMLImporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVRMLImporter\nC++: vtkVRMLImporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVRMLImporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVRMLImporter\nC++: vtkVRMLImporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVRMLDEFObject", PyvtkVRMLImporter_GetVRMLDEFObject, 1,
   (char*)"V.GetVRMLDEFObject(string) -> vtkObject\nC++: vtkObject *GetVRMLDEFObject(const char *name)\n\nIn the VRML spec you can DEF and USE nodes (name them), This\nroutine will return the associated VTK object which was created\nas a result of the DEF mechanism Send in the name from the VRML\nfile, get the VTK object. You will have to check and correctly\ncast the object since this only returns vtkObjects.\n"},
  {(char*)"enterNode", PyvtkVRMLImporter_enterNode, 1,
   (char*)"V.enterNode(string)\nC++: void enterNode(const char *)\n\nNeeded by the yacc/lex grammar used\n"},
  {(char*)"exitNode", PyvtkVRMLImporter_exitNode, 1,
   (char*)"V.exitNode()\nC++: void exitNode()\n\nNeeded by the yacc/lex grammar used\n"},
  {(char*)"enterField", PyvtkVRMLImporter_enterField, 1,
   (char*)"V.enterField(string)\nC++: void enterField(const char *)\n\nNeeded by the yacc/lex grammar used\n"},
  {(char*)"exitField", PyvtkVRMLImporter_exitField, 1,
   (char*)"V.exitField()\nC++: void exitField()\n\nNeeded by the yacc/lex grammar used\n"},
  {(char*)"useNode", PyvtkVRMLImporter_useNode, 1,
   (char*)"V.useNode(string)\nC++: void useNode(const char *)\n\nNeeded by the yacc/lex grammar used\n"},
  {(char*)"SetFileName", PyvtkVRMLImporter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the file to read.\n"},
  {(char*)"GetFileName", PyvtkVRMLImporter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the file to read.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVRMLImporter_StaticNew()
{
  return vtkVRMLImporter::New();
}

PyObject *PyVTKClass_vtkVRMLImporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVRMLImporter_StaticNew,
    PyvtkVRMLImporter_Methods,
    "vtkVRMLImporter", modulename,
    NULL, NULL,
    PyvtkVRMLImporter_Doc(),
    PyVTKClass_vtkImporterNew(modulename));
  return cls;
}

const char **PyvtkVRMLImporter_Doc()
{
  static const char *docstring[] = {
    "vtkVRMLImporter - imports VRML 2.0 files.\n\n",
    "Superclass: vtkImporter\n\n",
    "vtkVRMLImporter imports VRML 2.0 files into vtk.\n\nCaveats:\n\nThese nodes are currently supported:\n     Appearance                              IndexedFaceSet\n     Box                                     IndexedLineSet\n     Color                                   Material\n     Cone                                    Shape\n     Coordinate                              Sphere\n     Cylinder             ",
    "                   Transform\n     DirectionalLight\n\nAs you can see this implementation focuses on getting the geometry\ntranslated.  The routes and scripting nodes are ignored since they\ndeal with directly accessing a nodes internal structure based on the\nVRML spec. Since this is a translation the internal data structures\ndiffer greatly from the VRML spec and the External Authoring\nInterface (see t",
    "he VRML spec). The DEF/USE mechanism does allow the\nVtk user to extract objects from the scene and directly manipulate\nthem using the native language (Tcl, Python, Java, or whatever\nlanguage Vtk is wrapped in). This, in a way, removes the need for the\nroute and script mechanism (not completely though).\n\nThanks:\n\n\n Thanks to Russ Coucher of Areva for numerous bug fixes and a new\ntest.\n\nSee Also:\n\nv",
    "tkImporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVRMLImporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVRMLImporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVRMLImporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

