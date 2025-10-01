/////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program241.c
//    Description :     Used to Write application which accept writes data into file.              
//    Author :          Sneha Mohane
//    Date :            09/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// #include<unistd.h>   //universal standard
#include<string.h>

//////////////////////////////////////////////////////////////////////
//
//	Function Name :      	Entry point function
//	Function Date :         09/06/2025
//	Function Author :	    Sneha Mohane
//
//////////////////////////////////////////////////////////////////////

int main()
{
    write(1, "Jay ganesh...", 13);

    return 0;
}