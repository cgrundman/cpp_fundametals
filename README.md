# C++ Fundamentals

Code outlining c++ code struxtures and syntax. 

## 1. Getting Started

| Title           | Description                                                                      |
| :---:           | :----                                                                            |
| FirstProject    | An exmaple first project using input and output to display text in the terminal. |
| CompileErrors   | An exmaple for Compile Errors.                                                   |
| CompileWarnings | An exmaple for Compile Warnings.                                                 |
| LinkerErrors    | An exmaple for Linker Errors.                                                    |
| Challenge       | A coding challenge to recieve a string and handle a basic output.                |

## 2. C++ Program Structure

| Title           | Description                                                                  |
| :---:           | :----                                                                        |
| ModifiedProgram | Very similar example to Challenge from previous section.                     |
| Comments        | Example of how to use comments to document code.                             |
| BasicIO         | Examples of how to provide IO through the terminal for different data types. |

## 3. Variables and Constants

| Title                 | Description                                                                   |
| :---:                 | :----                                                                         |
| InitializingVariables | Example for how to initilize variables in a room area calculator.             |
| GlobalVariables       | Shows how to declare variables in a global scope.                             |
| PrimitiveTypes        | Overview of prinitive data types including: char, int, long, float, and bool. |
| SizeOf                | Introduces the ``sizeof`` operator.                                           |
| SizeofOperator        | Example for how to use the ``sizeof`` operator.                               |
| Constants             | Introduce constants (variables that cannot be changed).                       |
| Challenge             | Cleaning servise cost calculator for room size and and rates.                 |

## 4. Arrays and Vectors

| Title     | Description                                                    |
| :---:     | :----                                                          |
| Arrays    | Example for how declare and use Arrrays.                       |
| Vectors   | Example for how declare and use Vectors.                       |
| Challenge | Manipulate vectors and combining vectors into a single vector. |

## 5. Statements and Operators

| Title                       | Description                                                                |
| :---:                       | :----                                                                      |
| AssignmentOperator          | Use of ``=`` operator.                                                     |
| ArithmeticOperators         | Use of ``+`` (addition), ``-`` (subtraction), ``*`` (multiplication), ``/`` (division), ``%`` (modulo) operators. |
| IncrementDecrementOperators | Use of ``++`` (increment up) and ``--`` (decrement down) operators.        |
| MixedExpressions            | Use of mixing the above expressions to find calculated answers.            |
| RelationalOperators         | Use of ``<`` (less than) and ``>`` (greater than) for variable comparison. |
| LogicalOperators            | Using the ``<`` and ``>`` operators for boolean logic (true/false).        |
| Challenge                   | Collecting all of these operators into a change calculator .               |

## 6. Controlling Program Flow

| Title               | Description                                                                         |
| :---:               | :----                                                                               |
| IfStatement         | Example for ``if`` logic, only runs if statement is true.                           |
| IfElseStatement     | Example for ``ifelse`` logic, provides beckup statement if original is not true.    |
| ConditionalOperator | Use of ``?`` as conditional operator, think inline ifelse.                          |
| ForLoop             | Use of ``for`` loop to iterate through code for specified times.                    |
| WhileLoop           | Use of ``while`` loop to iterate while a condition is true.                         |
| DoWhile             | Use of ``dowhile`` loop, executes and then checks condition if it should run again. |
| Challenge           | List maniputation through the use of a ``dowhile`` loop.                            |

## 7. Characters and Strings

| Title         | Description                                                                   |
| :---:         | :----                                                                         |
| CharFunctions | Example for handling ``char`` (character) variables and manipulating strings. |
| CStrings      | Example for handling c-style strings.                                         |
| CPPStrings    | Example for handling cpp-stayle strings.                                      |
| LetterPyramid | Display a letter pyramid from input (removes chars from string into list).    |
| Challenge     | Char challenge using a cipher for encoding a string.                          |

## 8. Functions

