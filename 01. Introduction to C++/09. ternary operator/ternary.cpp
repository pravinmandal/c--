#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:- ";
    cin >> age;

    // if(age>=18)
    // {
    //     cout<<"You can vote"<<endl;
    // }
    // else
    // {
    //     cout<<"You cannot vote"<<endl;
    // }

    (age >= 18) ? cout << "you can vote" : cout << "you cannot vote";

    return 0;
}