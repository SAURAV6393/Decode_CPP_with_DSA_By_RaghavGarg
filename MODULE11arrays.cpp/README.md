# MODULE 11: 1D Arrays

## 📌 Overview
Arrays allow storing multiple elements of the same type. This module covers array declaration, initialization, operations, searching, and practical problem-solving.

## 🎯 Learning Goals
- ✅ Declare and initialize arrays
- ✅ Access and modify array elements
- ✅ Iterate through arrays
- ✅ Implement searching algorithms
- ✅ Solve array manipulation problems

## 📂 Folder Structure

### A_Basics
Core array concepts:
- **arraysum.cpp** - Sum all array elements
- **countarray.cpp** - Count specific elements
- **linear.cpp** - Linear search implementation
- **marksarray.cpp** - Working with array of marks
- **findsmallest.cpp** - Find minimum element

### B_Problems
Advanced array problems:
- **continousarray.cpp** - Continuous subarray problems
- **countvalley.cpp** - Valley counting problem
- **secondlagestelement.cpp** - Find second largest element
- **inoptarray.cpp** - Optimal array operations
- **assignmentARRAY.cpp/** - Additional assignments

## 📊 Difficulty Progression

| File | Difficulty | Concept | Status |
|------|-----------|---------|--------|
| arraysum.cpp | ⭐ | Basic iteration | ✅ |
| countarray.cpp | ⭐ | Counting | ✅ |
| linear.cpp | ⭐ | Linear search | ✅ |
| marksarray.cpp | ⭐⭐ | Data management | ✅ |
| findsmallest.cpp | ⭐⭐ | Min/Max | ✅ |
| secondlagestelement.cpp | ⭐⭐ | Sorting logic | ✅ |
| continousarray.cpp | ⭐⭐ | Subarray | ✅ |
| countvalley.cpp | ⭐⭐⭐ | Complex logic | ✅ |

## 🔑 Key Concepts

### 1. Array Declaration & Initialization
```cpp
// Declaration
int arr[5];                    // Size 5
int arr[] = {1, 2, 3, 4, 5}; // Size inferred

// With size
int arr[100];
```

### 2. Accessing Elements
```cpp
int arr[5] = {10, 20, 30, 40, 50};
cout << arr[0];  // 10 (0-indexed)
arr[2] = 35;     // Modify element
```

### 3. Array Iteration
```cpp
// Using for loop
for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

// Using range-based for (C++11)
for(int x : arr) {
    cout << x << " ";
}
```

### 4. Common Operations
- **Sum**: Add all elements
- **Count**: Count elements matching criteria
- **Search**: Find specific element
- **Min/Max**: Find smallest/largest
- **Reverse**: Reverse array order

### 5. Searching
```cpp
// Linear Search - O(n)
for(int i = 0; i < n; i++) {
    if(arr[i] == target) return i;
}
```

## 💡 Tips & Best Practices

1. **Array Bounds**: Check array size carefully
2. **1D vs  Multi-D**: Use vectors for dynamic size
3. **Pass to Function**: Arrays pass by reference
4. **Memory**: Fixed size at compile time
5. **Efficiency**: Use appropriate algorithms

## 🧪 Practice Exercises

1. **Level 1**: Find sum and average of array elements
2. **Level 2**: Find second largest element
3. **Level 3**: Implement linear search function
4. **Level 4**: Find longest continuous subarray with sum k
5. **Challenge**: Implement array rotation

## 🎓 Real-World Applications

- **Data storage** - Grades, temperatures
- **Statistics** - Mean, median, mode
- **Searching** - Database records
- **Game development** - High scores
- **Image processing** - Pixel data

## 📚 Related Topics

- Prerequisites: Pointers (MODULE10)
- Next Steps: Vectors (MODULE12)
- Use in: Searching, Sorting, DSA modules

## ⏱️ Estimated Time: 5-7 hours

---

**Last Updated**: February 2026
