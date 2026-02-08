# E_LeetCode_Problems - Interview & Competitive Programming

## Overview
This folder contains **LeetCode problems** solved using fundamental loop concepts - ideal for interview preparation and competitive programming practice.

---

## 📁 Files in this folder:

### **LEETCODE-07.cpp** - LeetCode #7: Reverse Integer

**Problem Statement**: 
Given a signed 32-bit integer, reverse its digits. If reversal causes overflow, return 0.

**Difficulty**: Medium

**Constraints**:
- Integer range: -2^31 to 2^31 - 1
- Must handle overflow cases

---

## 🎯 Algorithm Approach

### Basic Approach (Simple Reverse):
```cpp
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;      // Extract last digit
        rev = (rev * 10) + digit; // Append digit
        n /= 10;                 // Remove last digit
    }
    return rev;
}
```

### Advanced Approach (With Overflow Check):
```cpp
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        
        // Check if next operation will overflow
        if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
            return 0;  // Overflow detected
        }
        
        rev = (rev * 10) + digit;
        n /= 10;
    }
    return rev;
}
```

---

## 💭 Step-by-Step Walkthrough

### Example 1: Reverse 123
```
Input: 123

Step 1: n=123, rev=0
        digit = 123 % 10 = 3
        rev = (0 * 10) + 3 = 3
        n = 123 / 10 = 12

Step 2: n=12, rev=3
        digit = 12 % 10 = 2
        rev = (3 * 10) + 2 = 32
        n = 12 / 10 = 1

Step 3: n=1, rev=32
        digit = 1 % 10 = 1
        rev = (32 * 10) + 1 = 321
        n = 1 / 10 = 0

Output: 321 ✓
```

### Example 2: Reverse -123
```
Input: -123

Step 1: n=-123, rev=0
        digit = -123 % 10 = -3 (negative)
        rev = (0 * 10) + (-3) = -3
        n = -123 / 10 = -12

Step 2: n=-12, rev=-3
        digit = -12 % 10 = -2
        rev = (-3 * 10) + (-2) = -32
        n = -12 / 10 = -1

Step 3: n=-1, rev=-32
        digit = -1 % 10 = -1
        rev = (-32 * 10) + (-1) = -321
        n = -1 / 10 = 0

Output: -321 ✓
```

### Example 3: Overflow Case (1534236469)
```
Input: 1534236469
After reversal would be: 9646324351
But 9646324351 > INT_MAX (2147483647)
Output: 0 (overflow detected)
```

---

## ⚠️ Overflow Detection Logic

### Why Check for Overflow?

```
INT_MAX = 2,147,483,647
INT_MIN = -2,147,483,648

If rev > INT_MAX / 10:
    Next multiplication (rev * 10) will exceed INT_MAX
    
If rev == INT_MAX / 10 && digit > 7:
    Even if rev * 10 fits, adding digit might overflow
```

### Check Before Operation:
```cpp
if (rev > INT_MAX / 10) {
    return 0;  // Would overflow
}
```

---

## 🔍 Key Concepts

### 1. Modulus Operator (%)
- Gets last digit: `123 % 10 = 3`
- Works with negative: `-123 % 10 = -3`

### 2. Division Operator (/)
- Removes last digit: `123 / 10 = 12`
- Works with negative: `-123 / 10 = -12`

### 3. Building Number
- Shift left: `rev * 10`
- Add digit: `+ digit`
- Example: 32 * 10 + 1 = 321

### 4. Integer Limits
```cpp
#include <climits>
INT_MAX = 2^31 - 1 = 2,147,483,647
INT_MIN = -2^31 = -2,147,483,648
```

---

## 📊 Complexity Analysis

| Aspect | Value |
|--------|-------|
| **Time Complexity** | O(log n) - proportional to digit count |
| **Space Complexity** | O(1) - only loop variable |
| **Digit Count** | Up to 10 digits for 32-bit integer |

### Why O(log n)?
- For number n with d digits: d ≈ log₁₀(n)
- Loop runs d times, so O(log n)

Example:
- n = 1,000 → log(1000) ≈ 3 → 4 digits ✓
- n = 1,000,000 → log(1000000) ≈ 6 → 7 digits ✓

---

## 🎓 Related LeetCode Problems

| # | Problem | Difficulty | Link |
|---|---------|-----------|------|
| 7 | Reverse Integer | Medium | *Current* |
| 206 | Reverse Linked List | Easy | Similar concept |
| 9 | Palindrome Number | Easy | Uses reverse |
| 190 | Reverse Bits | Easy | Bit manipulation |

---

## 💡 Variations & Extensions

### Variation 1: Reverse Only Digits
```cpp
// Skip negative sign, reverse digits, reapply sign
bool negative = (n < 0);
n = abs(n);
// ... reverse logic ...
if(negative) rev = -rev;
```

### Variation 2: Reverse String
```cpp
// Convert to string, reverse, convert back
string s = to_string(n);
reverse(s.begin(), s.end());
int rev = stoi(s);
```

### Variation 3: Without Overflow Check
```cpp
// For smaller ranges or different constraints
int reverse(int n) {
    int rev = 0;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
```

---

## 🧪 Test Cases

```
Test 1: 123 → 321
Test 2: -123 → -321
Test 3: 120 → 21 (trailing zero)
Test 4: 0 → 0
Test 5: 1534236469 → 0 (overflow)
Test 6: -2147483648 → 0 (INT_MIN, overflow)
Test 7: 1000000003 → 3000000001 (needs check)
```

---

## 📝 Interview Tips

1. **Clarify constraints** - Ask about integer limits
2. **Mention overflow** - Good sign for interviewer
3. **Test edge cases** - Negatives, zeros, overflow
4. **Explain trade-offs** - Complexity vs readability
5. **Ask follow-ups** - What if string-based? What if 64-bit?

---

## 🚀 Implementation Checklist

- [ ] Handle positive numbers
- [ ] Handle negative numbers  
- [ ] Detect overflow before it happens
- [ ] Handle trailing zeros
- [ ] Test INT_MAX boundary
- [ ] Test INT_MIN boundary
- [ ] Return 0 on overflow
- [ ] Time complexity O(log n)

