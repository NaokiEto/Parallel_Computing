// python wrapper for vtkPolyDataSourceWidget
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
#include "vtkPolyDataSourceWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataSourceWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataSourceWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataSourceWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkPolyDataSourceWidget_Doc();


static PyObject *
PyvtkPolyDataSourceWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

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
      tempr = op->vtkPolyDataSourceWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

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
      tempr = op->vtkPolyDataSourceWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  vtkPolyDataSourceWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataSourceWidget::NewInstance();
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
PyvtkPolyDataSourceWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkPolyDataSourceWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSourceWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->PlaceWidget(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSourceWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPolyDataSourceWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataSourceWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolyDataSourceWidget_PlaceWidget_s1(self, args);
    case 1:
      return PyvtkPolyDataSourceWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPolyDataSourceWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkPolyDataSourceWidget_GetPolyDataSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  vtkPolyDataSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataSource();
      }
    else
      {
      tempr = op->vtkPolyDataSourceWidget::GetPolyDataSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetPolyDataAlgorithm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataSourceWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSourceWidget *op = static_cast<vtkPolyDataSourceWidget *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->UpdatePlacement();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataSourceWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataSourceWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataSourceWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataSourceWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataSourceWidget\nC++: vtkPolyDataSourceWidget *NewInstance()\n\n"},
  {(char*)"PlaceWidget", PyvtkPolyDataSourceWidget_PlaceWidget, 1,
   (char*)"V.PlaceWidget()\nC++: virtual void PlaceWidget()\nV.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nOverrides vtk3DWidget PlaceWidget() so that it doesn't complain\nif there's no Input and no Prop3D.\n"},
  {(char*)"GetPolyDataSource", PyvtkPolyDataSourceWidget_GetPolyDataSource, 1,
   (char*)"V.GetPolyDataSource() -> vtkPolyDataSource\nC++: virtual vtkPolyDataSource *GetPolyDataSource()\n\nReturns underlying vtkPolyDataSource that determines geometry. \nThis can be modified after which PlaceWidget() or\nUpdatePlacement() can be called.  UpdatePlacement() will always\nupdate the planewidget according to the geometry of the\nunderlying PolyDataSource.  PlaceWidget() will only make use of\nthis geometry if there is no Input and no Prop3D set.\n"},
  {(char*)"GetPolyDataAlgorithm", PyvtkPolyDataSourceWidget_GetPolyDataAlgorithm, 1,
   (char*)"V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: virtual vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nReturns underlying vtkPolyDataSource that determines geometry. \nThis can be modified after which PlaceWidget() or\nUpdatePlacement() can be called.  UpdatePlacement() will always\nupdate the planewidget according to the geometry of the\nunderlying PolyDataSource.  PlaceWidget() will only make use of\nthis geometry if there is no Input and no Prop3D set.\n"},
  {(char*)"UpdatePlacement", PyvtkPolyDataSourceWidget_UpdatePlacement, 1,
   (char*)"V.UpdatePlacement()\nC++: virtual void UpdatePlacement()\n\nIf you've made changes to the underlying vtkPolyDataSource AFTER\nyour initial call to PlaceWidget(), use this method to realise\nthe changes in the widget.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPolyDataSourceWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPolyDataSourceWidget_Methods,
    "vtkPolyDataSourceWidget", modulename,
    NULL, NULL,
    PyvtkPolyDataSourceWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkPolyDataSourceWidget_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataSourceWidget - abstract PolyDataSource-based 3D widget\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This abstract class serves as parent to 3D widgets that have simple\nvtkPolyDataSource instances defining their geometry.\n\nIn addition to what is offered by the vtk3DWidget parent, this class\nmakes it possible to manipulate the underlying polydatasource and to\nPlaceWidget() according to that, instead of having to make use of\nSetInput() or SetProp3D().\n\nImplementors of child classes HAVE to implemen",
    "t their\nPlaceWidget(bounds) to check for the existence of Input and Prop3D\nFIRST.  If these don't exist, place according to the underlying\nPolyDataSource.  Child classes also have to imprement\nUpdatePlacement(), which updates the widget according to the geometry\nof the underlying PolyDataSource.\n\nSee Also:\n\nvtk3DWidget vtkLineWidget vtkPlaneWidget vtkSphereWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataSourceWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataSourceWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataSourceWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

