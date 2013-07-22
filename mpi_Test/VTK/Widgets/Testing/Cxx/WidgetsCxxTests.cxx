#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "/home/lakers/Downloads/VTK/Rendering/vtkTestingObjectFactory.h"



/* Forward declare test functions. */
int BoxWidget(int, char*[]);
int BoxWidget2(int, char*[]);
int TestAffineWidget(int, char*[]);
int TestAngleWidget2D(int, char*[]);
int TestAngleWidget3D(int, char*[]);
int TestBalloonWidget(int, char*[]);
int TestBorderWidget(int, char*[]);
int TestButtonWidget(int, char*[]);
int TestCameraWidget(int, char*[]);
int TestCenteredSliderWidget2D(int, char*[]);
int TestCheckerboardWidget(int, char*[]);
int TestContourWidget2(int, char*[]);
int TestDistanceWidget(int, char*[]);
int TestDistanceWidget3D(int, char*[]);
int TestHandleWidget(int, char*[]);
int TestHandleWidget2D(int, char*[]);
int TestImplicitPlaneWidget(int, char*[]);
int TestImplicitPlaneWidget2(int, char*[]);
int TestImplicitPlaneWidget2b(int, char*[]);
int TestLogoWidget(int, char*[]);
int TestOrientationMarkerWidget(int, char*[]);
int TestPlaybackWidget(int, char*[]);
int TestProgrammaticPlacement(int, char*[]);
int TestRectilinearWipeWidget(int, char*[]);
int TestSeedWidget(int, char*[]);
int TestSliderWidget(int, char*[]);
int TestSliderWidget2D(int, char*[]);
int TestTextWidget(int, char*[]);
int TerrainPolylineEditor(int, char*[]);
int TestDijkstraGraphGeodesicPath(int, char*[]);
int TestParallelopipedWidget(int, char*[]);
int TestSeedWidgetNonUniformRepresentations(int, char*[]);
int vtkAngleWidgetTest1(int, char*[]);
int vtkBiDimensionalWidgetTest1(int, char*[]);
int vtkImplicitPlaneWidget2Test1(int, char*[]);
int vtkLineWidget2Test1(int, char*[]);
int vtkSeedWidgetTest1(int, char*[]);
int vtkSplineWidget2Test1(int, char*[]);
int vtkBorderWidgetTest1(int, char*[]);
int vtkCaptionWidgetTest1(int, char*[]);
int vtkTextWidgetTest1(int, char*[]);
int vtkHoverWidgetTest1(int, char*[]);
int vtkBalloonWidgetTest1(int, char*[]);
int vtkAngleRepresentation2DTest1(int, char*[]);
int vtkAngleRepresentation3DTest1(int, char*[]);
int vtkBalloonRepresentationTest1(int, char*[]);
int vtkBiDimensionalRepresentation2DTest1(int, char*[]);
int vtkCaptionRepresentationTest1(int, char*[]);
int vtkTextRepresentationTest1(int, char*[]);
int vtkLineRepresentationTest1(int, char*[]);
int vtkSeedRepresentationTest1(int, char*[]);


/* Create map.  */

typedef int (*MainFuncPointer)(int , char*[]);
typedef struct
{
  const char* name;
  MainFuncPointer func;
} functionMapEntry;