| Title                | Description                                                                          |
| :---:                | :----                                                                                |
| FunctionDefinitions  | How to define functions.                                                             |
| FunctionPrototypes   | Create function prototpes that define data types, before creating the full function. |
| FunctionParameters   | How to handle different parameters in a function.                                    |
| DefaultArguments     | Set default values to variables input into functions.                                |
| FunctionOverloading  | Create different functionality of the same function with different data types.       |
| ArraysAndFunctions   | How to pass arrays into functions.                                                   |
| PassByReference      | Manipulating variables inside of the function, and returning new values.             |
| ScopeExample         | Show the complexity of scope definitions and how it applys to functions.             |
| HowFunctionCallsWork | Example of how to call functions.                                                    |
| Factorial            | Perform factorial calculation by using a recursive function.                         |
| Fibonacci            | Find the nth value of the Fibonacci sequence by using a recursive function.          |
| SaveAPenny           | Calculate daily double of nth day, if starting with $0.01.                           |
| Challenge            | Same as challenge from last section, adds functions for each commmand type.          |

## 9. Pointer and References

| Title                 | Description                                                          |
| :---:                 | :----                                                                |
| SimplePointers        | Introduction to Pointers.                                            |
| Dereference           | How to dereference a pointer.                                        |
| DynamicMemory         | Use of pointers and allocating to the heap.                          |
| ArraysAndPointers     | How to point to arrays and how changing values cahnges the pointers. |
| PointerArithmetic     | How to apply arithemitc functions on pointers.                       |
| PassingPointers1      | Passing an integer pointer to a function.                            |
| PassingPointers2      | Passing multiple pointers to a function.                             |
| PassingPointers3      | Passing different pointer types to functions.                        |
| ReverseArrayChallenge | Reverse an array through passing pointer of array.                   |
| ReturnPointer         | Returning a pointer from a function.                                 |
| References            | Introduction to references.                                          |
| Challenge             | Pass array pointers to functions, one printing all values within array, the other multiplying all values together. |

## 10. Object Oriented Programming

| Title                          | Description                                                                 |
| :---:                          | :----                                                                       |
| DeclareClassAndObjects         | Demonstrates the basic snytax for declarring a c++ class.                   |
| AccessingClassMembers          | How to modify an object's attributes using the dot and pointer operators.   |
| AccessModifiers                | Setting access to class members with public, private, and protected.        |
| ImplementingMethods            | Implementing methods inside of the class declaration.                       |
| ImplementingMethods2           | Implementing methods outside of the class declaration.                      |
| ConstructorsAndDestructors     | Introducing how classes are constructed and destructed to and from memory.  |
| DefaultConstructor             | Initializing objects without providing initialization information.          |
| ConstructorInitializationLists | Initializing an object's data members by assigning values.                  |
| DelegatingConstructors         | Reducing code duplication by calling another constructor of the same class. |
| DefaultConstructorParameters   | Setting default constructor parameter values.                               |
| CopyConstructor                | Creating a new object from an existing object.                              |
| ShallowCopy                    | Showing the issues with shallow copy in context of copy constructor.        |
| DeepCopy                       | Showing the correct way to implement copy constructors.                     |
| MoveConstructor                | Moving constructors from objec to object (advanced).                        |
| ConstInClass                   | Creating objects that are not allowed to change.                            |
| StaticClassMembers             | Creating class members that cannot be changed.                              |
| Challenge                      | Work with mulilevel OOP code (movies and movie).                            |

## 11. Operator Overloading

| Title | Description |
| :---: | :----       |

## 12. Inheritance

| Title | Description |
| :---: | :----       |

## 13. Polymorphism

| Title | Description |
| :---: | :----       |

## 14. Smart Pointers

| Title | Description |
| :---: | :----       |

## 15. Exception Handling

| Title | Description |
| :---: | :----       |

## 16. I/O Streams

| Title | Description |
| :---: | :----       |

## 17. The Standard Template Library (STL)

| Title | Description |
| :---: | :----       |

## 18. Lambda Expressions

| Title | Description |
| :---: | :----       |

All code thanks to instructor Dr. Frank Mitropoulos and [Tim Buchalka's Learn Programming Academy](https://learnprogramming.academy/), course found [here](https://www.udemy.com/course/beginning-c-plus-plus-programming/?couponCode=OF52424)
