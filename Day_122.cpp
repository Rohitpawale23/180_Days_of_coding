
// **** DAY 122 - Hard Problems on LINKED LIST***

#include <iostream>
using namespace std;

int main()
{

    // Problem - Detect and remove loop in linked list

    /*

            // Approach 1 -

        // Detect loop in linked list
        Node *slow = head , *fast = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            break;
        }

        if(!fast || !fast->next)
        return ;

        // take slow at head
        slow = head;

        // increment slow and fast pointer untill they meets
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        };

        // after meeting only increment any one pointer
        while(slow->next != fast)
        {
            slow = slow->next;
        }

        slow->next = NULL;

    */

    /*

           // Approach 2 -

         // Detect loop in linked list
         Node *slow = head , *fast = head;

         while(fast!=NULL && fast->next!=NULL)
         {
             slow = slow->next;
             fast = fast->next->next;

             if(slow == fast)
             break;
         }

         if(!fast || !fast->next)
         return ;

         // Find the length of loop
         slow = fast->next;
         int count = 1;
         while(slow != fast)
         {
             count++;
             slow = slow->next;
         }

         slow = head , fast = head;
         // increment fast by count times

         while(count--)
         {
             fast = fast->next;
         }

         while(slow != fast)
         {
             slow = slow->next;
             fast = fast->next;
         }

         // after meeting only increment any one pointer
         while(slow->next != fast)
         {
             slow = slow->next;
         }

         slow->next = NULL;

    */

    // # Problem - Intersection point in Y shaped linked list

    /*

 //    Method 1 -

         Node *curr1 = head1 , *curr2 = head2;
     int count1 = 0 , count2 = 0;

     // count the total no. of nodes
     while(curr1)
     {
         count1++;
         curr1 = curr1->next;
     }

     while(curr2)
     {
         count2++;
         curr2 = curr2->next;
     }

     curr1 = head1 , curr2 = head2;

     // increment curr1 or curr2 to reach at the same level
     while(count1 > count2)
     {
         curr1 = curr1->next;
         count1--;
     }

     while(count2 > count1)
     {
         curr2 = curr2->next;
         count2--;
     }

     // after reaching at same level increment both the pointers untill the meet
     while(curr1 != curr2)
     {
         curr1 = curr1->next;
         curr2 = curr2->next;
     }

     if(!curr1)
     return -1;

     return curr1->data;

    */

    /*


        // Alternate solution - Using slow and fast pointer by creating an loop

      Node *curr1 = head1;
      // form a loop
      while(curr1->next)
      {
          curr1 = curr1->next;
      };
      curr1->next = head1;

      Node *slow = head2 , *fast = head2;

      while(fast && fast->next)
      {
          slow = slow->next;
          fast = fast->next->next;

          if(slow == fast)
          break;
      }

      // if they are not connected the return -1
      if(!fast|| !fast->next)
      return -1;

      slow = head2;

      while(slow != fast)
      {
          slow = slow->next;
          fast = fast->next;
      }

      return slow->data;

    */
}