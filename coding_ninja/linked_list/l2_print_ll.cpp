#include<bits/stdc++.h>
using namespace std;
#include "1_node.cpp"

void print(node *head)
{
    // node *temp = head;

    // while (head != nullptr)
    // {
    //     cout << head -> data << " ";
    //     head = head -> next;
    // }

    // we will make temporary variable bcoz if we use head then we will lose address of head variable
    // while (temp != nullptr)
    // {
    //     cout << temp -> data << " ";
    //     temp = temp -> next;
    // }

//now we can print it two times or more 
       
    node *temp = head ;
    while (temp!= nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
}
int main(){
    // statically
    node n1(1);
    node *head = &n1;

    node n2(2);

    node n3(3);
    node n4(4);
    node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;


    print(head);
    print(head);
    /*
    n1.next = &n2;
    cout << n1.data << " "<< n2.data <<endl;

    //DYNAMICALLY
    node *n3 = new node(10);
    node *head = n3;
    node *n4 = new node(20);
    n3-> next = n4;
 */
   return 0;
}