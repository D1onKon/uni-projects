\# 📋 JSON Student Registry



A two-part C project that collects student data and saves it in JSON format, then minifies it.



\---



\## 📁 Files



| File | Description |

|------|-------------|

| `part1.c` | Collects student info and writes it to `Students.json` |

| `part2.c` | Reads `Students.json` and produces a minified version |



\---



\## ⚙️ How it works



\*\*Part 1 — Data Collection\*\*

\- Prompts the user to enter name, age, and grade (0–10) for 3 students

\- Validates that the grade is within range using a `do-while` loop

\- Writes the collected data to `Students.json` in proper JSON format



\*\*Part 2 — JSON Minifier\*\*

\- Reads `Students.json` character by character

\- Strips all whitespace (spaces, newlines, tabs) outside of strings

\- Handles escape sequences inside strings correctly

\- Outputs the result to `minified.json`



\---



\## 🚀 How to compile \& run



\*\*Part 1:\*\*

```bash

gcc part1.c -o part1

./part1

```



\*\*Part 2\*\* (run after Part 1):

```bash

gcc part2.c -o part2

./part2

```



\---



\## 📄 Example output



`Students.json`:

```json

{

&#x20; "students": \[

&#x20;   {

&#x20;     "name": "John",

&#x20;     "age": 20,

&#x20;     "grade": 8.5

&#x20;   },

&#x20;   ...

&#x20; ]

}

```



`minified.json`:

```json

{"students":\[{"name":"John","age":20,"grade":8.5},...]}`

```



\---



\## 🛠️ Language

C — compiled with GCC



