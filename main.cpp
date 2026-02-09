#include <iostream>
#include <string.h> // C standard string library
#include "string_functions.h"

#define MAX_LINE_SZ 100

#define OP_CONCAT 0
#define OP_SUBSTRING 1
#define OP_REVERSE 2
#define OP_LTRIM 3

using namespace std;

void testConcat();
void testSubstring();
void testReverse();
void testLTrim();
void readLine(char *str);

int main() {
  int op;

  cin >> op;
  cin.ignore(); // needed to ignore the line feed '\n' prior to a readLine() call

  switch (op) {
    case OP_CONCAT:
      testConcat();
      break;
    case OP_SUBSTRING:
      testSubstring();
      break;
    case OP_REVERSE:
      testReverse();
      break;
    case OP_LTRIM:
      testLTrim();
      break;
    default:
      cout << "Incorrect operation type!" << endl;
      break;
  }
}

void testConcat() {
  char str1[MAX_LINE_SZ] = {};
  char str2[MAX_LINE_SZ] = {};

  readLine(str1);
  readLine(str2);

  char result[strlen(str1)+strlen(str2)+1];

  concat(result, str1, str2);
  cout << result << endl;
}

void testSubstring() {
  char str[MAX_LINE_SZ] = {};
  int start;
  int len;

  readLine(str);
  cin >> start;
  cin >> len;

  char dest[len+1];

  substring(dest, str, start, len);
  cout << dest << endl;
}

void testReverse() {
  char str[MAX_LINE_SZ] = {};

  readLine(str);

  char dest[strlen(str)+1];

  reverse(dest, str);
  cout << dest << endl;
}

void testLTrim() {
  char str[MAX_LINE_SZ] = {};

  readLine(str);

  char dest[strlen(str)+1];

  ltrim(dest, str);
  cout << dest << endl;
}

void readLine(char* str) {
  string s;

  getline(cin, s);

  for (int i=0; i<s.length(); i++) {
    str[i] = s[i];
  }

  str[s.length()] = '\0'; // null character
}
