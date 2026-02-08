# C_Switch_Statements - Switch Case Control Structure

## Concept Overview
This folder contains **switch-case statements** used for **multiple discrete options** where the code is cleaner than multiple if-else statements.

### Syntax:
```cpp
switch (variable/expression) {
    case value1:
        statement1;
        break;
    case value2:
        statement2;
        break;
    ...
    default:
        statement_default;
}
```

---

## Files in this folder:

### 1. **switch.cpp** - Days of the Week (Switch Case Example)
- **Concept**: Using switch-case to map numbers to days
- **Logic**:
  - Input 1 → MONDAY
  - Input 2 → TUESDAY
  - Input 3 → WEDNESDAY
  - ... and so on
  - Input 7 → SUNDAY
- **Example**: Input 1 → Output: MONDAY

---

## Switch vs If-Else:

| Feature | Switch | If-Else |
|---------|--------|---------|
| **Best For** | Discrete values | Range/Complex logic |
| **Readability** | Better for many options | Better for conditions |
| **Performance** | Faster (direct jump) | Evaluates each condition |
| **Multiple Types** | Limited to one variable | Can use different expressions |

### When to use Switch:
- ✓ Checking single variable against many values
- ✓ Menu-driven programs
- ✓ Mapping numbers to strings/actions
- ✓ Many distinct cases

### When to use If-Else:
- ✓ Range checking (x > 5 && x < 10)
- ✓ Complex boolean logic
- ✓ Combining multiple variables
- ✓ Few conditions (2-3)

---

## Important Notes:
- **break statement**: Needed to exit switch (prevents fall-through)
- **default case**: Similar to else in if-else (optional but recommended)
- **Expression types**: Can use integers, characters, strings (C++14+)

