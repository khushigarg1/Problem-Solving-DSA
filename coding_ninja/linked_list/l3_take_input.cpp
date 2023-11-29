#include<bits/stdc++.h>
using namespace std;
#include"1_node.cpp"

node *takeinput()
{
    int data ;
    cin >>data;
    node *head = nullptr;   
    // it means abhi ll khali hai isme ek bhi llka element nhi hai 
    // while (data != -1)
    // {
    //     /* code */
    //     node n(data);
    //     if(head == nullptr)
    //     {
    //         head = &n;
    //     }
    //     cin >> data;
    // } hum isko dynamially allocaate knrge bcoz we dont want ki jo node ka access hai vo har loop ke bad deleteho jaye iska scope sirf is while loop ke andr rhega or deallocate hoti rhegi har loop ke bad so we will use dynamically 
    while (data != -1)
    {
        node *newnode = new node(data);
        if(head == nullptr)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while(temp-> next != nullptr)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head)
{
    while (head != nullptr)
    {
        cout << head -> data << " ";
        head = head -> next;
    }
}
int main(){
    node *head = takeinput();
    print(head);
return 0;
}