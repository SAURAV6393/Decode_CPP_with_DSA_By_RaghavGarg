# B_Nested_Conditions - Nested If-Else Statements

## Concept Overview
This folder contains **nested if-else statements** where there are **multiple conditions** with more than two possible outcomes.

### Syntax:
```cpp
if (condition1)
    statement1;
else if (condition2)
    statement2;
else if (condition3)
    statement3;
else
    statement4;
```

---

## Files in this folder:

### 1. **GREATESTnoAMONGTHREE.cpp** - Find Greatest Among Three Numbers
- **Concept**: Comparing multiple values to find the maximum
- **Logic**:
  - If `x > y && x > z` → x is greatest
  - Else if `z > y && z > x` → z is greatest
  - Else → y is greatest
- **Example**: Input 10 20 30 → Output: Greatest = 30

### 2. **3digitornot.cpp** - Check if Number is 3-Digit
- **Concept**: Using AND operator (&&) to check range
- **Logic**:
  - If `x >= 100 && x <= 999` → 3-digit number
  - Else → Not a 3-digit number
- **Example**: Input 150 → Output: Three digit positive integer | Input 50 → Output: NOT!

### 3. **PROFITLOSS.cpp** - Calculate Profit or Loss
- **Concept**: Comparing two values (Cost Price & Selling Price)
- **Logic**:
  - If `SP - CP > 0` → PROFIT
  - Else if `SP == CP` → NO PROFIT, NO LOSS
  - Else → LOSS
- **Formula**: 
  - Profit = SP - CP
  - Loss = CP - SP
- **Example**: CP=100, SP=150 → PROFIT = 50 | CP=100, SP=80 → LOSS = 20

### 4. **qno4volofcycl.cpp** - Calculate Volume of Cylinder
- **Concept**: Mathematical calculation using fixed value (pi) and user inputs
- **Formula**: V = π × r² × h
- **Logic**: 
  - Take radius (r) and height (h) as input
  - Calculate volume using formula
  - No complex conditions, but shows decision-based calculations
- **Example**: r=5, h=10 → Volume = 785

---

## Key Takeaways:
- ✓ Multiple conditions: if-else if-else structure
- ✓ Logical operators: `&&` (AND), `||` (OR)
- ✓ Comparison operators for range checking
- ✓ Mathematical operations with conditional logic
- ✓ More than two possible outcomes
