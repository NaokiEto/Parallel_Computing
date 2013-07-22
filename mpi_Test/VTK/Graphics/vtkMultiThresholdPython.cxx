// python wrapper for vtkMultiThreshold
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
#include "vtkMultiThreshold.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiThreshold(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiThreshold(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiThresholdNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiThresholdNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkMultiThreshold_Doc();


static PyObject *
PyvtkMultiThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

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
      tempr = op->vtkMultiThreshold::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

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
      tempr = op->vtkMultiThreshold::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  vtkMultiThreshold *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiThreshold::NewInstance();
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
PyvtkMultiThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMultiThreshold *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMultiThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddIntervalSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  int temp3;
  int temp4;
  char *temp5 = NULL;
  int temp6;
  int temp7;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      tempr = op->AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      tempr = op->vtkMultiThreshold::AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiThreshold_AddIntervalSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      tempr = op->AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      tempr = op->vtkMultiThreshold::AddIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiThreshold_AddIntervalSet_Methods[] = {
  {NULL, PyvtkMultiThreshold_AddIntervalSet_s1, 1,
   (char*)"@ddiiizii"},
  {NULL, PyvtkMultiThreshold_AddIntervalSet_s2, 1,
   (char*)"@ddiiiiii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiThreshold_AddIntervalSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiThreshold_AddIntervalSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddIntervalSet");
  return NULL;
}



