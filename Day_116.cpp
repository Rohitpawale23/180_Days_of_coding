
//  *** DAY 116 - Linked List Leetcode Problems  ***

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

// To check Pallindrome
bool isPalindrome(node *head)
{

    // Approach 1 - using Extra space
    // vector<int>ans;
    // ListNode *temp = head;

    // while(temp)
    // {
    //     ans.push_back(temp->val);
    //     temp = temp->next;
    // };

    // int n = ans.size();
    // int s = 0 , e=n-1;

    // while( s< e)
    // {
    //     if(ans[s] != ans[e])
    //     {
    //         return 0;
    //     }
    //     s++ , e--;
    // }

    // return 1;

    // Approach 2 - Without using Extra space

    // edge case
    if (head->next == NULL)
    {
        return 1;
    }
    // count number of nodes

    int count = 0;
    node *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    };

    count /= 2;
    node *curr = head, *prev = NULL;

    // Skip no. of nodes
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    };
    prev->next = NULL;

    // Reverse Second Part , Curr pointing second part
    node *front;
    prev = NULL;
    while (curr)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    // prev is pointing to second part
    // head is pointing to First part

    // Check Pallindrome
    node *Head1 = head, *Head2 = prev;
    while (Head1)
    {
        if (Head1->data != Head2->data)
        {
            return 0;
        }
        Head1 = Head1->next;
        Head2 = Head2->next;
    }
    return 1;
}

int main()
{

    int arr[] = {1, 2, 4, 6, 8};
    node *head;
    head = NULL;

    head = CreateLinkL(arr, 0, 5);

    cout << "Linked List is : " << endl;

    // printing linked list
    node *tem = head;
    while (tem)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }

    // ## Problem - Remove Nth node from last in linked list

    int n = 3;
    int count = 0;
    tem = head;

    // count stores total numbers of nodes
    while (tem)
    {
        count++;
        tem = tem->next;
    }
    // total nodes - n = nth node from statring of linked list
    count -= n;

    // to handle edge case
    if (count == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;

        cout << "\nAfter Deleting Nth from last Linked List is : " << endl;

        // printing linked list
        tem = head;
        while (tem)
        {
            cout << tem->data << " ";
            tem = tem->next;
        }
    }

    node *curr = head;
    node *prev = NULL;

    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;

    cout << "\nAfter Deleting Nth from last Linked List is : " << endl;

    // printing linked list
    tem = head;
    while (tem)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }

    // ## Problem - Remove Every Kth node

    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    node *head1;
    head1 = NULL;

    head1 = CreateLinkL(arr1, 0, 10);

    cout << "\n\nLinked List is : " << endl;

    // printing linked list
    node *tem1 = head1;
    while (tem1)
    {
        cout << tem1->data << " ";
        tem1 = tem1->next;
    }
    int k = 3;
    int count1 = 1;
    node *curr1 = head1;
    node *prev1 = NULL;

    // edge case
    if (k == 1)
    {
        tem1 = NULL;
    }

    while (curr1)
    {
        // if it is kth node
        if (count1 == k)
        {
            prev1->next = curr1->next;
            delete curr1;
            curr1 = prev1->next;
            count1 = 1;
        }
        else
        {
            prev1 = curr1;
            curr1 = curr1->next;
            count1++;
        }
    }

    cout << " \nLinked List After Deleting Every Kth Node : " << endl;

    // printing linked list
    tem1 = head1;
    while (tem1)
    {
        cout << tem1->data << " ";
        tem1 = tem1->next;
    }

    // ## Problem - - Rotate Linked List

    int arr2[] = {1, 2, 4, 6, 8};
    node *head2;
    head2 = NULL;

    head2 = CreateLinkL(arr2, 0, 5);

    cout << "\n\nLinked List is : " << endl;

    // printing linked list
    node *tem2 = head2;
    while (tem2)
    {
        cout << tem2->data << " ";
        tem2 = tem2->next;
    }

    int k1 = 3;

    // Edge Cases
    if (head2 == NULL || head2->next == NULL)
    {
        tem2 = head2;
    }

    //  Count no. of Nodes
    int c = 0;
    node *temp2 = head2;

    while (temp2)
    {
        c++;
        temp2 = temp2->next;
    }

    k1 = k1 % c;
    c -= k1;

    if (k1 == 0)
    {
        tem2 = head2;
    }

    node *curr2 = head2, *prev2 = NULL;
    while (c--)
    {
        prev2 = curr2;
        curr2 = curr2->next;
    };

    prev2->next = NULL;
    node *Tail = curr2;

    while (Tail->next != NULL)
    {
        Tail = Tail->next;
    };

    Tail->next = head2;
    head2 = curr2;

    cout << "\nLinked List is After Rotating by " << k1 << " Places  : " << endl;

    // printing linked list
    tem2 = head2;
    while (tem2)
    {
        cout << tem2->data << " ";
        tem2 = tem2->next;
    }

    //  ## Problem - Check Pallindrome

    int arr3[] = {1, 2, 3, 4, 3, 2, 1};
    node *head3;
    head3 = NULL;

    head3 = CreateLinkL(arr3, 0, 7);

    cout << "\n\nLinked List is : " << endl;

    // printing linked list
    node *tem3 = head3;
    while (tem3)
    {
        cout << tem3->data << " ";
        tem3 = tem3->next;
    }

    int ans = isPalindrome(head3);

    if (ans == 1)
    {
        cout << "\n It is Pallindrome " << endl;
    }
    else
    {
        cout << "\n Not Pallindrome" << endl;
    }
}