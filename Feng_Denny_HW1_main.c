/**************************************************************
* Class:  CSC-415-0# Fall 2020
* Name:Denny Feng
* Student ID:918748225
* Github Name:Dfeng4150
* Project: Command Line, Assignment 1 – Command Line Arguments
*
* File: Feng_Denny_HW1_main.c
*
* Description:To get started with using c commands and Makefile.
*
**************************************************************/
#include <stdio.h>

int main (int argc, char * argv[])
{
	int i;

        printf( "There were %d arguments on the command line.\n", argc); 
        printf( "Argument 00: %s\n", argv[0] );

    	for ( i = 1; i < argc; ++i ) {
                  printf( "Argument 0%d: %s\n", i, argv[i] );
                }
        

        return 0;
}