static PyObject *
PyvtkMultiThreshold_AddLowpassIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLowpassIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLowpassIntervalSet(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMultiThreshold::AddLowpassIntervalSet(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddHighpassIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHighpassIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->AddHighpassIntervalSet(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMultiThreshold::AddHighpassIntervalSet(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddBandpassIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBandpassIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  char *temp3 = NULL;
  int temp4;
  int temp5;
  int tempr;
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
      tempr = op->AddBandpassIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkMultiThreshold::AddBandpassIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_AddNotchIntervalSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNotchIntervalSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  double temp0;
  double temp1;
  int temp2;
  char *temp3 = NULL;
  int temp4;
  int temp5;
  int tempr;
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
      tempr = op->AddNotchIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkMultiThreshold::AddNotchIntervalSet(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_OutputSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->OutputSet(temp0);
      }
    else
      {
      tempr = op->vtkMultiThreshold::OutputSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreshold_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreshold *op = static_cast<vtkMultiThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkMultiThreshold::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiThreshold_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiThreshold_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiThreshold_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiThreshold\nC++: vtkMultiThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiThreshold_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiThreshold\nC++: vtkMultiThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddIntervalSet", PyvtkMultiThreshold_AddIntervalSet, 1,
   (char*)"V.AddIntervalSet(float, float, int, int, int, string, int, int)\n    -> int\nC++: int AddIntervalSet(double xmin, double xmax, int omin,\n    int omax, int assoc, const char *arrayName, int component,\n    int allScalars)\nV.AddIntervalSet(float, float, int, int, int, int, int, int)\n    -> int\nC++: int AddIntervalSet(double xmin, double xmax, int omin,\n    int omax, int assoc, int attribType, int component,\n    int allScalars)\n\nAdd a mesh subset to be computed by thresholding an attribute of\nthe input mesh. The subset can then be added to an output mesh\nwith OuputSet() or combined with other sets using AddBooleanSet.\nIf you wish to include all cells with values below some number a,\ncall with xmin set to vtkMath::NegInf() and xmax set to a.\nSimilarly, if you wish to include all cells with values above\nsome number a, call with xmin set to a and xmax set to\nvtkMath::Inf(). When specifying Inf() or NegInf() for an\nendpoint, it does not matter whether you specify and open or\nclosed endpoint.\n\nWhen creating intervals, any integers can be used for the IDs of\noutput meshes. All that matters is that the same ID be used if\nintervals should output to the same mesh. The outputs are ordered\nwith ascending IDs in output block 0.\n\nIt is possible to specify an invalid interval, in which case\nthese routines will return -1. Invalid intervals occur when\n- an array does not exist,\n- center is invalid,\n- xmin == xmax and omin and/or omax are vtkMultiThreshold::OPEN,\n  or\n- xmin > xmax.\n- xmin or xmax is not a number (i.e., IEEE NaN). Having both xmin\nand xmax equal NaN is allowed. vtkMath provides a portable way to\nspecify IEEE infinities and Nan. Note that specifying an interval\ncompletely out of the bounds of an attribute is considered valid.\n  In fact, it is occasionally useful to create a closed interval\n  with both endpoints set to $\\infty $ or both endpoints set to\n  $-\\infty $ in order to locate cells with problematic values.\n\n@param xmin The minimum attribute val ...\n [Truncated]\n"},
  {(char*)"AddLowpassIntervalSet", PyvtkMultiThreshold_AddLowpassIntervalSet, 1,
   (char*)"V.AddLowpassIntervalSet(float, int, string, int, int) -> int\nC++: int AddLowpassIntervalSet(double xmax, int assoc,\n    const char *arrayName, int component, int allScalars)\n\nThese convenience members make it easy to insert closed\nintervals. The \"notch\" interval is accomplished by creating a\nbandpass interval and applying a NAND operation. In this case,\nthe set ID returned in the NAND operation set ID. Note that you\ncan pass xmin == xmax when creating a bandpass threshold to\nretrieve elements matching exactly one value (since the intervals\ncreated by these routines are closed).\n"},
  {(char*)"AddHighpassIntervalSet", PyvtkMultiThreshold_AddHighpassIntervalSet, 1,
   (char*)"V.AddHighpassIntervalSet(float, int, string, int, int) -> int\nC++: int AddHighpassIntervalSet(double xmin, int assoc,\n    const char *arrayName, int component, int allScalars)\n\nThese convenience members make it easy to insert closed\nintervals. The \"notch\" interval is accomplished by creating a\nbandpass interval and applying a NAND operation. In this case,\nthe set ID returned in the NAND operation set ID. Note that you\ncan pass xmin == xmax when creating a bandpass threshold to\nretrieve elements matching exactly one value (since the intervals\ncreated by these routines are closed).\n"},
  {(char*)"AddBandpassIntervalSet", PyvtkMultiThreshold_AddBandpassIntervalSet, 1,
   (char*)"V.AddBandpassIntervalSet(float, float, int, string, int, int)\n    -> int\nC++: int AddBandpassIntervalSet(double xmin, double xmax,\n    int assoc, const char *arrayName, int component,\n    int allScalars)\n\nThese convenience members make it easy to insert closed\nintervals. The \"notch\" interval is accomplished by creating a\nbandpass interval and applying a NAND operation. In this case,\nthe set ID returned in the NAND operation set ID. Note that you\ncan pass xmin == xmax when creating a bandpass threshold to\nretrieve elements matching exactly one value (since the intervals\ncreated by these routines are closed).\n"},
  {(char*)"AddNotchIntervalSet", PyvtkMultiThreshold_AddNotchIntervalSet, 1,
   (char*)"V.AddNotchIntervalSet(float, float, int, string, int, int) -> int\nC++: int AddNotchIntervalSet(double xlo, double xhi, int assoc,\n    const char *arrayName, int component, int allScalars)\n\nThese convenience members make it easy to insert closed\nintervals. The \"notch\" interval is accomplished by creating a\nbandpass interval and applying a NAND operation. In this case,\nthe set ID returned in the NAND operation set ID. Note that you\ncan pass xmin == xmax when creating a bandpass threshold to\nretrieve elements matching exactly one value (since the intervals\ncreated by these routines are closed).\n"},
  {(char*)"OutputSet", PyvtkMultiThreshold_OutputSet, 1,
   (char*)"V.OutputSet(int) -> int\nC++: int OutputSet(int setId)\n\nCreate an output mesh containing a boolean or interval subset of\nthe input mesh.\n"},
  {(char*)"Reset", PyvtkMultiThreshold_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nRemove all the intervals currently defined.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiThreshold_StaticNew()
{
  return vtkMultiThreshold::New();
}

PyObject *PyVTKClass_vtkMultiThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiThreshold_StaticNew,
    PyvtkMultiThreshold_Methods,
    "vtkMultiThreshold", modulename,
    NULL, NULL,
    PyvtkMultiThreshold_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"OPEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CLOSED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(-3);
    if (o && PyDict_SetItemString(d, (char *)"LINFINITY_NORM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(-2);
    if (o && PyDict_SetItemString(d, (char *)"L2_NORM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(-1);
    if (o && PyDict_SetItemString(d, (char *)"L1_NORM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"AND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"XOR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"WOR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"NAND", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkMultiThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkMultiThreshold - Threshold cells within multiple intervals\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter can be substituted for a chain of several vtkThreshold\nfilters and can also perform more sophisticated subsetting\noperations. It generates a vtkMultiBlockDataSet as its output. This\nmultiblock dataset contains a vtkUnstructuredGrid for each\nthresholded subset you request. A thresholded subset can be a set\ndefined by an interval over a point or cell attribute of the mesh;\nthese subsets ",
    "are called IntervalSets. A thresholded subset can also\nbe a boolean combination of one or more IntervalSets; these subsets\nare called BooleanSets. BooleanSets allow complex logic since their\noutput can depend on multiple intervals over multiple variables\ndefined on the input mesh. This is useful because it eliminates the\nneed for thresholding several times and then appending the results,\nas can be",
    " required with vtkThreshold when one wants to remove some\nrange of values (e.g., a notch filter). Cells are not repeated when\nthey belong to more than one interval unless those intervals have\ndifferent output grids.\n\nAnother advantage this filter provides over vtkThreshold is the\nability to threshold on non-scalar (i.e., vector, tensor, etc.)\nattributes without first computing an array containing ",
    "some norm of\nthe desired attribute. vtkMultiThreshold provides $L_1 $, $L_2 $, and\n$L_{\\infty} $ norms.\n\nThis filter makes a distinction between intermediate subsets and\nsubsets that will be output to a grid. Each intermediate subset you\ncreate with AddIntervalSet or AddBooleanSet is given a unique integer\nidentifier (via the return values of these member functions). If you\nwish for a given set to",
    " be output, you must call OutputSet and pass\nit one of these identifiers. The return of OutputSet is the integer\nindex of the output set in the multiblock dataset created by this\nfilter.\n\nFor example, if an input mesh defined three attributes T, P, and s,\none might wish to find cells that satisfy \"T < 320 [K] && ( P > 101 [kPa] || s < 0.1 [kJ/kg/K]\n)\". To accomplish this with a vtkMultiThreshold f",
    "ilter,\n\nvtkMultiThreshold* thr; int intervalSets[3];\n\nintervalSets[0] = thr->AddIntervalSet( vtkMath::NegInf(), 320.,\nvtkMultiThreshold::CLOSED, vtkMultiThreshold::OPEN,\n    vtkDataObject::FIELD_ASSOCIATION_POINTS, \"T\", 0, 1 );\nintervalSets[1] = thr->AddIntervalSet( 101., vtkMath::Inf(),\nvtkMultiThreshold::OPEN, vtkMultiThreshold::CLOSED,\n    vtkDataObject::FIELD_ASSOCIATION_CELLS, \"P\", 0, 1 );\nin",
    "tervalSets[2] = thr->AddIntervalSet( vtkMath::NegInf(), 0.1,\nvtkMultiThreshold::CLOSED, vtkMultiThreshold::OPEN,\n    vtkDataObject::FIELD_ASSOCIATION_POINTS, \"s\", 0, 1 );\n\nint intermediate = thr->AddBooleanSet( vtkMultiThreshold::OR, 2,\n&intervalSets[1] );\n\nint intersection[2]; intersection[0] = intervalSets[0];\nintersection[1] = intermediate; int outputSet = thr->AddBooleanSet(\nvtkMultiThreshold:",
    ":AND, 2, intersection );\n\nint outputGridIndex = thr->OutputSet( outputSet ); thr->Update(); \nThe result of this filter will be a multiblock dataset that contains\na single child with the desired cells. If we had also called\nthr->OutputSet( intervalSets[0] );, there would be two child meshes\nand one would contain all cells with T < 320 [K]. In that case, the\noutput can be represented by this graph\\d",
    "ot digraph MultiThreshold {\n  set0 [shape=rect,style=filled,label=\"point T(0) in [-Inf,320[\"]\n  set1 [shape=rect,label=\"cell P(0) in ]101,Inf]\"]\n  set2 [shape=rect,label=\"point s(0) in [-Inf,0.1[\"]\n  set3 [shape=rect,label=\"OR\"]\n  set4 [shape=rect,style=filled,label=\"AND\"]\n  set0 -> set4\n  set1 -> set3\n  set2 -> set3\n  set3 -> set4 }\\enddot The filled rectangles represent sets that are\noutput.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiThreshold", o) != 0)
    {
    Py_DECREF(o);
    }

}

