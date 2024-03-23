
// **** DAY 120 - Problems On Linked List ****

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

    // # Problem - Remove Duplicated from Linked list

    node *head;
    head = NULL;

    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};
    head = CreateLinkL(arr, 0, 10);

    //  Method 1 - using an extra space

    /*
        vector<int>ans;
        ans.push_back(head->data);

        node *curr = head->next , *prev = NULL;


        while(curr)
        {
            // non repeating elements stored in vector
            if(ans[ans.size()-1] != curr->data)
            {
                ans.push_back(curr->data);
            }

            curr = curr->next;
        }

        int idx = 0;
        curr = head;
        // storing elements (non duplicate ) from vector to linked list
        while(idx < ans.size())
        {

            curr->data = ans[idx];
            idx++;
             prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        */

    //  Method 2 - Without using an extra space

    node *prev = head;
    node *curr = head->next;

    while (curr != NULL)
    {
        // if duplicate is present - delete that node
        if (prev->data == curr->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            curr = curr->next;
            prev = prev->next;
        }
    }

    cout << "\nLinked List After Deleting Duplicate elements : " << endl;
    // Linked List printing
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    //  # Problem - Merge Two sorted linked lists

    node *head1;
    head1 = NULL;

    int arr1[] = {2, 4, 5, 7};
    head1 = CreateLinkL(arr1, 0, 4);

    node *head2;
    head2 = NULL;

    int arr2[] = {3, 4, 4, 6, 8, 10};
    head2 = CreateLinkL(arr2, 0, 6);

    // Brute force with extra space

    /*

          node *h;

        node *tem  = h;

        if(head1->data <= head2->data)
        {
            h = new node(head1->data);
            tem = tem->next;
            head1 = head1->next;
        }
        else
        {
            h = new node(head2->data);
            tem = tem->next;
            head2 = head2->next;
        }

        while(head1->next != NULL && head2->next != NULL)
        {
            if(head1->data <= head2->data)
            {
                node *temp1 = new node(head1->data);
                tem->next = temp1;
                tem = tem->next;
                delete temp1;
                head1 = head1->next;
            }
            else
            {
                node *temp1 = new node(head2->data);
                tem->next = temp1;
                tem = tem->next;
                delete temp1;
                 head2 = head2->next;
            }
        }
    */

    // OPtimized Approach - without using extra space

    node *Head = new node(0);
    node *tail = Head;

    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }

    if (head1)
        tail->next = head1;
    else
        tail->next = head2;

    Head = Head->next;
    // delete tail;

    cout << "\n\nAfter merging two sorted linked lists  : " << endl;
    // Linked List printing
    temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // # Problem - Given a linked list of 0s, 1s and 2s, sort it

    node *head3;
    head3 = NULL;

    int arr3[] = {1, 2, 2, 1, 2, 0, 2, 2};
    head3 = CreateLinkL(arr3, 0, 8);

    node *curr3 = head3;

    int count0 = 0, count1 = 0, count2 = 0;

    while (curr3 != NULL)
    {
        if (curr3->data == 0)
        {
            count0++;
        }
        else if (curr3->data == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }

        curr3 = curr3->next;
    }

    curr3 = head3;

    while (count0--)
    {
        curr3->data = 0;
        curr3 = curr3->next;
    }

    while (count1--)
    {
        curr3->data = 1;
        curr3 = curr3->next;
    }

    while (count2--)
    {
        curr3->data = 2;
        curr3 = curr3->next;
    }

    cout << "\n\nAfter soerting 0 1 2 Linked list : " << endl;
    // Linked List printing
    temp = head3;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}