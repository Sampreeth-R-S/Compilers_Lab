#include<stdio.h>
#include<stdlib.h>
#include "myl.h"
int main()
{
    int retval;
    printStr("Testing printStr function:\n");
    char*arr1[4]={"Hello","World","\n","Previous string was a newline. This is a test."};
    for(int i=0;i<4;i++)
    {
        printStr("String number ");
        printInt(i+1);
        printStr(": ");
        retval=printStr(arr1[i]);
        printStr("\n");
        printStr("Number of characters printed: ");
        printInt(retval);
        printStr("\n");
    }
    printStr("-------------------------------------------------------------------");
    printStr("\nTesting printInt function:\n");
    int arr2[5]={0,1,-1,123456789,-123456789};
    for(int i=0;i<5;i++)
    {
        printStr("Integer number ");
        printInt(i+1);
        printStr(": ");
        retval=printInt(arr2[i]);
        printStr("\n");
        printStr("Number of characters printed: ");
        printInt(retval);
        printStr("\n");
    }
    printStr("-------------------------------------------------------------------");
    printStr("\nTesting readInt function:\n");
    retval=1;
    int temp=10;
    while(retval)
    {
        printStr("Enter an integer: ");
        retval=readInt(&temp);
        if(retval)
        {
            printStr("The integer entered is: ");
            printInt(temp);
            printStr("\n");
        }
        else
        {
            printStr("Invalid input.\n");
            return 0;
        }
        printStr("To continue reading integers, enter 1. To exit, enter 0: ");
        readInt(&retval);
    }
    printStr("-------------------------------------------------------------------");
    printStr("\nTesting printFlt function:\n");
    float arr3[5]={0.0,1.0,-1.0,12345.678,-12345.678};
    for(int i=0;i<5;i++)
    {
        printStr("Floating point number ");
        printInt(i+1);
        printStr(": ");
        retval=printFlt(arr3[i]);
        printStr("\n");
        printStr("Number of characters printed: ");
        printInt(retval);
        printStr("\n");
    }
    printStr("-------------------------------------------------------------------");
    printStr("\nTesting readFlt function:\n");
    float retval2=1.0;
    retval=1;
    while(retval)
    {
        printStr("Enter a floating point number: ");
        retval=readFlt(&retval2);
        if(retval)
        {
            printStr("The floating point number entered is: ");
            printFlt(retval2);
            printStr("\n");
        }
        else
        {
            printStr("Invalid input.\n");
            return 0;
        }
        printStr("To continue reading floating point numbers, enter 1. To exit, enter 0: ");
        readInt(&retval);
    }
    printStr("Thank You\n");
}