/* main.c */
// Modified by George Kobrusev
//
#include "merger.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  //-------------Arguments validation-----------------
  if (argc != 3) {
    printf("Wrong arguments amount.\n");
    printf("Enter two strings separated by SPACE.\n");
    return 1;
  }

  //--------------Processing----------------

  char *result = mergeStrings(argv[1], argv[2]); // merging result
  if (result == NULL) {
    printf("Error: strings are not of equal length.\n");
    return 2;
  }

  //--------------Output--------------------
  printf("\nMerging result: \n%s\n", result);

  //--------------Freeing--------------------
  free(result);

  //system("PAUSE");
  return 0;
}
