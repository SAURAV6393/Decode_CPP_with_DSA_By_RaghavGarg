# MODULE06conditions.cpp - Complete Conditional Statements Guide

## Overview
This module covers **Control Flow Structures** - Decision-making constructs in C++ that allow programs to execute different code based on conditions.

---

## Module Structure

### 📁 **A_Simple_If_Else** - Two-Outcome Conditions
For situations with **only two possible outcomes** (TRUE or FALSE)

**Files:**
- `evenodd.cpp` - Check if number is even or odd using modulus operator
- `absolutevalue.cpp` - Calculate absolute value (positive representation)
- `check_character.cpp` - Check if input is alphabetic using isalpha()
- `vowelconsonant.cpp` - Check if character is vowel or consonant using OR operator

**Key Concepts:**
- Basic if-else syntax
- Comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical operators: `||` (OR), `&&` (AND)
- Built-in functions: `isalpha()`, `abs()`

---

### 📁 **B_Nested_Conditions** - Multiple-Outcome Conditions
For situations with **more than two outcomes** requiring nested conditions

**Files:**
- `GREATESTnoAMONGTHREE.cpp` - Find maximum of three numbers using AND operator
- `3digitornot.cpp` - Range checking (100-999) using AND operator
- `PROFITLOSS.cpp` - Three outcomes: Profit / Loss / No Profit-No Loss
- `qno4volofcycl.cpp` - Mathematical calculation (Volume = π × r² × h)

**Key Concepts:**
- If-else if-else structure
- AND operator (`&&`) for multiple conditions
- Range checking
- Nested decision logic

---

### 📁 **C_Switch_Statements** - Discrete Value Selection
For checking **single variable against many discrete values**

**Files:**
- `switch.cpp` - Map number (1-7) to day of week using switch-case

**Key Concepts:**
- Switch-case syntax
- Break statement (prevents fall-through)
- Default case
- Better readability than multiple if-else

---

## Decision Flow Chart

```
START
  ↓
[Need to check 2 outcomes?] → YES → Use Simple If-Else (A_Simple_If_Else)
  ↓ NO
[Need to check multiple ranges?] → YES → Use Nested If-Else (B_Nested_Conditions)
  ↓ NO
[Checking one variable against many values?] → YES → Use Switch-Case (C_Switch_Statements)
```

---

## Comparison: If-Else vs Switch

| Aspect | If-Else | Switch |
|--------|---------|--------|
| **Best Use** | Conditions, ranges, complex logic | Discrete values |
| **Readability** | Good for 2-3 conditions | Better for 4+ options |
| **Performance** | Sequential evaluation | Direct jump (faster) |
| **Flexibility** | Any boolean expression | Limited to equality check |
| **Multiple Vars** | ✓ Easy | ✗ Difficult |
| **Range Checking** | ✓ Easy | ✗ Not suitable |

---

## Common Mistakes to Avoid

1. **Forgetting 'break' in switch** → Falls through to next case ❌
2. **Using '=' instead of '==' in if** → Assignment instead of comparison ❌
3. **Improper AND/OR logic** → Wrong conditions evaluated ❌
4. **Missing parentheses** → Operator precedence issues ❌

---

## Learning Path

1. **Start with**: A_Simple_If_Else (Foundation)
2. **Then learn**: B_Nested_Conditions (Complexity)
3. **Finally practice**: C_Switch_Statements (Optimization)

---

## Quick Reference

### Simple If-Else Template
```cpp
if (condition)
    // Execute if TRUE
else
    // Execute if FALSE
```

### Nested If-Else Template
```cpp
if (condition1)
    // Execute if condition1 is TRUE
else if (condition2)
    // Execute if condition2 is TRUE
else if (condition3)
    // Execute if condition3 is TRUE
else
    // Execute if all above are FALSE
```

### Switch-Case Template
```cpp
switch (variable) {
    case value1:
        // Execute if variable == value1
        break;
    case value2:
        // Execute if variable == value2
        break;
    default:
        // Execute if no case matches
}
```

---

## Practice Exercises

**Easy (A_Simple_If_Else):**
- Check if age can vote (>= 18)
- Check if temperature is hot/cold
- Check if string is lowercase/uppercase

**Medium (B_Nested_Conditions):**
- Grade calculator (A/B/C/D/F based on marks)
- Age category (Child/Teen/Adult/Senior)
- Triangle type detector (Equilateral/Isosceles/Scalene)

**Advanced (C_Switch_Statements):**
- Calculator (1=Add, 2=Subtract, etc.)
- Menu-driven program
- Command processor

