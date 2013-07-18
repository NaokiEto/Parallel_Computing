#include "vtkSphereSource.h"
#include "vtkPolyDataMapper.h"
#include "vtkProperty.h"
#include "vtkActor.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"

#include <pthread.h>

void *thread_function(void *arg);

vtkRenderer *ren1;
vtkRenderWindow *renWin;

int main(void)
{

  vtkSphereSource *sphere = vtkSphereSource::New();
    sphere->SetRadius(10);
    sphere->SetThetaResolution(18);
    sphere->SetPhiResolution(18);

  vtkPolyDataMapper *map = vtkPolyDataMapper::New();
    map->SetInput(sphere->GetOutput());

  vtkActor *aSphere = vtkActor::New();
    aSphere->SetMapper(map);
    aSphere->GetProperty()->SetColor(0,0,1); // sphere color blue

  ren1 = vtkRenderer::New();
  renWin = vtkRenderWindow::New();
    renWin->AddRenderer(ren1);

  ren1->AddActor(aSphere);
  renWin->SetSize(500, 500);
  renWin->Render();                                                         

  //thread//
  int res;
  pthread_t network_thread;
  res = pthread_create(&network_thread, NULL, thread_function, NULL);
  if(res != 0){
    perror("Thread creation failed");
    exit(EXIT_FAILURE);
  }
  else perror("thread_created");
  //end of thread//

  while(1)
    renWin->Render();

  return 0;
}

void *thread_function(void *arg){
  while(1)
    renWin->Render();
}

