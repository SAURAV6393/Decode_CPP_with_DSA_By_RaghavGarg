# B_Mathematical_Series - Series Generation Using Loops

## Overview
This folder covers **series generation** where loops calculate mathematical sequences and accumulate values.

---

## 📊 Series Types

### Definition
A series is a **sum of terms following a specific pattern**.

### Common Mathematical Series:

| Series | Formula | Terms |
|--------|---------|-------|
| **Factorial** | n! = 1×2×3×...×n | 1!, 2!, 3!, ... |
| **Fibonacci** | F(n) = F(n-1) + F(n-2) | 0, 1, 1, 2, 3, 5, ... |
| **Power** | a^n = a×a×a×...×a (n times) | 2¹, 2², 2³, ... |
| **Sum 1 to n** | 1+2+3+...+n | Sum increases |

---

## 📁 Files in this folder:

### 1. **FACTORIAL.cpp** - Compute N! (Factorial)

**Concept**: Multiply all positive integers from 1 to n

**Code Pattern**:
```cpp
int sum = 1;
for(int i = 1; i <= n; i++) {
    sum *= i;  // Multiply accumulator
}
```

**Mathematical Definition**:
- 5! = 1 × 2 × 3 × 4 × 5 = 120
- 0! = 1 (by definition)
- n! = n × (n-1)!

**Logic**:
1. Initialize accumulator to 1
2. Loop from 1 to n
3. Multiply accumulator by current number
4. Print final product

**Example**:
- Input: 5
- Iterations: 1 → 1×1=1 → 1×2=2 → 2×3=6 → 6×4=24 → 24×5=120
- Output: 120

**Use Cases**:
- Combinatorics (nCr = n! / (r! × (n-r)!))
- Permutations
- Probability calculations

---

### 2. **fibonacii.cpp** - Generate Fibonacci Sequence

**Concept**: Each number is sum of previous two numbers

**Code Pattern**:
```cpp
int a = 0, b = 1;
for(int i = 0; i < n; i++) {
    cout << a << " ";
    int c = a + b;  // Sum of previous two
    a = b;          // Shift left
    b = c;          // New value becomes second
}
```

**Mathematical Definition**:
- F(0) = 0
- F(1) = 1
- F(n) = F(n-1) + F(n-2)

**Sequence**:
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
   ↓  ↓  ↓  ↓  ↓  ↓
  0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8
```

**Logic**:
1. Initialize a=0, b=1
2. Loop n times
3. Print current number (a)
4. Calculate next: c = a + b
5. Shift: a becomes b, b becomes c

**Example**:
- Input: 7
- Output: 0 1 1 2 3 5 8

**Use Cases**:
- Nature patterns (spiral shells, flower petals)
- Algorithm design (divide & conquer)
- Number theory

---

### 3. **power.cpp** - Calculate A^B (Power)

**Concept**: Multiply a number by itself n times

**Code Pattern**:
```cpp
int power = 1;
for(int i = 1; i <= n; i++) {
    power *= a;  // Multiply by base
}
```

**Mathematical Definition**:
- a^n = a × a × a × ... × a (n times)
- a^0 = 1 (any number to power 0)
- a^1 = a

**Logic**:
1. Initialize power to 1
2. Loop exponent times
3. Multiply power by base each iteration
4. Print result

**Example**:
- Base: 2, Exponent: 5
- Calculation: 1 → 1×2=2 → 2×2=4 → 4×2=8 → 8×2=16 → 16×2=32
- Output: 32 (which is 2^5)

**Use Cases**:
- Exponential growth calculations
- Computer science (2^n for memory)
- Physics (distance, force calculations)

---

## 📈 Accumulation Pattern

All three files use **accumulator pattern**:

```
Start with initial value
├── Loop iteration 1: Combine with first element
├── Loop iteration 2: Combine with second element
├── Loop iteration 3: Combine with third element
└── Return accumulated result
```

### Pattern Variations:

**Multiplication (Factorial & Power)**:
```cpp
result = 1;              // Start with multiplicative identity
result *= current_value; // Accumulate by multiplication
```

**Addition (Fibonacci)**:
```cpp
result = previous + current; // Accumulate by addition
```

---

## 🔄 Comparison:

| Series | Operation | Initial Value | Loop Operation | Growth |
|--------|-----------|----------------|-----------------|--------|
| Factorial | Multiply | 1 | `×` each number | Slow (1,2,6,24,120) |
| Fibonacci | Add | a=0, b=1 | Sum previous two | Medium (0,1,1,2,3,5) |
| Power | Multiply | 1 | `×` base each time | Varies |

---

## 🎯 Time Complexity:

| Algorithm | Operations | Time Complexity |
|-----------|-----------|-----------------|
| Factorial(n) | n multiplications | O(n) |
| Fibonacci(n) | n additions | O(n) |
| Power(a,n) | n multiplications | O(n) |

---

## Overflow Alert ⚠️

Be careful with large numbers:

```cpp
// Factorial grows VERY fast
5! = 120
10! = 3,628,800
13! = 6,227,020,800  // Exceeds int max!
```

---

## Enhanced Versions:

### Factorial with checks:
```cpp
if (n < 0) {
    cout << "Factorial not defined for negative";
    return;
}
```

### Fibonacci optimization:
```cpp
// More efficient: F(n) formula exists
// But still loop-based is common
```

### Power with optimization:
```cpp
// Could use built-in: pow(a, n)
// Or binary exponentiation: O(log n)
```

