from vtk import *

input='trytry1.vtk' 
  
## read the file 
reader = vtk.vtkPolyDataReader() 
reader.SetFileName(input) 
reader.Update() 

# vtkPolyDataToImageStencil *pol2Stenc = vtkPolyDataToImageStencil::New(); 
# pol2Stenc -> SetTolerance(0.5); 
# pol2Stenc -> SetInput(myPolyData); 
# pol2Stenc -> SetInformationInput(blankImage); 
# pol2Stenc -> Update(); 

## surface generation 
contour = vtkMarchingCubes() #for label images 
contour.SetInput(reader.GetOutput()) 
contour.Update() 

## mapper 
mapper = vtkPolyDataMapper() 
mapper.SetInput(contour.GetOutput()) 
mapper.Update() 


## the actor 
actor = vtk.vtkActor() 
actor.SetMapper(mapper) 

## renderer and render window 
ren = vtk.vtkRenderer() 
ren.SetBackground(0, 0, 1) 
## add the actors to the renderer 
ren.AddActor(actor) 

renWin = vtk.vtkRenderWindow() 
renWin.AddRenderer(ren) 
renWin.SetSize(512, 512) 

## render window interactor 
iren = vtk.vtkRenderWindowInteractor() 
iren.SetRenderWindow(renWin) 


## initialize and start the interactor 
iren.Initialize() 

## render 
renWin.Render() 
iren.Start() 
