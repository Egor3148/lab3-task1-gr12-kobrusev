// String merger
// By George Kobrusev
//
// Contains the realisation of the mergeStrings function
// (declared in stringMerger.h)
//

#include "stringMerger.h"

char* mergeStrings(const char* str1, const char* str2)
{
  // srguments validation
  if(strlen(str1) != strlen(str2))
  {
    return nullptr;
  }

  // allocate memory for the result
  char* result = (char*)malloc(sizeof(char) * (strlen(str1) * 2));

  // The characters are copied to the result string by two 
  //different loops. It will help to avoid using "div" operation
  //which will make the function run faster.
  // Multiplication by 2 is replaced with "bit shift" operation
  //to make it run faster.
  for(int i = 0; i < strlen(str2); ++i)
  {
    result[i << 1] = str1[i];  //copying the odd chars from str2
  }
  for(int i = 0; i < strlen(str1); ++i)
  {
    result[(i << 1) + 1] = str2[i];  //copying the even chars from str1
  }

  return result;
}