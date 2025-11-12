Exam 1 Practice Questions:



**True/False:**

1. \_\_\_\_ The \&\& and || logical expressions always evaluate both of their operands
2. \_\_\_\_ In C++, an array variable is a pointer to the starting address of the array
3. \_\_\_\_ If not defined explicitly, the C++ compiler will create a default constructor, parameterized constructor, and destructor for you.
4. \_\_\_\_ It is safe to set a pointer address directly to 0.



**Short Answer:**

4\. What does the **new** keyword do? As in: float\* arr = new float\[5];



5\. What are the 4 main segments in memory? Briefly describe the primary differences and what goes in there.



6 Below are several variable definitions. Assume we are outside of the main() function until main is defined. Which segment in memory do the following items go?

Code:

char player = 'X';

int main() {

 	int x = 5;

 	float\* arr = new float\[] {10, 20, 41.2, 3};

}

Items:

The variable player

The variable x

The pointer arr

The array that arr points to



7\. Assume the computer you're coding on has a 4 byte representation for integers. Now suppose we have a variable int\* ptr pointing to the address 15730. After the following line of code, what will the value of ptr be?

ptr += 5;



8\. Briefly explain the difference between a struct and class in C++



9\. Consider the union definition below. Also consider that my machine has the following sizes for primitive types: char: 1B, short: 2B, float: 4B, double: 8B.  After the code in main runs, how much space will the weight object take in memory?

union Weight {

&nbsp;	short pounds;

&nbsp;	int ounces;

&nbsp;	double tons;

}

int main() {

&nbsp;	Weight weight;

&nbsp;	weight.ounces = 32;

&nbsp;	weight.pounds = 2;

}



10\. Which statement within the following code will fail to compile?

double x = 3.0, y = 9.5;

const double\* ptr = \&y;

\*ptr = 3.14;

ptr = \&x;





**Code Writing**

11\. Write a header for a class for a drawable mesh object in a graphics program. The object should have a private integer called UID, a private static int called numObjects, a public int called numVertices, a pointer to an array of floats called vertices, and a pointer to an array of floats called uvs. For member functions, it should have a default constructor, a parameterized constructor that takes an int number of vertices, a parameterized constructor that takes an int number of vertices **and** two pointers to existing UV and vertex arrays, a destructor, and a copy constructor.



11.a Why should we bother defining a destructor for this class?



11.b What part of the rule of 3 are we violating here? What is the associated danger?



11.c If we didn't define a default constructor, what would the default values of UID, numObjects, and numVertices be?



12\. Outside the body of the class definition, define the default constructor. The default constructor should initialize all arrays to a length of 0, set numVertices to 0, increase numObjects by 1, and set the UID to the number of objects currently created.



13\. Outside the body of the class definition, define the parameterized constructors. The one that only takes a number of vertices should set the corresponding value, and initialize the arrays. The vertex and UV arrays should be 3 and 2 times the number of vertices, respectively.



14\. Outside the body of the class definition, define the destructor.

