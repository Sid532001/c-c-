/*
Topic:std::vector  std::vecto<T> vec;
 1. std::vector is a sequence container and also known as dynamic array or array list.  
 2. Its size can grow and shrink dynamically, and no need to provide size at compiler time.

 Element access
 at(),[],front (),back(),data()

 modifier:
 insert(),emplace(),push_back(),emplace_back(),pop_back(),resize(),swap(),erase(),clear()
*/
 #include<iostream>
 #include<vector>
 using namespace std;

 int main()
 {
     //declaration
     std::vector<int> arr1;
     std::vector<int> arr2 (5,20);
     std::vector<int> arr3={1,2,3,4,5};  // initializer list
     std::vector<int> arr4{1,2,3,4,5};   //uniform initialization

     //Accessing elements
     arr2[3];
 }