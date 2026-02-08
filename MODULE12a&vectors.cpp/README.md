# MODULE 12: Arrays & Vectors

## 📌 Overview
Vectors are dynamic arrays that grow/shrink at runtime. This module covers vector operations, manipulation, and solving complex array problems.

## 🎯 Learning Goals
- ✅ Understand vector basics and operations
- ✅ Learn size and capacity concepts
- ✅ Master vector modification methods
- ✅ Solve sorting and array manipulation problems
- ✅ Implement efficient algorithms

## 📂 Folder Structure

### A_Array_Operations
Fundamental array operations:
- **printarrayusingpointer.cpp** - Print using pointers
- **copyarray.cpp** - Copy array operations
- **table.cpp** - Multiplication table array

### B_Vector_Basics
Vector container operations:
- **vectorinput.cpp** - Input and creation
- **vectorwithsize.cpp** - Vector with size
- **sizeandcapacityvector.cpp** - Size vs capacity
- **capacitysame.cpp** - Capacity management
- **reversevector.cpp** - Reverse operations
- **reversevectorfunction.cpp** - Reverse with functions
- **lastindexx.cpp** - Find last index
- **lastoccurencex.cpp** - Find last occurrence

### C_Sorting_Problems
Advanced sorting and problems:
- **MergeSort.cpp** - Merge sort implementation
- **leetcode88mergesort.cpp** - LeetCode merge sorted arrays
- **sortZerosAndOnes.cpp** - Sort 0s and 1s
- **sortZeroOneAndTwo.cpp** - Sort 0, 1, 2s (Dutch flag)
- **sortNEGPOS.cpp** - Sort negatives and positives
- **myZeroAndOnelogic.cpp** - Custom sorting logic
- **sumequaltarget.cpp** - Pair sum problem

## 📊 Difficulty Progression

| Category | Files | Level | Priority |
|----------|-------|-------|----------|
| Vector Basics | 8 files | ⭐⭐ | HIGH |
| Sorting | 6 files | ⭐⭐⭐ | HIGH |
| Special Problems | 1 file | ⭐⭐⭐ | MEDIUM |

## 🔑 Key Concepts

### 1. Vector Basics
```cpp
#include <vector>
vector<int> v;           // Empty vector
vector<int> v(5);        // Size 5, value 0
vector<int> v{1,2,3};    // Initialize with values
```

### 2. Vector Operations
```cpp
v.push_back(10);         // Add at end
v.pop_back();            // Remove last
v.at(0);                 // Access with bounds checking
v[0];                    // Direct access
v.size();                // Number of elements
v.capacity();            // Allocated space
v.clear();               // Remove all elements
```

### 3. Size vs Capacity
```cpp
vector<int> v;
v.push_back(1);  // size=1, capacity=1
v.push_back(2);  // size=2, capacity=2
v.push_back(3);  // size=3, capacity=4 (doubles)
```

### 4. Sorting Algorithms
- **Merge Sort** - O(n log n), stable
- **Quick Sort** - O(n log n) average, in-place
- **0-1-2 Sort** - O(n), three-way partition

### 5. Common Problems
- **Two Sum** - Find pair with given sum
- **Sort Array** - Various sorting challenges
- **Dutch Flag** - Partition 0, 1, 2s
- **Merge Sorted** - Merge two sorted arrays

## 💡 Tips & Best Practices

1. **Dynamic Size**: Vectors handle size automatically
2. **Memory**: Capacity may be > size for efficiency
3. **Performance**: Use reserve() if size is known
4. **Iteration**: Prefer range-based for loops
5. **STL Algorithms**: Use sort(), reverse() from algorithm library

## 🧪 Practice Exercises

1. **Level 1**: Create vector, add/remove elements
2. **Level 2**: Find pair with given sum
3. **Level 3**: Sort 0s and 1s in single pass
4. **Level 4**: Merge two sorted arrays
5. **Challenge**: Implement merge sort from scratch

## 🎓 Real-World Applications

- **Dynamic arrays** - Unknown size beforehand
- **Data sorting** - Efficient processing
- **Database** - Sortable records
- **Graphics** - Vertex data
- **Game development** - Sprite/object lists

## 📚 Related Topics

- Prerequisites: 1D Arrays (MODULE11), Pointers (MODULE10)
- Next Steps: 2D Arrays (MODULE13)
- Use in: Sorting (MODULE19-20), DSA modules

## 📖 PDF Reference
- **Array and Vector.pdf** - Comprehensive guide

## ⏱️ Estimated Time: 6-8 hours

---

**Last Updated**: February 2026
