/////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program247.c
//    Description :     Used to Write application which accept file name from user and 
//                      open file in read mode.              
//    Author :          Sneha Mohane
//    Date :            09/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// #include<unistd.h>   //universal standard
#include<string.h>

#define BUFFER_SIZE 1014       // user define macro

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
    int fd = 0,iRet = 0 , iCnt = 0, iCapCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
     
    printf("enter the file name that you wnt to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY );     

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is succesfully open with fd : %d\n",fd);

        while ((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'A') &&(Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
            }
            memset(Buffer, '\0',BUFFER_SIZE);            
        }

        printf("Number of capital character are : %d\n", iCapCount);
        
        close(fd);
    }

    return 0;
}