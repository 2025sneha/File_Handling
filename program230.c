//////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program230.c
//    Description :     Write application which accept file name from user and open
//                      that file in read mode. 
//    Author :          Sneha Mohane
//    Date :            09/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// #include<unistd.h>   //universal standard

///////////////////////////////////////////////////////////////////////
//
//	Function Name :      	Entry point function
//	Function Date :         09/06/2025
//	Function Author :	    Sneha Mohane
//
//////////////////////////////////////////////////////////////////////

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;
     
    printf("enter the file name that you wnt to open : \n");
    scanf("%s",Fname);          //Fname is array their is no need to use &

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is succesfully open with fd : %d\n",fd);
        close(fd);
    }

    return 0;
}