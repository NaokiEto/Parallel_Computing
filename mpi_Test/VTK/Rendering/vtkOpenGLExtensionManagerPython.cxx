// python wrapper for vtkOpenGLExtensionManager
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
#include "vtkOpenGLExtensionManager.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLExtensionManager(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLExtensionManager(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLExtensionManagerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLExtensionManagerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOpenGLExtensionManager_Doc();


static PyObject *
PyvtkOpenGLExtensionManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

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
      tempr = op->vtkOpenGLExtensionManager::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

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
      tempr = op->vtkOpenGLExtensionManager::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  vtkOpenGLExtensionManager *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLExtensionManager::NewInstance();
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
PyvtkOpenGLExtensionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLExtensionManager *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLExtensionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderWindow();
      }
    else
      {
      tempr = op->vtkOpenGLExtensionManager::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkOpenGLExtensionManager::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_GetExtensionsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensionsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtensionsString();
      }
    else
      {
      tempr = op->vtkOpenGLExtensionManager::GetExtensionsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_ExtensionSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtensionSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ExtensionSupported(temp0);
      }
    else
      {
      tempr = op->vtkOpenGLExtensionManager::ExtensionSupported(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadExtension(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::LoadExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadSupportedExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadSupportedExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->LoadSupportedExtension(temp0);
      }
    else
      {
      tempr = op->vtkOpenGLExtensionManager::LoadSupportedExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadCorePromotedExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCorePromotedExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadCorePromotedExtension(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::LoadCorePromotedExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLExtensionManager_LoadAsARBExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadAsARBExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLExtensionManager *op = static_cast<vtkOpenGLExtensionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadAsARBExtension(temp0);
      }
    else
      {
      op->vtkOpenGLExtensionManager::LoadAsARBExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLExtensionManager_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLExtensionManager_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLExtensionManager_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLExtensionManager_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLExtensionManager_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderWindow", PyvtkOpenGLExtensionManager_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet/Get the render window to query extensions on.  If set to\nnull, justs queries the current render window.\n"},
  {(char*)"SetRenderWindow", PyvtkOpenGLExtensionManager_SetRenderWindow, 1,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *renwin)\n\nSet/Get the render window to query extensions on.  If set to\nnull, justs queries the current render window.\n"},
  {(char*)"Update", PyvtkOpenGLExtensionManager_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdates the extensions string.\n"},
  {(char*)"GetExtensionsString", PyvtkOpenGLExtensionManager_GetExtensionsString, 1,
   (char*)"V.GetExtensionsString() -> string\nC++: char *GetExtensionsString()\n\nReturns a string listing all available extensions.  Call Update\nfirst to validate this string.\n"},
  {(char*)"ExtensionSupported", PyvtkOpenGLExtensionManager_ExtensionSupported, 1,
   (char*)"V.ExtensionSupported(string) -> int\nC++: virtual int ExtensionSupported(const char *name)\n\nReturns true if the extension is supported, false otherwise.\n"},
  {(char*)"LoadExtension", PyvtkOpenGLExtensionManager_LoadExtension, 1,
   (char*)"V.LoadExtension(string)\nC++: virtual void LoadExtension(const char *name)\n\nLoads all the functions associated with the given extension into\nthe appropriate static members of vtkgl. This method emits a\nwarning if the requested extension is not supported. It emits an\nerror if the extension does not load successfully.\n"},
  {(char*)"LoadSupportedExtension", PyvtkOpenGLExtensionManager_LoadSupportedExtension, 1,
   (char*)"V.LoadSupportedExtension(string) -> int\nC++: virtual int LoadSupportedExtension(const char *name)\n\nReturns true if the extension is supported and loaded\nsuccessfully, false otherwise. This method will \"fail\nsilently/gracefully\" if the extension is not supported or does\nnot load properly. It emits neither warnings nor errors. It is up\nto the caller to determine if the extension loaded properly by\npaying attention to the return value.\n"},
  {(char*)"LoadCorePromotedExtension", PyvtkOpenGLExtensionManager_LoadCorePromotedExtension, 1,
   (char*)"V.LoadCorePromotedExtension(string)\nC++: virtual void LoadCorePromotedExtension(const char *name)\n\nLoads all the functions associated with the given core-promoted\nextension into the appropriate static members of vtkgl associated\nwith the OpenGL version that promoted the extension as a core\nfeature. This method emits a warning if the requested extension\nis not supported. It emits an error if the extension does not\nload successfully.\n\nFor instance, extension GL_ARB_multitexture was promoted as a\ncore feature into OpenGL 1.3. An implementation that uses this\nfeature has to (IN THIS ORDER), check if OpenGL 1.3 is supported\nwith ExtensionSupported(\"GL_VERSION_1_3\"), if true, load the\nextension with LoadExtension(\"GL_VERSION_1_3\"). If false, test\nfor the extension with\nExtensionSupported(\"GL_ARB_multitexture\"),if true load the\nextension with this method\nLoadCorePromotedExtension(\"GL_ARB_multitexture\"). If any of those\nloading stage succeeded, use vtgl::ActiveTexture() in any case,\nNOT vtgl::ActiveTextureARB(). This method avoids the use of if\nstatements everywhere in implementations using core-promoted\nextensions. Without this method, the implementation code should\nlook like:int\nopengl_1_3=extensions->ExtensionSupported(\"GL_VERSION_1_3\");\nif(opengl_1_3)\n{\n  extensions->LoadExtension(\"GL_VERSION_1_3\");\n}\nelse\n{\n if(extensions->ExtensionSupported(\"GL_ARB_multitexture\"))\n {\n  extensions->LoadCorePromotedExtension(\"GL_ARB_multitexture\");\n }\n else\n {\n  vtkErrorMacro(\"Required multitexture feature is not\nsupported!\");\n }\n}\n...\nif(opengl_1_3)\n{\n vtkgl::ActiveTexture(vtkgl::TEXTURE0)\n}\nelse\n{\n vtkgl::ActiveTextureARB(vtkgl::TEXTURE0_ARB)\n}\nThanks to this method, the code looks like:int\nopengl_1_3=extensions->ExtensionSupported(\"GL_VERSION_1_3\");\nif(opengl_1_3)\n{\n  extensions->LoadExtension(\"GL_VERSION_1_3\");\n}\nelse\n{\n if(extensions->ExtensionSupported(\"GL_ARB_multitexture\"))\n {\n  extensions->LoadCorePromotedExtension(\" ...\n [Truncated]\n"},
  {(char*)"LoadAsARBExtension", PyvtkOpenGLExtensionManager_LoadAsARBExtension, 1,
   (char*)"V.LoadAsARBExtension(string)\nC++: virtual void LoadAsARBExtension(const char *name)\n\nSimilar to LoadCorePromotedExtension(). It loads an EXT extension\ninto the pointers of its ARB equivalent.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLExtensionManager_StaticNew()
{
  return vtkOpenGLExtensionManager::New();
}

PyObject *PyVTKClass_vtkOpenGLExtensionManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLExtensionManager_StaticNew,
    PyvtkOpenGLExtensionManager_Methods,
    "vtkOpenGLExtensionManager", modulename,
    NULL, NULL,
    PyvtkOpenGLExtensionManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOpenGLExtensionManager_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLExtensionManager - Interface class for querying and using\nOpenGL extensions.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOpenGLExtensionManager acts as an interface to OpenGL extensions. \nIt provides methods to query OpenGL extensions on the current or a\ngiven render window and to load extension function pointers. \nCurrently does not support GLU extensions since the GLU library is\nnot linked to VTK.\n\nBefore using vtkOpenGLExtensionManager, an OpenGL context must be\ncreated. This is generally done with a vtkRender",
    "Window.  Note that\nsimply creating the vtkRenderWindow is not sufficient.  Usually you\nhave to call Render before the actual OpenGL context is created.  You\ncan specify the RenderWindow with the SetRenderWindow\nmethod.vtkOpenGLExtensionManager *extensions =\nvtkOpenGLExtensionManager::New();\nextensions->SetRenderWindow(renwin);\nIf no vtkRenderWindow is specified, the current OpenGL context (if\nany)",
    " is used.\n\nGenerally speaking, when using OpenGL extensions, you will need an\nvtkOpenGLExtensionManager and the prototypes defined in\nvtkgl.h.#include \"vtkOpenGLExtensionManager.h\"\n#include \"vtkgl.h\"\nThe vtkgl.h include file contains all the constants and function\n    pointers required for using OpenGL extensions in a portable and\n    namespace safe way.  vtkgl.h is built from parsed glext.h,\n    ",
    "glxext.h, and wglext.h files.  Snapshots of these files are\n    distributed with VTK, but you can also set CMake options to use\n    other files.\n\nTo use an OpenGL extension, you first need to make an instance of\nvtkOpenGLExtensionManager and give it a vtkRenderWindow.  You can\nthen query the vtkOpenGLExtensionManager to see if the extension is\nsupported with the ExtensionSupported method.  Valid n",
    "ames for\nextensions are given in the OpenGL extension registry at\nhttp://www.opengl.org/registry/ . You can also grep vtkgl.h (which\nwill be in the binary build directory if VTK is not installed) for\nappropriate names.  There are also special extensions GL_VERSION_X_X\n(where X_X is replaced with a major and minor version, respectively)\nwhich contain all the constants and functions for OpenGL versi",
    "ons for\nwhich the gl.h header file is of an older version than the driver.\n\nif (   !extensions->ExtensionSupported(\"GL_VERSION_1_2\")\n    || !extensions->ExtensionSupported(\"GL_ARB_multitexture\") ) {\n  {\n  vtkErrorMacro(\"Required extensions not supported!\");\n  }\n\nOnce you have verified that the extensions you want exist, before you\nuse them you have to load them with the LoadExtension method.\n\nexte",
    "nsions->LoadExtension(\"GL_VERSION_1_2\");\nextensions->LoadExtension(\"GL_ARB_multitexture\");\n\nAlternatively, you can use the LoadSupportedExtension method, which\nchecks whether the requested extension is supported and, if so, loads\nit. The LoadSupportedExtension method will not raise any errors or\nwarnings if it fails, so it is important for callers to pay attention\nto the return value.\n\nif (   exte",
    "nsions->LoadSupportedExtension(\"GL_VERSION_1_2\")\n    && extensions->LoadSupportedExtension(\"GL_ARB_multitexture\") ) {\n  {\n  vtkgl::ActiveTexture(vtkgl::TEXTURE0_ARB);\n  }\nelse\n  {\n  vtkErrorMacro(\"Required extensions could not be loaded!\");\n  }\n\nOnce you have queried and loaded all of the extensions you need, you\ncan delete the vtkOpenGLExtensionManager.  To use a constant of an\nextension, simply ",
    "replace the \"GL_\" prefix with \"vtkgl::\".  Likewise,\nreplace the \"gl\" prefix of functions with \"vtkgl::\".  In rare cases,\nan extension will add a type. In this case, add vtkgl:: to the type\n(i.e. vtkgl::GLchar).\n\nextensions->Delete();\n...\nvtkgl::ActiveTexture(vtkgl::TEXTURE0_ARB);\n\nFor wgl extensions, replace the \"WGL_\" and \"wgl\" prefixes with\n\"vtkwgl::\".  For glX extensions, replace the \"GLX_\" and",
    " \"glX\"\nprefixes with \"vtkglX::\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLExtensionManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLExtensionManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLExtensionManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

