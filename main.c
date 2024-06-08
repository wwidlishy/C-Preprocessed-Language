#include "cpl.h"

Function(uInt32, fib) uInt32 n Start
    If n == 0 Start Return 0 EndLine End
    Elsif n == 1 || n == 2 Start Return 1 EndLine End
    Els
        Return
            Call(fib) n - 1 EndCall + Call(fib) n - 2 EndCall
            EndLine
    End
End

Program 
    Call(prt) "%d\n", Call(fib) 9 EndCall EndCall EndLine
    Return 0 EndLine
End