# EMBEDDED OPERATING SYSTEM 
 
  ##Tools
       
       (i) Typora (DOCUMENTATION PURPOSE)
      (ii) Shutter (SCREESHOT OF OUTPUT/COMMAND)
     (iii) Visual Studio Code 
      (iv) Draw IO 
       (v) Vokoscreen NG (USE TO RECORD SCREEN)
   
## TOPICS:- 

  - EMBEDDED SYSTEM AND GENERAL PURPOSE SYSTEM
  
  - Two Layer and Three Layer Embedded System
 
  - Modularize project and code 
  
  - Hex dump vs Execution Embedded Linux 

  - ELF
  
  - Parellism
 
            * Psuedo Parellism 
            * True   Parellism
  
  - Uni-Processor
  - Multi- Processor 

## Command 
         
         - *objdump -s -- To print the complete content of all the sections of the file.
            This command will print all the content of all the sections of the file.

              
          - **Syntax** :- objdump <option(s)> <file(s)> 
                  
          - Study More  [link](https://www.geeksforgeeks.org/objdump-command-in-linux-with-examples/).  
   
  - Machine Code 

  - Cross Compiler 
  
  - Arm-linux-gnueabi- 
 

## File System

   - Root FS
   - Directory structure 

   - Shell 
    
      - Enviroment Variable 
      - PATH , USER 
      - Custom Enviroment Variable 
    
## Memory Sections
    
         - Study More  [link](https://www.geeksforgeeks.org/memory-layout-of-c-program/).
       
         - Stack => Stored local variables and return addresses  
         
         - Heap  => Area reserved for Dynamic memory 
 
         - .bss  => Uninitialised global variable 
          
         - .data => Initialised global variable 
         
         - .txt  => PC/Instruction/executable information 

## C 
   
     - Difference between library file and header file ?
       -The files that tell the compiler how to call some functionality (without knowing how the functionality actually works)
         are called **header files**.(.h)
       -  Library is the place where the **actual functionality is implemented** i.e. they contain function body.
           Libraries have mainly two categories : 

     - TO study more about it [link](https://www.tutorialspoint.com/difference-between-header-file-and-library).
   
## Library

   - Static Library :- Static libraries contains object code linked with an end user application and then they become the part of the executab      le. These libraries are specifically used at compile time which means the library should be present in correct location 
      when user wants to compile C or C++ program. In windows they end with .lib extension and with .a for MacOS. 
  
   - Dynamic/shared  library :-These libraries are only required at run-time i.e, user can compile his/her code without using these libraries. 
   - Reference [link](https://www.geeksforgeeks.org/difference-header-file-library/).

## System Call vs Library Call 



   
