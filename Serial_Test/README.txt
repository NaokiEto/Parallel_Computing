To convert vtk file to an mhd file (referencing a zraw file), we would go 
to the PolyDataToImageData/build directory, add in the vtk file, and then
do the command

sudo ./PolyDataToImageData trytry1.vtk ../../letsGo.mhd

This produces an mhd file and a zraw file in the Serial_Test directory.

Then, you can render it by doing

python MeshLabelImageColor.py letsGo.mhd 



