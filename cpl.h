#ifndef LEA
#define LEA

#include <stdio.h>
#include <stdarg.h>

#include <string.h>
#include <stdlib.h>

#define Program int main(int argumentCount, char** arguments) {
#define End }

#define Call(function) function(
#define EndCall )

#define EndLine ;
#define Return return

#define Int32 int
#define Int64 long int
#define Int128 long long int

#define uInt32 unsigned int
#define uInt64 unsigned long int
#define uInt128 unsigned long long int

#define Char char
#define CStr char*

#define If if (
#define Elsif else if (
#define Els else {

#define Loop while (1==1) {
#define Break break

#define prt printf
#define input scanf

#define Function(type, name) type name(
#define Start ) {

typedef struct Str
{
    char* value;
} Str;

void setstr(Str* string, char* value)
{
    string->value = value;
}

char* retstr(Str* string)
{
    return string->value;
}

int lenstr(char* a)
{
    int index = 0;
    while(a[index] != '\0') index++;
    index++;
    return index;
}

char* addstr(char* a, char* b)
{
    char* result = (char*)malloc(sizeof(a) + sizeof(b));
    for (int index = 0; index < lenstr(a); index++) result[index] = a[index];
    for (int index = 0; index < lenstr(b); index++) result[lenstr(a) - 1 + index] = b[index];
    return result;
}

char* substr(char* string, int start, int end)
{
    char* result = (char*)malloc(sizeof(string));

    int maxIndex = lenstr(string);
    if (start >= 0 && start <= maxIndex && end >= 0 && end <= maxIndex && start <= end)
    {
        for (int i = 0; i <= end - start; i++)
        {
            result[i] = string[start+i];
            if (i == end - start) result[i+1] = '\0';
        }
    } else {
        result = "\0";
    }
    return result;
}

int cmpstr(char* a, char* b)
{
    while (*a != '\0' && *a == *b) {
        a++;
        b++;
    }
    
    return *(unsigned char *)a - *(unsigned char *)b;
}

#endif