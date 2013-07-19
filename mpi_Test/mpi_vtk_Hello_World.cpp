//#include <windows.h>

#include "vtkMPIController.h" 

void process(vtkMultiProcessController* controller, void* vtkNotUsed(arg)) 
{
    system("google-chrome http://127.0.0.1/Toggle_git/vtkOBJ/build/ThreejsExampleVTK.html"); 
    int myId = controller->GetLocalProcessId(); 

    std::cout << "My process id is "; 
    std::cout << myId << "." << std::endl; 
} 

int main( int argc, char* argv[] ) 
{   
    vtkMPIController* controller = vtkMPIController::New(); 
    controller->Initialize(&argc, &argv); 

    //ShellExecute(NULL, "open", "http://dreamincode.net", NULL, NULL, SW_SHOWNORMAL);

    controller->SetSingleMethod(process, 0); 
    controller->SingleMethodExecute(); 


    controller->Finalize(); 
    controller->Delete(); 

    return 0; 
} 
