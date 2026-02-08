# MODULE 26: Object-Oriented Programming Part 2

## 📌 Overview
This module extends OOP with inheritance and polymorphism, allowing code reuse and flexible design.

## 🎯 Learning Goals
- ✅ Understand inheritance hierarchy
- ✅ Master method overriding
- ✅ Learn polymorphism concepts
- ✅ Use virtual functions correctly
- ✅ Apply inheritance in real-world scenarios

## 📂 Folder Structure

### A_Basics
Core inheritance concepts:
- **Inheritance fundamentals** (TODO)
- **Method overriding** (TODO)

### B_Advanced
Polymorphism and advanced concepts:
- **Virtual functions** (TODO)
- **Abstract classes** (TODO)

## 🔑 Key Concepts (To be implemented)

### 1. Inheritance
```cpp
// Base (Parent) class
class Animal {
public:
    void eat() { cout << "Eating\n"; }
    virtual void sound() { cout << "Sound\n"; }
};

// Derived (Child) class
class Dog : public Animal {
public:
    void sound() override { cout << "Bark\n"; }
};
```

### 2. Types of Inheritance
- **Public**: Public members remain public
- **Private**: All members become private
- **Protected**: Public becomes protected

### 3. Polymorphism
```cpp
Animal* animal = new Dog();
animal->sound();  // Calls Dog::sound()
```

### 4. Virtual Functions
- Enable runtime polymorphism
- Allows subclass override
- Resolved at runtime (not compile time)

### 5. Method Overriding
- Subclass provides different implementation
- Same signature as parent
- Must declare virtual in parent

## 📚 Related Topics

- Prerequisites: OOPs Part 1 (MODULE25)
- Next Steps: OOPs Part 3 (MODULE27)
- Use in: Large application design

## ⏱️ Estimated Time: 5-6 hours

---

**Last Updated**: February 2026 (Content to be completed)
