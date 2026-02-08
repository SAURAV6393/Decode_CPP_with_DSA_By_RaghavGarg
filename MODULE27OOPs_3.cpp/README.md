# MODULE 27: Object-Oriented Programming Part 3

## 📌 Overview
Advanced OOP concepts including operator overloading, friend functions, templates, and design patterns.

## 🎯 Learning Goals
- ✅ Understand operator overloading
- ✅ Learn friend functions and classes
- ✅ Master object composition
- ✅ Introduce templates (basics)
- ✅ Apply advanced OOP patterns

## 🔑 Key Concepts (To be implemented)

### 1. Operator Overloading
```cpp
class Complex {
public:
    int real, imag;
    
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
};
```

### 2. Friend Functions
```cpp
class MyClass {
    int value;
    friend void showValue(MyClass& obj);
};

void showValue(MyClass& obj) {
    cout << obj.value;  // Can access private
}
```

### 3. Composition
```cpp
class Car {
private:
    Engine engine;  // "Has-a" relationship
    Wheel wheels[4];
};
```

### 4. Templates (Intro)
```cpp
template<typename T>
class Box {
    T content;
};
```

## 📚 Related Topics

- Prerequisites: OOPs Part 2 (MODULE26)
- Next Steps: Advanced DSA
- Use in: Generic programming

## ⏱️ Estimated Time: 5-6 hours

---

**Last Updated**: February 2026 (Content to be completed)
