# MODULE 25: Object-Oriented Programming Part 1

## 📌 Overview
OOP introduces the paradigm of organizing code around objects and classes. This module covers basic OOP concepts in C++.

## 🎯 Learning Goals
- ✅ Understand classes and objects
- ✅ Learn about constructors and destructors
- ✅ Master access modifiers (private, public, protected)
- ✅ Implement getters and setters
- ✅ Create and use basic objects

## 📂 Folder Structure

### A_Basics
Core OOP concepts:
- **classandobjectbasic.cpp** - Class and object fundamentals
- **getterAndSetter.cpp** - Accessor methods
- **passClassTOfunction.cpp** - Passing objects to functions

### B_Practice
OOP practice problems:
- **bookpracticeques.cpp** - Book class practice
- **nestedpubgexam.cpp** - Nested class example

## 📊 Learning Path

| Concept | File | Level | Status |
|---------|------|-------|--------|
| Classes & Objects | classandobjectbasic.cpp | ⭐ | ✅ |
| Getters/Setters | getterAndSetter.cpp | ⭐ | ✅ |
| Function Parameters | passClassTOfunction.cpp | ⭐⭐ | ✅ |
| Real-world model | bookpracticeques.cpp | ⭐⭐ | ✅ |
| Nested Classes | nestedpubgexam.cpp | ⭐⭐ | ✅ |

## 🔑 Key Concepts

### 1. Class Declaration & Definition
```cpp
class Car {
private:
    string model;
    int year;
    
public:
    // Constructor
    Car(string m, int y) {
        model = m;
        year = y;
    }
    
    // Getter
    string getModel() {
        return model;
    }
    
    // Setter
    void setModel(string m) {
        model = m;
    }
};
```

### 2. Creating Objects
```cpp
// Create object
Car myCar("Toyota", 2020);

// Access members
string m = myCar.getModel();

// Modify with setter
myCar.setModel("Honda");
```

### 3. Access Modifiers
- **private**: Only accessible within class
- **public**: Accessible from anywhere
- **protected**: For inheritance (later)

### 4. Constructors & Destructors
```cpp
class MyClass {
public:
    // Constructor - called when object created
    MyClass() {
        cout << "Object created\n";
    }
    
    // Destructor - called when object destroyed
    ~MyClass() {
        cout << "Object destroyed\n";
    }
};
```

### 5. Encapsulation
- Bundle data and methods
- Hide internal implementation
- Control access through public interface

## 💡 Tips & Best Practices

1. **Encapsulation**: Keep data private, use methods
2. **Naming**: Classes start with capital letter
3. **Const methods**: Use const for read-only methods
4. **Initialization**: Initialize data members in constructor
5. **Memory**: Be careful with dynamic allocation

## 🧪 Practice Exercises

1. **Level 1**: Create simple Student class
2. **Level 2**: Add getters and setters
3. **Level 3**: Create array of objects
4. **Level 4**: Pass objects to functions
5. **Challenge**: Design a Bank Account class

## 🎓 Real-World Modeling

- **Student**: ID, name, GPA, courses
- **Book**: Title, author, ISBN, price
- **Car**: Model, year, price, mileage
- **Account**: Balance, owner, transactions
- **Product**: SKU, name, price, quantity

## 📚 Related Topics

- Prerequisites: Functions & Pointers (MODULE09-10)
- Next Steps: Inheritance (MODULE26)
- Use in: All larger projects

## ⏱️ Estimated Time: 4-5 hours

---

**Last Updated**: February 2026