functionMapEntry cmakeGeneratedFunctionMapEntries[] = {
    {
    "BoxWidget",
    BoxWidget
  },
  {
    "BoxWidget2",
    BoxWidget2
  },
  {
    "TestAffineWidget",
    TestAffineWidget
  },
  {
    "TestAngleWidget2D",
    TestAngleWidget2D
  },
  {
    "TestAngleWidget3D",
    TestAngleWidget3D
  },
  {
    "TestBalloonWidget",
    TestBalloonWidget
  },
  {
    "TestBorderWidget",
    TestBorderWidget
  },
  {
    "TestButtonWidget",
    TestButtonWidget
  },
  {
    "TestCameraWidget",
    TestCameraWidget
  },
  {
    "TestCenteredSliderWidget2D",
    TestCenteredSliderWidget2D
  },
  {
    "TestCheckerboardWidget",
    TestCheckerboardWidget
  },
  {
    "TestContourWidget2",
    TestContourWidget2
  },
  {
    "TestDistanceWidget",
    TestDistanceWidget
  },
  {
    "TestDistanceWidget3D",
    TestDistanceWidget3D
  },
  {
    "TestHandleWidget",
    TestHandleWidget
  },
  {
    "TestHandleWidget2D",
    TestHandleWidget2D
  },
  {
    "TestImplicitPlaneWidget",
    TestImplicitPlaneWidget
  },
  {
    "TestImplicitPlaneWidget2",
    TestImplicitPlaneWidget2
  },
  {
    "TestImplicitPlaneWidget2b",
    TestImplicitPlaneWidget2b
  },
  {
    "TestLogoWidget",
    TestLogoWidget
  },
  {
    "TestOrientationMarkerWidget",
    TestOrientationMarkerWidget
  },
  {
    "TestPlaybackWidget",
    TestPlaybackWidget
  },
  {
    "TestProgrammaticPlacement",
    TestProgrammaticPlacement
  },
  {
    "TestRectilinearWipeWidget",
    TestRectilinearWipeWidget
  },
  {
    "TestSeedWidget",
    TestSeedWidget
  },
  {
    "TestSliderWidget",
    TestSliderWidget
  },
  {
    "TestSliderWidget2D",
    TestSliderWidget2D
  },
  {
    "TestTextWidget",
    TestTextWidget
  },
  {
    "TerrainPolylineEditor",
    TerrainPolylineEditor
  },
  {
    "TestDijkstraGraphGeodesicPath",
    TestDijkstraGraphGeodesicPath
  },
  {
    "TestParallelopipedWidget",
    TestParallelopipedWidget
  },
  {
    "TestSeedWidgetNonUniformRepresentations",
    TestSeedWidgetNonUniformRepresentations
  },
  {
    "vtkAngleWidgetTest1",
    vtkAngleWidgetTest1
  },
  {
    "vtkBiDimensionalWidgetTest1",
    vtkBiDimensionalWidgetTest1
  },
  {
    "vtkImplicitPlaneWidget2Test1",
    vtkImplicitPlaneWidget2Test1
  },
  {
    "vtkLineWidget2Test1",
    vtkLineWidget2Test1
  },
  {
    "vtkSeedWidgetTest1",
    vtkSeedWidgetTest1
  },
  {
    "vtkSplineWidget2Test1",
    vtkSplineWidget2Test1
  },
  {
    "vtkBorderWidgetTest1",
    vtkBorderWidgetTest1
  },
  {
    "vtkCaptionWidgetTest1",
    vtkCaptionWidgetTest1
  },
  {
    "vtkTextWidgetTest1",
    vtkTextWidgetTest1
  },
  {
    "vtkHoverWidgetTest1",
    vtkHoverWidgetTest1
  },
  {
    "vtkBalloonWidgetTest1",
    vtkBalloonWidgetTest1
  },
  {
    "vtkAngleRepresentation2DTest1",
    vtkAngleRepresentation2DTest1
  },
  {
    "vtkAngleRepresentation3DTest1",
    vtkAngleRepresentation3DTest1
  },
  {
    "vtkBalloonRepresentationTest1",
    vtkBalloonRepresentationTest1
  },
  {
    "vtkBiDimensionalRepresentation2DTest1",
    vtkBiDimensionalRepresentation2DTest1
  },
  {
    "vtkCaptionRepresentationTest1",
    vtkCaptionRepresentationTest1
  },
  {
    "vtkTextRepresentationTest1",
    vtkTextRepresentationTest1
  },
  {
    "vtkLineRepresentationTest1",
    vtkLineRepresentationTest1
  },
  {
    "vtkSeedRepresentationTest1",
    vtkSeedRepresentationTest1
  },

  {0,0}
};

/* Allocate and create a lowercased copy of string
   (note that it has to be free'd manually) */

char* lowercase(const char *string)
{
  char *new_string, *p;

#ifdef __cplusplus
  new_string = static_cast<char *>(malloc(sizeof(char) *
    static_cast<size_t>(strlen(string) + 1)));
#else
  new_string = (char *)(malloc(sizeof(char) * (size_t)(strlen(string) + 1)));
#endif

  if (!new_string)
    {
    return 0;
    }
  strcpy(new_string, string);
  p = new_string;
  while (*p != 0)
    {
#ifdef __cplusplus
    *p = static_cast<char>(tolower(*p));
#else
    *p = (char)(tolower(*p));
#endif

    ++p;
    }
  return new_string;
}

