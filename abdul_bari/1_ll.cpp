#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

// TO APPEND LINKED LIST
void append(int key, node **head)
{
    node *temp = *head;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    if (temp == nullptr)
    {
        *head = newnode;
    }
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// INSERT LL AT BEGINNING POINT
void push_beginning(node **head, int key)
{
    node *temp = *head;
    node *newnode = new node;
    newnode->data = key;
    if (temp == nullptr)
    {
        *head = newnode;
        newnode->next = nullptr;
    }
    else
    {
        newnode->next = temp;
        *head = newnode;
    }
}

// INSERT ATT THE POSITION I
void push_i(node **head, int key, int i)
{
    node *temp = *head;
    int count = 0;
    node *newnode = new node;
    newnode->data = key;
    newnode->next = nullptr;
    if (i == 0)
    {
        *head = newnode;
    }
    else
    {
        while (count < i - 1 && temp != nullptr)
        {
            temp = temp->next;
            count++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

// PRINT LINKED LIST
void print(node **head)
{
    node *temp = *head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// PRINT LL BY RECURSION
// void display(node *p)
// {
//     if(p != nullptr)
//     {
//         display(p->next);
//         cout << p-> data << " ";
//     }
// }

// COUNT SIZE OF LINKE LIST
void count(node **head)
{
    node *temp = *head;
    int c = 0;
    while (temp != nullptr)
    {
        c++;
        temp = temp->next;
    }
    cout << "size of linked list " << c;
}

// count by recursion
//  int count(node **head , int c)
//  {
//      node *temp = *head;
//      // int c=0;
//      if(temp == nullptr)
//      {
//          return 0;
//      }
//      while (temp != nullptr)
//      {
//          return count(temp->next) + 1;
//      }
//  }

// ADD DATA OF LINKED LIST
void add(node **head)
{
    node *temp = *head;
    int sum = 0;
    while (temp)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    cout << endl
         << sum;
    /* BY RECURSION
    int add(node **head)
    {
        node *temp = *head;
        if(p ==0)
            return 0;
        else
            return add(temp ->next)+ temp->data
    }
    */
}

// MAXIMUM ELEMENTS IN A LINKED LIST
//  int max(node *head)
//  {
//      int m = -10 , MIN_INT;
//      node *temp = head;
//      while (temp)
//      {
//          if(temp-> data > m)
//          {
//              m = temp->data;
//          }
//          temp = temp->next;
//      }
// BY RECURSION
/*    int x = 0;
    if(temp == 0)
    {
        return MIN_INT;
    }
    else
    {
        x = max(temp -> next);
        if(x > temp->next)
        {
            return x;
        }
        else
        return temp->data;
    }
*/
// }

// MAXIMUM ELEMENT IN LINKED LIST
void max(node **head)
{
    node *temp = *head;
    int x = 0;
    while (temp != nullptr)
    {
        if (temp->data > x)
        {
            x = temp->data;
        }
        temp = temp->next;
    }
    cout << endl
         << x;
    /*
    int x =0;
    if(p == 0)
    {
        return MIN_INT;
    }
    else
    x = max(temp-> next);
    temp-> data > x ? temp->data : x;
    */
}

// LINEAR SEARCH
//  node* linear_search(node **head , int key)
//  {
//      node * temp = *head;
//      while(temp != nullptr)
//      {
//          if(key == temp-> data)
//          {
//              return temp ;
//          }
//              temp = temp->next;
//      }
//      return nullptr;
//  }

// MODIFYING LINEAR SEARCH BY MOVING AT FIRST NODE
node *Lsearch(node **head, int key)
{
    node *temp = *head;
    node *p;
    while (temp != nullptr)
    {
        if (key == temp->data)
        {
            p->next = temp->next;
            temp->next = *head;
            *head = temp;
            return temp;
        }
        p = temp;
        temp = temp->next;
    }
    return nullptr;
}

// SEARCHING BY RECUCRSION
node *Rsearch(node *head, int key)
{
    node *temp = head;
    if (temp == nullptr)
        return nullptr;
    if (key == temp->data)
        return temp;
    else
        return Rsearch(temp->next, key);
}

int main()
{
    node *head = nullptr;
    append(1, &head);
    append(2, &head);
    append(3, &head);
    push_beginning(&head, 0);
    print(&head);

    // push_i(&head , 6 , 2);
    push_i(&head, 6, 4);
    print(&head);
    push_beginning(&head, 6);
    print(&head);

    count(&head);
    add(&head);
    max(&head);

    node *ans;
    // ans = linear_search(&head  , 2);
    ans = Lsearch(&head, 2);
    ans = Lsearch(&head, 0);
    if (ans)
        cout << "key is found " << ans->data << endl;
    else
        cout << "key is not found" << endl;
    print(&head);

    node *a;
    a = Rsearch(head, 2);
    if (ans)
        cout << "key is found " << ans->data << endl;
    else
        cout << "key is not found" << endl;

    return 0;
}