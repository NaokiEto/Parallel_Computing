// python wrapper for vtkCGMWriter
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
#include "vtkCGMWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCGMWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCGMWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCGMWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCGMWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkCGMWriter_Doc();


static PyObject *
PyvtkCGMWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

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
      tempr = op->vtkCGMWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

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
      tempr = op->vtkCGMWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  vtkCGMWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCGMWriter::NewInstance();
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
PyvtkCGMWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCGMWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCGMWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkCGMWriter::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  vtkViewport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewport();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSort(temp0);
      }
    else
      {
      op->vtkCGMWriter::SetSort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_GetSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSort();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetSort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkCGMWriter::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolutionMinValue();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolution();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkCGMWriter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMode();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToDefault();
      }
    else
      {
      op->vtkCGMWriter::SetColorModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetColorModeToSpecifiedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToSpecifiedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToSpecifiedColor();
      }
    else
      {
      op->vtkCGMWriter::SetColorModeToSpecifiedColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetColorModeToRandomColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToRandomColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToRandomColors();
      }
    else
      {
      op->vtkCGMWriter::SetColorModeToRandomColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCGMWriter_SetSpecifiedColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecifiedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSpecifiedColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCGMWriter::SetSpecifiedColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCGMWriter_SetSpecifiedColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecifiedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpecifiedColor(temp0);
      }
    else
      {
      op->vtkCGMWriter::SetSpecifiedColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCGMWriter_SetSpecifiedColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCGMWriter_SetSpecifiedColor_s1(self, args);
    case 1:
      return PyvtkCGMWriter_SetSpecifiedColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecifiedColor");
  return NULL;
}



