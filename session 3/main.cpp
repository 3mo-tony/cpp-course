#include <iostream>
#include <string>

using namespace std;

int main() {
    // conditional statements
    // int age;

    // cout << "Enter your age: ";
    // cin >> age;

    // 1) if statement
    // checks for true or false || truthy values
    // 1.1) if condition is true, then execute the code inside the if block
    // 15 >= 18 => false => راح للelse
    // 1.2) if condition is false, then execute the code inside the else block
    // if (age >= 18) {
    //     cout << "You are an adult" << endl;
    // } else {
    //     cout << "You are not an adult" << endl;
    // }
    
    // // 2) if-else-if statement

    // if(age >= 21){
    //     cout << "You are legalized to do anything" << endl;
    // }
    // else if(age >= 18){ 
    //     cout << "You got some privileges" << endl;
    // }
    // else {
    //     cout << "You are not legalized to do anything" << endl;
    // }

    // another example

    // int score; // 0 to 100
    // cout << "Enter your score: ";
    // cin >> score;

    // if(score >= 90){
    //     cout << "You got an A" << endl;
    // }
    // else if(score >= 80){
    //     cout << "You got a B" << endl;
    // }
    // else if(score >= 70){
    //     cout << "You got a C" << endl;
    // }
    // else if(score >= 60){
    //     cout << "You got a D" << endl;
    // } else {
    //     cout << "You got an F" << endl;
    // }

    // 3) switch statement
    // checks for equality with multiple cases

    // int day;

    // cout << "Enter the day number (from 1 to 7): ";
    // cin >> day;

    // switch(day){
    //     case 1: cout << "Saturday" << endl; break;
    //     case 2: cout << "Sunday" << endl; break;
    //     case 3: cout << "Monday" << endl; break;
    //     case 4: cout << "Tuesday" << endl; break;
    //     case 5: cout << "Wednesday" << endl; break;
    //     case 6: cout << "Thursday" << endl; break;
    //     case 7: cout << "Friday" << endl; break;
    //     default: cout << "Invalid day number" << endl; break;
    // }
    

    // if statement examples

    // int num;

    // cout << "Enter a number: ";
    // cin >> num;
    // // check even or odd
    // if(num % 2 == 0) {
    //     cout << "The number is even" << endl;
    // } else {
    //     cout << "The number is odd" << endl;
    // }

    // another example

    int age;
    bool hasLicense;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have a license? (1 for yes, 0 for no): ";
    cin >> hasLicense;

    // logical operators
    // && (AND)
    // || (OR)
    // ! (NOT)
    // AND => all conditions must be true
    // OR => at least one condition must be true
    // NOT => negates the condition (true => false, false => true)
    if(age >= 18 && hasLicense){
        cout << "You are eligible to drive" << endl;
    } else {
        cout << "You are not eligible to drive" << endl;
    }
    
    // ternary operators
    // condition ? trueExpression : falseExpression => if(condition) {trueExpression} else {falseExpression}
    // short hand if-else statement
    string result = (age >= 18) ? "You are an adult, ternary operator" : "You are not an adult, ternary operator";
    // string result2 = condition1 ? trueExpression1 : condition2 ? trueExpression2 : falseExpression2; => nested ternary operators
    cout << result << endl;

    return 0;
}