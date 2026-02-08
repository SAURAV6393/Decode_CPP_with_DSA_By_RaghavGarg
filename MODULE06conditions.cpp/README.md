# MODULE 06: Conditionals

## 📌 Overview
Conditionals allow programs to make decisions. This module covers if-else statements, switch cases, and logical operators.

## 🎯 Learning Goals
- ✅ Understand if-else statements
- ✅ Learn nested conditions
- ✅ Master switch statements
- ✅ Work with complex logical conditions
- ✅ Write decision-making programs

## 📂 Folder Structure

### A_Simple_If_Else
Basic conditional statements

### B_Nested_Conditions
Complex nested conditions

### C_Switch_Statements
Switch case operations

## 🔑 Key Concepts

### 1. If-Else Statement
```cpp
if(age >= 18) {
    cout << "You are an adult";
} else {
    cout << "You are a minor";
}
```

### 2. If-Else If Chain
```cpp
if(marks >= 90) {
    cout << "Grade A";
} else if(marks >= 80) {
    cout << "Grade B";
} else if(marks >= 70) {
    cout << "Grade C";
} else {
    cout << "Grade F";
}
```

### 3. Nested Conditions
```cpp
if(age >= 18) {
    if(hasLicense) {
        cout << "Can drive";
    } else {
        cout << "Cannot drive";
    }
} else {
    cout << "Too young to drive";
}
```

### 4. Switch Statement
```cpp
int day = 3;
switch(day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    default: cout << "Invalid day";
}
```

### 5. Logical Operators
```cpp
// AND (&&)
if(age >= 18 && hasLicense) {
    cout << "Can drive";
}

// OR (||)
if(day == 6 || day == 7) {
    cout << "Weekend";
}

// NOT (!)
if(!isRaining) {
    cout << "Play outside";
}
```

### 6. Ternary Operator
```cpp
string result = (age >= 18) ? "Adult" : "Minor";
```

## 💡 Tips & Best Practices

1. **Condition clarity**: Use parentheses
2. **Switch vs If**: Use switch for single variable
3. **Default case**: Always include in switch
4. **Break statement**: Don't forget in cases
5. **Indentation**: Make code readable

## 🧪 Practice Exercises

1. **Level 1**: Check if number is positive/negative
2. **Level 2**: Determine grade from marks
3. **Level 3**: Check if year is leap year
4. **Level 4**: Validate login credentials
5. **Challenge**: Solve quadratic equation

## 💻 Sample Programs

### Program 1: Even/Odd Checker
```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if(num % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}
```

### Program 2: Grade Calculator
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    
    char grade;
    if(marks >= 90) grade = 'A';
    else if(marks >= 80) grade = 'B';
    else if(marks >= 70) grade = 'C';
    else if(marks >= 60) grade = 'D';
    else grade = 'F';
    
    cout << "Grade: " << grade;
    return 0;
}
```

## 📊 Decision Making Flowchart

```
Input → Condition? → Yes → Action 1
         ↓ No
         → Condition 2? → Yes → Action 2
                    ↓ No
                    → Default Action
                    ↓
                    Output
```

## 🎓 Real-World Applications

- Validating user input
- Authorization and access control
- Calculating discounts or taxes
- Game logic
- Error handling

## 📚 Related Topics

- Prerequisites: Basics (MODULE05)
- Next Steps: Loops (MODULE07)
- Use in: Every program with decisions

## ⏱️ Estimated Time: 3-4 hours

---

**Last Updated**: February 2026
