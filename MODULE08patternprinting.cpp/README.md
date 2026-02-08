# MODULE 08: Pattern Printing

## 📌 Overview
Pattern printing combines loops and logic to create visual patterns. Essential for building problem-solving skills and interview preparation.

## 🎯 Learning Goals
- ✅ Master nested loops for patterns
- ✅ Understand row and column logic
- ✅ Create star and number patterns
- ✅ Print complex geometric patterns
- ✅ Solve LeetCode pattern problems

## 📂 Folder Structure

### Main Directory Files
- **solidrectangle.cpp** - Filled rectangle
- **solidsqur.cpp** - Filled square
- **triangleprint.cpp** - Triangle pattern
- **NUMBERTRIANGLE.cpp** - Number triangle
- **rhombus.cpp** - Rhombus pattern
- **1to4printing.cpp** - Number range patterns
- **ABCDprint.cpp** - Alphabet patterns
- **countinc.cpp** - Counting pattern
- **oddStarPrint.cpp** - Odd row pattern
- **starcross.cpp** - Cross/X pattern
- **crossPrint.cpp** - Plus pattern
- **PLUSprint.cpp** - Plus sign pattern
- **trianglecount.cpp** - Counted triangle
- **numberoddtri.cpp** - Odd number triangle
- **reverse.cpp** - Reverse patterns
- **arrminfun.cpp** - Array minimum function
- **practise.cpp** - General practice

### revision/
Advanced pattern problems:
- **star.cpp** - Star variations
- **StarPyramid.cpp** - Pyramid
- **starcross.cpp** - Cross patterns
- **solidSquare.cpp** - Filled square
- **solidRectangle.cpp** - Filled rectangle
- **triangleStar.cpp** - Triangle with stars
- **numberstar.cpp** - Mixed patterns
- **oddNumberStar.cpp** - Odd numbers
- **floydsTriangle.cpp** - Floyd's triangle
- **flodsTriangle.cpp** - Floyd variant
- **binaryTriangle.cpp** - Binary pattern
- **squareAlphabet.cpp** - Alphabet square
- **FlippedStar.cpp** - Inverted pattern
- **FlippedNumber.cpp** - Inverted numbers

## 🔑 Key Pattern Types

### 1. Rectangle
```
*****
*****
*****
```

### 2. Triangle
```
*
**
***
****
```

### 3. Pyramid (Center)
```
    *
   ***
  *****
 *******
```

### 4. Diamond
```
  *
 ***
*****
 ***
  *
```

### 5. Number Triangle
```
1
12
123
1234
```

### 6. Floyd's Triangle
```
1
2 3
4 5 6
7 8 9 10
```

## 💡 Problem-Solving Approach

### Step 1: Identify Number of Rows
```cpp
int n = 4;  // Number of rows
```

### Step 2: Identify Spaces and Stars
```cpp
for(int i = 1; i <= n; i++) {
    // Spaces
    for(int j = 0; j < n - i; j++) {
        cout << " ";
    }
    // Stars
    for(int j = 0; j < 2*i - 1; j++) {
        cout << "*";
    }
    cout << endl;
}
```

### Step 3: Test with Small Input
Always test with n=2, n=3, n=4

### Step 4: Optimize if Needed
Check for any redundancy

## 🧪 Pattern Progression

| Level | Pattern | Complexity |
|-------|---------|------------|
| ⭐ | Solid rectangle | O(n²) |
| ⭐ | Right triangle | O(n²) |
| ⭐⭐ | Pyramid (centered) | O(n²) |
| ⭐⭐ | Diamond | O(n²) |
| ⭐⭐ | Floyd's triangle | O(n²) |
| ⭐⭐⭐ | Hollow patterns | O(n²) |
| ⭐⭐⭐ | Complex nested | O(n³) |

## 💻 Sample Programs

### Program 1: Pyramid
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    for(int i = 1; i <= n; i++) {
        // Spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2*i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### Program 2: Diamond
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Upper half including middle
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << endl;
    }
    
    // Lower half
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 0; j < n - i; j++) cout << " ";
        for(int j = 0; j < 2*i - 1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
```

### Program 3: Floyd's Triangle
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int num = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
```

## 🎓 Interview Tips

- Start with simple understanding
- Draw pattern on paper first
- Identify rows and columns
- Write nested loops correctly
- Test with edge cases (n=1)

## 📚 Related Topics

- Prerequisites: Loops (MODULE07)
- Next Steps: Functions (MODULE09)
- Use in: Algorithm practice, interviews

## ⏱️ Estimated Time: 4-6 hours

---

**Last Updated**: February 2026
