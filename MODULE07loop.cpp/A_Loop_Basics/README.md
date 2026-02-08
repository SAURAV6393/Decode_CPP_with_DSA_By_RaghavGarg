# A_Loop_Basics - Fundamental Loop Concepts

## Overview
This folder introduces the **basics of loops** - fundamental iteration structures to repeat code blocks.

---

## 🎯 Core Concepts

### What is a Loop?
A loop is a control structure that **executes a block of code multiple times** based on a condition.

### Types of Loops in C++:

| Loop Type | Syntax | Best Use |
|-----------|--------|----------|
| **For** | `for(init; condition; increment)` | Known number of iterations |
| **While** | `while(condition)` | Unknown number of iterations |
| **Do-While** | `do { } while(condition)` | At least one execution needed |

---

## 📁 Files in this folder:

### 1. **ntimesuser.cpp** - Simple For Loop Repetition
**Concept**: Executing same code block n times

**Code Pattern**:
```cpp
for(int i = 1; i <= n; i++) {
    // This block executes n times
}
```

**Logic**:
- Take input: number of times to repeat
- Loop from 1 to n
- Print "HELLO WORLD!" each iteration

**Use Case**: Menu systems, countdown timers, repeated messages

**Output Example**:
- Input: 3
- Output: 
  ```
  HELLO WORLD!
  HELLO WORLD!
  HELLO WORLD!
  ```

---

### 2. **charascii.cpp** - Looping Through ASCII Values
**Concept**: Using loop to iterate through character ranges

**Code Pattern**:
```cpp
for(int i = 65; i <= 90; i++) {
    cout << (char)i << " " << i << endl;
}
```

**Logic**:
- ASCII values 65-90 represent uppercase letters A-Z
- Loop through these values
- Cast integer to character to display letter
- Also print the ASCII value

**Key Learning**: Type casting (int to char)

**Output Example**:
```
A 65
B 66
C 67
...
Z 90
```

---

## Loop Structure Breakdown:

### For Loop Anatomy:
```cpp
for ( init ; condition ; increment ) {
    // Body
}
```

- **init** (Initialize): Starting point (i = 1)
- **condition** (Condition): Repeat while true (i <= n)
- **increment** (Update): Change after each iteration (i++)

### Execution Flow:
1. Initialize counter
2. Check condition
3. If TRUE → Execute body → Increment → Go to step 2
4. If FALSE → Exit loop

---

## Important Loop Keywords:

| Keyword | Purpose | Example |
|---------|---------|---------|
| **break** | Exit loop immediately | `if(i==5) break;` |
| **continue** | Skip current iteration | `if(i==3) continue;` |
| **i++** | Increment by 1 | Pre/post increment |
| **i--** | Decrement by 1 | Pre/post decrement |

---

## Common Mistakes:

```cpp
// ❌ WRONG - Infinite loop
for(int i = 1; i <= 10; ) {  // i never increases
    cout << i;
}

// ✅ CORRECT
for(int i = 1; i <= 10; i++) {  // i increments
    cout << i;
}

// ❌ WRONG - Never executes
for(int i = 10; i <= 5; i++) {  // Condition already false
    cout << i;
}
```

---

## Loop Range vs Count:

```cpp
// Count from 1 to n
for(int i = 1; i <= n; i++)

// Count from 0 to n-1
for(int i = 0; i < n; i++)

// Count backwards from n to 1
for(int i = n; i >= 1; i--)

// Count with steps
for(int i = 0; i <= 100; i += 10)  // 0, 10, 20, ..., 100
```

---

## Practice Patterns:

**Pattern 1: Print 1 to 5**
```cpp
for(int i = 1; i <= 5; i++) cout << i << " ";
// Output: 1 2 3 4 5
```

**Pattern 2: Print even numbers 0 to 10**
```cpp
for(int i = 0; i <= 10; i += 2) cout << i << " ";
// Output: 0 2 4 6 8 10
```

**Pattern 3: Print characters A to F**
```cpp
for(char c = 'A'; c <= 'F'; c++) cout << c << " ";
// Output: A B C D E F
```

---

## Time Complexity Analysis:

For loop running n times:
- **Time Complexity**: O(n) - Linear
- **Space Complexity**: O(1) - Constant (only loop variable)

Example:
- 10 times → 10 operations
- 1000 times → 1000 operations
- n times → n operations

