// Standard library
#include <stdio.h>

/* 
    1- Console Input/Output Functions
    - printf()  - prints formatted output
    - scanf()   - reads formatted input
    - putchar() - prints single character
    - getchar() - reads single character
    - puts()    - prints string follow by newline
    - gets()    - reads string

    chat name[20];
    printf("Isim giriniz: ");
    scanf("%s", name);

    2- File Input/Output Functions
    - fopen() - opens a file
    - fclose() - closes a file
    - fgetc() - read a character from a file
    - fputc() - write a character to a file
    - fgets() - read a string from a file
    - fputs() - write a strng to a file
    - fcsanf, fprintfg

    FILE *fp = fopen("example.txt", "w");
    fprintf(fp, "Merhaba Turkiye");

    3- Buffer Manupulation Functions
    - fflush() - flushes the output buffer
    - setbuf() - sets the buffer for a file
    - setvbuf() - sets the buffer for a file

    printf("Hello Turkiye");
    fflush(stdout);

    4- Error Handling Functions
    - perror() - prints an error message
    - ferror() - check for error
    - clearerr() - clear error indicator

    FILE *fp = fopen("example.txt", "r");
    if(fp == NULL)
    {
        perror("Error file is not existing");
        return 1;
    }

    5- Macro and Constant
    - EOF - end of file
    - NULL - null pointer
    - BUFSIZ - buffer size

    6- Standard File Streams
    - stdin - standard input
    - stdout - standard output
    - stderr - standard error

    fprintf(stdout, "Hello Turkiye");
    fprintf(stderr, "Bu bir hata mesajidir");
*/