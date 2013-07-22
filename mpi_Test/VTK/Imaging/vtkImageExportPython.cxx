// python wrapper for vtkImageExport
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
#include "vtkImageExport.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageExport(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageExport(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageExportNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageExportNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageExport_Doc();


static PyObject *
PyvtkImageExport_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      tempr = op->vtkImageExport::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      tempr = op->vtkImageExport::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  vtkImageExport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageExport::NewInstance();
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
PyvtkImageExport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageExport *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageExport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataMemorySize();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataDimensions();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataNumberOfScalarComponents();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataNumberOfScalarComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataScalarType();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataScalarTypeAsString();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataScalarTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataExtent();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSpacing();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataOrigin();
      }
    else
      {
      tempr = op->vtkImageExport::GetDataOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageExport::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ImageLowerLeftOn();
      }
    else
      {
      op->vtkImageExport::ImageLowerLeftOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ImageLowerLeftOff();
      }
    else
      {
      op->vtkImageExport::ImageLowerLeftOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageLowerLeft();
      }
    else
      {
      tempr = op->vtkImageExport::GetImageLowerLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_SetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageLowerLeft(temp0);
      }
    else
      {
      op->vtkImageExport::SetImageLowerLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_SetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExportVoidPointer(temp0);
      }
    else
      {
      op->vtkImageExport::SetExportVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExportVoidPointer();
      }
    else
      {
      tempr = op->vtkImageExport::GetExportVoidPointer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_Export_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Export();
      }
    else
      {
      op->vtkImageExport::Export();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_Export_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Export(temp0);
      }
    else
      {
      op->vtkImageExport::Export(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExport_Export(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageExport_Export_s1(self, args);
    case 1:
      return PyvtkImageExport_Export_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Export");
  return NULL;
}



static PyObject *
PyvtkImageExport_GetPointerToData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerToData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointerToData();
      }
    else
      {
      tempr = op->vtkImageExport::GetPointerToData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCallbackUserData();
      }
    else
      {
      tempr = op->vtkImageExport::GetCallbackUserData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageExport_Methods[] = {
  {(char*)"GetClassName", PyvtkImageExport_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageExport_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageExport_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageExport\nC++: vtkImageExport *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageExport_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageExport\nC++: vtkImageExport *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataMemorySize", PyvtkImageExport_GetDataMemorySize, 1,
   (char*)"V.GetDataMemorySize() -> int\nC++: int GetDataMemorySize()\n\nGet the number of bytes required for the output C array.\n"},
  {(char*)"GetDataDimensions", PyvtkImageExport_GetDataDimensions, 1,
   (char*)"V.GetDataDimensions() -> (int, int, int)\nC++: int *GetDataDimensions()\n\nGet the (x,y,z) index dimensions of the data.  Please note that C\narrays are indexed in decreasing order, i.e. array[z][y][x].\n"},
  {(char*)"GetDataNumberOfScalarComponents", PyvtkImageExport_GetDataNumberOfScalarComponents, 1,
   (char*)"V.GetDataNumberOfScalarComponents() -> int\nC++: int GetDataNumberOfScalarComponents()\n\nGet the number of scalar components of the data.  Please note\nthat when you index into a C array, the scalar component index\ncomes last, i.e. array[z][y][x][c].\n"},
  {(char*)"GetDataScalarType", PyvtkImageExport_GetDataScalarType, 1,
   (char*)"V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nGet the scalar type of the data.  The scalar type of the C array\nmust match the scalar type of the data.\n"},
  {(char*)"GetDataScalarTypeAsString", PyvtkImageExport_GetDataScalarTypeAsString, 1,
   (char*)"V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nGet the scalar type of the data.  The scalar type of the C array\nmust match the scalar type of the data.\n"},
  {(char*)"GetDataExtent", PyvtkImageExport_GetDataExtent, 1,
   (char*)"V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\nGet miscellaneous additional information about the data.\n"},
  {(char*)"GetDataSpacing", PyvtkImageExport_GetDataSpacing, 1,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\nGet miscellaneous additional information about the data.\n"},
  {(char*)"GetDataOrigin", PyvtkImageExport_GetDataOrigin, 1,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\nGet miscellaneous additional information about the data.\n"},
  {(char*)"GetInput", PyvtkImageExport_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet the input object from the image pipeline.\n"},
  {(char*)"ImageLowerLeftOn", PyvtkImageExport_ImageLowerLeftOn, 1,
   (char*)"V.ImageLowerLeftOn()\nC++: void ImageLowerLeftOn()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"ImageLowerLeftOff", PyvtkImageExport_ImageLowerLeftOff, 1,
   (char*)"V.ImageLowerLeftOff()\nC++: void ImageLowerLeftOff()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"GetImageLowerLeft", PyvtkImageExport_GetImageLowerLeft, 1,
   (char*)"V.GetImageLowerLeft() -> int\nC++: int GetImageLowerLeft()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"SetImageLowerLeft", PyvtkImageExport_SetImageLowerLeft, 1,
   (char*)"V.SetImageLowerLeft(int)\nC++: void SetImageLowerLeft(int a)\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {(char*)"SetExportVoidPointer", PyvtkImageExport_SetExportVoidPointer, 1,
   (char*)"V.SetExportVoidPointer()\nC++: void SetExportVoidPointer(void *)\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {(char*)"GetExportVoidPointer", PyvtkImageExport_GetExportVoidPointer, 1,
   (char*)"V.GetExportVoidPointer() ->\nC++: void *GetExportVoidPointer()\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {(char*)"Export", PyvtkImageExport_Export, 1,
   (char*)"V.Export()\nC++: void Export()\nV.Export()\nC++: virtual void Export(void *)\n\nThe main interface: update the pipeline and export the image to\nthe memory pointed to by SetExportVoidPointer().  You can also\nspecify a void pointer when you call Export().\n"},
  {(char*)"GetPointerToData", PyvtkImageExport_GetPointerToData, 1,
   (char*)"V.GetPointerToData() ->\nC++: void *GetPointerToData()\n\nAn alternative to Export(): Use with caution.   Update the\npipeline and return a pointer to the image memory.  The pointer\nis only valid until the next time that the pipeline is updated.\nWARNING: This method ignores the ImageLowerLeft flag.\n"},
  {(char*)"GetCallbackUserData", PyvtkImageExport_GetCallbackUserData, 1,
   (char*)"V.GetCallbackUserData() ->\nC++: void *GetCallbackUserData()\n\nGet the user data that should be passed to the callback\nfunctions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageExport_StaticNew()
{
  return vtkImageExport::New();
}

PyObject *PyVTKClass_vtkImageExportNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageExport_StaticNew,
    PyvtkImageExport_Methods,
    "vtkImageExport", modulename,
    NULL, NULL,
    PyvtkImageExport_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageExport_Doc()
{
  static const char *docstring[] = {
    "vtkImageExport - Export VTK images to third-party systems.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageExport provides a way of exporting image data at the end of a\npipeline to a third-party system or to a simple C array. Applications\ncan use this to get direct access to the image data in memory.  A\ncallback interface is provided to allow connection of the VTK\npipeline to a third-party pipeline.  This interface conforms to the\ninterface of vtkImageImport. In Python it is possible to use thi",
    "s\nclass to write the image data into a python string that has been\npre-allocated to be the correct size.\n\nSee Also:\n\nvtkImageImport\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageExport(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageExportNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageExport", o) != 0)
    {
    Py_DECREF(o);
    }

}

