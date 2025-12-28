#include <iostream>
#include <string>
using namespace std;

int main() {
    // int i;
    // cout << "Enter a number: ";
    // cin >> i;

    // ! infinite loop
    // متعملوهاش
    // while(true){
    //     cout << "Hello, World!" << endl;
    // }

    // while loop
    // check condition before execution the loop
    // while(i < 10)  {
    //     cout << "Hello World, number - " << i << "/10" << endl;
    //     i++; // => i = i + 1 >> shorthand
    // }
    // cout << "While Loop Ended" << endl;


    // do-while loop
    // execute loop body once before checking the condition

    // do {
    //     cout << "Do-While Loop - " << i << endl;
    //     i++;
    // } while (i < 10);
    // cout << i << endl;

    // for-loop
    // for(init; condition; increment/decrement )
    // for (int j = 1;j <= i; j++) /* j-- => decrement*/ {
    //     cout << "For loop - " << j << "/" << i << endl;
    // }

    // break - continue

    // break 

    // for (int j = 1;j <= i; j++) /* j-- => decrement*/ {

    //     if(j > 15) {
    //         cout << "Breaking as our max is 15" << endl;
    //         break; // break loop, exit the loop
    //     }
    //     cout << "For loop - " << j << "/" << i << endl;
    // }

    // for (int j = 1;j <= i; j++) /* j-- => decrement*/ {

    //     if(j > 15) {
    //         cout << "Breaking as our max is 15" << endl;
    //         continue; // skip the rest of the loop body
    //     }
    //     cout << "For loop - " << j << "/" << i << endl;
    // }

    // nested loops
    // for(int j = 0; j < i; j++){
    //     for(int k= 0; k < j; k++ ){
    //         cout << "nested loop k and j " << k << "/" << j << endl;
    //     }
    //     cout << "outside nested loop j and i" << j << "/" << i << endl;
    // }
    // cout << "For loop ended" << endl;


    // mathematical examples

    // int sum = 0, product = 1;

    // 1) calculate summation from 0 to i

    // for(int j = 0; j <= i; j++) {
    //     sum += j; // => shorthand sum = sum + j
    // }
    // cout << "Summation from 0 to " << i << " is " << sum << endl;

    // 2) factorial i ==> المضروب

    // 2.1) with for loop
    // for(int j = 1; j <= i; j++ ) {
    //     product *= j;
    // }
    // cout << "Factorial of " << i << " is " << product << endl;

    // 2.2) with while loop
    // int product2 = 1;
    // int originalNumber = i;
    // while(i > 0){
    //     product2 *= i;
    //     i--; // short hand for i = i - 1
    // }

    // cout << "Factorial of " << originalNumber << " with while loop is " << product2 << endl;


    // 3) multiplication table

    // nested loop
    for(int i = 1; i <= 10; i++ ){
        for (int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}

// functions (void, return)