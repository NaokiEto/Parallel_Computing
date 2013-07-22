// python wrapper for vtkObjectFactory
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
#include "vtkObjectFactory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkObjectFactory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkObjectFactory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkObjectFactoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkObjectFactoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkObjectFactory_Doc();


static PyObject *
PyvtkObjectFactory_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  vtkObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkObjectFactory::CreateInstance(temp0);

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
PyvtkObjectFactory_CreateAllInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateAllInstance");

  char *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
    {
    vtkObjectFactory::CreateAllInstance(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_ReHash(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReHash");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkObjectFactory::ReHash();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_RegisterFactory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterFactory");

  vtkObjectFactory *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectFactory"))
    {
    vtkObjectFactory::RegisterFactory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_UnRegisterFactory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterFactory");

  vtkObjectFactory *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectFactory"))
    {
    vtkObjectFactory::UnRegisterFactory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_UnRegisterAllFactories(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterAllFactories");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkObjectFactory::UnRegisterAllFactories();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetRegisteredFactories(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRegisteredFactories");

  vtkObjectFactoryCollection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkObjectFactory::GetRegisteredFactories();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_HasOverrideAny(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasOverrideAny");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkObjectFactory::HasOverrideAny(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetOverrideInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOverrideInformation");

  char *temp0 = NULL;
  vtkOverrideInformationCollection *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOverrideInformationCollection"))
    {
    vtkObjectFactory::GetOverrideInformation(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_SetAllEnableFlags_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAllEnableFlags");

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkObjectFactory::SetAllEnableFlags(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObjectFactory_SetAllEnableFlags_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAllEnableFlags");

  int temp0;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkObjectFactory::SetAllEnableFlags(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObjectFactory_SetAllEnableFlags(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkObjectFactory_SetAllEnableFlags_s1(self, args);
    case 3:
      return PyvtkObjectFactory_SetAllEnableFlags_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAllEnableFlags");
  return NULL;
}



static PyObject *
PyvtkObjectFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

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
      tempr = op->vtkObjectFactory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

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
      tempr = op->vtkObjectFactory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  vtkObjectFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkObjectFactory::NewInstance();
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
PyvtkObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetVTKSourceVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDescription();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetNumberOfOverrides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOverrides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOverrides();
      }
    else
      {
      tempr = op->vtkObjectFactory::GetNumberOfOverrides();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassOverrideName(temp0);
      }
    else
      {
      tempr = op->vtkObjectFactory::GetClassOverrideName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassOverrideWithName(temp0);
      }
    else
      {
      tempr = op->vtkObjectFactory::GetClassOverrideWithName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetEnableFlag_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableFlag(temp0);
      }
    else
      {
      tempr = op->vtkObjectFactory::GetEnableFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObjectFactory_GetEnableFlag_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableFlag(temp0, temp1);
      }
    else
      {
      tempr = op->vtkObjectFactory::GetEnableFlag(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObjectFactory_GetEnableFlag(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkObjectFactory_GetEnableFlag_s1(self, args);
    case 2:
      return PyvtkObjectFactory_GetEnableFlag_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEnableFlag");
  return NULL;
}



static PyObject *
PyvtkObjectFactory_GetOverrideDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverrideDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOverrideDescription(temp0);
      }
    else
      {
      tempr = op->vtkObjectFactory::GetOverrideDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_SetEnableFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetEnableFlag(temp0, temp1, temp2);
      }
    else
      {
      op->vtkObjectFactory::SetEnableFlag(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_HasOverride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasOverride(temp0);
      }
    else
      {
      tempr = op->vtkObjectFactory::HasOverride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObjectFactory_HasOverride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->HasOverride(temp0, temp1);
      }
    else
      {
      tempr = op->vtkObjectFactory::HasOverride(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkObjectFactory_HasOverride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkObjectFactory_HasOverride_s1(self, args);
    case 2:
      return PyvtkObjectFactory_HasOverride_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HasOverride");
  return NULL;
}



static PyObject *
PyvtkObjectFactory_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Disable(temp0);
      }
    else
      {
      op->vtkObjectFactory::Disable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetLibraryPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLibraryPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLibraryPath();
      }
    else
      {
      tempr = op->vtkObjectFactory::GetLibraryPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkObjectFactory_Methods[] = {
  {(char*)"CreateInstance", PyvtkObjectFactory_CreateInstance, 1,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *vtkclassname)\n\nCreate and return an instance of the named vtk object. Each\nloaded vtkObjectFactory will be asked in the order the factory\nwas in the VTK_AUTOLOAD_PATH.  After the first factory returns\nthe object no other factories are asked.\n"},
  {(char*)"CreateAllInstance", PyvtkObjectFactory_CreateAllInstance, 1,
   (char*)"V.CreateAllInstance(string, vtkCollection)\nC++: static void CreateAllInstance(const char *vtkclassname,\n    vtkCollection *retList)\n\nCreate all possible instances of the named vtk object. Each\nregistered vtkObjectFactory will be asked, and the result will be\nstored in the user allocated vtkCollection passed in to the\nfunction.\n"},
  {(char*)"ReHash", PyvtkObjectFactory_ReHash, 1,
   (char*)"V.ReHash()\nC++: static void ReHash()\n\nRe-check the VTK_AUTOLOAD_PATH for new factory libraries. This\ncalls UnRegisterAll before re-loading\n"},
  {(char*)"RegisterFactory", PyvtkObjectFactory_RegisterFactory, 1,
   (char*)"V.RegisterFactory(vtkObjectFactory)\nC++: static void RegisterFactory(vtkObjectFactory *)\n\nRegister a factory so it can be used to create vtk objects\n"},
  {(char*)"UnRegisterFactory", PyvtkObjectFactory_UnRegisterFactory, 1,
   (char*)"V.UnRegisterFactory(vtkObjectFactory)\nC++: static void UnRegisterFactory(vtkObjectFactory *)\n\nRemove a factory from the list of registered factories\n"},
  {(char*)"UnRegisterAllFactories", PyvtkObjectFactory_UnRegisterAllFactories, 1,
   (char*)"V.UnRegisterAllFactories()\nC++: static void UnRegisterAllFactories()\n\nUnregister all factories\n"},
  {(char*)"GetRegisteredFactories", PyvtkObjectFactory_GetRegisteredFactories, 1,
   (char*)"V.GetRegisteredFactories() -> vtkObjectFactoryCollection\nC++: static vtkObjectFactoryCollection *GetRegisteredFactories()\n\nReturn the list of all registered factories.  This is NOT a copy,\ndo not remove items from this list!\n"},
  {(char*)"HasOverrideAny", PyvtkObjectFactory_HasOverrideAny, 1,
   (char*)"V.HasOverrideAny(string) -> int\nC++: static int HasOverrideAny(const char *className)\n\nreturn 1 if one of the registered factories overrides the given\nclass name\n"},
  {(char*)"GetOverrideInformation", PyvtkObjectFactory_GetOverrideInformation, 1,
   (char*)"V.GetOverrideInformation(string, vtkOverrideInformationCollection)\nC++: static void GetOverrideInformation(const char *name,\n    vtkOverrideInformationCollection *)\n\nFill the given collection with all the overrides for the class\nwith the given name.\n"},
  {(char*)"SetAllEnableFlags", PyvtkObjectFactory_SetAllEnableFlags, 1,
   (char*)"V.SetAllEnableFlags(int, string)\nC++: static void SetAllEnableFlags(int flag,\n    const char *className)\nV.SetAllEnableFlags(int, string, string)\nC++: static void SetAllEnableFlags(int flag,\n    const char *className, const char *subclassName)\n\nSet the enable flag for a given named class for all registered\nfactories.\n"},
  {(char*)"GetClassName", PyvtkObjectFactory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkObjectFactory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkObjectFactory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkObjectFactory\nC++: vtkObjectFactory *NewInstance()\n\n"},
  {(char*)"GetVTKSourceVersion", PyvtkObjectFactory_GetVTKSourceVersion, 1,
   (char*)"V.GetVTKSourceVersion() -> string\nC++: virtual const char *GetVTKSourceVersion()\n\nAll sub-classes of vtkObjectFactory should must return the\nversion of VTK they were built with.  This should be implemented\nwith the macro VTK_SOURCE_VERSION and NOT a call to\nvtkVersion::GetVTKSourceVersion. As the version needs to be\ncompiled into the file as a string constant. This is critical to\ndetermine possible incompatible dynamic factory loads.\n"},
  {(char*)"GetDescription", PyvtkObjectFactory_GetDescription, 1,
   (char*)"V.GetDescription() -> string\nC++: virtual const char *GetDescription()\n\nReturn a descriptive string describing the factory.\n"},
  {(char*)"GetNumberOfOverrides", PyvtkObjectFactory_GetNumberOfOverrides, 1,
   (char*)"V.GetNumberOfOverrides() -> int\nC++: virtual int GetNumberOfOverrides()\n\nReturn number of overrides this factory can create.\n"},
  {(char*)"GetClassOverrideName", PyvtkObjectFactory_GetClassOverrideName, 1,
   (char*)"V.GetClassOverrideName(int) -> string\nC++: virtual const char *GetClassOverrideName(int index)\n\nReturn the name of a class override at the given index.\n"},
  {(char*)"GetClassOverrideWithName", PyvtkObjectFactory_GetClassOverrideWithName, 1,
   (char*)"V.GetClassOverrideWithName(int) -> string\nC++: virtual const char *GetClassOverrideWithName(int index)\n\nReturn the name of the class that will override the class at the\ngiven index\n"},
  {(char*)"GetEnableFlag", PyvtkObjectFactory_GetEnableFlag, 1,
   (char*)"V.GetEnableFlag(int) -> int\nC++: virtual int GetEnableFlag(int index)\nV.GetEnableFlag(string, string) -> int\nC++: virtual int GetEnableFlag(const char *className,\n    const char *subclassName)\n\nReturn the enable flag for the class at the given index.\n"},
  {(char*)"GetOverrideDescription", PyvtkObjectFactory_GetOverrideDescription, 1,
   (char*)"V.GetOverrideDescription(int) -> string\nC++: virtual const char *GetOverrideDescription(int index)\n\nReturn the description for a the class override at the given\nindex.\n"},
  {(char*)"SetEnableFlag", PyvtkObjectFactory_SetEnableFlag, 1,
   (char*)"V.SetEnableFlag(int, string, string)\nC++: virtual void SetEnableFlag(int flag, const char *className,\n    const char *subclassName)\n\nSet and Get the Enable flag for the specific override of\nclassName. if subclassName is null, then it is ignored.\n"},
  {(char*)"HasOverride", PyvtkObjectFactory_HasOverride, 1,
   (char*)"V.HasOverride(string) -> int\nC++: virtual int HasOverride(const char *className)\nV.HasOverride(string, string) -> int\nC++: virtual int HasOverride(const char *className,\n    const char *subclassName)\n\nReturn 1 if this factory overrides the given class name, 0\notherwise.\n"},
  {(char*)"Disable", PyvtkObjectFactory_Disable, 1,
   (char*)"V.Disable(string)\nC++: virtual void Disable(const char *className)\n\nSet all enable flags for the given class to 0.  This will mean\nthat the factory will stop producing class with the given name.\n"},
  {(char*)"GetLibraryPath", PyvtkObjectFactory_GetLibraryPath, 1,
   (char*)"V.GetLibraryPath() -> string\nC++: char *GetLibraryPath()\n\nThis returns the path to a dynamically loaded factory.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkObjectFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkObjectFactory_Methods,
    "vtkObjectFactory", modulename,
    NULL, NULL,
    PyvtkObjectFactory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkObjectFactory_Doc()
{
  static const char *docstring[] = {
    "vtkObjectFactory - abstract base class for vtkObjectFactories\n\n",
    "Superclass: vtkObject\n\n",
    "vtkObjectFactory is used to create vtk objects.   The base class\nvtkObjectFactory contains a static method CreateInstance which is\nused to create vtk objects from the list of registered\nvtkObjectFactory sub-classes.   The first time CreateInstance is\ncalled, all dll's or shared libraries in the environment variable\nVTK_AUTOLOAD_PATH are loaded into the current process.   The C\nfunctions vtkLoad, v",
    "tkGetFactoryCompilerUsed, and\nvtkGetFactoryVersion are called on each dll.  To implement these\nfunctions in a shared library or dll, use the macro:\nVTK_FACTORY_INTERFACE_IMPLEMENT. VTK_AUTOLOAD_PATH is an environment\nvariable containing a colon separated (semi-colon on win32) list of\npaths.\n\nThe vtkObjectFactory can be use to override the creation of any\nobject in VTK with a sub-class of that obje",
    "ct.  The factories can be\nregistered either at run time with the VTK_AUTOLOAD_PATH, or at\ncompile time with the vtkObjectFactory::RegisterFactory method.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkObjectFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkObjectFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkObjectFactory", o) != 0)
    {
    Py_DECREF(o);
    }


}

