# MODULE 18: Linear & Binary Search

## 📌 Overview
Searching algorithms are fundamental to CS. This module covers linear search and binary search with applications.

## 🎯 Learning Goals
- ✅ Understand linear search concept
- ✅ Implement binary search correctly
- ✅ Know search complexity (O(n) vs O(log n))
- ✅ Apply searching concepts to problems
- ✅ Understand search variants

## 📂 Folder Structure

### A_Linear_Search
Linear search implementation:
- **linear.cpp** - Basic linear search
- **firstoccurence.cpp** - Find first match

### B_Binary_Search
Binary search implementation:
- **binearsearch.cpp** - Basic binary search
- **lowerbound.cpp** - Find lower bound
- **k0658.cpp** - LeetCode 658 problem
- **leetcode_034.cpp** - LeetCode 34 problem

## 📊 Difficulty & Complexity

| File | Difficulty | Time | Space |
|------|-----------|------|-------|
| linear.cpp | ⭐ | O(n) | O(1) |
| firstoccurence.cpp | ⭐ | O(n) | O(1) |
| binearsearch.cpp | ⭐⭐ | O(log n) | O(1) |
| lowerbound.cpp | ⭐⭐ | O(log n) | O(1) |
| k0658.cpp | ⭐⭐ | O(log n) | O(1) |
| leetcode_034.cpp | ⭐⭐⭐ | O(log n) | O(1) |

## 🔑 Key Concepts

### 1. Linear Search
```cpp
// Search unsorted array
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return i;
    }
    return -1;  // Not found
}
// Time: O(n), Space: O(1)
```

### 2. Binary Search
```cpp
// Search sorted array
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n-1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
// Time: O(log n), Space: O(1)
```

### 3. Binary Search Variants
- **First occurrence**: Find first position
- **Last occurrence**: Find last position
- **Lower bound**: First element >= target
- **Upper bound**: First element > target

### 4. Preconditions
- Array must be **sorted**
- Must know array bounds
- Distinct handling for not found

### 5. Complexity Comparison
- **Linear**: Good for small/unsorted data
- **Binary**: Efficient for sorted, large datasets
- **Threshold**: ~1000 elements

## 💡 Tips & Best Practices

1. **Array must be sorted**: Before binary search
2. **Avoid overflow**: `mid = left + (right - left) / 2`
3. **Loop condition**: `left <= right` vs others
4. **Edge cases**: Empty array, single element
5. **Recursion**: Can be recursive, but iterative preferred

## 🧪 Practice Exercises

1. **Level 1**: Implement linear search
2. **Level 2**: Implement binary search
3. **Level 3**: Find first and last occurrence
4. **Level 4**: Find closest element to target
5. **Challenge**: Search in rotated sorted array

## 📊 When to Use

| Scenario | Algorithm | Reason |
|----------|-----------|--------|
| Small array | Linear | Simplicity |
| Unsorted | Linear | No setup needed |
| Sorted, large | Binary | O(log n) time |
| Multiple queries | Binary | One-time sort |

## 🎓 Real-World Applications

- **Database** - Record lookup
- **Library** - Book ID search
- **Search engines** - Indexed search
- **Auto-complete** - Prefix search
- **Version control** - Commit search

## 📚 Related Topics

- Prerequisites: Arrays (MODULE11), Vectors (MODULE12)
- Next Steps: Sorting (MODULE19-20)
- Use in: Advanced algorithms, problem-solving

## ⏱️ Estimated Time: 4-5 hours

---

**Last Updated**: February 2026
