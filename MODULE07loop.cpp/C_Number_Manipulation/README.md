# C_Number_Manipulation - Processing Numbers with Loops

## Overview
This folder covers **digit-level operations** where loops extract, transform, and manipulate individual digits of numbers.

---

## 🔢 Core Concepts

### Digit Extraction
Extract individual digits from a number using **modulus (%) and division (/)** operations:

```cpp
int n = 1234;
while(n > 0) {
    int digit = n % 10;    // Get last digit (4, 3, 2, 1)
    n = n / 10;            // Remove last digit
}
```

### Digit Reconstruction
Build new numbers from extracted digits:

```cpp
int new_number = 0;
while(original > 0) {
    int digit = original % 10;
    new_number = (new_number * 10) + digit;
}
```

---

## 📁 Files in this folder:

### 1. **count_Digit_in_number.cpp** - Count and Sum Digits

**Concept**: Extract each digit and count/sum them

**Code Pattern**:
```cpp
int count_digit = 0;
int sum_digit = 0;
while(n != 0) {
    int digit = n % 10;      // Extract last digit
    sum_digit += digit;      // Accumulate sum
    n = n / 10;              // Remove last digit
    count_digit++;           // Count iterations
}
```

**Logic**:
1. Initialize counters to 0
2. Loop while number is not 0
3. Extract last digit using modulus
4. Add to sum
5. Remove last digit using division
6. Increment count

**Example**:
- Input: 1234
- Iterations:
  - n=1234 → digit=4 → sum=4 → count=1 → n=123
  - n=123 → digit=3 → sum=7 → count=2 → n=12
  - n=12 → digit=2 → sum=9 → count=3 → n=1
  - n=1 → digit=1 → sum=10 → count=4 → n=0
- Output: count=4, sum=10

**Use Cases**:
- Validation (check digit in ISBN, credit cards)
- Number properties (digital root)
- Data processing

---

### 2. **REVERSE_NUMBER.cpp** - Reverse Number Digits

**Concept**: Reverse the order of digits in a number

**Code Pattern**:
```cpp
int reverse = 0;
while(n > 0) {
    int last_digit = n % 10;
    reverse = (reverse * 10) + last_digit;
    n = n / 10;
}
```

**Logic**:
1. Initialize reverse to 0
2. Extract last digit
3. Append to reverse (multiply by 10 and add)
4. Remove last digit from original

**Step-by-Step Example** (Input: 1234):
```
Step 1: n=1234, reverse=0
        last_digit = 1234 % 10 = 4
        reverse = (0 * 10) + 4 = 4
        n = 1234 / 10 = 123

Step 2: n=123, reverse=4
        last_digit = 123 % 10 = 3
        reverse = (4 * 10) + 3 = 43
        n = 123 / 10 = 12

Step 3: n=12, reverse=43
        last_digit = 12 % 10 = 2
        reverse = (43 * 10) + 2 = 432
        n = 12 / 10 = 1

Step 4: n=1, reverse=432
        last_digit = 1 % 10 = 1
        reverse = (432 * 10) + 1 = 4321
        n = 1 / 10 = 0

Output: 4321 ✓
```

**Advanced Version (LEETCODE-07.cpp)**:
- Include overflow checking
- Handle 32-bit integer limits

**Use Cases**:
- Palindrome checking (reverse == original)
- Number puzzles
- LeetCode Problem #7

---

### 3. **19table.cpp** - Multiplication Table

**Concept**: Generate multiplication table using loops

**Code Pattern**:
```cpp
for(int i = 1; i <= 10; i++) {
    cout << n * i << endl;  // n × 1, n × 2, ..., n × 10
}
```

**Logic**:
1. Take input: base number
2. Loop from 1 to 10
3. Print: n × i each iteration

**Example** (Input: 5):
```
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50
```

**Use Cases**:
- Learning multiplication
- Quick reference generation
- Teaching loops

---

## 🔍 Digit Extraction Techniques:

### Get Last Digit:
```cpp
int last = n % 10;
```

### Remove Last Digit:
```cpp
n = n / 10;
```

### Get First Digit:
```cpp
int first;
while(n >= 10) n = n / 10;  // Keep dividing
first = n;
```

### Get Nth Digit (from right):
```cpp
for(int i = 1; i < n; i++) number /= 10;
int digit = number % 10;
```

---

## 📊 Comparison of Approaches:

| Operation | Loop Type | Complexity | Use | 
|-----------|-----------|-----------|-----|
| **Count/Sum Digits** | While | O(log n) | Validation |
| **Reverse Number** | While | O(log n) | Palindrome |
| **Multiplication Table** | For | O(1) | Reference |

---

## ⚠️ Edge Cases & Issues:

### Zero Handling:
```cpp
// count_digit_in_number should handle:
if(n == 0) {
    count = 1;  // Zero has 1 digit
    sum = 0;
}
```

### Negative Numbers:
```cpp
// Take absolute value first
n = abs(n);
```

### Integer Overflow:
```cpp
// REVERSE_NUMBER might overflow if reversed digit exceeds INT_MAX
// LeetCode version includes overflow checks
```

---

## 🎓 Learning Progression:

1. **Basic**: Understand % and / operators
2. **Intermediate**: Extract single digit
3. **Advanced**: Reconstruct number
4. **Expert**: Handle overflow, negative numbers

---

## Common Mistakes:

```cpp
// ❌ WRONG - Infinite loop
while(n != 0) {
    digit = n % 10;
    // n is never changed!
}

// ✅ CORRECT
while(n != 0) {
    digit = n % 10;
    n = n / 10;  // Must update n
}
```

