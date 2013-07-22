FILE(REMOVE_RECURSE
  "CMakeFiles/vtkpython_pyc"
  "vtk_compile_complete"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/vtkpython_pyc.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
