// python wrapper for vtkScalarsToColorsPainter
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
#include "vtkScalarsToColorsPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkScalarsToColorsPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkScalarsToColorsPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkScalarsToColorsPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkScalarsToColorsPainter_Doc();


static PyObject *
PyvtkScalarsToColorsPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

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
      tempr = op->vtkScalarsToColorsPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

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
      tempr = op->vtkScalarsToColorsPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  vtkScalarsToColorsPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkScalarsToColorsPainter::NewInstance();
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
PyvtkScalarsToColorsPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkScalarsToColorsPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkScalarsToColorsPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_USE_LOOKUP_TABLE_SCALAR_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "USE_LOOKUP_TABLE_SCALAR_RANGE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::USE_LOOKUP_TABLE_SCALAR_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_SCALAR_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_RANGE");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::SCALAR_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_SCALAR_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_MODE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::SCALAR_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_COLOR_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COLOR_MODE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::COLOR_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_INTERPOLATE_SCALARS_BEFORE_MAPPING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INTERPOLATE_SCALARS_BEFORE_MAPPING");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::INTERPOLATE_SCALARS_BEFORE_MAPPING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_LOOKUP_TABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LOOKUP_TABLE");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::LOOKUP_TABLE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkScalarsToColorsPainter::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkScalarsToColorsPainter::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkScalarsToColorsPainter::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_SCALAR_VISIBILITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_VISIBILITY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::SCALAR_VISIBILITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_ARRAY_ACCESS_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_ACCESS_MODE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::ARRAY_ACCESS_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_ARRAY_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_ID");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::ARRAY_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_NAME");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::ARRAY_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_ARRAY_COMPONENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_COMPONENT");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::ARRAY_COMPONENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_SCALAR_MATERIAL_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_MATERIAL_MODE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkScalarsToColorsPainter::SCALAR_MATERIAL_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_GetPremultiplyColorsWithAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPremultiplyColorsWithAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  vtkActor *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPremultiplyColorsWithAlpha(temp0);
      }
    else
      {
      tempr = op->vtkScalarsToColorsPainter::GetPremultiplyColorsWithAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkScalarsToColorsPainter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsPainter_GetTextureSizeLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureSizeLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsPainter *op = static_cast<vtkScalarsToColorsPainter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureSizeLimit();
      }
    else
      {
      tempr = op->vtkScalarsToColorsPainter::GetTextureSizeLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColorsPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarsToColorsPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarsToColorsPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarsToColorsPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkScalarsToColorsPainter\nC++: vtkScalarsToColorsPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScalarsToColorsPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScalarsToColorsPainter\nC++: vtkScalarsToColorsPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"USE_LOOKUP_TABLE_SCALAR_RANGE", PyvtkScalarsToColorsPainter_USE_LOOKUP_TABLE_SCALAR_RANGE, 1,
   (char*)"V.USE_LOOKUP_TABLE_SCALAR_RANGE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *USE_LOOKUP_TABLE_SCALAR_RANGE(\n    )\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {(char*)"SCALAR_RANGE", PyvtkScalarsToColorsPainter_SCALAR_RANGE, 1,
   (char*)"V.SCALAR_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SCALAR_RANGE()\n\nSpecify range in terms of scalar minimum and maximum (smin,smax).\nThese values are used to map scalars into lookup table. Has no\neffect when UseLookupTableScalarRange is true.\n"},
  {(char*)"SCALAR_MODE", PyvtkScalarsToColorsPainter_SCALAR_MODE, 1,
   (char*)"V.SCALAR_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALAR_MODE()\n\nControl how the painter works with scalar point data and cell\nattribute data. See vtkMapper::ScalarMode for more details.\n"},
  {(char*)"COLOR_MODE", PyvtkScalarsToColorsPainter_COLOR_MODE, 1,
   (char*)"V.COLOR_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COLOR_MODE()\n\nControl how the scalar data is mapped to colors. By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. Setting ColorModeToMapScalars means that all scalar data\nwill be mapped through the lookup table.\n"},
  {(char*)"INTERPOLATE_SCALARS_BEFORE_MAPPING", PyvtkScalarsToColorsPainter_INTERPOLATE_SCALARS_BEFORE_MAPPING, 1,
   (char*)"V.INTERPOLATE_SCALARS_BEFORE_MAPPING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INTERPOLATE_SCALARS_BEFORE_MAPPING(\n    )\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {(char*)"LOOKUP_TABLE", PyvtkScalarsToColorsPainter_LOOKUP_TABLE, 1,
   (char*)"V.LOOKUP_TABLE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *LOOKUP_TABLE()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"SetLookupTable", PyvtkScalarsToColorsPainter_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"GetLookupTable", PyvtkScalarsToColorsPainter_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkScalarsToColorsPainter_CreateDefaultLookupTable, 1,
   (char*)"V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {(char*)"SCALAR_VISIBILITY", PyvtkScalarsToColorsPainter_SCALAR_VISIBILITY, 1,
   (char*)"V.SCALAR_VISIBILITY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALAR_VISIBILITY()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ARRAY_ACCESS_MODE", PyvtkScalarsToColorsPainter_ARRAY_ACCESS_MODE, 1,
   (char*)"V.ARRAY_ACCESS_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ARRAY_ACCESS_MODE()\n\nControls what data array is used to generate colors.\n"},
  {(char*)"ARRAY_ID", PyvtkScalarsToColorsPainter_ARRAY_ID, 1,
   (char*)"V.ARRAY_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ARRAY_ID()\n\nControls what data array is used to generate colors.\n"},
  {(char*)"ARRAY_NAME", PyvtkScalarsToColorsPainter_ARRAY_NAME, 1,
   (char*)"V.ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *ARRAY_NAME()\n\nControls what data array is used to generate colors.\n"},
  {(char*)"ARRAY_COMPONENT", PyvtkScalarsToColorsPainter_ARRAY_COMPONENT, 1,
   (char*)"V.ARRAY_COMPONENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ARRAY_COMPONENT()\n\nControls what data array is used to generate colors.\n"},
  {(char*)"SCALAR_MATERIAL_MODE", PyvtkScalarsToColorsPainter_SCALAR_MATERIAL_MODE, 1,
   (char*)"V.SCALAR_MATERIAL_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALAR_MATERIAL_MODE()\n\nSet the light-model color mode.\n"},
  {(char*)"GetPremultiplyColorsWithAlpha", PyvtkScalarsToColorsPainter_GetPremultiplyColorsWithAlpha, 1,
   (char*)"V.GetPremultiplyColorsWithAlpha(vtkActor) -> int\nC++: virtual int GetPremultiplyColorsWithAlpha(vtkActor *actor)\n\nFor alpha blending, we sometime premultiply the colors with alpha\nand change the alpha blending function. This call returns whether\nwe are premultiplying or using the default blending function.\nCurrently this checks if the actor has a texture, if not it\nreturns true. TODO: It is possible to make this decision\ndependent on key passed down from a painter upstream that makes a\nmore informed decision for alpha blending depending on extensions\navailable, for example.\n"},
  {(char*)"GetOutput", PyvtkScalarsToColorsPainter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: virtual vtkDataObject *GetOutput()\n\nSubclasses need to override this to return the output of the\npipeline.\n"},
  {(char*)"GetTextureSizeLimit", PyvtkScalarsToColorsPainter_GetTextureSizeLimit, 1,
   (char*)"V.GetTextureSizeLimit() -> int\nC++: virtual vtkIdType GetTextureSizeLimit()\n\nReturn the texture size limit. Subclasses need to override this\nto return the actual correct texture size limit.  Here it is\nhardcoded to 1024.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScalarsToColorsPainter_StaticNew()
{
  return vtkScalarsToColorsPainter::New();
}

PyObject *PyVTKClass_vtkScalarsToColorsPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScalarsToColorsPainter_StaticNew,
    PyvtkScalarsToColorsPainter_Methods,
    "vtkScalarsToColorsPainter", modulename,
    NULL, NULL,
    PyvtkScalarsToColorsPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkScalarsToColorsPainter_Doc()
{
  static const char *docstring[] = {
    "vtkScalarsToColorsPainter - painter that converts scalars to \n\n",
    "Superclass: vtkPainter\n\n",
    "This is a painter that converts scalars to colors. It enable/disables\ncoloring state depending on the ScalarMode. This painter is composite\ndataset enabled.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarsToColorsPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarsToColorsPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarsToColorsPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

