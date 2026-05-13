\# ✈️ Airline Reservation System (No Duplicate Names)



\## 📌 Description



This program simulates a simple airline reservation system for a plane with \*\*100 seats\*\*.



It reads passenger names and stores them in an array, while ensuring that:



\- No duplicate names are allowed

\- Input stops when the user enters `"----"`

\- All stored passenger names are displayed at the end



Duplicate checking is implemented using a \*\*separate function\*\*.



\---



\# 🧠 Problem Statement



Write a program that reads passenger names for an airplane (maximum 100 passengers).  

The program must:



\- Store names in an array  

\- Prevent duplicate entries  

\- Stop input when `"----"` is entered  

\- Display all registered passengers at the end  

\- Use a function to check for duplicates  



\---



\# ▶️ Example



\## Input



John  

Maria  

Alex  

John  

\----



\## Output



Name already exists! Not added.



Passenger list:

1\. John  

2\. Maria  

3\. Alex  



\---



\# ⚙️ Algorithm



1\. Start the program  

2\. Create a 2D array to store passenger names  

3\. Repeatedly read names from the user  

4\. If input is `"----"` → stop input loop  

5\. Check if the name already exists using a function  

6\. If it exists → reject input  

7\. If it does not exist → store in array  

8\. After loop ends → print all stored passengers  

9\. End program  



\---



\# 🧩 Function Used



\## 🔍 Duplicate Check Function



This function checks whether a name already exists in the array.



\- Returns `1` → name exists  

\- Returns `0` → name does not exist  



\---



\# 🛠️ Key Concepts Used



\- Strings / Character Arrays  

\- 2D Arrays  

\- Functions  

\- String Comparison (`strcmp`)  

\- String Copy (`strcpy`)  

\- Input Validation  

\- Looping Structures  



\---



\# 📚 Useful Functions in C



```c

\#include <stdio.h>

\#include <string.h>

