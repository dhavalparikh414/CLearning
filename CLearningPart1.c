#include<stdio.h>

int main()
{
    printf("Hello World!!");
	
	// This is a single line comment in C
	
	/* If you want to write multi line
	comment then use this style
	this is part of multiline comment*/
	
	/* Features of C  are as follows
	1) Portability
	2) Modularity
	3) Middle level
	4) Efficient
	5) Fixed keywords (32)
	6) Structured programming language
	7) Powerful data structures
	*/
	
/* ------------- Compilation Process ------------
    Editing source code -- ex : a.c
    Pre processor -- ex : a.i
    Compiler -- ex: a.s
    Assembler -- ex: a.o
    Linker
    Executable file -- ex: a.out is the default executable file name of gcc compiler.
 
 ------------------------------------------------*/
 
 /* -------- Difference between pre processor and compiler --------------
 
    Pre processor :
    1) creates intermediate code
    2) includes header files
    3) removes comments
    4) defines macros
    5) conditional compilation 
 
    Compiler :
    1) checks syntax errors
    2) do some optimisation
    3) creates assembly code
 */
 
 /* Linker -----
    link library to the object file and create executable
    can link multiple files f1.c , f2.c*/

    printf("Hello C Learning class\n");

 /* To see Intermediate code and assembly code *-----------------------

   gcc -E f1.c  --> To see intermdiate code
   
   gcc -S f1.c and 
   vi f1.s ---> To see assembly code

   gcc -c f1.c --> to see machine code
    
   vi f1.o 

   gcc f1.c -> to compile the code and ./a.out is the default output file.

   gcc -O f1.exe f1.c --> rename a file.



*/

 return 0;

}
