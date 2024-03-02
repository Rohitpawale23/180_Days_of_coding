
//  *** DAY 113 - INTRODUCTION TO LINKED LIST ***

// Insertion OPerations On Linked Lists

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
    node *Head;
    Head = NULL;

    /*

    Head = new node(4);
    // Head->data = 27;
    Head->next = NULL;

    cout<<Head->data<<endl;
    // cout<<Head->next<<endl;

    */

    // Insertion At Start in linked list

    // inserting elements from array arr into an linked list
    int arr[] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++)
    {

        // when linked list doesnt exist create an linked list
        if (Head == NULL)
        {
            Head = new node(arr[i]);
        }
        else
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    cout << "Linked list after inserting array elements  at Start: " << endl;

    // Traversing an linked list
    node *temp = Head;
    // Printing of linked list  - Data
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
    // last elements is added first so it is in reverse order

    // Insertion At the END in linked list

    node *HEAD;
    node *Tail;
    HEAD = NULL;
    Tail = NULL;

    int arr1[] = {5, 6, 7, 8, 9};

    for (int i = 0; i < 5; i++)
    {
        if (HEAD == NULL)
        {
            HEAD = new node(arr[i]);
            Tail = HEAD;
        }
        else
        {
            Tail->next = new node(arr[i]);
            Tail = Tail->next;
        }
    }

    // Printing linked list after inserting elements at end
    cout << "\nLinked list after inserting array elements  at END: " << endl;

    // Traversing an linked list
    node *temp1 = HEAD;
    // Printing of linked list  - Data
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    };

    // Insertioin at particular position in linked list

    int x = 3; // Insert position
    int val = 37;

    node *temp2 = HEAD;
    x--;

    while (x--)
    {
        temp2 = temp2->next;
    };

    node *temp3 = new node(val);
    temp3->next = temp2->next;
    temp2->next = temp3;

    // Printing linked list after inserting elements at particular position

    cout << "\nLinked list after inserting element  at Particular Position : " << endl;

    // Traversing an linked list
    node *temp0 = HEAD;
    // Printing of linked list  - Data
    while (temp0 != NULL)
    {
        cout << temp0->data << " ";
        temp0 = temp0->next;
    };

    int ar2[] = {2, 4, 6, 8};

    node *HEad;
    HEad = CreateLinkL(ar2, 0, 4);

    cout << "\nLinked list using Function : " << endl;

    // Traversing an linked list
    node *tem = HEad;
    // Printing of linked list  - Data
    while (tem != NULL)
    {
        cout << tem->data << " ";
        tem = tem->next;
    };
}