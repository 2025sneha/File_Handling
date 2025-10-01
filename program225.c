//////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program225.c
//    Description :     Used to  Write application to create file                  
//    Author :          Sneha Mohane
//    Date :            08/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
// #include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////////////////////////////
//
//	Function Name :      	Entry point function
//	Function Date :         08/06/2025
//	Function Author :	    Sneha Mohane
//
//////////////////////////////////////////////////////////////////////

int main()
{
    int fd = 0;       //fd = file discriptor

    fd = creat("Demo.txt",0777);        //file name , permission

    return 0;
}