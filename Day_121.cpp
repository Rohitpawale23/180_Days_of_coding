
//  ***** DAY 121 - Circular Linked List | Detect Loop in linked list  | Find the legth of loop *****
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

    int arr[] = {1, 2, 3, 4, 5};

    node *head = NULL;
    head = CreateLinkL(arr, 0, 5);

    cout << "Linked List creation : " << endl;
    node *temp = head, *prev = NULL;
    while (temp)
    {
        prev = temp;
        cout << temp->data << " ";
        temp = temp->next;
    };
    cout << endl;

    // to make circular linked list address og first node/head is stored to last node next of linked list
    prev->next = head;

    cout << " Circular Linked List : " << endl;

    temp = head;
    int c = 50;
    while (c--)
    {
        // prev = temp;
        cout << temp->data << " ";
        temp = temp->next;
    };

    // # Problem - Detect Loop in Linked List

    /*
    Brute force approach - time complexity - O(n^2) | Space complexity - O(N)
    -Traverse an linked list and check curr node is visited previously or not if visited then return 1
    because loop is present else return 0


        bool check( vector<Node *>&visited ,Node *curr )
        {
            for(int i=0; i<visited.size(); i++)
            {
                if(curr == visited[i])
                {
                    return 1;
                }
            }

            return 0;
        }

                vector<Node *>visited;

            Node *curr = head;

            while(curr)
            {
                if(check(visited , curr))
                {
                    return 1;
                }

                visited.push_back(curr);
                curr = curr->next;
            }

            return 0;

    */

    /*

            // Better Approach - Using unordered map
            // T.C. - O(N) | S.P. - O(N)

            Node *curr = head;
            unordered_map<Node* , bool> visited;
            // traverse the linked list

            while(curr != NULL)
            {
                if(visited[curr] ==1)
                {
                    return 1;
                }
                visited[curr] = 1;
                curr = curr->next;
            };

            return 0;

    */

    /*

            // OPtimized Approach - Using Slow and Fast pointers
            // T.C. - O(N) | S.P. - O(1)

            Node *fast = head , *slow = head;

            while(fast != NULL && fast->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;

                if(slow == fast)
                {
                    return 1;
                }
            }

            return 0;

    */

    //  # Problem - Find the length of the loop

    /*

    // using  slow and fast pointer

    Node *slow = head , *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast )
            {
                break;
            }

        }

        if(fast == NULL || fast->next == NULL)
        {
               return 0;
        }


        int count = 1;
        slow = fast->next;

        while(slow != fast)
        {
            count++;
            slow = slow->next;
        }

        return count;

    */
}