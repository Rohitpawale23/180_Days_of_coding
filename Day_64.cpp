#include<iostream>

using namespace std;

int main()
{

//  *** Day 64 - Pointers Relationship with Arrays and Function ****

int arr[5] = {23 ,12 , 5 , 6 ,3};

int *ptr = arr;

/*


// print the address of first element or 0 index

cout<<"m1 Address of first Element- "<<&arr[0]<<endl;
cout<<"m2 Address of first Element- "<<arr+0<<endl;
cout<<"m3 Address of first Element- "<<arr<<endl;
cout<<"m4 Address of first Element- "<<ptr<<endl;

// print the address of second element or 1 index

cout<<"m2 Address of second Element- "<<arr+1<<endl;
cout<<"m1 Address of second Element- "<<&arr[1]<<endl;

// print the value of 0th index 
cout<<arr[0]<<endl;
cout<<*arr<<endl;
cout<<*arr+0<<endl;
cout<<*ptr<<endl;


// print all then addresses

for(int i=0; i<5; i++)
{
    cout<<arr+i<<" ";
}

cout<<endl;
// print all the values
for(int i=0; i<5; i++){
    cout<<*(arr+i)<<" ";
}
cout<<endl;
// Pointer as array
cout<<"Pointer as array"<<endl;
for(int i=0; i<5; i++)
{
    cout<<(ptr+i)<<" ";
}




// print all the value
cout<<"values of arrays"<<endl;
for(int i=0; i<5; i++)
cout<<ptr[i]<<" ";

cout<<endl;

// print all addresses
cout<<"addresses are - "<<endl;
for(int i=0; i<5; i++)
cout<<ptr+i<<" ";

*/

// /*
// Arithmatic operations - ptr++ , ptr-- , ptr = ptr+1

cout<<" Arithmatic Operatioms on pointers"<<endl;;

for(int i=0; i<5; i++){
    cout<<*ptr<<" ";
    ptr++;
}

cout<<endl;

// HW -  Print value in reverse order using ptr--
ptr = arr+4;

for(int i=0; i<5; i++){
    cout<<*ptr<<" ";
    ptr--;
}
cout<<endl;

ptr = arr;
// addition

ptr = ptr +3;
cout<<*ptr<<endl;

ptr = ptr -2;
cout<<*ptr<<endl;
// */

//  NOTE - arithmatic operations can not be valid for arrays 
//  ex - arr++ , arr-- is not aloud

/*

// HW - make character array ans print address

char ch[5] = {1,2,3,4};

char *pt2 = &ch;
cout<<&ch;

// it not possible with normal method in in next day we will learn this
*/


}