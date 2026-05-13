\# 🔄 String Case Conversion Exercise



\## 📌 Description

This program continuously reads a string of up to \*\*100 characters\*\* from the user and performs the following actions:



\- Converts all \*\*lowercase\*\* letters to \*\*uppercase\*\*

\- Converts all \*\*uppercase\*\* letters to \*\*lowercase\*\*

\- Displays the modified string

\- Counts and displays:

&#x20; - The number of lowercase letters

&#x20; - The number of uppercase letters



The program stops when the user enters:



```text

end

```



\---



\# 🧠 Problem Statement



Write a program that continuously reads a string (maximum 100 characters) and displays it after replacing lowercase letters with their corresponding uppercase letters and vice versa.



Additionally, the program must display the number of lowercase and uppercase letters contained in the new string.



The program terminates when the user enters the string `end`.



\---



\# ▶️ Example



\## Input

```text

HelloWorld

```



\## Output

```text

hELLOwORLD

Lowercase letters: 2

Uppercase letters: 8

```



\---



\# ▶️ Another Example



\## Input

```text

Programming123

```



\## Output

```text

pROGRAMMING123

Lowercase letters: 1

Uppercase letters: 10

```



\---



\# ⚙️ Algorithm



1\. Start the program

2\. Read a string from the user

3\. Check if the string is equal to `end`

&#x20;  - If yes → terminate the program

&#x20;  - Otherwise → continue

4\. Traverse each character of the string

&#x20;  - If the character is lowercase → convert it to uppercase

&#x20;  - If the character is uppercase → convert it to lowercase

5\. Count lowercase and uppercase letters in the modified string

6\. Display the new string and the counts

7\. Repeat from step 2



\---



\# 🛠️ Key Concepts Used



\- Strings / Character Arrays

\- Loops

\- Conditional Statements

\- Character Manipulation

\- ASCII / Built-in Character Functions

\- Case Conversion

\- Character Counting



\---



\# 📚 Useful Functions in C



```c

\#include <ctype.h>

```



Functions:

\- `tolower()`

\- `toupper()`

\- `islower()`

\- `isupper()`



\---



\# 📝 Notes



\- Numbers and special characters remain unchanged

\- Maximum input length: \*\*100 characters\*\*

\- The word `end` is used only to terminate the program and should not be processed



\---



\# 🎯 Learning Outcomes



After completing this exercise, you will understand:



\- How to process strings character by character

\- How uppercase and lowercase characters work

\- How to manipulate text using loops and conditions

\- How to count specific character types inside a string



\---



\# 📈 Difficulty Level



🟢 Beginner → Intermediate



Suitable for:

\- C Programming

\- C++

\- Java

\- Python

\- Basic String Manipulation

