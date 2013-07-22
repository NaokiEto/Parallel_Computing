#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "vtkTestDriver.h"



/* Forward declare test functions. */
int Mace(int, char*[]);
int expCos(int, char*[]);
int BoxClipTriangulate(int, char*[]);
int CellLocator(int, char*[]);
int PointLocator(int, char*[]);
int FrustumClip(int, char*[]);
int RGrid(int, char*[]);
int TestAppendSelection(int, char*[]);
int TestAssignAttribute(int, char*[]);
int TestBSPTree(int, char*[]);
int TestCellDataToPointData(int, char*[]);
int TestDensifyPolyData(int, char*[]);
int TestClipHyperOctree(int, char*[]);
int TestConvertSelection(int, char*[]);
int TestDelaunay2D(int, char*[]);
int TestExtraction(int, char*[]);
int TestExtractSelection(int, char*[]);
int TestHyperOctreeContourFilter(int, char*[]);
int TestHyperOctreeCutter(int, char*[]);
int TestHyperOctreeDual(int, char*[]);
int TestHyperOctreeSurfaceFilter(int, char*[]);
int TestHyperOctreeToUniformGrid(int, char*[]);
int TestNamedComponents(int, char*[]);
int TestMeanValueCoordinatesInterpolation1(int, char*[]);
int TestMeanValueCoordinatesInterpolation2(int, char*[]);
int TestPolyDataPointSampler(int, char*[]);
int TestPolyhedron0(int, char*[]);
int TestPolyhedron1(int, char*[]);
int TestSelectEnclosedPoints(int, char*[]);
int TestTessellatedBoxSource(int, char*[]);
int TestTessellator(int, char*[]);
int TestUncertaintyTubeFilter(int, char*[]);
int TestDecimatePolylineFilter(int, char*[]);


/* Create map.  */

typedef int (*MainFuncPointer)(int , char*[]);
typedef struct
{
  const char* name;
  MainFuncPointer func;
} functionMapEntry;

functionMapEntry cmakeGeneratedFunctionMapEntries[] = {
    {
    "Mace",
    Mace
  },
  {
    "expCos",
    expCos
  },
  {
    "BoxClipTriangulate",
    BoxClipTriangulate
  },
  {
    "CellLocator",
    CellLocator
  },
  {
    "PointLocator",
    PointLocator
  },
  {
    "FrustumClip",
    FrustumClip
  },
  {
    "RGrid",
    RGrid
  },
  {
    "TestAppendSelection",
    TestAppendSelection
  },
  {
    "TestAssignAttribute",
    TestAssignAttribute
  },
  {
    "TestBSPTree",
    TestBSPTree
  },
  {
    "TestCellDataToPointData",
    TestCellDataToPointData
  },
  {
    "TestDensifyPolyData",
    TestDensifyPolyData
  },
  {
    "TestClipHyperOctree",
    TestClipHyperOctree
  },
  {
    "TestConvertSelection",
    TestConvertSelection
  },
  {
    "TestDelaunay2D",
    TestDelaunay2D
  },
  {
    "TestExtraction",
    TestExtraction
  },
  {
    "TestExtractSelection",
    TestExtractSelection
  },
  {
    "TestHyperOctreeContourFilter",
    TestHyperOctreeContourFilter
  },
  {
    "TestHyperOctreeCutter",
    TestHyperOctreeCutter
  },
  {
    "TestHyperOctreeDual",
    TestHyperOctreeDual
  },
  {
    "TestHyperOctreeSurfaceFilter",
    TestHyperOctreeSurfaceFilter
  },
  {
    "TestHyperOctreeToUniformGrid",
    TestHyperOctreeToUniformGrid
  },
  {
    "TestNamedComponents",
    TestNamedComponents
  },
  {
    "TestMeanValueCoordinatesInterpolation1",
    TestMeanValueCoordinatesInterpolation1
  },
  {
    "TestMeanValueCoordinatesInterpolation2",
    TestMeanValueCoordinatesInterpolation2
  },
  {
    "TestPolyDataPointSampler",
    TestPolyDataPointSampler
  },
  {
    "TestPolyhedron0",
    TestPolyhedron0
  },
  {
    "TestPolyhedron1",
    TestPolyhedron1
  },
  {
    "TestSelectEnclosedPoints",
    TestSelectEnclosedPoints
  },
  {
    "TestTessellatedBoxSource",
    TestTessellatedBoxSource
  },
  {
    "TestTessellator",
    TestTessellator
  },
  {
    "TestUncertaintyTubeFilter",
    TestUncertaintyTubeFilter
  },
  {
    "TestDecimatePolylineFilter",
    TestDecimatePolylineFilter
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

    vtkFloatingPointExceptions::Enable();

    try {
    result = (*cmakeGeneratedFunctionMapEntries[testToRun].func)(ac, av);
    }
    catch(vtkstd::exception& e)
      {
      fprintf(stderr, "Test driver caught exception: [%s]\n", e.what());
      result = -1;
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
