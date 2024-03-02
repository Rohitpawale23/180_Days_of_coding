
//  *** DAY 114 - Deletion  In SINGLY LINKED LIST ***

#include <iostream>
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
    node *HEAD;
    HEAD = NULL;

    HEAD = CreateLinkL(arr, 0, 5);

    cout << "Before Deletion Linked list : " << endl;

    node *temp = HEAD;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Delete First Node in Singly Linked List
    if (HEAD != NULL)
    {
        node *temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
    }

    cout << "\nAfter deletion of First node of Linked list : " << endl;

    while (HEAD != NULL)
    {
        cout << HEAD->data << " ";
        HEAD = HEAD->next;
    }

    node *temp1 = HEAD;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    cout << "\nAfter deletion of Last node of Linked list : " << endl;
    // Delete Last Node in Singly Linked List

    int arr1[] = {1, 2, 4, 6, 8};
    node *HEAD1;
    HEAD1 = NULL;

    HEAD1 = CreateLinkL(arr1, 0, 5);

    if (HEAD1 != NULL)
    {
        // only one node is present
        if (HEAD1->next == NULL)
        {
            node *temp3 = HEAD1;
            delete temp3;
            HEAD1 = NULL;
        }
        //   More than one node is present
        else
        {
            node *curr;
            curr = HEAD1;
            node *pre;
            pre = NULL;

            // curr->next is not null
            while (curr->next != NULL)
            {
                pre = curr;
                curr = curr->next;
            }
            pre->next = curr->next;
            delete curr;
        }
    }
    // printing linked list
    node *tem = HEAD1;
    while (tem)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }

    int x;
    cout << "\nEnter node index : ";
    cin >> x;

    int arr2[] = {1, 2, 4, 6, 8};
    node *HEAD2;
    HEAD2 = NULL;

    HEAD2 = CreateLinkL(arr2, 0, 5);

    // Delete node at particular position
    cout << "After Deleting " << x << " Node of Linked List: " << endl;
    // delete first node of linked list
    if (x == 1)
    {
        node *tmp = HEAD2;
        HEAD2 = HEAD2->next;
        delete tem;
    }
    else
    {
        node *curr1 = HEAD2;
        node *prev1 = NULL;
        x--;

        while (x--)
        {
            prev1 = curr1;
            curr1 = curr1->next;
        }
        prev1->next = curr1->next;
        delete curr1;
    }

    // printing linked list
    node *tem2 = HEAD2;
    while (tem2)
    {
        cout << tem2->data << " ";
        tem2 = tem2->next;
    }
}