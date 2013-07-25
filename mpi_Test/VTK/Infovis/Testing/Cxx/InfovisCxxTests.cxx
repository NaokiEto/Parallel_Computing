#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "vtkTestDriver.h"



/* Forward declare test functions. */
int TestArcEdges(int, char*[]);
int TestAssignCoordinates(int, char*[]);
int TestCollapseVerticesByArray(int, char*[]);
int TestContingencyStatistics(int, char*[]);
int TestCorrelativeStatistics(int, char*[]);
int TestCosmicTreeLayoutStrategy(int, char*[]);
int TestDataObjectToTable(int, char*[]);
int TestDescriptiveStatistics(int, char*[]);
int TestExtractSelectedGraph(int, char*[]);
int TestGraph(int, char*[]);
int TestGraphAttributes(int, char*[]);
int TestGraphAlgorithms(int, char*[]);
int TestGraphHierarchicalBundle(int, char*[]);
int TestGraphLayoutStrategy(int, char*[]);
int TestGroupLeafVertices(int, char*[]);
int TestKdTreeBoxSelection(int, char*[]);
int TestKMeansStatistics(int, char*[]);
int TestMergeGraphs(int, char*[]);
int TestMultiCorrelativeStatistics(int, char*[]);
int TestOrderStatistics(int, char*[]);
int TestPassArrays(int, char*[]);
int TestPassThrough(int, char*[]);
int TestPCAStatistics(int, char*[]);
int TestPruneTreeFilter(int, char*[]);
int TestRandomGraphSource(int, char*[]);
int TestRemoveIsolatedVertices(int, char*[]);
int TestSimple3DCirclesStrategy(int, char*[]);
int TestStreamGraph(int, char*[]);
int TestStringToCategory(int, char*[]);
int TestTable(int, char*[]);
int TestTableSplitColumnComponents(int, char*[]);
int TestTreeMapLayoutStrategy(int, char*[]);
int TestThresholdTable(int, char*[]);
int TestVariantArray(int, char*[]);
int TestVariant(int, char*[]);
int TestSQLGraphReader(int, char*[]);
int TestTimePoint(int, char*[]);


/* Create map.  */

typedef int (*MainFuncPointer)(int , char*[]);
typedef struct
{
  const char* name;
  MainFuncPointer func;
} functionMapEntry;

functionMapEntry cmakeGeneratedFunctionMapEntries[] = {
    {
    "TestArcEdges",
    TestArcEdges
  },
  {
    "TestAssignCoordinates",
    TestAssignCoordinates
  },
  {
    "TestCollapseVerticesByArray",
    TestCollapseVerticesByArray
  },
  {
    "TestContingencyStatistics",
    TestContingencyStatistics
  },
  {
    "TestCorrelativeStatistics",
    TestCorrelativeStatistics
  },
  {
    "TestCosmicTreeLayoutStrategy",
    TestCosmicTreeLayoutStrategy
  },
  {
    "TestDataObjectToTable",
    TestDataObjectToTable
  },
  {
    "TestDescriptiveStatistics",
    TestDescriptiveStatistics
  },
  {
    "TestExtractSelectedGraph",
    TestExtractSelectedGraph
  },
  {
    "TestGraph",
    TestGraph
  },
  {
    "TestGraphAttributes",
    TestGraphAttributes
  },
  {
    "TestGraphAlgorithms",
    TestGraphAlgorithms
  },
  {
    "TestGraphHierarchicalBundle",
    TestGraphHierarchicalBundle
  },
  {
    "TestGraphLayoutStrategy",
    TestGraphLayoutStrategy
  },
  {
    "TestGroupLeafVertices",
    TestGroupLeafVertices
  },
  {
    "TestKdTreeBoxSelection",
    TestKdTreeBoxSelection
  },
  {
    "TestKMeansStatistics",
    TestKMeansStatistics
  },
  {
    "TestMergeGraphs",
    TestMergeGraphs
  },
  {
    "TestMultiCorrelativeStatistics",
    TestMultiCorrelativeStatistics
  },
  {
    "TestOrderStatistics",
    TestOrderStatistics
  },
  {
    "TestPassArrays",
    TestPassArrays
  },
  {
    "TestPassThrough",
    TestPassThrough
  },
  {
    "TestPCAStatistics",
    TestPCAStatistics
  },
  {
    "TestPruneTreeFilter",
    TestPruneTreeFilter
  },
  {
    "TestRandomGraphSource",
    TestRandomGraphSource
  },
  {
    "TestRemoveIsolatedVertices",
    TestRemoveIsolatedVertices
  },
  {
    "TestSimple3DCirclesStrategy",
    TestSimple3DCirclesStrategy
  },
  {
    "TestStreamGraph",
    TestStreamGraph
  },
  {
    "TestStringToCategory",
    TestStringToCategory
  },
  {
    "TestTable",
    TestTable
  },
  {
    "TestTableSplitColumnComponents",
    TestTableSplitColumnComponents
  },
  {
    "TestTreeMapLayoutStrategy",
    TestTreeMapLayoutStrategy
  },
  {
    "TestThresholdTable",
    TestThresholdTable
  },
  {
    "TestVariantArray",
    TestVariantArray
  },
  {
    "TestVariant",
    TestVariant
  },
  {
    "TestSQLGraphReader",
    TestSQLGraphReader
  },
  {
    "TestTimePoint",
    TestTimePoint
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