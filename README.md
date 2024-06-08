# C Preprocessed Language

This language is a Fortran, Ruby and Rust abomination.   
It includes a string manipulation library [str.c](https://github.com/wwidlishy/str.c) out of the box.

# Types

Int32, Int64, Int128 - Integer types  
uInt32, uInt64, uInt128 - unsigned Integer types  
Char, CStr - character types  
Str - [str.c](https://github.com/wwidlishy/str.c) string type

# Syntax

## functions

```c
#include "cpl.h"

Function(CStr, hw) Start
    Str text;
        setstr(&text, "Hello, world!");

    Return retstr(&text);
End

Program
    prt("%s\n", hw());
    Return 0;
End
```

## If statements

```c
#include "cpl.h"

Function(uInt128, absolute) Int128 n Start
    If n == 0 Start
        Return 0;
    End Elsif n < 0 Start
        Return (-1) *n;
    End Els
        Return n;
    End
End

Program
    prt("%d\n", absolute(-23));
    Return 0;
End
```
