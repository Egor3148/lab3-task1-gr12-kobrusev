// String merger
// By George Kobrusev
//

#ifndef stringMerger_h
#define stringMerger_h

// Contains two strings merging function.
//

// Merges two strings with equal length.
// Takes two argument strings as const char*.
// Returns merged string as char*.
// Returns nullptr in case of error.
// Result contains the first string chars on the even positions
//and the second string chars on the odd positions.
//
char* mergeStrings(const char* str1, const char* str2);

#endif