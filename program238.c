////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program238.c
//    Description :     Used to Write application which accept file name from user and 
//                      read all data from that file and display contents on screen. 
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
    char Fname[20] = {'\0'};
    int fd = 0,iRet = 0 ;
    char Buffer[50] = {'\0'};
     
    printf("enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY );     //here change program

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is succesfully open with fd : %d\n",fd);
        
        iRet = read(fd, Buffer,11);
        printf("%d bytes gets read successfully\n", iRet);
        printf("Data from file is : %s\n", Buffer);

        close(fd);

        fd = open(Fname, O_RDONLY);         //change

        iRet = read(fd, Buffer,20);
        printf("%d bytes gets read successfully\n", iRet);
        printf("Data from file is : %s\n", Buffer);


        close(fd);
    }

    return 0;
}