/* main.c */
// Modified by George Kobrusev
//
#include <stdio.h>
#include "stringMerger.h"

int main (int argc, char** argv)
{
	//-------------Arguments validation-----------------
  if(argc != 3)
  {
    println("Wrong arguments amount.");
    println("Enter two strings separated by SPACE.");
    return 1;
  }

  //--------------Processing----------------

  char* result = mergeStrings(argv[1], argv[2]);  //merging result
  if(result == nullptr)
  {
    println("Error: strings are not of equal length.");
    return 2;
  }

  //--------------Output--------------------
  printf("\nMerging result: \n%s\n", result);

  //--------------Freeing--------------------
  free(result);

  system("PAUSE");
  return 0;
}
