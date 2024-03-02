
//  *** DAY 115 - Reverse Linked List | Middle Of Linked List | Rotate Linked List ***

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor to inilialize the data in linked list
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *CreateLinkL(int arr[], int index, int size)
{
    // BAse case
    if (index == size)
        return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = CreateLinkL(arr, index + 1, size);

    return temp;
}

int main()
{

    int arr[] = {1, 2, 4, 6, 8};
    node *head;
    head = NULL;

    head = CreateLinkL(arr, 0, 5);

    // Problem - Reverse an Linked List

    cout << "Linked List is : " << endl;

    // printing linked list
    node *tem = head;
    while (tem)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }

    // Method -1 : Using an Array
    vector<int> ans;

    node *temp = head;
    while (temp)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    temp = head;
    int i = ans.size() - 1;

    while (temp)
    {
        temp->data = ans[i];
        i--;
        temp = temp->next;
    }

    tem = head;
    cout << "\n Method-1  Reversed Linked List is : " << endl;

    // printing linked list

    while (tem)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }

    // Method -2 : moving head pointer to last node

    int arr1[] = {1, 2, 4, 6, 8};
    node *head1;
    head1 = NULL;

    head1 = CreateLinkL(arr1, 0, 5);

    node *curr1 = head1, *prev1 = NULL, *fut = NULL;

    while (curr1)
    {
        fut = curr1->next;
        curr1->next = prev1;
        prev1 = curr1;
        curr1 = fut;
    }

    head1 = prev1;

    cout << "\n Method-2  Reversed Linked List is : " << endl;

    // printing linked list
    tem = head1;
    while (tem)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }

    cout << "\n\n Method-1 Middle Of Linked List " << endl;

    int arr2[] = {10, 20, 40, 60, 80};
    node *head2;
    head2 = NULL;

    head2 = CreateLinkL(arr2, 0, 5);

    int count = 0;
    node *tem2 = head2;

    while (tem2 != NULL)
    {
        count++;
        tem2 = tem2->next;
    }
    count /= 2;

    tem2 = head2;
    while (count--)
    {
        tem2 = tem2->next;
    }

    cout << "Middle Element address is :" << tem2->next << endl;
    cout << "Middle Element is :" << tem2->data << endl;

    cout << "\n\n Method-2 using slow and fast pointers " << endl;

    node *slow = head2;
    node *fast = head2;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle Element address is :" << slow->next << endl;
    cout << "Middle Element is :" << slow->data << endl;
}