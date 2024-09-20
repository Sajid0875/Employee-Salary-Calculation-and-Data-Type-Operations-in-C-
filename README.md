# Employee Salary Calculation and Data Type Operations in C++

## Overview
This C++ program demonstrates several basic programming concepts such as:
- Employee salary calculation (with and without allowance).
- Boolean logic and comparisons.
- Basic arithmetic operations.
- Incrementing variables.
- Type casting between different data types.
- Using `typeid()` to display the data type of a variable.

## Features
1. **Employee Salary Calculation:**
   - Takes employee ID as input.
   - Calculates salary without allowance (fixed daily rate of 1000 PKR over 30 days).
   - Calculates total salary by adding a 22% allowance.

2. **Incrementing Employees:**
   - Simulates incrementing the number of employees by two.

3. **Boolean Logic:**
   - Compares the input employee ID with `100` and displays the result of the comparison.

4. **Character and Boolean Arithmetic:**
   - Demonstrates the addition of a boolean value and a character (using ASCII values).

5. **Type Casting and Identification:**
   - Converts a floating-point number to an integer.
   - Displays the data type of a float variable using `typeid()`.

## Code Example
```cpp
#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main(int argc, char** argv) {
    int Employee_Id;
    int Total_days = 30;
    int salary_per_day = 1000;
    float salary_without_allowance;
    
    cout << "ID = "; 
    cin >> Employee_Id;
    
    salary_without_allowance = Total_days * salary_per_day;
    cout << "Salary Without Allowance = " << salary_without_allowance << endl;
    
    float salary_with_allowance;
    salary_with_allowance = (salary_without_allowance / 100) * 22 + salary_without_allowance;
    cout << "Total Salary = " << salary_with_allowance << endl << endl;

    int employes = 100;
    ++employes;
    ++employes;
    cout << "No of employees after addition = " << employes << endl;

    bool result = (Employee_Id == 100);
    cout << "Result is = " << result << endl;

    // Task 2
    bool bool_var = 1;
    cout << "bool var value = " << bool_var << endl;

    char char_var = 'A';
    cout << "value of char = " << char_var << endl;

    int int_var = bool_var + char_var;
    cout << "net result = " << int_var << endl;

    // Task 3
    float A = 32.9;
    cout << "Float A = " << A << endl;
    
    int new_A = static_cast<int>(A);
    cout << "Value of A in int = " << new_A << endl;

    cout << "Data type of A = " << typeid(A).name() << endl;

    return 0;
}
