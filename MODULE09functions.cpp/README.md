# MODULE 09: Functions

## 📌 Overview
Functions are reusable blocks of code that perform specific tasks. This module covers function declaration, definition, calling, parameters, return types, and basic concepts.

## 🎯 Learning Goals
- ✅ Understand function declaration and definition
- ✅ Learn about function parameters and return types
- ✅ Pass arguments by value and by reference
- ✅ Work with recursion basics
- ✅ Solve mathematical problems using functions

## 📂 Folder Structure

### A_Basics
Core function concepts:
- **FUNCCALL.cpp** - Function declaration, definition, and calling
- **sumfun.cpp** - Simple addition function
- **starfun.cpp** - Visual output using functions

### B_Practice_Problems
Advanced function problems:
- **factorial.cpp** - Calculate factorial using recursion
- **GCD.cpp** - Find Greatest Common Divisor
- **square_root.cpp** - Calculate square root
- **combination.cpp** - Calculate nCr formula
- **argumentaddress.cpp** - Understanding function parameters and memory addresses

## 📊 Difficulty Progression

| File | Difficulty | Concept | Status |
|------|-----------|---------|--------|
| sumfun.cpp | ⭐ | Basic function | ✅ |
| starfun.cpp | ⭐ | Pattern with function | ✅ |
| factorial.cpp | ⭐⭐ | Recursion | ✅ |
| GCD.cpp | ⭐⭐ | Mathematical logic | ✅ |
| square_root.cpp | ⭐⭐ | Approximation | ✅ |
| combination.cpp | ⭐⭐⭐ | Complex logic | ✅ |

## 🔑 Key Concepts

### 1. Function Declaration & Definition
```cpp
// Declaration
void function_name(parameters);

// Definition
void function_name(parameters) {
    // function body
}
```

### 2. Passing Arguments
- **By Value**: A copy is passed, original not modified
- **By Reference**: Original variable can be modified
- **By Address**: Using pointers

### 3. Recursion
- Function calling itself
- Must have base case to avoid infinite recursion
- Examples: factorial, Fibonacci, GCD

### 4. Return Types
- `void` - No return value
- `int`, `float`, `double` - Specific return type
- `return` statement sends value back to caller

## 💡 Tips & Best Practices

1. **Named Functions**: Use clear, descriptive names
2. **Function Size**: Keep functions small and focused
3. **Documentation**: Add comments explaining parameters and return value
4. **Recursion**: Be careful of stack overflow
5. **Efficiency**: Avoid redundant calculations

## 🧪 Practice Exercises

1. **Level 1**: Write a function to calculate the sum of two numbers
2. **Level 2**: Write a recursive function to find factorial
3. **Level 3**: Calculate GCD of two numbers using Euclidean algorithm
4. **Level 4**: Implement nCr (combination) calculation
5. **Challenge**: Find all factors of a number recursively

## 🎓 Real-World Applications

- **Mathematical computations** - Factorial, GCD, LCM
- **String operations** - Length, reverse
- **Data validation** - Check input
- **Code reusability** - Reduced duplication

## 📚 Related Topics

- Prerequisites: Basic syntax, loops, conditionals
- Next Steps: Pointers & References (MODULE10)
- Use in: All subsequent modules

## ⏱️ Estimated Time: 4-6 hours

---

**Last Updated**: February 2026
