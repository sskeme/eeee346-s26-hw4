# Introduction

In this homework assignment, you will implement a few string manipulation functions. It is known that these methods are available from existing libraries and with the C++ string class. However, you are to implement your own versions of these functions. This homework assignment is still 'C-like' since C++ classes have not yet been covered in the course. 

You will be using character arrays and treating them like string literals. When dealing with string literals, it is important that after the last character, there is a null character `'\0'`. The null character indicates the end of the string of characters and is vital when using functions such as `strlen()`.

In this assignment, `const` is used for pointers and data. Check parameters of the functions.

# Task

* Implement `substring()`, `reverse()`, and `ltrim()` in string_functions.cpp. You can find information about these functions in string_functions.h.
* For the implementations, you can use [`strlen()`](https://cplusplus.com/reference/cstring/strlen/) of <string.h>. Do not use other built-in functions. You can refer to the implementation of `concat()`, which is already complete, to see how `strlen()` and the null character are used.

# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp
```
```
./main
```

2.  Inputs
* Line 1: operation code (0=concat; 1=substring; 2=reverse; and 3=ltrim)
* Line 2+: multiple lines based on the string operation

concat():
```
0
string 1
string 2
```
substring():
```
1
string
start_index
length
```
reverse():
```
2
string
```
ltrim():
```
3
string
```

Here are inputs and expected outputs for testing your program:

Test 1:
```
# inputs
1
RIT EEEE346
0
3
# expected output
RIT
```

Test 2:
```
# inputs
1
RIT EEEE346
4
-1
# expected output
EEEE346
```

Test 3:
```
# inputs
2
semordnilap
# expected output
palindromes
```

Test 4:
```
# inputs
3
          I don't like spaces
# expected output
I don't like spaces
```
  
# Submit

Please upload your `string_functions.cpp` file to `myCourses > Assignments > HW4`. Do not submit *.docx, *.pdf, *.txt, or *.zip file. Do not change the function names.
