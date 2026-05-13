\# 🔍 Character Occurrence Counter Program



\## 📌 Description



This program reads a string of up to \*\*100 characters\*\* from the user and ensures that the input has at least \*\*3 characters\*\*.



Then it asks the user for a \*\*single character (key)\*\* and counts how many times this character appears in the string.



If the character does not exist, the program displays a message.



\---



\# 🧠 Problem Statement



Write a program that reads a string (minimum 3 characters), then reads a character (key), and counts how many times the key appears in the string.



\---



\# ▶️ Example



\## Input



banana  

a



\## Output



a key exists 3 times



\---



\# ▶️ Another Example



\## Input



hello  

z



\## Output



Key doesn't exist in alphanumeric!



\---



\# ⚙️ Algorithm



1\. Start the program  

2\. Read a string using `fgets()`  

3\. Remove the newline character  

4\. Check if string length is less than 3  

&#x20;  - If yes → ask user again  

5\. Read a single character (key)  

6\. Traverse the string  

7\. Count occurrences of the key  

8\. Display result  

9\. End program  



\---



\# 🛠️ Key Concepts Used



\- Strings / Character Arrays  

\- Loops (`for`, `while`)  

\- Conditional Statements  

\- Input Validation  

\- Character Comparison  

\- Counting Frequency  



\---



\# 📚 Useful Functions in C



```c

\#include <stdio.h>

\#include <string.h>

