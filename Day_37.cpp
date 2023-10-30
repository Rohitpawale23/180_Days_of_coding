#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
// header file to add vector in program
using namespace std;

int main()
{

// cout<<"Day 37 of 180 days of coding!!"<<endl;

// ********Day 37 - Vectors in Standard templet Library (STL)******************

// Vector is similar as array it stored in an heap of ram It allocates dynamic memory location
// whereas array are stored in stack of ram It allocates static memory location

/*
// creat vector and declaration
//  here we created v named vector
vector <int> v;

// how to find size and capacity of vector
cout<<"Size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;
// both returns zero in output bcoz v is empty

v.push_back(2);
cout<<"Size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;

v.push_back(3);
cout<<"Size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;
// here both are 2 bcoz it doubles the capacity and stores 3 in it

v.push_back(4);
cout<<"Size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;
// here size is 3 and cpacity is 4 bcoz it doubles the capacity and stores 4 in it

v.push_back(10);
cout<<"Size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;

*/

/*
vector<int>a(5 ,1);
// here we declared a named vector which has capcity 5 and initialized with 1
// vector printing
for (int i = 0; i < a.size(); i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
// its output is - 1 1 1 1 1 

// size and capacity
cout<<"Size of a: "<<a.size()<<endl; //5
cout<<"capacity of a: "<<a.capacity()<<endl; //5

a.push_back(4);
cout<<"After pushing 4 "<<endl;
cout<<"Size of a: "<<a.size()<<endl; // 6
cout<<"capacity of a: "<<a.capacity()<<endl; // 10 it doubles its capacity
*/

/*
// another method for initialization
vector<int> a1 = {1, 3, 4, 5 ,6 , 7};
cout<<"Size of a: "<<a1.size()<<endl; // 6
cout<<"capacity of a: "<<a1.capacity()<<endl; //6

a1.push_back(13);
cout<<"After pushing 13 "<<endl;
cout<<"Size of a: "<<a1.size()<<endl; // 7
cout<<"capacity of a: "<<a1.capacity()<<endl; // 12 it doubles its capacity

// deleting value from vector
a1.pop_back();

*/

/*

vector<int>c;

c.push_back(1);
c.push_back(2);
c.push_back(6);
c.push_back(7);
c.push_back(9);


// size and capacity
cout<<"Size of c: "<<c.size()<<endl; //5
cout<<"capacity of c: "<<c.capacity()<<endl; //8

// printing vector
for (int i = 0; i < c.size(); i++)
{
    cout<<c[i]<<" ";
}
cout<<endl;
// its output is - 1 2 6 7 9 

// deleting elements from vector
c.pop_back(); 
// last element 9 is deleted

cout<<"After deleting last element "<<endl;

// size and capacity
cout<<"Size of c: "<<c.size()<<endl; //4
cout<<"capacity of c: "<<c.capacity()<<endl; //8

// printing vector
for (int i = 0; i < c.size(); i++)
{
    cout<<c[i]<<" ";
}
cout<<endl;
// its output is - 1 2 6 7 

*/


/*
vector<int>c2;

c2.push_back(7);
c2.push_back(5);
c2.push_back(3);
c2.push_back(5);
c2.push_back(18);

// to remove any element in vector
c2.erase(c2.begin() + 3);
cout<<"After erasing 5 from vector"<<endl;
// print vector
for (int i = 0; i < c2.size(); i++)
{
    cout<<c2[i]<<" ";
}
cout<<endl;
// its output is - 7 5 3 18

//  to add / insert elelment in vector
c2.insert(c2.begin() +3 , 45);

cout<<"After adding 45 at index 3 "<<endl;
// print vector
for (int i = 0; i < c2.size(); i++)
{
    cout<<c2[i]<<" ";
}
cout<<endl;
// its output is - 7 5 3 45 18

// updating vector elements
c2[4] = 79; // 18 get replaced with 79
cout<<"After 18 get replaced with 79 "<<endl;
// print vector
for (int i = 0; i < c2.size(); i++)
{
    cout<<c2[i]<<" ";
}
cout<<endl;
// its output is - 7 5 3 45 79

*/

/*
vector<int>t = {3,5,57,8 ,9};

// size and capacity
cout<<"Size of t: "<<t.size()<<endl; //5
cout<<"capacity of t: "<<t.capacity()<<endl; //5

// clear function is used to clear all elements in vector to make it empty

cout<<"Vector is empty after using clear function "<<endl;
t.clear();
// size and capacity
cout<<"Size of t: "<<t.size()<<endl; //0 it is empty
cout<<"capacity of t: "<<t.capacity()<<endl; //5
*/


/*
vector<int>m = {3,5,57,8 ,9};

// printing first and last element of vector
// here front and back are used

cout<<"First element: "<<m.front()<<endl;
cout<<"Last element: "<<m.back()<<endl;

// empty - is used to check vector is empty or not
//  if empty - 1 , not empty - 0

cout<<"vector is empty or not: "<<m.empty()<<endl;
// 0 means vector is not empty

// copying data from one vector to another

vector<int>w;

w = m; // all data from m get copied to w
// printing w
cout<<"After copying data from m to w "<<endl;

for (int i = 0; i < w.size(); i++)
{
    cout<<w[i]<<" ";
}
// second method for printing
cout<<endl;
cout<<"Vector m is:"<<endl;
for (auto j : m)
       cout<<j<<" "; 

// which are same as elements in m

*/


/*
// sorting vector using function

vector<int>ans;
ans.push_back(5);
ans.push_back(573);
ans.push_back(76);
ans.push_back(23);
ans.push_back(9);

cout<<"Before sorting: "<<endl;

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
//  sorting in increasing order
// to run sort we have to add #include <algorithm> as a header

cout<<"After sorting in increasing order: "<<endl;
sort(ans.begin() , ans.end());
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;

// sort in decreasing order
sort(ans.begin() , ans.end() , greater<int>());
cout<<"After sorting in decreasing order: "<<endl;
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
*/

/*
// searching in vector using stl
// search in binary search

vector<int>ans1 = {2,56, 75, 95 , 7};

cout<<binary_search(ans1.begin() , ans1.end() , 56)<<endl;
// it returns 1 bcoz 573 is present

cout<<binary_search(ans1.begin() , ans1.end() , 73)<<endl;
// it returns 0 bcoz 73 is absent


// how to return index of an element which we have to search

// here we have to use find function
cout<<find(ans1.begin() , ans1.end() , 95) - ans1.begin()<<endl;
// it returns index of 95 which is 3

*/

// Homework
//  count , lower bound , upper bound , maximum
s

}