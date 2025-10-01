//////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program227.c
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

    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }

    printf("File is succesfully created with FD %d\n", fd);

    return 0;
}