\# 🔁 Character Replacement Exercise



\## 📌 Description



This program reads a string of up to \*\*100 characters\*\* from the user and performs the following action:



\- Replaces every occurrence of the lowercase letter \*\*'a'\*\* with the uppercase letter \*\*'Z'\*\*



\- Stores the modified string in a second array



\- Displays the final modified string



\---



\# 🧠 Problem Statement



Write a program that reads a string (maximum 100 characters), replaces every `'a'` with `'Z'`, stores the result in a second string, and displays the modified string.



\---



\# ▶️ Example



\## Input



banana apple



\## Output



bZnZnZ Zpple



\---



\# ▶️ Another Example



\## Input



a cat and a dog



\## Output



Z cZt Znd Z dog



\---



\# ⚙️ Algorithm



1\. Start the program  

2\. Declare two character arrays (`str1`, `str2`)  

3\. Read a string from the user using `fgets()`  

4\. Remove the newline character (`'\\n'`)  

5\. Traverse the string character by character  

6\. If a character is `'a'`, replace it with `'Z'`  

7\. Copy the modified string into the second array  

8\. Display the result  

9\. End the program  



\---



\# 🛠️ Key Concepts Used



\- Strings / Character Arrays  

\- Loops (`while`)  

\- Conditional Statements (`if`)  

\- Character Replacement  

\- String Copying  

\- Input Handling  



\---



\# 📚 Useful Functions in C



```c

\#include <stdio.h>

\#include <string.h>