int main(int ac, char *av[])
{
  int i, NumTests, testNum, partial_match;
  char *arg, *test_name;
  int count;
  int testToRun = -1;

  
    
  for(count =0; cmakeGeneratedFunctionMapEntries[count].name != 0; count++)
    {
    }
  NumTests = count;
  /* If no test name was given */
  /* process command line with user function.  */
  if (ac < 2)
    {
    /* Ask for a test.  */
    printf("Available tests:\n");
    for (i =0; i < NumTests; ++i)
      {
      printf("%3d. %s\n", i, cmakeGeneratedFunctionMapEntries[i].name);
      }
    printf("To run a test, enter the test number: ");
    fflush(stdout);
    testNum = 0;
    if( scanf("%d", &testNum) != 1 )
      {
      printf("Couldn't parse that input as a number\n");
      return -1;
      }
    if (testNum >= NumTests)
      {
      printf("%3d is an invalid test number.\n", testNum);
      return -1;
      }
    testToRun = testNum;
    ac--;
    av++;
    }
  partial_match = 0;
  arg = 0;
  /* If partial match is requested.  */
  if(testToRun == -1 && ac > 1)
    {
    partial_match = (strcmp(av[1], "-R") == 0) ? 1 : 0;
    }
  if (partial_match && ac < 3)
    {
    printf("-R needs an additional parameter.\n");
    return -1;
    }
  if(testToRun == -1)
    {
    arg = lowercase(av[1 + partial_match]);
    }
  for (i =0; i < NumTests && testToRun == -1; ++i)
    {
    test_name = lowercase(cmakeGeneratedFunctionMapEntries[i].name);
    if (partial_match && strstr(test_name, arg) != NULL)
      {
      testToRun = i;
      ac -=2;
      av += 2;
      }
    else if (!partial_match && strcmp(test_name, arg) == 0)
      {
      testToRun = i;
      ac--;
      av++;
      }
    free(test_name);
    }
  if(arg)
    {
    free(arg);
    }
  if(testToRun != -1)
    {
    int result;

    // Set defaults
    vtkTestingInteractor::ValidBaseline =
      std::string("VTK_DATA_ROOT-NOTFOUND") +
      std::string("/Baseline/") +
      std::string("Widgets/") +
      std::string(cmakeGeneratedFunctionMapEntries[testToRun].name) +
      std::string(".png");
    vtkTestingInteractor::TempDirectory =
      std::string("/home/lakers/Downloads/VTK/Testing/Temporary");
    vtkTestingInteractor::DataDirectory =
      std::string("VTK_DATA_ROOT-NOTFOUND");

    int interactive = 0;
    for (int ii = 0; ii < ac; ++ii)
      {
      if ( strcmp(av[ii],"-I") == 0)
        {
        interactive = 1;
        continue;
        }
      if ( strcmp(av[ii],"-V") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::ValidBaseline = std::string(av[ii+1]);
        ++ii;
        continue;
        }
      if ( strcmp(av[ii],"-T") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::TempDirectory = std::string(av[ii+1]);
        ++ii;
        continue;
        }
      if ( strcmp(av[ii],"-D") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::DataDirectory = std::string(av[ii+1]);
        ++ii;
        continue;
        }
      if ( strcmp(av[ii],"-E") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::ErrorThreshold =
          static_cast<double>(atof(av[ii+1]));
        ++ii;
        continue;
        }
      }
    vtkSmartPointer<vtkTestingObjectFactory> factory = vtkSmartPointer<vtkTestingObjectFactory>::New();
    if (!interactive)
      {
      vtkObjectFactory::RegisterFactory(factory);
      }

    result = (*cmakeGeneratedFunctionMapEntries[testToRun].func)(ac, av);
    
   if (!interactive)
     {
     if (vtkTestingInteractor::TestReturnStatus != -1)
        {
        if( vtkTestingInteractor::TestReturnStatus != vtkTesting::PASSED)
          {
          result = EXIT_FAILURE;
          }
        else
          {
          result = EXIT_SUCCESS;
          }
        }
      vtkObjectFactory::UnRegisterFactory(factory);
      }

    return result;
    }
  
  
  /* Nothing was run, display the test names.  */
  printf("Available tests:\n");
  for (i =0; i < NumTests; ++i)
    {
    printf("%3d. %s\n", i, cmakeGeneratedFunctionMapEntries[i].name);
    }
  printf("Failed: %s is an invalid test name.\n", av[1]);
  
  return -1;
}
