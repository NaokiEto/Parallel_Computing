// python wrapper for vtkTimePointUtility
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
#include "vtkTimePointUtility.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTimePointUtility(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTimePointUtility(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTimePointUtilityNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTimePointUtilityNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTimePointUtility_Doc();


static PyObject *
PyvtkTimePointUtility_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

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
      tempr = op->vtkTimePointUtility::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

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
      tempr = op->vtkTimePointUtility::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimePointUtility *op = static_cast<vtkTimePointUtility *>(vp);

  vtkTimePointUtility *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTimePointUtility::NewInstance();
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
PyvtkTimePointUtility_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTimePointUtility *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTimePointUtility::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_DateToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DateToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  unsigned long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkTimePointUtility::DateToTimePoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_TimeToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TimeToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  int temp3 = 0;
  unsigned long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    tempr = vtkTimePointUtility::TimeToTimePoint(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_DateTimeToTimePoint(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DateTimeToTimePoint");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6 = 0;
  unsigned long long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    tempr = vtkTimePointUtility::DateTimeToTimePoint(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDate(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDate");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkTimePointUtility::GetDate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTime");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    vtkTimePointUtility::GetTime(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDateTime(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateTime");

  unsigned long long temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = NULL;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    vtkTimePointUtility::GetDateTime(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(7, temp7);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetYear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetYear");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetYear(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMonth(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMonth");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetMonth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetDay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDay");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetDay(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetHour(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHour");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetHour(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMinute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMinute");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetMinute(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetSecond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSecond");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetSecond(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_GetMillisecond(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMillisecond");

  unsigned long long temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkTimePointUtility::GetMillisecond(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimePointUtility_TimePointToISO8601(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TimePointToISO8601");

  unsigned long long temp0;
  int temp1 = vtkTimePointUtility::ISO8601_DATETIME_MILLIS;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkTimePointUtility::TimePointToISO8601(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimePointUtility_Methods[] = {
  {(char*)"GetClassName", PyvtkTimePointUtility_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimePointUtility_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimePointUtility_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTimePointUtility\nC++: vtkTimePointUtility *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimePointUtility_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimePointUtility\nC++: vtkTimePointUtility *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DateToTimePoint", PyvtkTimePointUtility_DateToTimePoint, 1,
   (char*)"V.DateToTimePoint(int, int, int) -> int\nC++: static vtkTypeUInt64 DateToTimePoint(int year, int month,\n    int day)\n\nReturn the time point for 12:00am on a specified day.\n"},
  {(char*)"TimeToTimePoint", PyvtkTimePointUtility_TimeToTimePoint, 1,
   (char*)"V.TimeToTimePoint(int, int, int, int) -> int\nC++: static vtkTypeUInt64 TimeToTimePoint(int hour, int minute,\n    int second, int millis=0)\n\nReturn the time point for a time of day (the number of\nmilliseconds from 12:00am. The hour should be from 0-23.\n"},
  {(char*)"DateTimeToTimePoint", PyvtkTimePointUtility_DateTimeToTimePoint, 1,
   (char*)"V.DateTimeToTimePoint(int, int, int, int, int, int, int) -> int\nC++: static vtkTypeUInt64 DateTimeToTimePoint(int year, int month,\n     int day, int hour, int minute, int sec, int millis=0)\n\nReturn the time point for a date and time.\n"},
  {(char*)"GetDate", PyvtkTimePointUtility_GetDate, 1,
   (char*)"V.GetDate(int, int, int, int)\nC++: static void GetDate(vtkTypeUInt64 time, int &year,\n    int &month, int &day)\n\nRetrieve the year, month, and day of a time point. Everything but\nthe first argument are output parameters.\n"},
  {(char*)"GetTime", PyvtkTimePointUtility_GetTime, 1,
   (char*)"V.GetTime(int, int, int, int, int)\nC++: static void GetTime(vtkTypeUInt64 time, int &hour,\n    int &minute, int &second, int &millis)\n\nRetrieve the hour, minute, second, and milliseconds of a time\npoint. Everything but the first argument are output parameters.\n"},
  {(char*)"GetDateTime", PyvtkTimePointUtility_GetDateTime, 1,
   (char*)"V.GetDateTime(int, int, int, int, int, int, int, int)\nC++: static void GetDateTime(vtkTypeUInt64 time, int &year,\n    int &month, int &day, int &hour, int &minute, int &second,\n    int &millis)\n\nRetrieve the date and time of a time point. Everything but the\nfirst argument are output parameters.\n"},
  {(char*)"GetYear", PyvtkTimePointUtility_GetYear, 1,
   (char*)"V.GetYear(int) -> int\nC++: static int GetYear(vtkTypeUInt64 time)\n\nRetrieve the year from a time point.\n"},
  {(char*)"GetMonth", PyvtkTimePointUtility_GetMonth, 1,
   (char*)"V.GetMonth(int) -> int\nC++: static int GetMonth(vtkTypeUInt64 time)\n\nRetrieve the month from a time point.\n"},
  {(char*)"GetDay", PyvtkTimePointUtility_GetDay, 1,
   (char*)"V.GetDay(int) -> int\nC++: static int GetDay(vtkTypeUInt64 time)\n\nRetrieve the day of the month from a time point.\n"},
  {(char*)"GetHour", PyvtkTimePointUtility_GetHour, 1,
   (char*)"V.GetHour(int) -> int\nC++: static int GetHour(vtkTypeUInt64 time)\n\nRetrieve the hour of the day from the time point.\n"},
  {(char*)"GetMinute", PyvtkTimePointUtility_GetMinute, 1,
   (char*)"V.GetMinute(int) -> int\nC++: static int GetMinute(vtkTypeUInt64 time)\n\nRetrieve the number of minutes from the start of the last hour.\n"},
  {(char*)"GetSecond", PyvtkTimePointUtility_GetSecond, 1,
   (char*)"V.GetSecond(int) -> int\nC++: static int GetSecond(vtkTypeUInt64 time)\n\nRetrieve the number of seconds from the start of the last minute.\n"},
  {(char*)"GetMillisecond", PyvtkTimePointUtility_GetMillisecond, 1,
   (char*)"V.GetMillisecond(int) -> int\nC++: static int GetMillisecond(vtkTypeUInt64 time)\n\nRetrieve the milliseconds from the start of the last second.\n"},
  {(char*)"TimePointToISO8601", PyvtkTimePointUtility_TimePointToISO8601, 1,
   (char*)"V.TimePointToISO8601(int, int) -> string\nC++: static const char *TimePointToISO8601(vtkTypeUInt64,\n    int format=ISO8601_DATETIME_MILLIS)\n\nConverts a VTK timepoint into one of the following ISO8601\nformats.  The default format is ISO8601_DATETIME_MILLIS.\n\n<PRE> Type                      Format / Example 0\nISO8601_DATETIME_MILLIS [YYYY]-[MM]-[DD]T[hh]:[mm]:[ss].[SSS]\n                          2006-01-02T03:04:05.678 1\nISO8601_DATETIME        [YYYY]-[MM]-[DD]T[hh]:[mm]:[ss]\n                          2006-01-02T03:04:05 2 ISO8601_DATE     \n      [YYYY]-[MM]-[DD]\n                          2006-01-02 3 ISO8601_TIME_MILLIS    \n[hh]:[mm]:[ss].[SSS]\n                          03:04:05.678 4 ISO8601_TIME           \n[hh]:[mm]:[ss]\n                          03:04:05 </PRE>\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimePointUtility_StaticNew()
{
  return vtkTimePointUtility::New();
}

PyObject *PyVTKClass_vtkTimePointUtilityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimePointUtility_StaticNew,
    PyvtkTimePointUtility_Methods,
    "vtkTimePointUtility", modulename,
    NULL, NULL,
    PyvtkTimePointUtility_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"ISO8601_DATETIME_MILLIS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ISO8601_DATETIME", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ISO8601_DATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ISO8601_TIME_MILLIS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"ISO8601_TIME", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTimePointUtility_Doc()
{
  static const char *docstring[] = {
    "vtkTimePointUtility - performs common time operations\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTimePointUtility is provides methods to perform common time\noperations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimePointUtility(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimePointUtilityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimePointUtility", o) != 0)
    {
    Py_DECREF(o);
    }

}

