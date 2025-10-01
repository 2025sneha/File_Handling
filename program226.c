//////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program226.c
//    Description :     Used to  Write application which accept file name from 
//                      user and create file 
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
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s", Fname);

    fd = creat(Fname,0777);

    return 0;
}