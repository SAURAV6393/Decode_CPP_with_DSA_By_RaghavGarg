# MODULE 13: 2D Arrays

## 📌 Overview
2D arrays (matrices) store data in rows and columns. This module covers matrix operations, traversal, problems involving 2D structures.

## 🎯 Learning Goals
- ✅ Declare and initialize 2D arrays
- ✅ Traverse matrices in various orders
- ✅ Perform matrix operations
- ✅ Solve matrix manipulation problems
- ✅ Work with vector of vectors

## 📂 Folder Structure

### A_Basics
Core 2D array concepts:
- **inputAndoutput.cpp** - Input/output matrix
- **sumarray2D.cpp** - Sum all elements
- **largestNo.cpp** - Find maximum element
- **vector2D.cpp** - 2D vectors

### B_Problems
Advanced matrix problems:
- **spiral.cpp** - Spiral traversal
- **transpose.cpp** - Matrix transpose
- **transpose90.cpp** - 90-degree rotation
- **transposeSwap.cpp** - Transpose using swap
- **pascalgenerationleetcode118.cpp** - Pascal's triangle
- **leetcode26Removeduplicatearray.cpp** - Remove duplicates

## 📊 Difficulty Progression

| File | Difficulty | Concept | Status |
|------|-----------|---------|--------|
| inputAndoutput.cpp | ⭐ | Basic I/O | ✅ |
| sumarray2D.cpp | ⭐ | Sum elements | ✅ |
| largestNo.cpp | ⭐⭐ | Find max | ✅ |
| transpose.cpp | ⭐⭐ | Transpose | ✅ |
| spiral.cpp | ⭐⭐⭐ | Spiral order | ✅ |
| pascalgenerationleetcode118.cpp | ⭐⭐⭐ | Pattern | ✅ |

## 🔑 Key Concepts

### 1. 2D Array Declaration
```cpp
int arr[3][3];                    // 3x3 array
int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
vector<vector<int>> matrix;       // 2D vector
```

### 2. Accessing Elements
```cpp
int matrix[3][4];
matrix[i][j];     // Element at row i, column j
// i: row index (0 to m-1)
// j: column index (0 to n-1)
```

### 3. Matrix Traversal Orders
```cpp
// Row-wise
for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
        cout << matrix[i][j];

// Column-wise
for(int j = 0; j < n; j++)
    for(int i = 0; i < m; i++)
        cout << matrix[i][j];

// Diagonal
for(int i = 0; i < n; i++)
    cout << matrix[i][i];
```

### 4. Common Operations
- **Transpose**: Swap rows and columns
- **Rotation**: 90°, 180°, 270°
- **Spiral**: Move in spiral pattern
- **Diagonal Sum**: Sum diagonals
- **Pattern Generation**: Pascal's triangle, etc.

### 5. Spiral Traversal
- Top row left to right
- Right column top to bottom
- Bottom row right to left
- Left column bottom to top

## 💡 Tips & Best Practices

1. **Bounds**: Check row and column indices
2. **Memory**: 2D arrays need contiguous memory
3. **Use Vectors**: More flexible than arrays
4. **Traversal**: Understand different orders
5. **Optimization**: Cache locality matters

## 🧪 Practice Exercises

1. **Level 1**: Create and print matrix
2. **Level 2**: Calculate sum and diagonal
3. **Level 3**: Transpose a matrix
4. **Level 4**: Spiral traversal
5. **Challenge**: Rotate matrix 90 degrees in-place

## 🎓 Real-World Applications

- **Images** - Pixel grids
- **Spreadsheets** - Data tables
- **Game boards** - Chess, games
- **Route planning** - Distance matrices
- **Neural networks** - Weight matrices

## 📚 Related Topics

- Prerequisites: 1D Arrays (MODULE11), Vectors (MODULE12)
- Next Steps: Strings (MODULE14)
- Use in: matrix operations, graph representation

## 📖 PDF Reference
- **2D Array Part l_merged.pdf** - Comprehensive guide

## ⏱️ Estimated Time: 5-6 hours

---

**Last Updated**: February 2026
