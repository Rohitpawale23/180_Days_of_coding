
// ****DAY - 109 - File Handling In C++ ***

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Open the file
    ofstream fout;
    fout.open("Sample.txt");

    // Write in the file
    fout << "Hello Coders , Good Morning \n";
    // close the file
    fout.close();

    // Reading the file
    ifstream fin;

    // first open the file
    fin.open("Sample.txt");

    // read the elemnts in the file
    char c;
    c = fin.get();

    // eof - end of file
    while (!fin.eof())
    {
        cout << c;
        c = fin.get();
    }

    fin.close();

    // // File which takes data from user and then stores it in sorted form by doing sorted operation on them

    // vector<int>arr(5);
    // cout<<"\nEnter any 5 elements: ";

    // for(int i=0; i<5; i++)
    // {
    //     cin>>arr[i];
    // }

    // // open the file
    // ofstream fsort;
    // fsort.open("Sort.txt");
    // fsort<<"Original data\n";

    // for(int i=0; i<5; i++)
    // {
    //     fsort<<arr[i]<<" ";
    // }

    // // sort the data
    // sort(arr.begin() , arr.end());
    //  fsort<<"\nSorted data : \n";
    // for(int i=0; i<5; i++)
    // {
    //     fsort<<arr[i]<<" ";
    // }

    ofstream pri;
    pri.open("show.txt");
    pri << "Hello India\n";
    pri << "Hello Coders\n";
    pri << "Hello Shet\n";
    pri.close();

    // read all lines in the files
    ifstream read;
    read.open("show.txt");

    string line;

    while (getline(read, line))
    {
        cout << line << endl;
    }

    read.close();

    // Homework**

    ifstream demo;
    demo.open("hw109.txt");

    vector<int> arr1(6);

    int temp;
    demo >> temp;

    for (int i = 0; i < 6; i++)
    {
        arr1[i] = temp;
        demo >> temp;
        // temp = demo.get();
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    demo.close();

    ofstream dem;
    dem.open("hw109.txt");

    sort(arr1.begin(), arr1.end());

    dem << "\nSorted data : \n";

    for (int i = 0; i < 6; i++)
    {
        dem << arr1[i] << " ";
    }

    dem.close();
}