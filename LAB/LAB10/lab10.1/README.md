\# Student Grades Processing in C



A simple C program that reads student grades from a text file, calculates the average grade, and separates students into successful and failed categories.



\---



\## Features



\- Reads data from a file

\- Calculates average grades

\- Creates:

&#x20; - `success.txt`

&#x20; - `fail.txt`

\- Counts successful and failed students

\- Basic file handling in C



\---



\## Technologies



\- C Programming Language

\- Standard C Library (`stdio.h`)



\---



\## Input File



The program reads from:



```txt

students.txt

```



Each line must contain:



```txt

Name Surname Grade1 Grade2

```



\### Example



```txt

Dimitris Dimitriou 5.4 8.6

Nikos Nikolopoulos 4.9 3.5

Giorgos Georgiou 6.8 4.9

```



\---



\## Output



\### success.txt



Students with average grade >= 5



```txt

Dimitris Dimitriou 7.00

Giorgos Georgiou 5.85

```



\### fail.txt



Students with average grade < 5



```txt

Nikos Nikolopoulos 4.20

```



\---



\## Compilation



Using GCC:



```bash

gcc main.c -o main

```



Run the program:



\### Linux / Mac



```bash

./main

```



\### Windows



```bash

main.exe

```



\---



\## Project Structure



```txt

project/

│

├── main.c

├── students.txt

├── success.txt

├── fail.txt

└── README.md

```



\---



\## Concepts Used



\- File handling (`fopen`, `fclose`)

\- Reading files with `fscanf`

\- Writing files with `fprintf`

\- Loops and conditions

\- Arrays and strings in C



\---



\## Author



Created as practice for learning file handling in C.

