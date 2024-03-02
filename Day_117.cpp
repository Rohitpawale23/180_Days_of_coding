
//  ***** DAY 117 - Introduction To Doubly Linked List ******

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    // constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

// DLL Using Recursion
node *CreateDLL(int arr[], int index, int size, node *back)
{
    // Base case
    if (index == size)
    {
        return NULL;
    }

    node *temp = new node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);

    return temp;
}

int main()
{

    node *head;
    head = NULL;

    // Insertion in DLL - Insertion at start

    // if Linked list is not exist
    if (head == NULL)
    {
        head = new node(10);
    }
    // if linked list is exists
    else
    {
        node *temp = new node(10);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    cout << " After Inserting value at Start DLL: " << endl;

    // Printing of Doubly Linked List
    node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Insertion in DLL : Insertion at Last

    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    node *end = new node(5);
    curr->next = end;
    end->prev = curr;

    cout << " \nAfter Inserting value at End DLL: " << endl;

    // Printing of Doubly Linked List
    trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Creating An Doubly Linked List from Array :

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    node *Head, *Tail;
    Head = NULL;

    for (int i = 0; i < 7; i++)
    {
        // if DLL is not exists
        if (Head == NULL)
        {
            Head = new node(arr[i]);
            Tail = Head;
        }
        // if DLL is exists - insert at end
        else
        {
            node *tem = new node(arr[i]);
            Tail->next = tem;
            tem->prev = Tail;
            Tail = tem;
        }
    }

    cout << " \n\nAfter Creating an  DLL: " << endl;

    // Printing of Doubly Linked List
    trav = Head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Creation of DLL Using Recursion

    int arr1[] = {3, 2, 1, 4};
    node *Head1;

    Head1 = CreateDLL(arr1, 0, 4, NULL);

    cout << " \n\nAfter Creating an  DLL Using Recursive Function : " << endl;

    // Printing of Doubly Linked List
    trav = Head1;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Insert at any position in DLL

    int pos = 3;
    int pos1 = pos;
    // Edge cases

    // insert at start
    if (pos == 0)
    {
        // Linked list does not exists
        if (Head1 == NULL)
        {
            Head1 = new node(5);
        }
        // Linked list exists
        else
        {
            node *temp3 = new node(5);
            temp3->next = Head1;
            Head1->prev = temp3;
            Head1 = temp3;
        }
    }
    else
    {
        node *curr3 = Head1;
        // go to the node after which we will have to insert the new node
        while (--pos)
        {
            curr3 = curr3->next;
        }

        // insert at end
        if (curr3->next == NULL) // Last node
        {
            node *temp3 = new node(5);
            curr3->next = temp3;
            temp3->prev = curr3;
        }
        // insert at middle
        else
        {
            node *temp3 = new node(5);
            temp3->next = curr3->next;
            temp3->prev = curr3;
            curr3->next->prev = temp3;
            curr3->next = temp3;
        }
    }

    cout << " \n\nAfter Inserting 5 at " << pos1 << " position DLL : " << endl;

    // Printing of Doubly Linked List
    trav = Head1;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Deletion Operation in DLL

    // Deletion at start
    if (Head1 != NULL)
    {
        // only one node exists
        if (Head1->next == NULL)
        {
            delete Head1;
            Head1 = NULL;
        }
        // more than one node in exixts
        else
        {
            node *temp = Head1;
            Head1 = Head1->next;
            delete temp;
            Head1->prev = NULL;
        }
    }

    cout << " \n\nDeletion At Start In DLL : " << endl;

    // Printing of Doubly Linked List
    trav = Head1;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Deletion At End In DLL

    if (Head1 != NULL)
    {
        // only one node exists
        if (Head1->next == NULL)
        {
            delete Head1;
            Head1 = NULL;
        }
        // more than one node is present
        else
        {
            node *curr4 = Head1;
            // move curr4 up to the last node
            while (curr4->next)
            {
                curr4 = curr4->next;
            }

            curr4->prev->next = curr4->next;
            delete curr4;
        }
    }

    cout << " \n\nDeletion At END In DLL : " << endl;

    // Printing of Doubly Linked List
    trav = Head1;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    // Deletion AT ANY Position in DLL
    int posi = 1;
    int posi1 = posi;
    // delete at start
    if (posi == 1)
    {

        // Deletion at start
        if (Head1 != NULL)
        {
            // only one node exists
            if (Head1->next == NULL)
            {
                delete Head1;
                Head1 = NULL;
            }
            // more than one node in exixts
            else
            {
                node *temp = Head1;
                Head1 = Head1->next;
                delete temp;
                Head1->prev = NULL;
            }
        }
    }
    else
    {
        node *curr5 = Head1;

        while (--posi)
        {
            curr5 = curr5->next;
        }

        // deletion at end
        if (curr5->next == NULL)
        {
            curr5->prev->next = NULL;
            delete curr5;
        }
        // deletion at middle
        else
        {
            curr5->prev->next = curr5->next;
            curr5->next->prev = curr5->prev;
            delete curr5;
        }
    }

    cout << " \n\nAfter Deleting node at " << posi1 << " position in DLL : " << endl;

    // Printing of Doubly Linked List
    trav = Head1;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}