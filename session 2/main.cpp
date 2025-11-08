// | Type                  | Typical Size*  | Range (Approx.)                                           | Example                           | Description                                                |
// | --------------------- | -------------- | --------------------------------------------------------- | --------------------------------- | ---------------------------------------------------------- |
// | `bool`                | 1 byte         | `true` or `false`                                         | `bool isReady = true;`            | Logical value (True/False)                                 |
// | `char`                | 1 byte         | `-128 to 127` *(signed)*<br>`0 to 255` *(unsigned)*       | `char grade = 'A';`               | Single character                                           |
// | `short int` / `short` | 2 bytes        | `-32,768 to 32,767`                                       | `short s = 120;`                  | Small integer                                              |
// | `int`                 | 4 bytes        | `-2,147,483,648 to 2,147,483,647`                         | `int age = 25;`                   | Regular integer                                            |
// | `long int` / `long`   | 4 or 8 bytes   | `≈ -2.1B to 2.1B` *(4B)*<br>`≈ -9.2Q to 9.2Q` *(8B)*      | `long distance = 123456;`         | Larger integer                                             |
// | `long long int`       | 8 bytes        | `-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807` | `long long bigNum = 10000000000;` | Very large integer                                         |
// | `float`               | 4 bytes        | ~`3.4e−38 to 3.4e+38` (6–7 digits precision)              | `float price = 9.99;`             | Decimal (single precision)                                 |
// | `double`              | 8 bytes        | ~`1.7e−308 to 1.7e+308` (15 digits precision)             | `double pi = 3.1415926535;`       | Decimal (double precision)                                 |
// | `long double`         | 12 or 16 bytes | ~`3.4e−4932 to 1.1e+4932`                                 | `long double area = 1.234e10;`    | Extended precision                                         |
// | `string`              | variable       | `0 to 2^32-1`                                             | `string name = "John";`           | Sequence of characters                                    |


#include <iostream>
#include <string>
using namespace std;

int main() {
    // string name = "Antonio";
    // int age = 23;
    // bool isProgrammer = true;
    // double height = 1.78;

    // cout << "Name: " << name << endl;
    // cout << "Age: " << age << endl;
    // cout << "Is Programmer: " << isProgrammer << endl;
    // cout << "Height: " << height << endl;

    // // introduce yourself
    // // introduction about the program
    // cout << "This program will introduce you to the world of C++" << endl;

    // // get the name of the user
    // string name;
    // cout << "Enter your name: ";
    // cin >> name;

    // // get the birth year of the user
    // cout << "Enter your birth year: " << endl;
    // int birthYear;
    // cin >> birthYear;

    // // calculate the age of the user
    // int currentYear = 2025;
    // int age = currentYear - birthYear;
    // // introduce the user
    // cout << "Hello, " << name << "! You were born in " << birthYear << " and you are " << age << " years old." << endl;

    // some calculations

    // int a, b;
    // cout << "Enter two numbers: " << endl;
    // cin >> a >> b;

    // int sum = a + b;
    // int difference = a - b;
    // int product = a * b;
    // // cast the integers to a double for the quotient
    //             // 2 => 2.0 => 2.0 / 3 => 0.666666
    // double quotient = static_cast<double>(a) / b;
    // int remainder = a % b;

    // auto newSum = static_cast<float>(sum) / 3;
    // cout << "Sum: " << sum << endl;
    // cout << "Difference: " << difference << endl;
    // cout << "Product: " << product << endl;
    // cout << "Quotient: " << quotient << endl;
    // cout << "New Sum: " << newSum << endl;
    // cout << "Remainder: " << remainder << endl;


    // string special characters

    string text = "Hello\nI am happy to introduce you to the world of C++\tGood luck!\n\"Hello,World!\"";
    cout << text << endl;
    return 0;
}