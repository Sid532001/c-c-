/*
Topic:Std:array
syntax: std:: array<T,N>array;  (std::array<int,5>arr;)

Notice:
1. Std:array is a container that encapsulates fixed size arrays
2. arraysize is needed at compile time
3. Assign by value is actually by value
4. Access Elements:
    a. at()
    b.[]
    c.front()
    d.back()
    e.data()  ->gives access to the uderlying array
*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
    //declare
    std::array<int ,5> myarray;

    //intializtion
    std::array<int,5> myarray={1,2,3,4,5};
    std::array<int,5> myarray2 {1,2,3,4,5};

    //Assign using initializer list
    std::array<int,5> myarray;
    myarray={1,2,3,4,5};
    return 0;

}