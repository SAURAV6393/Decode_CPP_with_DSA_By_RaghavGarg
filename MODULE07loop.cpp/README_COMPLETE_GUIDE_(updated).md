# MODULE 07: Loops

## 📌 Overview  
Loops allow repeating code blocks. This module covers for, while, and do-while loops with practical applications.

## 🎯 Learning Goals
- ✅ Understand loop concepts
- ✅ Master for loops
- ✅ Master while and do-while loops
- ✅ Use nested loops
- ✅ Solve patterns and series problems

## 📂 Folder Structure

### A_Loop_Basics
Fundamental loop concepts

### B_Mathematical_Series
Working with numerical series

### C_Number_Manipulation
Digit and number manipulation

### D_Pattern_Sequences
Pattern printing and sequences

### E_LeetCode_Problems
Competitive programming problems

### F_Assignments
Practice assignments

## 🔑 Key Concepts

### 1. For Loop
```cpp
for(int i = 0; i < 5; i++) {
    cout << i << " ";
}
// Output: 0 1 2 3 4
```

### 2. While Loop
```cpp
int i = 0;
while(i < 5) {
    cout << i << " ";
    i++;
}
// Output: 0 1 2 3 4
```

### 3. Do-While Loop
```cpp
int i = 0;
do {
    cout << i << " ";
    i++;
} while(i < 5);
// Runs at least once
```

### 4. Nested Loops (Patterns)
```cpp
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        cout << "* ";
    }
    cout << endl;
}
// Output:
// * * *
// * * *
// * * *
```

### 5. Loop Control
```cpp
// Break: Exit loop
for(int i = 0; i < 10; i++) {
    if(i == 5) break;  // Exits when i=5
}

// Continue: Skip iteration
for(int i = 0; i < 5; i++) {
    if(i == 2) continue;  // Skips when i=2
    cout << i;
}
```

### 6. Range-based For (C++11)
```cpp
vector<int> nums = {10, 20, 30};
for(int x : nums) {
    cout << x << " ";
}
```

## 📊 Loop Comparison

| Loop | Best For | Condition Check |
|------|----------|-----------------|
| for | Known iterations | At start |
| while | Unknown iterations | At start |
| do-while | At least once | At end |
| range-for | Collections | Automatic |

## 🧪 Common Patterns

### 1. Sum of n Numbers
```cpp
int sum = 0;
for(int i = 1; i <= n; i++) {
    sum += i;
}
```

### 2. Factorial
```cpp
int fact = 1;
for(int i = 1; i <= n; i++) {
    fact *= i;
}
```

### 3. Reverse Number
```cpp
int rev = 0;
while(num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
}
```

### 4. Prime Check
```cpp
bool isPrime = true;
for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) {
        isPrime = false;
        break;
    }
}
```

## 💡 Tips & Best Practices

1. **Loop initialization**: Set correct starting value
2. **Condition**: Ensure loop terminates
3. **Update**: Always update loop variable
4. **Readability**: Use meaningful variable names
5. **Efficiency**: Avoid unnecessary computations inside loop

## 🧪 Practice Exercises

1. **Level 1**: Print 1 to 10
2. **Level 2**: Calculate sum and average
3. **Level 3**: Print multiplication table
4. **Level 4**: Print pyramid patterns
5. **Challenge**: Generate Pascal's triangle

## 💻 Sample Programs

### Program 1: Fibonacci Series
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1;
    
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
```

### Program 2: Star Pyramid
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// Output:
// * 
// * * 
// * * * 
// * * * *
```

## 📊 Time Complexity

| Operation | Time |
|-----------|------|
| n iterations | O(n) |
| n² iterations (nested) | O(n²) |
| Fibonacci (naive) | O(2ⁿ) |

## 🎓 Real-World Applications

- **Banking**: Calculate compound interest
- **Games**: Game loops
- **Data processing**: Process arrays/files
- **Graphics**: Animation loops
- **Network**: Polling/retries

## 📚 Related Topics

- Prerequisites: Conditionals (MODULE06)
- Next Steps: Functions (MODULE09)
- Use in: Every program with repetition

## ⏱️ Estimated Time: 5-7 hours

---

**Last Updated**: February 2026
