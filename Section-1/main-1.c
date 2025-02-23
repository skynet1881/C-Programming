// What is a Program?
// Program is a set of instructions that are executed by the computer to perform a specific task.

// What do you need to write a C program?
// 1. Text Editor
// 2. Compiler
// 3. Linker
// 4. Debugger
// 5. Operating System
// 6. C Knowledge

// What is a Text Editor?
// Text Editor is a software that is used to write and edit the source code of a program. Vscode, Sublime Text, Notepad++

// What is a Compiler?
// Compiler is a software that is used to convert the source code of a program into machine code.

// What is a Linker?
// Linker is a software that is used to link the object code of a program with the library code.

// What is a Debugger?
// Debugger is a software that is used to debug the program.

// What is an Operating System?
// Operating System is a software that is used to manage the hardware and software resources of a computer.

// What is C Knowledge?
// C Knowledge is the knowledge of the C programming language.

// Compiling and Linking a C Program
/**  
    1. Preprocessing
    2. Compiling
    3. Assembyl
    4. Linking

    Step 1: Preprocessing
    - The preprocessor is a program that processes the source code before it is compiled.
    - The preprocessor performs the following tasks:
        - Removes comments from the source code.
        - Includes the contents of header files in the source code.
        - Expands macros in the source code.
        - Resolves conditional compilation directives in the source code. 
        - #include, #define, #ifdef, #ifndef, #endif, #if, #else, #elif

    Step 2: Compiling
    - The compiler converts the source code into assembly code.
    - The compiler performs the following tasks:
        - Checks the syntax of the source code.
        - Generates the assembly code from the source code.
        - Checks the semantics of the source code.
        - Syntax: gcc -E main.c (generates the preprocessed code)

    Step 3: Assembly
    - The assembler converts the assembly code into object code (machine code).
    - The assembler performs the following tasks:
        - Converts the assembly code into object code.
        - Generates the symbol table.
        - Syntax: gcc -S main.c (generates the assembly code)

    Step 4: Linking
    - The linker links the object code with the library code.
    - The linker performs the following tasks:
        - Links the object code with the library code.
        - Generates the executable file.
        - Syntax: gcc main.c -o main  (full compilation)
*/