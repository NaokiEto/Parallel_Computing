// python wrapper for vtkOutputWindow
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
#include "vtkOutputWindow.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOutputWindow(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOutputWindow(PyObject *, const char *); }
#endif

static const char **PyvtkOutputWindowCleanup_Doc();

static PyMethodDef PyvtkOutputWindowCleanup_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkOutputWindowCleanup_Type
extern PyTypeObject PyvtkOutputWindowCleanup_Type;
#define DECLARED_PyvtkOutputWindowCleanup_Type
#endif


static PyObject *
PyvtkOutputWindowCleanup_vtkOutputWindowCleanup(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOutputWindowCleanup");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkOutputWindowCleanup *op = new vtkOutputWindowCleanup();

    result = PyVTKSpecialObject_New("vtkOutputWindowCleanup", op);
    }

  return result;
}

static PyMethodDef PyvtkOutputWindowCleanup_vtkOutputWindowCleanup_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkOutputWindowCleanup_NewMethod = \
{ (char*)"vtkOutputWindowCleanup", PyvtkOutputWindowCleanup_vtkOutputWindowCleanup, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkOutputWindowCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkOutputWindowCleanup_vtkOutputWindowCleanup(NULL, args);
}
#endif

static void PyvtkOutputWindowCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkOutputWindowCleanup *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkOutputWindowCleanup_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkOutputWindowCleanup_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkOutputWindowCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOutputWindowCleanup_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkOutputWindowCleanup_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkOutputWindowCleanup_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkOutputWindowCleanup_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkOutputWindowCleanup_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkOutputWindowCleanup(*static_cast<const vtkOutputWindowCleanup*>(obj));
    }
  return 0;
}

static PyObject *PyvtkOutputWindowCleanup_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkOutputWindowCleanup_Type,
    PyvtkOutputWindowCleanup_Methods,
    PyvtkOutputWindowCleanup_vtkOutputWindowCleanup_Methods,
    &PyvtkOutputWindowCleanup_NewMethod,
    PyvtkOutputWindowCleanup_Doc(), &PyvtkOutputWindowCleanup_CCopy);
}

const char **PyvtkOutputWindowCleanup_Doc()
{
  static const char *docstring[] = {
    "vtkOutputWindow - base class for writing debug output to a console\n\n",
    "This class is used to encapsulate all text output, so that it will\nwork with operating systems that have a stdout and stderr, and ones\nthat do not.  (i.e windows does not).  Sub-classes can be provided\nwhich can redirect the output to a window.\n\n",
    "V.vtkOutputWindowCleanup()\nC++: vtkOutputWindowCleanup()\n",
    NULL
  };

  return docstring;
}

#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOutputWindowNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOutputWindowNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOutputWindow_Doc();


static PyObject *
PyvtkOutputWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

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
      tempr = op->vtkOutputWindow::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

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
      tempr = op->vtkOutputWindow::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  vtkOutputWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOutputWindow::NewInstance();
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
PyvtkOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOutputWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  vtkOutputWindow *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkOutputWindow::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkOutputWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOutputWindow"))
    {
    vtkOutputWindow::SetInstance(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayErrorText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayErrorText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayWarningText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayWarningText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayGenericWarningText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayGenericWarningText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayDebugText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayDebugText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PromptUserOn();
      }
    else
      {
      op->vtkOutputWindow::PromptUserOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PromptUserOff();
      }
    else
      {
      op->vtkOutputWindow::PromptUserOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetPromptUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromptUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPromptUser(temp0);
      }
    else
      {
      op->vtkOutputWindow::SetPromptUser(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOutputWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkOutputWindow_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutputWindow_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutputWindow_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOutputWindow\nC++: vtkOutputWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutputWindow_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutputWindow\nC++: vtkOutputWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkOutputWindow_GetInstance, 1,
   (char*)"V.GetInstance() -> vtkOutputWindow\nC++: static vtkOutputWindow *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {(char*)"SetInstance", PyvtkOutputWindow_SetInstance, 1,
   (char*)"V.SetInstance(vtkOutputWindow)\nC++: static void SetInstance(vtkOutputWindow *instance)\n\nSupply a user defined output window. Call ->Delete() on the\nsupplied instance after setting it.\n"},
  {(char*)"DisplayText", PyvtkOutputWindow_DisplayText, 1,
   (char*)"V.DisplayText(string)\nC++: virtual void DisplayText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayErrorText", PyvtkOutputWindow_DisplayErrorText, 1,
   (char*)"V.DisplayErrorText(string)\nC++: virtual void DisplayErrorText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayWarningText", PyvtkOutputWindow_DisplayWarningText, 1,
   (char*)"V.DisplayWarningText(string)\nC++: virtual void DisplayWarningText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayGenericWarningText", PyvtkOutputWindow_DisplayGenericWarningText, 1,
   (char*)"V.DisplayGenericWarningText(string)\nC++: virtual void DisplayGenericWarningText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayDebugText", PyvtkOutputWindow_DisplayDebugText, 1,
   (char*)"V.DisplayDebugText(string)\nC++: virtual void DisplayDebugText(const char *)\n\n"},
  {(char*)"PromptUserOn", PyvtkOutputWindow_PromptUserOn, 1,
   (char*)"V.PromptUserOn()\nC++: void PromptUserOn()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n"},
  {(char*)"PromptUserOff", PyvtkOutputWindow_PromptUserOff, 1,
   (char*)"V.PromptUserOff()\nC++: void PromptUserOff()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n"},
  {(char*)"SetPromptUser", PyvtkOutputWindow_SetPromptUser, 1,
   (char*)"V.SetPromptUser(int)\nC++: void SetPromptUser(int a)\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutputWindow_StaticNew()
{
  return vtkOutputWindow::New();
}

PyObject *PyVTKClass_vtkOutputWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutputWindow_StaticNew,
    PyvtkOutputWindow_Methods,
    "vtkOutputWindow", modulename,
    NULL, NULL,
    PyvtkOutputWindow_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOutputWindow_Doc()
{
  static const char *docstring[] = {
    "vtkOutputWindow - base class for writing debug output to a console\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to encapsulate all text output, so that it will\nwork with operating systems that have a stdout and stderr, and ones\nthat do not.  (i.e windows does not).  Sub-classes can be provided\nwhich can redirect the output to a window.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutputWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkOutputWindowCleanup_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutputWindowCleanup", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkOutputWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutputWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

