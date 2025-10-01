//////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program228.c
//    Description :     Write application which accept file name from user and open
//                      that file in read mode. 
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

    printf("Enter the name of file that you want to open : \n");
    scanf("%s", Fname);

    //O_RDONLY
    //O_WRONLY
    //O_RDWR
    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }

    printf("File is succesfully open with FD %d\n", fd);

    return 0;
}