# Pure Virtual Functions and Abstract Classes in C++

Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class. For example, let Shape be a base class. We cannot provide implementation of function draw() in Shape, but we know every derived class must have implementation of draw(). Similarly an Animal class doesn’t have implementation of move() (assuming that all animals move), but all animals must know how to move. We cannot create objects of abstract classes.

A pure virtual function (or abstract function) in C++ is a **virtual function** for which we can have implementation, But we must override that function in the derived class, otherwise the derived class will also become abstract class

**NOTE**: A pure virtual function is declared by assigning 0 in declaration. See the following example.

![image Example of Pure Virtual Function in C++](image/CodeExample1.png)

**A complete example**: A pure virtual function is implemented by classes which are derived from a Abstract class

![image Example Code using Pure Virtual Function in C++(1)](image/CodeExample2.png)

## Some Interesting Facts

### *A class is abstract if it has at least one pure virtual function*

![image Example Code is Error](image/CodeExample3.png)

```json
Compiler Error: cannot declare variable 't' to be of abstract type 'Test' 
because the following virtual functions are pure within 'Test': note: virtual void Test::show() 
```

### *We can have pointers and references of abstract class type.*

![image Code using pointer and reference of abstract class type](image/CodeExample4.png)

```json
In Derived
```

### *If we do not override the pure virtual function in derived class, then derived class also becomes abstract class*

Code Wrong

![image Code Wrong when not overriding virtual function in C++](image/CodeExample5.png)

```json
error: cannot declare variable 'b' to be of abstract type 'B'
note: because the following virtual functions are pure within 'B'
```

Code True

![image Code True when overriding virtual function in C++](image/CodeExample6.png)

### *An abstract class can have constructors.*

![image Code using method constructor in abstract class](image/CodeExample7.png)

## Interface vs Abstract Classes

An interface does not have implementation of any of its methods, it can be considered as a collection of method declarations. In C++, an interface can be simulated by making all methods as pure virtual.

We can think of Interface as header files in C++, like in header files we only provide the body of the class that is going to implement it
