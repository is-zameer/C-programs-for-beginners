# 💻 C Programs for Beginners

### Programming Fundamentals Lab | C Language

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c&logoColor=white" alt="C Language"/>
  <img src="https://img.shields.io/badge/Level-Beginner-success?style=for-the-badge" alt="Beginner Level"/>
  <img src="https://img.shields.io/badge/Focus-Problem%20Solving-orange?style=for-the-badge" alt="Problem Solving"/>
  <img src="https://img.shields.io/badge/Category-Academic%20Lab-purple?style=for-the-badge" alt="Academic Lab"/>
</p>

## 📌 About the Repository

Welcome to **C Programs for Beginners**! This repository is dedicated to learning the fundamentals of programming using the C language through practical laboratory experiments.

It covers basic arithmetic operations, number-based problems, loops, functions, recursion, arrays, matrices, strings, pointers, structures, and file handling.

The goal is to strengthen logical thinking, develop problem-solving skills, and help students translate algorithms into working C programs.

Whether you're preparing for programming lab examinations, practicing coding, or building your programming foundation, this repository provides a structured collection of experiments to learn from.

## 🎯 Course Objectives

The course aims to:

1. Develop logic-building skills for problem-solving.
2. Translate solution logic into computer programs using C language constructs.
3. Decompose problems into modules and combine them to develop complete programs.
4. Develop an understanding of the salient features of programming languages.
5. Gain practical experience with programming paradigms through example programming languages.

## 🧪 List of Experiments

Students are required to perform a minimum of **15 experiments** as specified in the course curriculum. The repository covers the following 28 experiments.

### 🔹 1. Basic Programming and Number Operations

| No. | Experiment |
|---:|---|
| 1 | Find the sum and average of three numbers. |
| 2 | Find the sum of the individual digits of a positive integer. |
| 3 | Generate the first *n* terms of the Fibonacci sequence. |
| 4 | Generate prime numbers between 1 and *n*. |
| 5 | Check whether a given number is an Armstrong number. |
| 6 | Evaluate the algebraic expression \((ax+b)/(ax-b)\). |
| 7 | Check whether a given number is a perfect number. |
| 8 | Check whether a given number is a strong number. |
| 9 | Perform arithmetic operations using a `switch` statement. |

### 🔹 2. Functions and Recursion

| No. | Experiment |
|---:|---|
| 10 | Find the factorial of an integer using a non-recursive function. |
| 11 | Find the factorial of an integer using a recursive function. |
| 12 | Find the GCD of two integers using recursion. |
| 13 | Find the GCD of two integers using a non-recursive function. |

### 🔹 3. Arrays and Matrices

| No. | Experiment |
|---:|---|
| 14 | Find the largest and smallest numbers in a list of integers. |
| 15 | Sort an array in ascending order. |
| 16 | Check whether a given matrix is symmetric. |
| 17 | Perform the addition of two matrices. |
| 18 | Multiply two matrices using functions. |

### 🔹 4. Strings and Pointers

| No. | Experiment |
|---:|---|
| 19 | Insert a substring into a main string at a given position and delete *n* characters from a specified position. |
| 20 | Determine whether a given string is a palindrome using user-defined functions. |
| 21 | Find the starting index of a substring within a main string, or return `-1` if it is not found. |
| 22 | Count the number of lines, words, and characters in a text. |
| 23 | Find the length of a string using pointers. |

### 🔹 5. Structures and Complex Numbers

| No. | Experiment |
|---:|---|
| 24 | Use functions and structures to read, display, add, and multiply complex numbers. |

### 🔹 6. File Handling

| No. | Experiment |
|---:|---|
| 25 | Display the contents of a file. |
| 26 | Copy the contents of one file to another. |
| 27 | Merge two files into a third file. |
| 28 | Reverse the first *n* characters in a file. |

## 🧠 Topics Covered

- **C Fundamentals:** Variables, data types, operators, input/output, and expressions.
- **Control Statements:** `if-else`, loops, and `switch`.
- **Number Problems:** Fibonacci sequence, prime numbers, Armstrong numbers, perfect numbers, and strong numbers.
- **Functions:** User-defined functions, modular programming, and recursion.
- **Arrays and Matrices:** Searching, sorting, matrix addition, multiplication, and symmetry.
- **Strings:** String manipulation, substring operations, and palindrome checking.
- **Pointers:** Pointer operations and accessing string data.
- **Structures:** Representing complex numbers using user-defined data types.
- **File Handling:** Reading, writing, copying, merging, and processing file contents.

## 🛠️ Requirements

To compile and run the programs, you will need:

- A C compiler, such as GCC or MinGW.
- A code editor or IDE, such as Visual Studio Code, Code::Blocks, or Dev-C++.
- Basic computer knowledge and an understanding of programming fundamentals.

## 🚀 Getting Started

### 1. Clone the Repository

Replace the placeholders with your actual GitHub repository details.

```bash
git clone <YOUR_REPOSITORY_URL>
cd <YOUR_REPOSITORY_DIRECTORY>
```

### 2. Compile a C Program

Use GCC to compile a program named `program.c`:

```bash
gcc program.c -o program
```

### 3. Run the Program

**Windows:**

```bash
program.exe
```

**Linux / macOS:**

```bash
./program
```

Replace `program.c` with the filename of the experiment you want to execute.

## 💡 Example Program

The following program calculates the sum and average of three numbers.

```c
#include <stdio.h>

int main(void) {
    float a, b, c, sum, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0f;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
```

### Sample Output

```text
Enter three numbers: 10 20 30
Sum = 60.00
Average = 20.00
```

## 📂 Suggested Repository Structure

Organizing the experiments into folders can make the repository easier to navigate.

```text
c-programs-for-beginners/
│
├── README.md
├── 01-basic-programs/
├── 02-number-programs/
├── 03-functions-and-recursion/
├── 04-arrays-and-matrices/
├── 05-strings-and-pointers/
├── 06-structures/
└── 07-file-handling/
```

This is a suggested structure. You can adapt it to match the files in your repository.

## 🎓 Course Outcomes

After completing the course, students should be able to:

1. Explain the process of problem-solving using computers.
2. Design algorithmic solutions for given problems.
3. Write maintainable C programs to implement algorithms.
4. Manually trace C programs and understand their execution.
5. Develop C programs for simple real-world applications using structures and files.

## 🌱 Learning Benefits

By practicing these experiments, students can:

- Improve logical reasoning and computational thinking.
- Learn to break complex problems into smaller modules.
- Understand the practical application of algorithms.
- Develop debugging and code-tracing skills.
- Build a foundation for Data Structures and Algorithms (DSA).
- Prepare for programming laboratory examinations and viva questions.

## 🤝 Contributing

Suggestions, corrections, and improvements are welcome.

1. Fork the repository.
2. Create a new branch for your changes.
3. Add or improve a C program.
4. Compile and test the program.
5. Submit a pull request with a clear description of your changes.

Please write readable code, use meaningful variable names, and handle invalid inputs where appropriate.

## 📜 License

No license has been specified yet. If you intend to make this repository available for reuse, add an appropriate `LICENSE` file describing the permissions and conditions.

## 👨‍💻 Author

**Project:** C Programs for Beginners  
**Language:** C  
**Subject Area:** Programming Fundamentals

- GitHub: [Zameer Ansari](https://github.com/is-zameer)

---

<p align="center">
  <strong>Learn • Practice • Solve • Grow</strong>
  <br/>
  Happy Coding! 🚀
</p>
