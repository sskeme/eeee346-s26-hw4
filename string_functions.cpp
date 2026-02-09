#include "string.h"

void concat(char* const dest, const char* const str1, const char* const str2) {
  int len1 = strlen(str1); // the length of str1 is returned by strlen() and stored in len1
  int len2 = strlen(str2); // the length of str2 is returned by strlen() and stored in len2

  // copies len1 bytes from the array pointed to by str1 to the array pointed to by dest
  for (int i=0; i<len1; i++) {
    dest[i] = str1[i];
  }

  // copies len2 bytes from the array pointed to by str2 to the array pointed to by dest
  for (int i=0; i<len2; i++) {
    dest[i+len1] = str2[i];
  }
  
  // inserts the null character
  dest[len1+len2] = '\0'; 
}

void substring(char* const dest, const char* const src, int start_index, int len) {
  // TODO: write your code
}

void reverse(char* const dest, const char* const src) {
  // TODO: write your code
}

void ltrim(char* const dest, const char* const src) {
  // TODO: write your code
}
