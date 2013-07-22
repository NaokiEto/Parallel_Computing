// python wrapper for vtkTimerLog
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
#include "vtkTimerLog.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTimerLog(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTimerLog(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTimerLogNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTimerLogNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTimerLog_Doc();


static PyObject *
PyvtkTimerLog_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

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
      tempr = op->vtkTimerLog::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

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
      tempr = op->vtkTimerLog::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  vtkTimerLog *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTimerLog::NewInstance();
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
PyvtkTimerLog_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTimerLog *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTimerLog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_SetLogging(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLogging");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::SetLogging(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetLogging(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLogging");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkTimerLog::GetLogging();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_LoggingOn(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LoggingOn");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::LoggingOn();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_LoggingOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LoggingOff");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::LoggingOff();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_SetMaxEntries(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMaxEntries");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::SetMaxEntries(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetMaxEntries(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaxEntries");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkTimerLog::GetMaxEntries();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_FormatAndMarkEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FormatAndMarkEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::FormatAndMarkEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_DumpLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DumpLog");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::DumpLog(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkStartEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkStartEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::MarkStartEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkEndEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkEndEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::MarkEndEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetNumberOfEvents(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfEvents");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkTimerLog::GetNumberOfEvents();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventIndent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIndent");

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimerLog::GetEventIndent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventWallTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventWallTime");

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimerLog::GetEventWallTime(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventString");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimerLog::GetEventString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkEvent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkEvent");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTimerLog::MarkEvent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_ResetLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResetLog");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::ResetLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_AllocateLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AllocateLog");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::AllocateLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_CleanupLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CleanupLog");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTimerLog::CleanupLog();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetUniversalTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUniversalTime");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkTimerLog::GetUniversalTime();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetCPUTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCPUTime");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkTimerLog::GetCPUTime();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_StartTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartTimer();
      }
    else
      {
      op->vtkTimerLog::StartTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_StopTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopTimer();
      }
    else
      {
      op->vtkTimerLog::StopTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimerLog_GetElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElapsedTime();
      }
    else
      {
      tempr = op->vtkTimerLog::GetElapsedTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTimerLog_GetCurrentTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentTime");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkTimerLog::GetCurrentTime();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkTimerLog_Methods[] = {
  {(char*)"GetClassName", PyvtkTimerLog_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimerLog_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimerLog_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTimerLog\nC++: vtkTimerLog *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimerLog_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimerLog\nC++: vtkTimerLog *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLogging", PyvtkTimerLog_SetLogging, 1,
   (char*)"V.SetLogging(int)\nC++: static void SetLogging(int v)\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"GetLogging", PyvtkTimerLog_GetLogging, 1,
   (char*)"V.GetLogging() -> int\nC++: static int GetLogging()\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"LoggingOn", PyvtkTimerLog_LoggingOn, 1,
   (char*)"V.LoggingOn()\nC++: static void LoggingOn()\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"LoggingOff", PyvtkTimerLog_LoggingOff, 1,
   (char*)"V.LoggingOff()\nC++: static void LoggingOff()\n\nThis flag will turn loging of events off or on. By default,\nlogging is on.\n"},
  {(char*)"SetMaxEntries", PyvtkTimerLog_SetMaxEntries, 1,
   (char*)"V.SetMaxEntries(int)\nC++: static void SetMaxEntries(int a)\n\nSet/Get the maximum number of entries allowed in the timer log\n"},
  {(char*)"GetMaxEntries", PyvtkTimerLog_GetMaxEntries, 1,
   (char*)"V.GetMaxEntries() -> int\nC++: static int GetMaxEntries()\n\nSet/Get the maximum number of entries allowed in the timer log\n"},
  {(char*)"FormatAndMarkEvent", PyvtkTimerLog_FormatAndMarkEvent, 1,
   (char*)"V.FormatAndMarkEvent(string)\nC++: static void FormatAndMarkEvent(const char *EventString, ...)\n\nRecord a timing event.  The event is represented by a formatted\nstring.\n"},
  {(char*)"DumpLog", PyvtkTimerLog_DumpLog, 1,
   (char*)"V.DumpLog(string)\nC++: static void DumpLog(const char *filename)\n\nWrite the timing table out to a file.  Calculate some helpful\nstatistics (deltas and  percentages) in the process.\n"},
  {(char*)"MarkStartEvent", PyvtkTimerLog_MarkStartEvent, 1,
   (char*)"V.MarkStartEvent(string)\nC++: static void MarkStartEvent(const char *EventString)\n\nI want to time events, so I am creating this interface to mark\nevents that have a start and an end.  These events can be,\nnested. The standard Dumplog ignores the indents.\n"},
  {(char*)"MarkEndEvent", PyvtkTimerLog_MarkEndEvent, 1,
   (char*)"V.MarkEndEvent(string)\nC++: static void MarkEndEvent(const char *EventString)\n\nI want to time events, so I am creating this interface to mark\nevents that have a start and an end.  These events can be,\nnested. The standard Dumplog ignores the indents.\n"},
  {(char*)"GetNumberOfEvents", PyvtkTimerLog_GetNumberOfEvents, 1,
   (char*)"V.GetNumberOfEvents() -> int\nC++: static int GetNumberOfEvents()\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"GetEventIndent", PyvtkTimerLog_GetEventIndent, 1,
   (char*)"V.GetEventIndent(int) -> int\nC++: static int GetEventIndent(int i)\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"GetEventWallTime", PyvtkTimerLog_GetEventWallTime, 1,
   (char*)"V.GetEventWallTime(int) -> float\nC++: static double GetEventWallTime(int i)\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"GetEventString", PyvtkTimerLog_GetEventString, 1,
   (char*)"V.GetEventString(int) -> string\nC++: static const char *GetEventString(int i)\n\nProgramatic access to events.  Indexed from 0 to num-1.\n"},
  {(char*)"MarkEvent", PyvtkTimerLog_MarkEvent, 1,
   (char*)"V.MarkEvent(string)\nC++: static void MarkEvent(const char *EventString)\n\nRecord a timing event and capture wall time and cpu ticks.\n"},
  {(char*)"ResetLog", PyvtkTimerLog_ResetLog, 1,
   (char*)"V.ResetLog()\nC++: static void ResetLog()\n\nClear the timing table.  walltime and cputime will also be set to\nzero when the first new event is recorded.\n"},
  {(char*)"AllocateLog", PyvtkTimerLog_AllocateLog, 1,
   (char*)"V.AllocateLog()\nC++: static void AllocateLog()\n\nAllocate timing table with MaxEntries elements.\n"},
  {(char*)"CleanupLog", PyvtkTimerLog_CleanupLog, 1,
   (char*)"V.CleanupLog()\nC++: static void CleanupLog()\n\nRemove timer log.\n"},
  {(char*)"GetUniversalTime", PyvtkTimerLog_GetUniversalTime, 1,
   (char*)"V.GetUniversalTime() -> float\nC++: static double GetUniversalTime()\n\nReturns the elapsed number of seconds since January 1, 1970. This\nis also called Universal Coordinated Time.\n"},
  {(char*)"GetCPUTime", PyvtkTimerLog_GetCPUTime, 1,
   (char*)"V.GetCPUTime() -> float\nC++: static double GetCPUTime()\n\nReturns the CPU time for this process On Win32 platforms this\nactually returns wall time.\n"},
  {(char*)"StartTimer", PyvtkTimerLog_StartTimer, 1,
   (char*)"V.StartTimer()\nC++: void StartTimer()\n\nSet the StartTime to the current time. Used with\nGetElapsedTime().\n"},
  {(char*)"StopTimer", PyvtkTimerLog_StopTimer, 1,
   (char*)"V.StopTimer()\nC++: void StopTimer()\n\nSets EndTime to the current time. Used with GetElapsedTime().\n"},
  {(char*)"GetElapsedTime", PyvtkTimerLog_GetElapsedTime, 1,
   (char*)"V.GetElapsedTime() -> float\nC++: double GetElapsedTime()\n\nReturns the difference between StartTime and EndTime as a\ndoubleing point value indicating the elapsed time in seconds.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetCurrentTime", PyvtkTimerLog_GetCurrentTime, 1,
   (char*)"V.GetCurrentTime() -> float\nC++: static double GetCurrentTime()\n\n@deprecated Replaced by vtkTimerLog::GetUniversalTime() as of VTK\n5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimerLog_StaticNew()
{
  return vtkTimerLog::New();
}

PyObject *PyVTKClass_vtkTimerLogNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimerLog_StaticNew,
    PyvtkTimerLog_Methods,
    "vtkTimerLog", modulename,
    NULL, NULL,
    PyvtkTimerLog_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTimerLog_Doc()
{
  static const char *docstring[] = {
    "vtkTimerLog - Timer support and logging\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTimerLog contains walltime and cputime measurements associated\nwith a given event.  These results can be later analyzed when \"dumping\nout\" the table.\n\nIn addition, vtkTimerLog allows the user to simply get the current\ntime, and to start/stop a simple timer separate from the timing table\nlogging.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimerLog(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimerLogNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimerLog", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(40);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LOG_EVENT_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

}

