// python wrapper for vtkMPIController
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
#include "vtkMPIController.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMPIController(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMPIController(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMPIControllerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMPIControllerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkMPIController_Doc();


static PyObject *
PyvtkMPIController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      tempr = op->vtkMPIController::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

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
      tempr = op->vtkMPIController::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkMPIController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMPIController::NewInstance();
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
PyvtkMPIController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMPIController *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMPIController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkMPIController::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkMPIController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMPIController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Finalize(temp0);
      }
    else
      {
      op->vtkMPIController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMPIController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMPIController_Finalize_s1(self, args);
    case 1:
      return PyvtkMPIController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkMPIController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkMPIController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkMPIController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkMPIController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_ErrorString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ErrorString");

  int temp0;
  char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkMPIController::ErrorString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkMPICommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkMPIController::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_CreateSubController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  vtkProcessGroup *temp0 = NULL;
  vtkMPIController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateSubController(temp0);
      }
    else
      {
      tempr = op->vtkMPIController::CreateSubController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_PartitionController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PartitionController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIController *op = static_cast<vtkMPIController *>(vp);

  int temp0;
  int temp1;
  vtkMPIController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->PartitionController(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMPIController::PartitionController(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_GetProcessorName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessorName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMPIController::GetProcessorName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_SetUseSsendForRMI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseSsendForRMI");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMPIController::SetUseSsendForRMI(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIController_GetUseSsendForRMI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseSsendForRMI");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMPIController::GetUseSsendForRMI();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPIController_Methods[] = {
  {(char*)"GetClassName", PyvtkMPIController_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPIController_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPIController_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMPIController\nC++: vtkMPIController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPIController_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPIController\nC++: vtkMPIController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkMPIController_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nSame as Initialize(0, 0, 1). Mainly for calling from wrapped\nlanguages.\n"},
  {(char*)"Finalize", PyvtkMPIController_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int finalizedExternally)\n\nThis method is for cleaning up and has to be called before the\nend of the program if MPI was initialized with Initialize()\n"},
  {(char*)"SingleMethodExecute", PyvtkMPIController_SingleMethodExecute, 1,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.\n"},
  {(char*)"MultipleMethodExecute", PyvtkMPIController_MultipleMethodExecute, 1,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {(char*)"CreateOutputWindow", PyvtkMPIController_CreateOutputWindow, 1,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {(char*)"ErrorString", PyvtkMPIController_ErrorString, 1,
   (char*)"V.ErrorString(int) -> string\nC++: static char *ErrorString(int err)\n\nGiven an MPI error code, return a string which contains an error\nmessage. This string has to be freed by the user.\n"},
  {(char*)"SetCommunicator", PyvtkMPIController_SetCommunicator, 1,
   (char*)"V.SetCommunicator(vtkMPICommunicator)\nC++: void SetCommunicator(vtkMPICommunicator *comm)\n\nMPIController uses this communicator in all sends and receives.\nBy default, MPI_COMM_WORLD is used. THIS SHOULD ONLY BE CALLED ON\nTHE PROCESSES INCLUDED IN THE COMMUNICATOR. FOR EXAMPLE, IF THE\nCOMMUNICATOR CONTAINES PROCESSES 0 AND 1, INVOKING THIS METHOD ON\nANY OTHER PROCESS WILL CAUSE AN MPI ERROR AND POSSIBLY LEAD TO A\nCRASH.\n"},
  {(char*)"CreateSubController", PyvtkMPIController_CreateSubController, 1,
   (char*)"V.CreateSubController(vtkProcessGroup) -> vtkMPIController\nC++: virtual vtkMPIController *CreateSubController(\n    vtkProcessGroup *group)\n\n"},
  {(char*)"PartitionController", PyvtkMPIController_PartitionController, 1,
   (char*)"V.PartitionController(int, int) -> vtkMPIController\nC++: virtual vtkMPIController *PartitionController(int localColor,\n     int localKey)\n\n"},
  {(char*)"GetProcessorName", PyvtkMPIController_GetProcessorName, 1,
   (char*)"V.GetProcessorName() -> string\nC++: static const char *GetProcessorName()\n\n"},
  {(char*)"SetUseSsendForRMI", PyvtkMPIController_SetUseSsendForRMI, 1,
   (char*)"V.SetUseSsendForRMI(int)\nC++: static void SetUseSsendForRMI(int use_send)\n\nWhen set to 1, TriggerRMI uses Ssend() instead of Send() calls.\nOff (0) by default.\n"},
  {(char*)"GetUseSsendForRMI", PyvtkMPIController_GetUseSsendForRMI, 1,
   (char*)"V.GetUseSsendForRMI() -> int\nC++: static int GetUseSsendForRMI()\n\nWhen set to 1, TriggerRMI uses Ssend() instead of Send() calls.\nOff (0) by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPIController_StaticNew()
{
  return vtkMPIController::New();
}

PyObject *PyVTKClass_vtkMPIControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPIController_StaticNew,
    PyvtkMPIController_Methods,
    "vtkMPIController", modulename,
    NULL, NULL,
    PyvtkMPIController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));
  return cls;
}

const char **PyvtkMPIController_Doc()
{
  static const char *docstring[] = {
    "vtkMPIController - Process communication using MPI\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "vtkMPIController is a concrete class which implements the abstract\nmulti-process control methods defined in vtkMultiProcessController\nusing MPI (Message Passing Interface) cf. Using MPI / Portable\nParallel Programming with the Message-Passing Interface, Gropp et al,\nMIT Press. It also provide functionality specific to MPI and not\npresent in vtkMultiProcessController. Before any MPI communication\nc",
    "an occur Initialize() must be called by all processes. It is\nrequired to be called once, controllers created after this need not\ncall Initialize(). At the end of the program Finalize() must be\ncalled by all processes.\n\nThe use of user-defined communicators are supported with the\nCreateSubController method.  Note that a duplicate of the user\ndefined communicator is used for internal communications ",
    "(RMIs). \nThis communicator has the same properties as the user one except that\nit has a new context which prevents the two communicators from\ninterfering with each other.\n\nSee Also:\n\nvtkOutputPort vtkInputPort  vtkMultiProcessController\nvtkMPICommunicator vtkProcessGroup\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPIController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPIControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPIController", o) != 0)
    {
    Py_DECREF(o);
    }

}

