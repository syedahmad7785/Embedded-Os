# EMBEDDED OPERATING SYSTEM 
 
##  Tools
       
       (i) Typora (DOCUMENTATION PURPOSE)
      (ii) Shutter (SCREESHOT OF OUTPUT/COMMAND)
     (iii) Visual Studio Code 
      (iv) Draw IO 
       (v) Vokoscreen NG (USE TO RECORD SCREEN)
   
## TOPICS:- 

  - Embedded system and General Purpose system.
  
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
         
    - *objdump -s* -- To print the complete content of all the sections of the file.
            This command will print all the content of all the sections of the file.

              
    - **Syntax** :- objdump <option(s)> <file(s)> 
                  
    - Study More [link](https://www.geeksforgeeks.org/objdump-command-in-linux-with-examples/)  
   
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
    - The files that tell the compiler how to call some functionality (without knowing how the functionality actually works)
       are called **Header file** .(.h)
    -  Library is the place where the **actual functionality is implemented** i.e. they contain function body.
        Libraries have mainly two categories : 

    -  Reference [link](https://www.geeksforgeeks.org/difference-header-file-library/)

### Library

   - Static Library :- Static libraries contains object code linked with an end user application and then they become the part of the executab      le. These libraries are specifically used at compile time which means the library should be present in correct location 
      when user wants to compile C or C++ program. In windows they end with .lib extension and with .a for MacOS. 
  
   - Dynamic/shared  library :-These libraries are only required at run-time i.e, user can compile his/her code without using these libraries. 
   - Reference [link](https://www.geeksforgeeks.org/difference-header-file-library/).

## System Call vs Library Call 

   - **System call** :- A system call is a request made by the program to enter into kernel mode to access a process..

   - **Library call** :- A library call is a request made by the program to access a library function defined in a programming library.
   
   - Reference [link](https://www.geeksforgeeks.org/difference-between-system-call-and-library-call/)
   - Examples of system calls are – 

   1. fork() :- fork() creates a new process by duplicating the calling process.  The new process is referred to as the child process. 
                The calling process is referred to as the parent process. The child process and the parent process run in separate 
                memory spaces.  At the time of fork() both memory  spaces  have  the  same content. 
         
              - The child process is an exact duplicate of the parent process except for the following points:

              *  The child has its own unique process ID, and this PID does not match the ID of any existing process group se sion.

              *  The child's parent process ID is the same as the parent's process ID.

              *  The child does not inherit its parent's memory.
            
   **ZOMBIE PROCESS** :- A process which has finished the execution but still has entry in the process table to report to its
                         parent process is known as a zombie process. 

   **ORPHAN PROCESS** :-A process whose parent process no more exists i.e. either finished or terminated without waiting for 
                        its child process to terminate is called an orphan process.
 

   2. open():-Used to Open the file for reading, writing or both.

   3. write():- Writes cnt bytes from buf to the file or socket associated with fd. cnt should not be greater than
                 INT_MAX (defined in the limits.h header file). If cnt is zero, write() simply returns 0 without  
                 attempting any other action.

   4. read():-From the file indicated by the file descriptor fd, the read() function reads cnt bytes of input into 
              the memory area indicated by buf. 
  
   5. close():-Tells the operating system you are done with a file descriptor and Close the file which pointed by fd(file descriptor).
 
   - Example of Library call are –

    1. fopen()

    2. fclose()

    3. scanf()

    4. printf()

# Important Terminology :-

   - **File Descriptor** :-File descriptor is integer that uniquely identifies an open file of the process. 

   - To know more [link](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)

   - PID(Process ID):-
   
   - PPID(Parent Process ID):-
 
   - **getpid()**:- returns the process ID of the calling process. This is often used by routines that generate unique temporary filenames.
        
   - *Syntax* = *pid_t getpid(void);*

   - **getppid()**:-Returns the process ID of the parent of the calling process. If the calling process was created by the fork()

   - *Syntax* = *pid_t getppid(void);*

     - Both getppid() and getpid() are inbuilt functions defined in unistd.h library

   - **pid_t**:- pid_t Opaque data type stands for process identification and it is used to represent process ids. Whenever, we want to
             declare a variable that is going to be deal with the process ids we can use pid_t data type.
   
   - **errno** :- Its a global variable indicating the error occurred during any function call and defined in the header file errno.h
  
   - **Syscall table** :- Its table which holds the information about the system call.

# Interprocess Communication
 
   -  Interprocess communication is used for exchanging data between multiple threads in one or more processes or programs.

## Approaches for Inter-Process Communication
   
   -  ![image](icon-ApproachesforIPC.png "icon")
  

   - PIPE :-Pipe is widely used for communication between two related processes. This is a half-duplex method, so the first 
            process communicates with the second process. However, in order to achieve a full-duplex, another pipe is needed.
 
   - FIFO's :-Communication between two unrelated processes. It is a full-duplex method, which means that the first process 
              can communicate with the second process, and the opposite can also happen.

## Process State
 
  - The states that a Process enters in working from start till end are known as Process states. These are listed below as:

  - Create State 
  - Ready State
  - Running State
  - Waiting State
  - Exit State


















