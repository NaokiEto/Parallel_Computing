// python wrapper for vtkXMLMaterialParser
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
#include "vtkXMLMaterialParser.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLMaterialParser(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLMaterialParser(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLMaterialParserNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLMaterialParserNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkXMLMaterialParser_Doc();


static PyObject *
PyvtkXMLMaterialParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

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
      tempr = op->vtkXMLMaterialParser::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

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
      tempr = op->vtkXMLMaterialParser::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  vtkXMLMaterialParser *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLMaterialParser::NewInstance();
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
PyvtkXMLMaterialParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLMaterialParser *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLMaterialParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialParser_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  vtkXMLMaterial *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterial();
      }
    else
      {
      tempr = op->vtkXMLMaterialParser::GetMaterial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialParser_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  vtkXMLMaterial *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLMaterial"))
    {
    if (ap.IsBound())
      {
      op->SetMaterial(temp0);
      }
    else
      {
      op->vtkXMLMaterialParser::SetMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMaterialParser_Parse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Parse();
      }
    else
      {
      tempr = op->vtkXMLMaterialParser::Parse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLMaterialParser_Parse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Parse(temp0);
      }
    else
      {
      tempr = op->vtkXMLMaterialParser::Parse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLMaterialParser_Parse_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Parse(temp0, temp1);
      }
    else
      {
      tempr = op->vtkXMLMaterialParser::Parse(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLMaterialParser_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLMaterialParser_Parse_s1(self, args);
    case 1:
      return PyvtkXMLMaterialParser_Parse_s2(self, args);
    case 2:
      return PyvtkXMLMaterialParser_Parse_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return NULL;
}



static PyObject *
PyvtkXMLMaterialParser_InitializeParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMaterialParser *op = static_cast<vtkXMLMaterialParser *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->InitializeParser();
      }
    else
      {
      tempr = op->vtkXMLMaterialParser::InitializeParser();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMaterialParser_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMaterialParser_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMaterialParser_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMaterialParser_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLMaterialParser\nC++: vtkXMLMaterialParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMaterialParser_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMaterialParser\nC++: vtkXMLMaterialParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaterial", PyvtkXMLMaterialParser_GetMaterial, 1,
   (char*)"V.GetMaterial() -> vtkXMLMaterial\nC++: vtkXMLMaterial *GetMaterial()\n\nSet/Get the vtkXMLMaterial representation of the parsed material.\n"},
  {(char*)"SetMaterial", PyvtkXMLMaterialParser_SetMaterial, 1,
   (char*)"V.SetMaterial(vtkXMLMaterial)\nC++: void SetMaterial(vtkXMLMaterial *)\n\nSet/Get the vtkXMLMaterial representation of the parsed material.\n"},
  {(char*)"Parse", PyvtkXMLMaterialParser_Parse, 1,
   (char*)"V.Parse() -> int\nC++: virtual int Parse()\nV.Parse(string) -> int\nC++: virtual int Parse(const char *inputString)\nV.Parse(string, int) -> int\nC++: virtual int Parse(const char *inputString,\n    unsigned int length)\n\nOverridden to initialize the internal structures before the\nparsing begins.\n"},
  {(char*)"InitializeParser", PyvtkXMLMaterialParser_InitializeParser, 1,
   (char*)"V.InitializeParser() -> int\nC++: virtual int InitializeParser()\n\nOverridden to clean up internal structures before the\nchunk-parsing begins.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMaterialParser_StaticNew()
{
  return vtkXMLMaterialParser::New();
}

PyObject *PyVTKClass_vtkXMLMaterialParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMaterialParser_StaticNew,
    PyvtkXMLMaterialParser_Methods,
    "vtkXMLMaterialParser", modulename,
    NULL, NULL,
    PyvtkXMLMaterialParser_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));
  return cls;
}

const char **PyvtkXMLMaterialParser_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMaterialParser - Parses VTK Material file\n\n",
    "Superclass: vtkXMLParser\n\n",
    "vtkXMLMaterialParser parses a VTK Material file and provides that\nfile's description of a number of vertex and fragment shaders along\nwith data values specified for data members of vtkProperty. This\nmaterial is to be applied to an actor through it's vtkProperty and augments\nVTK's concept of a vtkProperty to include explicitly include vertex\nand fragment shaders and parameter settings for those sha",
    "ders. This\neffectively makes reflectance models and other shaders  a material\nproperty. If no shaders are specified VTK should default to standard\nrendering.\n\nDesign:\n\nvtkXMLMaterialParser provides access to 3 distinct types of\nfirst-level vtkXMLDataElements that describe a VTK material. These\nelements are as follows:\n\nvtkProperty - describe values for vtkProperty data members\n\nvtkVertexShader - a",
    " vertex shader and enough information to install\nit into the hardware rendering pipeline including values for specific\nshader parameters and structures.\n\nvtkFragmentShader - a fragment shader and enough information to\ninstall it into the hardware rendering pipeline including values for\nspecific shader parameters and structures.\n\nThe design of the material file closely follows that of vtk's xml\ndes",
    "criptions of it's data sets. This allows use of the very handy\nvtkXMLDataElement which provides easy access to an xml element's\nattribute values. Inlined data is currently not handled.\n\nIdeally this class would be a Facade to a DOM parser, but VTK only\nprovides access to expat, a SAX parser. Other vtk classes that parse\nxml files are tuned to read vtkDataSets and don't provide the\nfunctionality to",
    " handle generic xml data. As such they are of little\nuse here.\n\nThis class may be extended for better data  handling or may become a\nFacade to a DOM parser should on become part of the VTK code base.\n\nThanks:\n\nShader support in VTK includes key contributions by Gary Templet at\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMaterialParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMaterialParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMaterialParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