static PyObject *
PyvtkCGMWriter_GetSpecifiedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecifiedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGMWriter *op = static_cast<vtkCGMWriter *>(vp);

  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpecifiedColor();
      }
    else
      {
      tempr = op->vtkCGMWriter::GetSpecifiedColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkCGMWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkCGMWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCGMWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCGMWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCGMWriter\nC++: vtkCGMWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCGMWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCGMWriter\nC++: vtkCGMWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetViewport", PyvtkCGMWriter_SetViewport, 1,
   (char*)"V.SetViewport(vtkViewport)\nC++: virtual void SetViewport(vtkViewport *)\n\nSpecify a vtkViewport object to be used to transform the\nvtkPolyData points into 2D coordinates. By default (no\nvtkViewport specified), the point coordinates are generated by\nignoring the z values. If a viewport is defined, then the points\nare transformed into viewport coordinates.\n"},
  {(char*)"GetViewport", PyvtkCGMWriter_GetViewport, 1,
   (char*)"V.GetViewport() -> vtkViewport\nC++: vtkViewport *GetViewport()\n\nSpecify a vtkViewport object to be used to transform the\nvtkPolyData points into 2D coordinates. By default (no\nvtkViewport specified), the point coordinates are generated by\nignoring the z values. If a viewport is defined, then the points\nare transformed into viewport coordinates.\n"},
  {(char*)"SetSort", PyvtkCGMWriter_SetSort, 1,
   (char*)"V.SetSort(int)\nC++: void SetSort(int a)\n\nTurn on/off the sorting of the cells via depth. If enabled,\npolygonal cells will be sorted from back to front, i.e., a\nPainter's algorithm sort.\n"},
  {(char*)"GetSort", PyvtkCGMWriter_GetSort, 1,
   (char*)"V.GetSort() -> int\nC++: int GetSort()\n\nTurn on/off the sorting of the cells via depth. If enabled,\npolygonal cells will be sorted from back to front, i.e., a\nPainter's algorithm sort.\n"},
  {(char*)"SetResolution", PyvtkCGMWriter_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nSpecify the resolution of the CGM file. This number is used to\nintegerize the maximum coordinate range of the plot file.\n"},
  {(char*)"GetResolutionMinValue", PyvtkCGMWriter_GetResolutionMinValue, 1,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nSpecify the resolution of the CGM file. This number is used to\nintegerize the maximum coordinate range of the plot file.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkCGMWriter_GetResolutionMaxValue, 1,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nSpecify the resolution of the CGM file. This number is used to\nintegerize the maximum coordinate range of the plot file.\n"},
  {(char*)"GetResolution", PyvtkCGMWriter_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSpecify the resolution of the CGM file. This number is used to\nintegerize the maximum coordinate range of the plot file.\n"},
  {(char*)"SetColorMode", PyvtkCGMWriter_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nControl how output polydata is colored. By default\n(ColorModeToDefault), if per cell colors are defined (unsigned\nchars of 1-4 components), then the cells are colored with these\nvalues. (If point colors are defined and cell colors are not, you\ncan use vtkPointDataToCellData to convert the point colors to\ncell colors.) Otherwise, by default, the cells are set to the\nspecified color. If ColorModeToSpecifiedColor is set, then the\nprimitives will all be set to this color. If\nColorModeToRandomColors is set, each cell will be randomly\nassigned a color.\n"},
  {(char*)"GetColorMode", PyvtkCGMWriter_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nControl how output polydata is colored. By default\n(ColorModeToDefault), if per cell colors are defined (unsigned\nchars of 1-4 components), then the cells are colored with these\nvalues. (If point colors are defined and cell colors are not, you\ncan use vtkPointDataToCellData to convert the point colors to\ncell colors.) Otherwise, by default, the cells are set to the\nspecified color. If ColorModeToSpecifiedColor is set, then the\nprimitives will all be set to this color. If\nColorModeToRandomColors is set, each cell will be randomly\nassigned a color.\n"},
  {(char*)"SetColorModeToDefault", PyvtkCGMWriter_SetColorModeToDefault, 1,
   (char*)"V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\nControl how output polydata is colored. By default\n(ColorModeToDefault), if per cell colors are defined (unsigned\nchars of 1-4 components), then the cells are colored with these\nvalues. (If point colors are defined and cell colors are not, you\ncan use vtkPointDataToCellData to convert the point colors to\ncell colors.) Otherwise, by default, the cells are set to the\nspecified color. If ColorModeToSpecifiedColor is set, then the\nprimitives will all be set to this color. If\nColorModeToRandomColors is set, each cell will be randomly\nassigned a color.\n"},
  {(char*)"SetColorModeToSpecifiedColor", PyvtkCGMWriter_SetColorModeToSpecifiedColor, 1,
   (char*)"V.SetColorModeToSpecifiedColor()\nC++: void SetColorModeToSpecifiedColor()\n\nControl how output polydata is colored. By default\n(ColorModeToDefault), if per cell colors are defined (unsigned\nchars of 1-4 components), then the cells are colored with these\nvalues. (If point colors are defined and cell colors are not, you\ncan use vtkPointDataToCellData to convert the point colors to\ncell colors.) Otherwise, by default, the cells are set to the\nspecified color. If ColorModeToSpecifiedColor is set, then the\nprimitives will all be set to this color. If\nColorModeToRandomColors is set, each cell will be randomly\nassigned a color.\n"},
  {(char*)"SetColorModeToRandomColors", PyvtkCGMWriter_SetColorModeToRandomColors, 1,
   (char*)"V.SetColorModeToRandomColors()\nC++: void SetColorModeToRandomColors()\n\nControl how output polydata is colored. By default\n(ColorModeToDefault), if per cell colors are defined (unsigned\nchars of 1-4 components), then the cells are colored with these\nvalues. (If point colors are defined and cell colors are not, you\ncan use vtkPointDataToCellData to convert the point colors to\ncell colors.) Otherwise, by default, the cells are set to the\nspecified color. If ColorModeToSpecifiedColor is set, then the\nprimitives will all be set to this color. If\nColorModeToRandomColors is set, each cell will be randomly\nassigned a color.\n"},
  {(char*)"SetSpecifiedColor", PyvtkCGMWriter_SetSpecifiedColor, 1,
   (char*)"V.SetSpecifiedColor(float, float, float)\nC++: void SetSpecifiedColor(float, float, float)\nV.SetSpecifiedColor((float, float, float))\nC++: void SetSpecifiedColor(float a[3])\n\n"},
  {(char*)"GetSpecifiedColor", PyvtkCGMWriter_GetSpecifiedColor, 1,
   (char*)"V.GetSpecifiedColor() -> (float, float, float)\nC++: float *GetSpecifiedColor()\n\nSet/Get the specified color to color the polydata cells. This\ncolor is only used when the color mode is set to\nColorModeToSpecifiedColor, or ColorModeToDefault is set and no\ncell colors are specified. The specified color is specified as\nRGB values ranging from (0,1). (Note: CGM will map this color to\nthe closest color it supports.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCGMWriter_StaticNew()
{
  return vtkCGMWriter::New();
}

PyObject *PyVTKClass_vtkCGMWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCGMWriter_StaticNew,
    PyvtkCGMWriter_Methods,
    "vtkCGMWriter", modulename,
    NULL, NULL,
    PyvtkCGMWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkCGMWriter_Doc()
{
  static const char *docstring[] = {
    "vtkCGMWriter - write polygonal data as a CGM file\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "vtkCGMWriter writes CGM (Computer Graphics Metafile) output. CGM is a\n2D graphics vector format typically used by large plotters. This\nwriter can handle vertices, lines, polygons, and triangle strips in\nany combination. Colors are specified either 1) from cell scalars\n(assumed to be RGB or RGBA color specification), 2) from a specified\ncolor; or 3) randomly assigned colors.\n\nNote: During output of",
    " the polygonal data, triangle strips are\nconverted to triangles, and polylines to lines. Also, due to\nlimitations in the CGM color model, only 256 colors are available to\nthe color palette.\n\nCaveats:\n\nThe class vtkImageToPolyDataFilter is convenient for converting a\nraster image into polygons (and color map) suitable for plotting with\nCGM.\n\nSee Also:\n\nvtkPolyDataWriter vtkPointDataToCellData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCGMWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCGMWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCGMWriter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_SPECIFIED_COLOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_COLOR_MODE_RANDOM_COLORS", o) != 0)
    {
    Py_DECREF(o);
    }

}

