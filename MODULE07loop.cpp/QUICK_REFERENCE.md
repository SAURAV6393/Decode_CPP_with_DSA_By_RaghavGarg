# MODULE07 - Loop Programming Quick Reference

## 🎯 Loop Syntax Cheat Sheet

### For Loop
```cpp
for(initialization; condition; increment) {
    // Body
}

// Example
for(int i = 1; i <= 10; i++) {
    cout << i << " ";
}
// Output: 1 2 3 4 5 6 7 8 9 10
```

### While Loop
```cpp
while(condition) {
    // Body
    // Must update condition somewhere!
}

// Example
int i = 1;
while(i <= 10) {
    cout << i << " ";
    i++;
}
// Output: 1 2 3 4 5 6 7 8 9 10
```

### Do-While Loop
```cpp
do {
    // Body (executes at least once)
} while(condition);

// Example
int i = 1;
do {
    cout << i << " ";
    i++;
} while(i <= 10);
// Output: 1 2 3 4 5 6 7 8 9 10
```

---

## 📊 Loop Selection Guide

| Need | Loop Type | Example |
|------|-----------|---------|
| Fixed count | For | `for(i=1; i<=n; i++)` |
| Process digits | While | `while(n>0) n/=10` |
| Unknown count | While | `while(!finished)` |
| At least once | Do-While | `do...while(valid)` |

---

## 🔢 Operators Quick Reference

### Arithmetic
```cpp
int a = 10, b = 3;
a + b     // 13
a - b     // 7
a * b     // 30
a / b     // 3 (integer division)
a % b     // 1 (remainder)
```

### For Digit Processing
```cpp
int n = 1234;
n % 10    // 4 (last digit)
n / 10    // 123 (remove last digit)
```

### Increment/Decrement
```cpp
i++       // Post-increment: i then use
++i       // Pre-increment: use then i
i--       // Post-decrement
--i       // Pre-decrement
```

### Shortcuts
```cpp
i += 5    // i = i + 5
i -= 3    // i = i - 3
i *= 2    // i = i * 2
i /= 4    // i = i / 4
```

---

## 🔍 Comparison Operators

```cpp
i < 10    // Less than
i <= 10   // Less or equal
i > 5     // Greater than
i >= 5    // Greater or equal
i == 10   // Equal to
i != 5    // Not equal to
```

### Logical Operators
```cpp
a && b    // AND (both true)
a || b    // OR (at least one true)
!a        // NOT (opposite)
```

---

## 🎯 Common Loop Patterns

### Pattern 1: Count to N
```cpp
for(int i = 1; i <= n; i++) {
    // Process i
}
```

### Pattern 2: Sum/Multiply
```cpp
int result = 0;  // or 1 for multiply
for(int i = 1; i <= n; i++) {
    result += i;  // or *= for multiply
}
```

### Pattern 3: Process Digits
```cpp
while(n > 0) {
    int digit = n % 10;
    // Use digit
    n /= 10;
}
```

### Pattern 4: Generate Sequence
```cpp
for(int i = 0; i < n; i++) {
    cout << (formula(i)) << " ";
}
```

### Pattern 5: Find in Range
```cpp
for(int i = start; i <= end; i++) {
    if(condition(i)) {
        // Found!
    }
}
```

---

## 📈 Time Complexity

```
O(1)       Constant - no loops
O(log n)   Logarithmic - halving (digit extraction)
O(n)       Linear - single loop
O(n²)      Quadratic - nested loops
O(n³)      Cubic - triple nested loops
```

### Examples
```cpp
O(n):       for(int i=0; i<n; i++)                    // n operations

O(log n):   while(n>0) n/=2                           // ~log(n) divisions

O(n²):      for(i=0;i<n;i++)                          // n × n
              for(j=0;j<n;j++)

O(n log n): for(i=0;i<n;i++)                          // n × log(n)
              while(temp>0) temp/=2
```

---

## ✅ Debug Checklist

When loop doesn't work:

- [ ] **Initialization**: Does counter start correctly?
- [ ] **Condition**: Is it correct for your goal?
- [ ] **Increment**: Does counter change each iteration?
- [ ] **Scope**: Can variables be accessed?
- [ ] **Logic**: Is body doing what you want?
- [ ] **Edge cases**: What about n=0, n=1, negative?

### Common Issues
```cpp
// Infinite loop - condition never false
for(int i = 0; i < 10; ) { }  // i never updates

// Off by one - should be i <= 10
for(int i = 0; i < 10; i++) { }  // Goes 0-9, not 1-10

// Variable scope - used outside loop
for(int i=0; i<10; i++) { }
cout << i;  // ERROR: i not accessible
```

---

## 🎓 Code Templates

### Template 1: Simple Repetition
```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}
```

### Template 2: Accumulation
```cpp
#include<iostream>
using namespace std;

int main() {
    int n, result = 0;  // (or 1 for multiply)
    cin >> n;
    for(int i = 1; i <= n; i++) {
        result += i;     // (or *= i)
    }
    cout << result;
    return 0;
}
```

### Template 3: Digit Processing
```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n > 0) {
        int digit = n % 10;
        // Process digit
        n /= 10;
    }
    return 0;
}
```

### Template 4: Series Generation
```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int value = 2*i + 1;  // Formula
        cout << value << " ";
    }
    return 0;
}
```

---

## 🚨 Common Mistakes

| Mistake | Wrong | Correct |
|---------|-------|---------|
| Infinity | `for(;;)` | `for(i=0;i<n;i++)` |
| Off by 1 | `for(i=0;i<10;i++)` starts at 0 | `for(i=1;i<=10;i++)` starts at 1 |
| No update | `while(x<10) {x}` x unchanged | `while(x<10) {x++}` x updates |
| Type not cast | `cout << i` (65) | `cout << (char)i` (A) |
| Overflow | `int x = 2000000000 * 2` | Use `long long` |

---

## 🎯 File-to-Concept Mapping

| Concept | Files |
|---------|-------|
| Basic for loop | ntimesuser.cpp, charascii.cpp |
| Accumulation | FACTORIAL.cpp, power.cpp |
| Conditional addition | fibonacii.cpp |
| Digit extraction | count_Digit_in_number.cpp |
| Digit reconstruction | REVERSE_NUMBER.cpp |
| Simple formula | 19table.cpp, ODDAP.cpp |
| Production code | LEETCODE-07.cpp |

---

## 📝 Testing Checklist

```cpp
// Test with various inputs:
n = 0       // Edge case
n = 1       // Minimum
n = 5       // Normal
n = 100     // Large
n = -1      // Invalid (if applicable)
```

---

## 🔗 Quick Links Within MODULE07

- [Complete Guide](README_COMPLETE_GUIDE.md)
- [Learning Path](LEARNING_PROGRESSION.md)
- [A - Basics](A_Loop_Basics/README.md)
- [B - Series](B_Mathematical_Series/README.md)
- [C - Numbers](C_Number_Manipulation/README.md)
- [D - Patterns](D_Pattern_Sequences/README.md)
- [E - Interview](E_LeetCode_Problems/README.md)
- [F - Assignments](F_Assignments/README.md)

---

**Print this page for quick reference during coding!** 📄

