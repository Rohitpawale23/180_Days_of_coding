
#include<iostream>
using namespace std;

int main()
{
    // # Problem - Add two numbers represented by an linked list

    /*

        // Recursive function to reverse an linked list
    Node *Reverse(Node *curr , Node *prev)
    {
        if(curr == NULL)
        {
            return prev;
        }
        
        Node *front = curr->next;
        curr->next  = prev;
        return Reverse(front , curr);
    }


    // inside int main

     // Revese both linked lists
        first = Reverse(first , NULL);
        second = Reverse(second , NULL);
    
        Node *curr1 = first , *curr2 = second;
        int sum , carry = 0;
        
        // head which stores ans in revese form eith dummy variable
        Node *head = new Node(0);
        Node *tail = head;
        
        // Addition operation
        while(curr1 && curr2)
        {
            sum = curr1->data+curr2->data+carry;
            tail->next = new Node(sum%10);
            curr1 = curr1->next;
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        };
        
        // Add remianning elements
        
        while(curr1)
        {
            sum = curr1->data+ carry;
            tail->next = new Node(sum%10);
            curr1 = curr1->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        while(curr2)
        {
            sum = curr2->data+ carry;
            tail->next = new Node(sum%10);
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        // carry
        while(carry)
        {
            tail->next = new Node(carry%10);
            tail = tail->next;
            carry /= 10;
        }
        
        // dummy node is present
        head = Reverse(head->next , NULL);
        
        return head;


    */

   // #Problem - Reverse a Linked list in group of sizes

   /*
   
   
   
   */    
}