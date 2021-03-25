#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int sal, int secPass)
    {
        this->name = name;
        this->salary = sal;
        this->secretPassword = secPass;
    }
    void printDetails()
    {
        cout << "The name of the employee is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }

    void getSecretPass()
    {
        cout << "The secret password of employee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
    public:
    int errors;
};


int main()
{
    /////////////// CLASSES //////////////

    // Employee nav;
    // nav.name = "Naved";
    // nav.salary = 1000;
    // cout << "The name of the employee is " << nav.name << " and his salary is " << nav.salary << "$" << endl;
    Employee nav("Naved Constructor", 1000, 12345);
    nav.printDetails();
    // cout<<nav.secretPassword;  // Can't access it from here.
    nav.getSecretPass();

    return 0;
}