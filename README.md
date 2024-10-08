# C++ Fundamentals

Code outlining C++ code structures and syntax. This is meant to be an educational tool and used for reference. I do not own these materials (see below for references to the course).

## Run Locally

Clone the project

```bash
  git clone https://github.com/cgrundman/cpp_fundamentals
```

Go to the project directory

```bash
  cd local/path/np-map-visualization
```

Use your preferred code editor (eg VS Code, Codelight, etc.) for C++.

## Contents

<table>
    <thead>
        <tr>
            <th>Title</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td colspan=2><h2>1. Getting Started</h2></td>
        </tr>
        <tr><td>FirstProject</td><td>An exmaple first project using input and output to display text in<br> the terminal.</td></tr>
        <tr><td>CompileErrors</td><td>An exmaple for Compile Errors.</td></tr>
        <tr><td>CompileWarnings</td><td>An exmaple for Compile Warnings.</td></tr>
        <tr><td>LinkerErrors</td><td>An exmaple for Linker Errors.</td></tr>
        <tr><td>Challenge</td><td>A coding challenge to recieve a string and handle a basic output.</td></tr>
        <tr>
            <td colspan=2><h2>2. C++ Program Structure</h2></td>
        </tr>
        <tr><td>ModifiedProgram</td><td>Very similar example to Challenge from previous section.</td></tr>
        <tr><td>Comments</td><td>Example of how to use comments to document code.</td></tr>
        <tr><td>BasicIO</td><td>Examples of how to provide IO through the terminal for different <br>data types.</td></tr>
        <tr>
            <td colspan=2><h2>3. Variables and Constants</h2></td>
        </tr>
        <tr><td>InitializingVariables</td><td>Example for how to initilize variables in a room area calculator.</td></tr>
        <tr><td>GlobalVariables</td><td>Shows how to declare variables in a global scope.</td></tr>
        <tr><td>PrimitiveTypes</td><td>Overview of prinitive data types including: char, int, long, float, and bool.</td></tr>
        <tr><td>SizeOf</td><td>Introduces the ``sizeof`` operator.</td></tr>
        <tr><td>SizeofOperator</td><td>Example for how to use the ``sizeof`` operator.</td></tr>
        <tr><td>Constants</td><td>Introduce constants (variables that cannot be changed).</td></tr>
        <tr><td>Challenge</td><td>Cleaning servise cost calculator for room size and and rates.</td></tr>
        <tr>
            <td colspan=2><h2>4. Arrays and Vectors</h2></td>
        </tr>
        <tr><td>Arrays</td><td>Example for how declare and use Arrays.</td></tr>
        <tr><td>Vectors</td><td>Example for how declare and use Vectors.</td></tr>
        <tr><td>Challenge</td><td>Manipulate vectors and combining vectors into a single vector.</td></tr>
        <tr>
            <td colspan=2><h2>5. Statements and Operators</h2></td>
        </tr>
        <tr><td>AssignmentOperator</td><td>Use of ``=`` operator.  </td></tr>
        <tr><td>ArithmeticOperators</td><td>Use of ``+`` (addition), ``-`` (subtraction), ``*`` (multiplication), ``/`` (division), ``%`` (modulo) operators.</td></tr>
        <tr><td>IncrementDecrementOperators</td><td>Use of ``++`` (increment up) and ``--`` (decrement down) operators.</td></tr>
        <tr><td>MixedExpressions</td><td>Use of mixing the above expressions to find calculated answers.</td></tr>
        <tr><td>RelationalOperators</td><td>Use of ``<`` (less than) and ``>`` (greater than) for variable comparison.</td></tr>
        <tr><td>LogicalOperators</td><td>Using the ``<`` and ``>`` operators for boolean logic (true/false).</td></tr>
        <tr><td>Challenge</td><td>Collecting all of these operators into a change calculator.</td></tr>
        <tr>
            <td colspan=2><h2>6. Controlling Program Flow</h2></td>
        </tr>
        <tr><td>IfStatement</td><td>Example for ``if`` logic, only runs if statement is true.</td></tr>
        <tr><td>IfElseStatement</td><td>Example for ``ifelse`` logic, provides beckup statement if original is not true.</td></tr>
        <tr><td>ConditionalOperator</td><td>Use of ``?`` as conditional operator, think inline ifelse.</td></tr>
        <tr><td>ForLoop</td><td>Use of ``for`` loop to iterate through code for specified times.</td></tr>
        <tr><td>WhileLoop</td><td>Use of ``while`` loop to iterate while a condition is true.</td></tr>
        <tr><td>DoWhile</td><td>Use of ``dowhile`` loop, executes and then checks condition if it should run again.</td></tr>
        <tr><td>Challenge</td><td>List maniputation through the use of a ``dowhile`` loop.</td></tr>
        <tr>
            <td colspan=2><h2>7. Characters and Strings</h2></td>
        </tr>
        <tr><td>CharFunctions</td><td>Example for handling ``char`` (character) variables and manipulating strings.</td></tr>
        <tr><td>CStrings</td><td>Example for handling c-style strings.</td></tr>
        <tr><td>CPPStrings</td><td>Example for handling cpp-stayle strings.</td></tr>
        <tr><td>LetterPyramid</td><td>Display a letter pyramid from input (removes chars from string into list).</td></tr>
        <tr><td>Challenge</td><td>Char challenge using a cipher for encoding a string.</td></tr>
        <tr>
            <td colspan=2><h2>8. Functions</h2></td>
        </tr>
        <tr><td>FunctionDefinitions</td><td>How to define functions.</td></tr>
        <tr><td>FunctionPrototypes</td><td>Create function prototpes that define data types, before creating <br>the full function.</td></tr>
        <tr><td>FunctionParameters</td><td>How to handle different parameters in a function.</td></tr>
        <tr><td>DefaultArguments</td><td>Set default values to variables input into functions.</td></tr>
        <tr><td>FunctionOverloading</td><td>Create different functionality of the same function with different data types.</td></tr>
        <tr><td>ArraysAndFunctions</td><td>How to pass arrays into functions.</td></tr>
        <tr><td>PassByReference</td><td>Manipulating variables inside of the function, and returning new values.</td></tr>
        <tr><td>ScopeExample</td><td>Show the complexity of scope definitions and how it applys to functions.</td></tr>
        <tr><td>HowFunctionCallsWork</td><td>Example of how to call functions.</td></tr>
        <tr><td>Factorial</td><td>Perform factorial calculation by using a recursive function.</td></tr>
        <tr><td>Fibonacci</td><td>Find the nth value of the Fibonacci sequence by using a recursive function.</td></tr>
        <tr><td>SaveAPenny</td><td>Calculate daily double of nth day, if starting with $0.01.</td></tr>
        <tr><td>Challenge</td><td>Same as challenge from last section, adds functions for each commmand type.</td></tr>
        <tr>
            <td colspan=2><h2>9. Pointer and References</h2></td>
        </tr>
        <tr><td>SimplePointers</td><td>Introduction to Pointers.</td></tr>
        <tr><td>Dereference</td><td>How to dereference a pointer.</td></tr>
        <tr><td>DynamicMemory</td><td>Use of pointers and allocating to the heap.</td></tr>
        <tr><td>ArraysAndPointers</td><td>How to point to arrays and how changing values cahnges the pointers.</td></tr>
        <tr><td>PointerArithmetic</td><td>How to apply arithemitc functions on pointers.</td></tr>
        <tr><td>PassingPointers1</td><td>Passing an integer pointer to a function.</td></tr>
        <tr><td>PassingPointers2</td><td>Passing multiple pointers to a function.</td></tr>
        <tr><td>PassingPointers3</td><td>Passing different pointer types to functions.</td></tr>
        <tr><td>ReverseArrayChallenge</td><td>Reverse an array through passing pointer of array.</td></tr>
        <tr><td>ReturnPointer</td><td>Returning a pointer from a function.</td></tr>
        <tr><td>References</td><td>Introduction to references.</td></tr>
        <tr><td>Challenge</td><td>Pass array pointers to functions, one printing all values within array, the other multiplying all values together.</td></tr>
        <tr>
            <td colspan=2><h2>10. Object Oriented Programming</h2></td>
        </tr>
        <tr><td>DeclareClassAndObjects</td><td>Demonstrates the basic snytax for declarring a c++ class.</td></tr>
        <tr><td>AccessingClassMembers</td><td>How to modify an object's attributes using the dot and pointer operators.</td></tr>
        <tr><td>AccessModifiers</td><td>Setting access to class members with public, private, and protected.</td></tr>
        <tr><td>ImplementingMethods</td><td>Implementing methods inside of the class declaration.</td></tr>
        <tr><td>ImplementingMethods2</td><td>Implementing methods outside of the class declaration.</td></tr>
        <tr><td>ConstructorsAndDestructors</td><td>Introducing how classes are constructed and destructed to and from memory.</td></tr>
        <tr><td>DefaultConstructor</td><td>Initializing objects without providing initialization information.</td></tr>
        <tr><td>ConstructorInitializationLists</td><td>Initializing an object's data members by assigning values.</td></tr>
        <tr><td>DelegatingConstructors</td><td>Reducing code duplication by calling another constructor of the same class.</td></tr>
        <tr><td>DefaultConstructorParameters</td><td>Setting default constructor parameter values.</td></tr>
        <tr><td>CopyConstructor</td><td>Creating a new object from an existing object.</td></tr>
        <tr><td>ShallowCopy</td><td>Showing the issues with shallow copy in context of copy constructor.</td></tr>
        <tr><td>DeepCopy</td><td>Showing the correct way to implement copy constructors.</td></tr>
        <tr><td>MoveConstructor</td><td>Moving constructors from objec to object (advanced).</td></tr>
        <tr><td>ConstInClass</td><td>Creating objects that are not allowed to change.</td></tr>
        <tr><td>StaticClassMembers</td><td>Creating class members that cannot be changed.</td></tr>
        <tr><td>Challenge</td><td>Work with mulilevel OOP code (movies and movie).</td></tr>
        <tr>
            <td colspan=2><h2>11. Operator Overloading</h2></td>
        </tr>
        <tr><td>Start</td><td>Starting code, creating a string object with a class to be overloaded.</td></tr>
        <tr><td>CopyAssignment</td><td>Overloading Operators working with l-values.</td></tr>
        <tr><td>MoveAssignment</td><td>Overloading Operators working with r-values.</td></tr>
        <tr><td>OperatorMethods</td><td>Demonstrates Overloading Operators as Member Functions.</td></tr>
        <tr><td>OperatorFunctions</td><td>Demonstrates Overloading Operators as Global Functions.</td></tr>
        <tr><td>InsertionExtraction</td><td>Insertion and Extraction of information into objects.</td></tr>
        <tr><td>Challenge</td><td>Implementation of all Overloading Operator functions.</td></tr>
        <tr>
            <td colspan=2><h2>12. Inheritance</h2></td>
        </tr>
        <tr><td>DerivingOurFirstClass</td><td>Basics in deriving a class from a base class.</td></tr>
        <tr><td>ProtectedMemberClassAccess</td><td>Defining public, protected, and private class definitions that affect the class's visibility and context.</td></tr>
        <tr><td>BaseClassInitialization</td><td>Initialization of base classes and passing arguments into them.</td></tr>
        <tr><td>CopyConstructorAssignmentOperator</td><td>Derviving classes with move and copy constructors.</td></tr>
        <tr><td>RedefiningBaseClassMethods</td><td>Redefine how base classes are defined to allow for better inheritance practices.</td></tr>
        <tr><td>Challenge</td><td>Implementation of all the previous sections.</td></tr>
        <tr>
            <td colspan=2><h2>13. Polymorphism</h2></td>
        </tr>
        <tr><td>BaseClassPointers</td><td>Declaring a new object using a pointer to the base class.</td></tr>
        <tr><td>VirtualFunctions</td><td>Declaring base classes with virtual functions.</td></tr>
        <tr><td>VirtualDestructors</td><td>Cleaning up base classes with virtual destructors.</td></tr>
        <tr><td>UsingOverrideSpecifier</td><td>Overriding base class methods in the derived classes.</td></tr>
        <tr><td>UsingFinalSpecifier</td><td>Specifying a class as final to prevent use in further derived classes.</td></tr>
        <tr><td>BaseClassReferences</td><td>Referencing the base class.</td></tr>
        <tr><td>PureVirtualFunctions</td><td>Exemplify the making of a pure functions for abstraction.</td></tr>
        <tr><td>Interfaces</td><td>Defining methods a class must implement in abstract classes - start point.</td></tr>
        <tr><td>InterfacesComplete</td><td>Defining methods a class must implement in abstract classes - end point.</td></tr>
        <tr><td>Challenge</td><td>Use the previous sections to create a hierarchy of classes.</td></tr>
        <tr>
            <td colspan=2><h2>14. Smart Pointers</h2></td>
        </tr>
        <tr><td>UniquePointers</td><td>Guarantees deletion of pointed-to object even when destructed.</td></tr>
        <tr><td>SharedPointers</td><td>Allows sharing to other pointers and copying while preventing memory leaks.</td></tr>
        <tr><td>WeakPointers</td><td>Prevents ownership of pointed-to object to prevent curcular dependcy in shared pointers</td></tr>
        <tr><td>CustomDeleters</td><td>Customize deleters to pointers to better control memory.</td></tr>
        <tr><td>Challenge</td><td>Make a function to accept a size of and values for a vector of pointers.</td></tr>
        <tr>
            <td colspan=2><h2>15. Exception Handling</h2></td>
        </tr>
        <tr><td>MPG</td><td>Provides base code for calculating fuel economy (MPG) with errors being handled by if/else statements.</td></tr>
        <tr><td>MPGException</td><td>Implementing the if/else statements into exceptions.</td></tr>
        <tr><td>MPGFunction</td><td>Functionalizes the execption into its own class.</td></tr>
        <tr><td>MPGMultipleExceptions</td><td>Demonstrates the use of multiple exceptions.</td></tr>
        <tr><td>StackUnwinding</td><td>Demonstrates how to exceptions work when put in different layers of stacked functions.</td></tr>
        <tr><td>MPGFunctionExceptionClasses</td><td>Makes multiple functions out of exceptions.</td></tr>
        <tr><td>ConstructorException</td><td>Demonstrates how to construct exceptions as a class in another file.</td></tr>
        <tr><td>Challenge</td><td>Creates two seperate .h files containing execptions to account errors.</td></tr>
        <tr>
            <td colspan=2><h2>16. I/O Streams</h2></td>
        </tr>
        <tr><td>ManipBoolean</td><td>Demonstrates how to format boolean outputs.</td></tr>
        <tr><td>ManipFloating</td><td>Demonstrates how to format floating point outputs.</td></tr>
        <tr><td>ManipIntegers</td><td>Demonstrates how to format integer outputs.</td></tr>
        <tr><td>ManipAssignFill</td><td>Demonstrates how to allign and fill outputs for formating.</td></tr>  
        <tr><td>Challenge1</td><td>Challenge to output a formatted table from a nested list.</td></tr>
        <tr><td>ReadFile1</td><td>Opens and displays a simple text file.</td></tr>
        <tr><td>ReadFile2</td><td>Opens, formats, and displays a simpple text file.</td></tr>
        <tr><td>ReadFile3</td><td>Opens and displays a Shakespeare poem.</td></tr>
        <tr><td>ReadFile4</td><td>Opens and displays a Shakespeare poem using get method.</td></tr>
        <tr><td>Challenge2</td><td>Challenge to create a multiple choice test grader, grades and displays results.</td></tr>
        <tr><td>Challenge3</td><td>Challenge to search a text document for input word and returns the word count in the document.</td></tr>
        <tr><td>WriteFile1</td><td>Demonstrates basics of writing a file.</td></tr>
        <tr><td>WriteFile2</td><td>Demonstrates how to copy a file.</td></tr>
        <tr><td>Challenge4</td><td>Opens Romeo and Juliet text file, adds line numbers and saves to a new written file.</td></tr>
        <tr><td>StringStream</td><td>Demonstrates String Streams and another way to manipulate strings.</td></tr>
        <tr>
            <td colspan=2><h2>17. The Standard Template Library (STL)</h2></td>
        </tr>
        <tr><td>Macros</td><td>Introduces using #define to create macros.</td></tr>
        <tr><td>FunctionTemplates</td><td>Demonstrates creating functions in STL using templates.</td></tr>
        <tr><td>ClassTemplates</td><td>Creates a class using the STL template.</td></tr>
        <tr><td>ClassTemplateArray</td><td>Demonstrates using std::array.</td></tr>
        <tr><td>Iterators</td><td>Uses ++, +=, and -= and shows how to iterate through data.</td></tr>
        <tr><td>Algorithms</td><td>Provides some common algorithms used in C++.</td></tr>
        <tr><td>Array</td><td>Demonstrates how to use the std::array to create and handle arrays.</td></tr>
        <tr><td>Vector</td><td>Demonstrates how to use the std::vector to create and handle vectors.</td></tr>
        <tr><td>Deque</td><td>Demonstrates how to use the std::deque and how deques work.</td></tr>
        <tr><td>Challenge1</td><td>Identifying a palindrome using a deque.</td></tr>
        <tr><td>List</td><td>Demonstrates how to use the std::list to create and handle lists.</td></tr>
        <tr><td>Challenge2</td><td>Creates a playlist interface with a list.</td></tr>
        <tr><td>Set</td><td>Demonstrates how to use the std::set to create and handle sets.</td></tr>
        <tr><td>Map</td><td>Demonstrates how to use the std::map to create and handle maps.</td></tr>
        <tr><td>Challenge3</td><td>Inputs a file of words, creates a map and outputs 1) word count and 2) word location.</td></tr>
        <tr><td>Stack</td><td>Demonstrates how to use std::stack and how it only accesses the top (last) piece of data.</td></tr>
        <tr><td>Queue</td><td>Demonstrates how to use std::queue and how it only accesses the first piece of data.</td></tr>
        <tr><td>Challenge4</td><td>Check for a palindrome using stack and queue in a loop.</td></tr>
        <tr><td>PriorityQueue</td><td>Demonstrates how to use std::priority_queue and how it organizes a queue by value rather than just input time.</td></tr>
        <tr>
            <td colspan=2><h2>18. Lambda Expressions</h2></td>
        </tr>
        <tr><td>FunctionObjects</td><td>Demonstrates using a Lambda function, creating a function object with less code.</td></tr>
        <tr><td>StatelessLambdas</td><td>Uses stateless Lambda functions without capturing the state of the object.</td></tr>
        <tr><td>StatefulLambdas</td><td>Uses stateful Lambda functions which capture (declare) the object's state.</td></tr>
        <tr><td>LambdasandSTL</td><td>Demonstrates useful STL calls that can utilize Lambda functions.</td></tr>
    </tbody>
</table>

All code thanks to instructor Dr. Frank Mitropoulos and [Tim Buchalka's Learn Programming Academy](https://learnprogramming.academy/) course found [here](https://www.udemy.com/course/beginning-c-plus-plus-programming/?couponCode=OF52424).
