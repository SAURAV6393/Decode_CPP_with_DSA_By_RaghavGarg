# MODULE 05: Basics & I/O

## 📌 Overview
This is the foundation module. You'll learn C++ basics including variables, data types, input/output operations, and operators.

## 🎯 Learning Goals
- ✅ Understand C++ program structure
- ✅ Learn about variables and data types
- ✅ Master input/output (cin, cout)
- ✅ Work with basic operators
- ✅ Write simple programs

## 📂 Folder Structure

### A_Basics_Concepts
Core concepts to master:
- C++ program structure
- Variables and declaration
- Primitive data types (int, float, char, bool)
- Input/Output operations
- Type casting
- Operators (arithmetic, logical, comparison)

### B_Assignments
Practice assignments to solidify concepts

### C_Temp
Temporary/test files

## 🔑 Key Concepts

### 1. Program Structure
```cpp
#include <iostream>
using namespace std;

int main() {
    // Your code here
    return 0;
}
```

### 2. Variables & Data Types
```cpp
int age = 25;              // Integer
float height = 5.9;        // Floating point
char grade = 'A';          // Character
bool isStudent = true;     // Boolean
string name = "John";      // String
```

### 3. Input/Output
```cpp
// Output
cout << "Hello, World!";
cout << age << endl;

// Input
int x;
cin >> x;

// String with spaces
string line;
getline(cin, line);
```

### 4. Operators
```cpp
// Arithmetic
int a = 10, b = 3;
cout << a + b;      // 13
cout << a - b;      // 7
cout << a * b;      // 30
cout << a / b;      // 3
cout << a % b;      // 1

// Comparison
a > b;    // true
a < b;    // false
a == b;   // false
a != b;   // true

// Logical
true && true;       // true
true || false;      // true
!true;              // false
```

### 5. Comments
```cpp
// Single line comment
/* Multi 
   line comment */
```

## 💡 Best Practices

1. **Variable naming**: Use descriptive names (score, not s)
2. **Initialization**: Always initialize variables
3. **Comments**: Explain complex logic
4. **Consistency**: Use consistent style
5. **Testing**: Test with different inputs

## 🧪 Practice Exercises

1. **Level 1**: Print your name and age
2. **Level 2**: Add two numbers from input
3. **Level 3**: Calculate area of rectangle
4. **Level 4**: Convert temperature (C to F)
5. **Challenge**: Calculate compound interest

## 💻 Sample Programs

### Program 1: Area Calculator
```cpp
#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    
    int area = length * width;
    cout << "Area = " << area << endl;
    
    return 0;
}
```

### Program 2: Temperature Converter
```cpp
#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    float fahrenheit = (celsius * 9/5) + 32;
    cout << fahrenheit << " Fahrenheit" << endl;
    
    return 0;
}
```

## 🎓 Real-World Context

Every program needs:
- ✅ Input (from user or file)
- ✅ Processing (calculation/logic)
- ✅ Output (display result)

This module covers all three!

## 📚 Related Topics

- Next Steps: Conditionals (MODULE06)
- Use in: Every C++ program

## ⏱️ Estimated Time: 3-4 hours

---

**Last Updated**: February 2026
