# MODULE 14: Strings

## 📌 Overview
Strings are sequences of characters. This module covers string I/O, manipulation, algorithms, and solving string-based problems.

## 🎯 Learning Goals
- ✅ Understand C++ string class
- ✅ Master string input/output
- ✅ Perform string operations
- ✅ Solve string manipulation problems
- ✅ Work with character analysis

## 📂 Folder Structure

### A_Basics
Core string concepts:
- **inputstring.cpp** - String input methods
- **stringAsDataType.cpp** - String as data type
- **STOI_stoll.cpp** - String to integer conversion
- **stringstream.cpp** - StringStream usage
- **maxString.cpp** - String comparison

### B_String_Problems
Advanced string problems:
- **countCharacterinString.cpp** - Count characters
- **countVowelinString.cpp** - Count vowels
- **countcharcterStringEFF.cpp** - Efficient counting
- **vowelcountinstring.cpp** - Vowel counting variations
- **singleChar.cpp** - Single character problems
- **reversefirsthalf.cpp** - Reverse operations
- **differenrneighbour.cpp** - Adjacent differences
- **doubleelement.cpp** - Double element strings
- **MostOccurringWord.cpp** - Word frequency
- **leetcode014.cpp** - LeetCode problems

## 📊 Difficulty Progression

| File | Difficulty | Concept | Status |
|------|-----------|---------|--------|
| inputstring.cpp | ⭐ | Input methods | ✅ |
| countCharacterinString.cpp | ⭐ | Character count | ✅ |
| countVowelinString.cpp | ⭐ | Vowel count | ✅ |
| singleChar.cpp | ⭐⭐ | Character logic | ✅ |
| reversefirsthalf.cpp | ⭐⭐ | Manipulation | ✅ |
| MostOccurringWord.cpp | ⭐⭐⭐ | Parsing & logic | ✅ |
| leetcode014.cpp | ⭐⭐⭐ | Complex algorithm | ✅ |

## 🔑 Key Concepts

### 1. String Declaration & Initialization
```cpp
#include <string>
string s;                    // Empty string
string s = "Hello";         // Initialize with literal
string s(5, 'a');           // 5 'a' characters
string s = "H" + 'e';       // Concatenation
```

### 2. String Input/Output
```cpp
// Single word
cin >> s;

// Entire line (with spaces)
getline(cin, s);

// Character by character
for(char c : s) {
    cout << c;
}
```

### 3. String Operations
```cpp
s.length();                  // Length
s[0];                        // Access character
s.substr(0, 3);              // Substring
s.find("ll");                // Find substring
s.replace(0, 2, "Hi");       // Replace
s.push_back('x');            // Add character
s.pop_back();                // Remove last
```

### 4. Character Methods
```cpp
isalpha(c);                  // Letter?
isdigit(c);                  // Digit?
isupper(c);                  // Uppercase?
islower(c);                  // Lowercase?
isspace(c);                  // Whitespace?
isalnum(c);                  // Alphanumeric?
```

### 5. String Analysis
- **Count characters** - Frequency analysis
- **Vowel/consonant** - Character classification
- **Reverse** - Palindrome check
- **Word frequency** - Parsing strings
- **Pattern matching** - Find substrings

## 💡 Tips & Best Practices

1. **Use string class**: Easier than char arrays
2. **getline()**: Include spaces in input
3. **Efficiency**: Avoid repeated concatenation in loops
4. **Conversion**: Use stoi(), stof() for conversion
5. **Case handling**: Use tolower()/toupper()

## 🧪 Practice Exercises

1. **Level 1**: Count vowels and consonants
2. **Level 2**: Check if palindrome
3. **Level 3**: Find most frequent character
4. **Level 4**: Count word frequency
5. **Challenge**: Implement string compression

## 🎓 Real-World Applications

- **Text processing** - Document analysis
- **Pattern matching** - Search algorithms
- **Natural language** - Text processing
- **Data validation** - Input checking
- **Cryptography** - Encoding/decoding

## 📚 Related Topics

- Prerequisites: 1D Arrays (MODULE11)
- Next Steps: Searching (MODULE18)
- Use in: Text processing, advanced problems

## 📖 PDF Reference
- **Strings_merged.pdf** - Comprehensive guide

## ⏱️ Estimated Time: 5-6 hours

---

**Last Updated**: February 2026
