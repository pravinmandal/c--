#include<iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    int size=v.size();
    for(int i=0 ; i<size ; i++)
    {
        cout<<v[i]<<endl;
    }
}

int main()
{
    //in vector dont tell size of vector
    //Just keep inserting it will manage by itself

    vector<int> v; //array hi hai

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);


    return 0;
}