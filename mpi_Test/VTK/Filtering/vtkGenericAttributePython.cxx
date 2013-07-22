// python wrapper for vtkGenericAttribute
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
#include "vtkGenericAttribute.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericAttribute(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericAttribute(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericAttributeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericAttributeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericAttribute_Doc();


static PyObject *
PyvtkGenericAttribute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

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
      tempr = op->vtkGenericAttribute::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

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
      tempr = op->vtkGenericAttribute::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericAttribute::NewInstance();
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
PyvtkGenericAttribute_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfComponents();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetCentering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetCentering();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetComponentType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetRange(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetMaxNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetMaxNorm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  vtkGenericPointIterator *temp1 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericPointIterator"))
    {
    tempr = op->GetComponent(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
    {
    op->DeepCopy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
    {
    op->ShallowCopy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericAttribute_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericAttribute_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericAttribute_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericAttribute_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericAttribute\nC++: vtkGenericAttribute *NewInstance()\n\n"},
  {(char*)"GetName", PyvtkGenericAttribute_GetName, 1,
   (char*)"V.GetName() -> string\nC++: virtual const char *GetName()\n\nName of the attribute. (e.g. \"velocity\")\n\\post result_may_not_exist: result!=0 || result==0\n"},
  {(char*)"GetNumberOfComponents", PyvtkGenericAttribute_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nDimension of the attribute. (1 for scalar, 3 for velocity)\n\\post positive_result: result>=0\n\\post GetType()==VTK_SCALARS implies result==1\n\\post\n    (GetType()==VTK_VECTORS||(GetType()==VTK_NORMALS)||(GetType()=\n    =VTK_TCOORDS) implies result==3\n\\post GetType()==VTK_TENSORS implies result==6\n"},
  {(char*)"GetCentering", PyvtkGenericAttribute_GetCentering, 1,
   (char*)"V.GetCentering() -> int\nC++: virtual int GetCentering()\n\nIs the attribute centered either on points, cells or boundaries?\n\\post valid_result:\n    (result==vtkPointCentered)||(result==vtkCellCentered)\n"},
  {(char*)"GetType", PyvtkGenericAttribute_GetType, 1,
   (char*)"V.GetType() -> int\nC++: virtual int GetType()\n\nType of the attribute: scalar, vector, normal, texture\ncoordinate, tensor\n\\post valid_result: (result==vtkDataSetAttributes::SCALARS)\n                  ||(result==vtkDataSetAttributes::VECTORS)\n                  ||(result==vtkDataSetAttributes::NORMALS)\n                  ||(result==vtkDataSetAttributes::TCOORDS)\n                  ||(result==vtkDataSetAttributes::TENSORS)\n"},
  {(char*)"GetComponentType", PyvtkGenericAttribute_GetComponentType, 1,
   (char*)"V.GetComponentType() -> int\nC++: virtual int GetComponentType()\n\nType of the components of the attribute: int, float, double\n\\post valid_result: (result==VTK_BIT)          \n    ||(result==VTK_CHAR)\n                  ||(result==VTK_UNSIGNED_CHAR)\n||(result==VTK_SHORT)\n                 \n||(result==VTK_UNSIGNED_SHORT)||(result==VTK_INT)\n                  ||(result==VTK_UNSIGNED_INT) \n||(result==VTK_LONG)\n                  ||(result==VTK_UNSIGNED_LONG)\n||(result==VTK_FLOAT)\n                  ||(result==VTK_DOUBLE)       \n||(result==VTK_ID_TYPE)\n"},
  {(char*)"GetSize", PyvtkGenericAttribute_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: virtual vtkIdType GetSize()\n\nNumber of tuples.\n\\post valid_result: result>=0\n"},
  {(char*)"GetActualMemorySize", PyvtkGenericAttribute_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nSize in kilobytes taken by the attribute.\n"},
  {(char*)"GetRange", PyvtkGenericAttribute_GetRange, 1,
   (char*)"V.GetRange(int, [float, float])\nC++: virtual void GetRange(int component, double range[2])\n\nRange of the attribute component `component'. If `component'==-1,\nit returns the range of the magnitude (euclidean norm). THREAD\nSAFE\n\\pre valid_component:\n    (component>=-1)&&(component<GetNumberOfComponents())\n"},
  {(char*)"GetMaxNorm", PyvtkGenericAttribute_GetMaxNorm, 1,
   (char*)"V.GetMaxNorm() -> float\nC++: virtual double GetMaxNorm()\n\nReturn the maximum euclidean norm for the tuples.\n\\post positive_result: result>=0\n"},
  {(char*)"GetComponent", PyvtkGenericAttribute_GetComponent, 1,
   (char*)"V.GetComponent(int, vtkGenericPointIterator) -> float\nC++: virtual double GetComponent(int i,\n    vtkGenericPointIterator *p)\n\nValue of the component `i' of the attribute at position `p'.\n\\pre valid_component: (i>=0) && (i<GetNumberOfComponents())\n\\pre p_exists: p!=0\n\\pre p_valid: !p->IsAtEnd()\n"},
  {(char*)"DeepCopy", PyvtkGenericAttribute_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkGenericAttribute)\nC++: virtual void DeepCopy(vtkGenericAttribute *other)\n\nRecursive duplication of `other' in `this'.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {(char*)"ShallowCopy", PyvtkGenericAttribute_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkGenericAttribute)\nC++: virtual void ShallowCopy(vtkGenericAttribute *other)\n\nUpdate `this' using fields of `other'.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericAttributeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericAttribute_Methods,
    "vtkGenericAttribute", modulename,
    NULL, NULL,
    PyvtkGenericAttribute_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericAttribute_Doc()
{
  static const char *docstring[] = {
    "vtkGenericAttribute - abstract class defined API for attribute data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGenericAttribute is an abstract class that defines an API for\nattribute data. Attribute data is data associated with the topology\nor geometry of a dataset (i.e., points, cells, etc.).\nvtkGenericAttribute is part of the adaptor framework (see\nGenericFiltering/README.html).\n\nvtkGenericAttribute provides a more general interface to attribute\ndata than its counterpart vtkDataArray (which assumes a ",
    "linear,\ncontiguous array). It adopts an iterator interface, and allows\nattributes to be associated with points, edges, faces, or edges.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericAttribute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericAttributeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericAttribute", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"vtkPointCentered", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"vtkCellCentered", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"vtkBoundaryCentered", o) != 0)
    {
    Py_DECREF(o);
    }

}

