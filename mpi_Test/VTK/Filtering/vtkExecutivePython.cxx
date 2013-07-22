// python wrapper for vtkExecutive
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
#include "vtkExecutive.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExecutive(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExecutive(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExecutiveNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExecutiveNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExecutive_Doc();


static PyObject *
PyvtkExecutive_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

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
      tempr = op->vtkExecutive::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

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
      tempr = op->vtkExecutive::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkExecutive *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExecutive::NewInstance();
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
PyvtkExecutive_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlgorithm();
      }
    else
      {
      tempr = op->vtkExecutive::GetAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Update();
      }
    else
      {
      tempr = op->vtkExecutive::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Update(temp0);
      }
    else
      {
      tempr = op->vtkExecutive::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkExecutive_Update_s1(self, args);
    case 1:
      return PyvtkExecutive_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInputPorts();
      }
    else
      {
      tempr = op->vtkExecutive::GetNumberOfInputPorts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputPorts();
      }
    else
      {
      tempr = op->vtkExecutive::GetNumberOfOutputPorts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInputConnections(temp0);
      }
    else
      {
      tempr = op->vtkExecutive::GetNumberOfInputConnections(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetOutputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputInformation(temp0);
      }
    else
      {
      tempr = op->vtkExecutive::GetOutputInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetOutputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkInformationVector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputInformation();
      }
    else
      {
      tempr = op->vtkExecutive::GetOutputInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetOutputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkExecutive_GetOutputInformation_s1(self, args);
    case 0:
      return PyvtkExecutive_GetOutputInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputInformation");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetInputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExecutive::GetInputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetInputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkInformationVector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputInformation(temp0);
      }
    else
      {
      tempr = op->vtkExecutive::GetInputInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetInputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExecutive_GetInputInformation_s1(self, args);
    case 1:
      return PyvtkExecutive_GetInputInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInputInformation");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetInputExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  vtkExecutive *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputExecutive(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExecutive::GetInputExecutive(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetOutputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputData(temp0);
      }
    else
      {
      tempr = op->vtkExecutive::GetOutputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_SetOutputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetOutputData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExecutive::SetOutputData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_SetOutputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutputData(temp0, temp1);
      }
    else
      {
      op->vtkExecutive::SetOutputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_SetOutputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkExecutive_SetOutputData_s1(self, args);
    case 2:
      return PyvtkExecutive_SetOutputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputData");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExecutive::GetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetProducerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkDataObject *temp0 = NULL;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProducerPort(temp0);
      }
    else
      {
      tempr = op->vtkExecutive::GetProducerPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_SetSharedOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkInformationVector *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      op->SetSharedOutputInformation(temp0);
      }
    else
      {
      op->vtkExecutive::SetSharedOutputInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_PRODUCER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRODUCER");

  vtkInformationExecutivePortKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::PRODUCER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_CONSUMERS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONSUMERS");

  vtkInformationExecutivePortVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::CONSUMERS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_FROM_OUTPUT_PORT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FROM_OUTPUT_PORT");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::FROM_OUTPUT_PORT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_BEFORE_FORWARD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_BEFORE_FORWARD");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::ALGORITHM_BEFORE_FORWARD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_AFTER_FORWARD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_AFTER_FORWARD");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::ALGORITHM_AFTER_FORWARD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_DIRECTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_DIRECTION");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::ALGORITHM_DIRECTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_FORWARD_DIRECTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FORWARD_DIRECTION");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::FORWARD_DIRECTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_KEYS_TO_COPY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "KEYS_TO_COPY");

  vtkInformationKeyVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutive::KEYS_TO_COPY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExecutive_Methods[] = {
  {(char*)"GetClassName", PyvtkExecutive_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExecutive_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExecutive_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExecutive\nC++: vtkExecutive *NewInstance()\n\n"},
  {(char*)"GetAlgorithm", PyvtkExecutive_GetAlgorithm, 1,
   (char*)"V.GetAlgorithm() -> vtkAlgorithm\nC++: vtkAlgorithm *GetAlgorithm()\n\nGet the algorithm to which this executive has been assigned.\n"},
  {(char*)"Update", PyvtkExecutive_Update, 1,
   (char*)"V.Update() -> int\nC++: virtual int Update()\nV.Update(int) -> int\nC++: virtual int Update(int port)\n\nBring the algorithm's outputs up-to-date.  Returns 1 for success\nand 0 for failure.\n"},
  {(char*)"GetNumberOfInputPorts", PyvtkExecutive_GetNumberOfInputPorts, 1,
   (char*)"V.GetNumberOfInputPorts() -> int\nC++: int GetNumberOfInputPorts()\n\nGet the number of input/output ports for the algorithm associated\nwith this executive.  Returns 0 if no algorithm is set.\n"},
  {(char*)"GetNumberOfOutputPorts", PyvtkExecutive_GetNumberOfOutputPorts, 1,
   (char*)"V.GetNumberOfOutputPorts() -> int\nC++: int GetNumberOfOutputPorts()\n\nGet the number of input/output ports for the algorithm associated\nwith this executive.  Returns 0 if no algorithm is set.\n"},
  {(char*)"GetNumberOfInputConnections", PyvtkExecutive_GetNumberOfInputConnections, 1,
   (char*)"V.GetNumberOfInputConnections(int) -> int\nC++: int GetNumberOfInputConnections(int port)\n\nGet the number of input connections on the given port.\n"},
  {(char*)"GetOutputInformation", PyvtkExecutive_GetOutputInformation, 1,
   (char*)"V.GetOutputInformation(int) -> vtkInformation\nC++: virtual vtkInformation *GetOutputInformation(int port)\nV.GetOutputInformation() -> vtkInformationVector\nC++: vtkInformationVector *GetOutputInformation()\n\nGet the pipeline information object for the given output port.\n"},
  {(char*)"GetInputInformation", PyvtkExecutive_GetInputInformation, 1,
   (char*)"V.GetInputInformation(int, int) -> vtkInformation\nC++: vtkInformation *GetInputInformation(int port, int connection)\nV.GetInputInformation(int) -> vtkInformationVector\nC++: vtkInformationVector *GetInputInformation(int port)\n\nGet the pipeline information for the given input connection.\n"},
  {(char*)"GetInputExecutive", PyvtkExecutive_GetInputExecutive, 1,
   (char*)"V.GetInputExecutive(int, int) -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive(int port, int connection)\n\nGet the executive managing the given input connection.\n"},
  {(char*)"GetOutputData", PyvtkExecutive_GetOutputData, 1,
   (char*)"V.GetOutputData(int) -> vtkDataObject\nC++: virtual vtkDataObject *GetOutputData(int port)\n\nGet/Set the data object for an output port of the algorithm.\n"},
  {(char*)"SetOutputData", PyvtkExecutive_SetOutputData, 1,
   (char*)"V.SetOutputData(int, vtkDataObject, vtkInformation)\nC++: virtual void SetOutputData(int port, vtkDataObject *,\n    vtkInformation *info)\nV.SetOutputData(int, vtkDataObject)\nC++: virtual void SetOutputData(int port, vtkDataObject *)\n\nGet/Set the data object for an output port of the algorithm.\n"},
  {(char*)"GetInputData", PyvtkExecutive_GetInputData, 1,
   (char*)"V.GetInputData(int, int) -> vtkDataObject\nC++: virtual vtkDataObject *GetInputData(int port, int connection)\n\nGet the data object for an input port of the algorithm.\n"},
  {(char*)"GetProducerPort", PyvtkExecutive_GetProducerPort, 1,
   (char*)"V.GetProducerPort(vtkDataObject) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetProducerPort(vtkDataObject *)\n\nGet the output port that produces the given data object.\n"},
  {(char*)"SetSharedOutputInformation", PyvtkExecutive_SetSharedOutputInformation, 1,
   (char*)"V.SetSharedOutputInformation(vtkInformationVector)\nC++: void SetSharedOutputInformation(\n    vtkInformationVector *outInfoVec)\n\nSet a pointer to an outside instance of input or output\ninformation vectors.  No references are held to the given\nvectors, and setting this does not change the executive object\nmodification time.  This is a preliminary interface to use in\nimplementing filters with internal pipelines, and may change\nwithout notice when a future interface is created.\n"},
  {(char*)"PRODUCER", PyvtkExecutive_PRODUCER, 1,
   (char*)"V.PRODUCER() -> vtkInformationExecutivePortKey\nC++: static vtkInformationExecutivePortKey *PRODUCER()\n\nInformation key to store the executive/port number producing an\ninformation object.\n"},
  {(char*)"CONSUMERS", PyvtkExecutive_CONSUMERS, 1,
   (char*)"V.CONSUMERS() -> vtkInformationExecutivePortVectorKey\nC++: static vtkInformationExecutivePortVectorKey *CONSUMERS()\n\nInformation key to store the executive/port number pairs\nconsuming an information object.\n"},
  {(char*)"FROM_OUTPUT_PORT", PyvtkExecutive_FROM_OUTPUT_PORT, 1,
   (char*)"V.FROM_OUTPUT_PORT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FROM_OUTPUT_PORT()\n\nInformation key to store the output port number from which a\nrequest is made.\n"},
  {(char*)"ALGORITHM_BEFORE_FORWARD", PyvtkExecutive_ALGORITHM_BEFORE_FORWARD, 1,
   (char*)"V.ALGORITHM_BEFORE_FORWARD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_BEFORE_FORWARD()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"ALGORITHM_AFTER_FORWARD", PyvtkExecutive_ALGORITHM_AFTER_FORWARD, 1,
   (char*)"V.ALGORITHM_AFTER_FORWARD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_AFTER_FORWARD()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"ALGORITHM_DIRECTION", PyvtkExecutive_ALGORITHM_DIRECTION, 1,
   (char*)"V.ALGORITHM_DIRECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_DIRECTION()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"FORWARD_DIRECTION", PyvtkExecutive_FORWARD_DIRECTION, 1,
   (char*)"V.FORWARD_DIRECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FORWARD_DIRECTION()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"KEYS_TO_COPY", PyvtkExecutive_KEYS_TO_COPY, 1,
   (char*)"V.KEYS_TO_COPY() -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *KEYS_TO_COPY()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkExecutiveNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkExecutive_Methods,
    "vtkExecutive", modulename,
    NULL, NULL,
    PyvtkExecutive_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"RequestUpstream", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RequestDownstream", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BeforeForward", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"AfterForward", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkExecutive_Doc()
{
  static const char *docstring[] = {
    "vtkExecutive - Superclass for all pipeline executives in VTK.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExecutive is the superclass for all pipeline executives in VTK. A\nVTK executive is responsible for controlling one instance of\nvtkAlgorithm.  A pipeline consists of one or more executives that\ncontrol data flow.  Every reader, source, writer, or data processing\nalgorithm in the pipeline is implemented in an instance of\nvtkAlgorithm.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExecutive(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExecutiveNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExecutive", o) != 0)
    {
    Py_DECREF(o);
    }

}

