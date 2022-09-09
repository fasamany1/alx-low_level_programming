Introduction to C programming

Task 0: Preprocessor 
        Write a script that runs a C file through the preprocessor and save the result into another file.
        a. The C file name will be saved in the variable $CFILE.
        b. The output should be saved in the file c.

Task 1: Compiler
        Write a script that compiles a C file but does not link.
        a. The C file name will be saved in the variable $CFILE
        b. The output file should be named the same as the C file, but with the extension .o instead of .c.
           *Example: if the C file is main.c, the output file should be main.o

Task 2: Assembler
        Write a script that generates the assembly code of a C code and save it in an output file.
        a. The C file name will be saved in the variable $CFILE
        b. The output file should be named the same as the C file, but with the extension .s instead of .c.
           *Example: if the C file is main.c, the output file should be main.s

Task 3: Name
        Write a script that compiles a C file and creates an executable named cisfun.
        a. The C file name will be saved in the variable $CFILE.

Task 4: Hello, puts
        Write a C program that prints exactly a line of text.
        a. Use the function puts
        b. You are not allowed to use printf
        c. Your program should end with the value 0

Task 5: Hello, printf
        Write a C program that prints exactly with proper grammar.
        a. Use the function printf
        b. You are not allowed to use the function puts
        c. Your program should return 0
        d. Your program should compile without warning when using the -Wall gcc option

Task 6: Size is not grandeur, and territory does not make a nation
        Write a C program that prints the size of various types on the computer it is compiled and run on.
        a. You should produce the exact same output as in the example
        b. Warnings are allowed
        c. Your program should return 0
        d. You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option.

Task 7: Intel
        Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
        a. The C file name will be saved in the variable $CFILE.
        b. The output file should be named the same as the C file, but with the extension .s instead of .c.
           *Example: if the C file is main.c, the output file should be main.s

Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
        Write a C program that prints a text to the standard error.
        a. You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
        b. Your program should return 1
        c. Your program should compile without any warnings when using the -Wall gcc option. 
