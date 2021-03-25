#include <iostream>
#include <string>  //To include string methods
using namespace std;

int adding(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    // // cout <<"Hello World"<<endl; //endl prints in new line
    // // cout <<"Next line";
    // //
    // // int a, b, c; // Int takes
    // // short sa = 9; // Variables can start with letters and _
    // // cout<< sa;
    // short a;
    // int b;
    // long c;
    // long long d;
    // float score = 45.32;
    // cout<<"The score is "<<score;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // float const constantScore = 10; //Declaring a constant data type.
    // // constantScore = 55.32; //This will throw an error.

    //////////////////////// USER INPUT ///////////////
    // int a, b;
    // cout << "Enter first number: " << endl;
    // cin >> a;
    // cout << "Enter second number: " << endl;
    // cin >> b;
    // cout << "The + of two number is :" << a + b<<endl;
    // cout << "The - of two number is :" << a - b<<endl;
    // cout << "The * of two number is :" << a * b<<endl;
    // cout << "The / of two number is :" <<(float) a / b<<endl;

    /////////////////////// Conditional statements ////////////
    // int age;
    // cout << "Enter your age:" << endl;
    // cin >> age;

    /////////////// IF ELSE /////////

    // if (age > 130 || age < 1)
    // {
    //     cout << "Invalid age";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can VOTE!" << endl;
    // }
    // else
    // {
    //     cout << "You cannot VOTE!" << endl;
    // }

    ///////////// SWITCH ////////////////

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old";
    //     break;

    // case 18:
    //     cout << "You are 18 years old";
    //     break;

    // default:
    //     cout << "You are neither 12 or 18 years old";
    //     break;
    // }

    ////////////////// LOOPS ////////////////////////////

    /////////// while loops/////

    // int index = 0;
    // while (index < 34)
    // {
    //     cout << "We are at index number: " << index << endl;
    //     index++;
    // }

    ///////////// do while loops ////

    // int index = 0;
    // do
    // {
    //     cout << "We are at index number: " << index << endl;
    //     index++;
    // } while (index > 34);

    //////////// for loops ////////
    // for (int i = 0; i < 34; i++)
    // {
    //     cout << "The value of i in loop is :" << i << endl;
    // }

    // int a, b;
    // cout << "Enter first number: " << endl;
    // cin >> a;
    // cout << "Enter second number: " << endl;
    // cin >> b;
    // cout << "The function returned: " << adding(a, b);

    ///////////////////// ARRAYS ///////////////
    // int arr[5] = {1, 2, 3};
    // cout << arr[2];

    // One dimensional array //

    // int arr[] = {1, 3, 6};
    // // cout<<arr; // Returns the address of the array.
    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter marks for student " << i + 1 << " : ";
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    // cout << "Marks of student " << i + 1 << " is : " << marks[i] << endl;
    // }

    // ////////////////// 2 Dimensional array ////////////
    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i << " " << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    /////////////////////// STRINGS /////////////////////
    // string name = "Naved";
    // cout << "The name is " << name << endl;
    // cout << "The length of name is " << name.length() << endl;
    // cout << "The substring from name is " << name.substr(0, 3) << endl;

    /////////////////////////// POINTERS ///////////
    // int a = 34;
    // int* ptra;
    // ptra = &a;
    // cout << "The value of a is "<< a << endl;
    // cout << "The value of a is "<< *ptra << endl; // * is a dereferencing operator (value pointed by ptra)
    // cout << "The address of a is "<< &a << endl;
    // cout << "The address of a is "<< ptra << endl;



    return 0;
}