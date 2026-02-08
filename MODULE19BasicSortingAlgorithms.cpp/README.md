# MODULE 19: Basic Sorting Algorithms

## 📌 Overview
Sorting arranges data in order. This module covers three fundamental sorting algorithms with comparisons and optimizations.

## 🎯 Learning Goals
- ✅ Implement Bubble Sort correctly
- ✅ Implement Selection Sort efficiently
- ✅ Implement Insertion Sort optimally
- ✅ Compare algorithm complexity
- ✅ Choose appropriate algorithm

## 📂 Folder Structure

### A_Bubble_Sort
Bubble sort implementation:
- **bubblesort.cpp** - Basic bubble sort
- **Analysis**: Time O(n²), Space O(1)

### B_Selection_Sort
Selection sort implementation:
- **SelectionSort.cpp** - Selection sort algorithm
- **Analysis**: Time O(n²), Space O(1)

### C_Insertion_Sort
Insertion sort implementation:
- **InsertionSort.cpp** - Insertion sort algorithm
- **Analysis**: Time O(n²), Space O(1)

### D_Problems
Sorting application problems:
- **sorting.cpp** - General sorting
- **sort0toN-1.cpp** - Sort specific range
- **sortStringDec.cpp** - String sorting
- **PushZerosToEndOrder.cpp** - Partition problem
- **leetcode169MajorityElement.cpp** - Majority element
- **sackproblem.cpp** - Sack problem
- **cpProblem012.cpp** - Sorting problem

## 📊 Algorithm Comparison

| Algorithm | Best | Average | Worst | Space | Stable |
|-----------|------|---------|-------|-------|--------|
| Bubble | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |
| Selection | O(n²) | O(n²) | O(n²) | O(1) | ❌ No |
| Insertion | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |

## 🔑 Key Concepts

### 1. Bubble Sort
```cpp
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
```
- Largest element "bubbles" to end
- Simplest but inefficient
- Best for nearly sorted data

### 2. Selection Sort
```cpp
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIdx]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}
```
- Find minimum, place at beginning
- Fewer swaps than bubble sort
- Good when write cost is high

### 3. Insertion Sort
```cpp
void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
```
- Build sorted array one element at a time
- Efficient for small/nearly sorted arrays
- Online algorithm

### 4. Partitioning Problems
- **Sort 0s and 1s**: Dutch flag
- **Push zeros to end**: Zero partitioning
- **Majority element**: Voting algorithm

### 5. Stability
- **Stable**: Equal elements maintain relative order
- **Unstable**: May change relative order
- Important for multi-key sorting

## 💡 Tips & Best Practices

1. **Algorithm choice**: Consider data characteristics
2. **Small arrays**: Insertion sort is good
3. **Memory**: O(1) space important in embedded
4. **Stability**: Matters for complex data
5. **Hybrid**: Real systems use hybrid approaches

## 🧪 Practice Exercises

1. **Level 1**: Implement bubble sort
2. **Level 2**: Implement selection sort
3. **Level 3**: Implement insertion sort
4. **Level 4**: Sort 0s and 1s efficiently
5. **Challenge**: Find majority element

## 🎓 Real-World Applications

- **Teaching** - Learning fundamentals
- **Small data** - Few elements
- **Nearly sorted** - Insertion sort
- **Embedded systems** - Limited memory
- **Hybrid sorts** - Part of Tim Sort

## 📚 Related Topics

- Prerequisites: Arrays (MODULE11), Vectors (MODULE12)
- Next Steps: Advanced Sorting (MODULE20)
- Use in: All data processing

## ⏱️ Estimated Time: 5-6 hours

---

**Last Updated**: February 2026
