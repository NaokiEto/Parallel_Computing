// python wrapper for vtkRIBExporter
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
#include "vtkRIBExporter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRIBExporter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRIBExporter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRIBExporterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRIBExporterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkRIBExporter_Doc();


static PyObject *
PyvtkRIBExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

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
      tempr = op->vtkRIBExporter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

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
      tempr = op->vtkRIBExporter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  vtkRIBExporter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRIBExporter::NewInstance();
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
PyvtkRIBExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRIBExporter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRIBExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkRIBExporter::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkRIBExporter::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRIBExporter_SetSize_s1(self, args);
    case 1:
      return PyvtkRIBExporter_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkRIBExporter_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetPixelSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPixelSamples(temp0, temp1);
      }
    else
      {
      op->vtkRIBExporter::SetPixelSamples(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetPixelSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPixelSamples(temp0);
      }
    else
      {
      op->vtkRIBExporter::SetPixelSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetPixelSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRIBExporter_SetPixelSamples_s1(self, args);
    case 1:
      return PyvtkRIBExporter_SetPixelSamples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelSamples");
  return NULL;
}



static PyObject *
PyvtkRIBExporter_GetPixelSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelSamples();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetPixelSamples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkRIBExporter::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePrefix();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetFilePrefix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetTexturePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTexturePrefix(temp0);
      }
    else
      {
      op->vtkRIBExporter::SetTexturePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetTexturePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexturePrefix();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetTexturePrefix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackground(temp0);
      }
    else
      {
      op->vtkRIBExporter::SetBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackground();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetBackground();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_BackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackgroundOn();
      }
    else
      {
      op->vtkRIBExporter::BackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_BackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BackgroundOff();
      }
    else
      {
      op->vtkRIBExporter::BackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetExportArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExportArrays(temp0);
      }
    else
      {
      op->vtkRIBExporter::SetExportArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetExportArraysMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportArraysMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExportArraysMinValue();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetExportArraysMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetExportArraysMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportArraysMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExportArraysMaxValue();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetExportArraysMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_ExportArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExportArraysOn();
      }
    else
      {
      op->vtkRIBExporter::ExportArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_ExportArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExportArraysOff();
      }
    else
      {
      op->vtkRIBExporter::ExportArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetExportArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExportArrays();
      }
    else
      {
      tempr = op->vtkRIBExporter::GetExportArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRIBExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkRIBExporter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRIBExporter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRIBExporter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRIBExporter\nC++: vtkRIBExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRIBExporter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRIBExporter\nC++: vtkRIBExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSize", PyvtkRIBExporter_SetSize, 1,
   (char*)"V.SetSize(int, int)\nC++: void SetSize(int, int)\nV.SetSize((int, int))\nC++: void SetSize(int a[2])\n\n"},
  {(char*)"GetSize", PyvtkRIBExporter_GetSize, 1,
   (char*)"V.GetSize() -> (int, int)\nC++: int *GetSize()\n\n"},
  {(char*)"SetPixelSamples", PyvtkRIBExporter_SetPixelSamples, 1,
   (char*)"V.SetPixelSamples(int, int)\nC++: void SetPixelSamples(int, int)\nV.SetPixelSamples((int, int))\nC++: void SetPixelSamples(int a[2])\n\n"},
  {(char*)"GetPixelSamples", PyvtkRIBExporter_GetPixelSamples, 1,
   (char*)"V.GetPixelSamples() -> (int, int)\nC++: int *GetPixelSamples()\n\n"},
  {(char*)"SetFilePrefix", PyvtkRIBExporter_SetFilePrefix, 1,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nSpecify the prefix of the files to write out. The resulting file\nnames will have .RIB appended to them.\n"},
  {(char*)"GetFilePrefix", PyvtkRIBExporter_GetFilePrefix, 1,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nSpecify the prefix of the files to write out. The resulting file\nnames will have .RIB appended to them.\n"},
  {(char*)"SetTexturePrefix", PyvtkRIBExporter_SetTexturePrefix, 1,
   (char*)"V.SetTexturePrefix(string)\nC++: void SetTexturePrefix(char *)\n\nSpecify the prefix of any generated texture files.\n"},
  {(char*)"GetTexturePrefix", PyvtkRIBExporter_GetTexturePrefix, 1,
   (char*)"V.GetTexturePrefix() -> string\nC++: char *GetTexturePrefix()\n\nSpecify the prefix of any generated texture files.\n"},
  {(char*)"SetBackground", PyvtkRIBExporter_SetBackground, 1,
   (char*)"V.SetBackground(int)\nC++: void SetBackground(int a)\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {(char*)"GetBackground", PyvtkRIBExporter_GetBackground, 1,
   (char*)"V.GetBackground() -> int\nC++: int GetBackground()\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {(char*)"BackgroundOn", PyvtkRIBExporter_BackgroundOn, 1,
   (char*)"V.BackgroundOn()\nC++: void BackgroundOn()\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {(char*)"BackgroundOff", PyvtkRIBExporter_BackgroundOff, 1,
   (char*)"V.BackgroundOff()\nC++: void BackgroundOff()\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {(char*)"SetExportArrays", PyvtkRIBExporter_SetExportArrays, 1,
   (char*)"V.SetExportArrays(int)\nC++: void SetExportArrays(int)\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons.\n"},
  {(char*)"GetExportArraysMinValue", PyvtkRIBExporter_GetExportArraysMinValue, 1,
   (char*)"V.GetExportArraysMinValue() -> int\nC++: int GetExportArraysMinValue()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons.\n"},
  {(char*)"GetExportArraysMaxValue", PyvtkRIBExporter_GetExportArraysMaxValue, 1,
   (char*)"V.GetExportArraysMaxValue() -> int\nC++: int GetExportArraysMaxValue()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons.\n"},
  {(char*)"ExportArraysOn", PyvtkRIBExporter_ExportArraysOn, 1,
   (char*)"V.ExportArraysOn()\nC++: void ExportArraysOn()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons.\n"},
  {(char*)"ExportArraysOff", PyvtkRIBExporter_ExportArraysOff, 1,
   (char*)"V.ExportArraysOff()\nC++: void ExportArraysOff()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons.\n"},
  {(char*)"GetExportArrays", PyvtkRIBExporter_GetExportArrays, 1,
   (char*)"V.GetExportArrays() -> int\nC++: int GetExportArrays()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRIBExporter_StaticNew()
{
  return vtkRIBExporter::New();
}

PyObject *PyVTKClass_vtkRIBExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRIBExporter_StaticNew,
    PyvtkRIBExporter_Methods,
    "vtkRIBExporter", modulename,
    NULL, NULL,
    PyvtkRIBExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkRIBExporter_Doc()
{
  static const char *docstring[] = {
    "vtkRIBExporter - export a scene into RenderMan RIB format.\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkRIBExporter is a concrete subclass of vtkExporter that writes a\nRenderman .RIB files. The input specifies a vtkRenderWindow. All\nvisible actors and lights will be included in the rib file. The\nfollowing file naming conventions apply:\n  rib file - FilePrefix.rib\n  image file created by RenderMan - FilePrefix.tif\n  texture files - TexturePrefix_0xADDR_MTIME.tif This object does NOT\ngenerate an im",
    "age file. The user must run either RenderMan or a\nRenderMan emulator like Blue Moon Ray Tracer (BMRT). vtk properties\nare convert to Renderman shaders as follows:\n  Normal property, no texture map - plastic.sl\n  Normal property with texture map - txtplastic.sl These two shaders\nmust be compiled by the rendering package being used.  vtkRIBExporter\nalso supports custom shaders. The shaders are writt",
    "en using the\nRenderman Shading Language. See \"The Renderman Companion\", ISBN\n0-201-50868, 1989 for details on writing shaders. vtkRIBProperty\nspecifies the declarations and parameter settings for custom shaders.\nTcl Example: generate a rib file for the current rendering.\nvtkRIBExporter myRIB\n  myRIB SetInput $renWin\n  myRIB SetFIlePrefix mine\n  myRIB Write This will create a file mine.rib. After r",
    "unning this\nfile through a Renderman renderer a file mine.tif will contain the\nrendered image.\n\nSee Also:\n\nvtkExporter vtkRIBProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRIBExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRIBExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRIBExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

