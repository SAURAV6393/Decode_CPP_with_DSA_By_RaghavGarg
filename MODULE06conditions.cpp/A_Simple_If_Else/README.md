# A_Simple_If_Else - Basic Conditional Statements

## Concept Overview
This folder contains simple if-else statements where conditions have **only two possible outcomes**.

### Syntax:
```cpp
if (condition)
    statement1;  // Executes if condition is TRUE
else
    statement2;  // Executes if condition is FALSE
```

---

## Files in this folder:

### 1. **evenodd.cpp** - Check Even or Odd
- **Concept**: Using modulus operator (%) to determine if a number is even or odd
- **Logic**: 
  - If `n % 2 == 0` → EVEN
  - Else → ODD
- **Example**: Input 5 → Output: ODD | Input 4 → Output: EVEN

### 2. **absolutevalue.cpp** - Find Absolute Value
- **Concept**: Displaying absolute value (positive value) of any number
- **Logic**:
  - If `n < 0` → Use `-n` (make positive)
  - Else → Use `n` as is
- **Example**: Input -10 → Output: 10 | Input 15 → Output: 15

### 3. **check_character.cpp** - Check Character Type
- **Concept**: Determining if input is alphabetic, digit, or special character
- **Built-in Functions**:
  - `isalpha(ch)` - Returns true if character
  - `isdigit(ch)` - Returns true if digit
- **Example**: Input 'A' → Output: 1 (true) | Input '5' → Output: 0 (false)

### 4. **vowelconsonant.cpp** - Check Vowel or Consonant
- **Concept**: Using OR operator (||) to check multiple conditions
- **Logic**:
  - If `ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'` → VOWEL
  - Else → CONSONANT
- **Example**: Input 'e' → Output: VOWEL | Input 'b' → Output: CONSONANT

---

## Key Takeaways:
- ✓ Simple conditions with two outcomes
- ✓ Use comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`
- ✓ Use logical operators: `&&` (AND), `||` (OR), `!` (NOT)
- ✓ Basic arithmetic operations: `%` (modulus), `-` (negation)
