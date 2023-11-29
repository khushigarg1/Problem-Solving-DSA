#include<bits/stdc++.h>
using namespace std;

class stacknode
{
    public:
        char data;
        stacknode *next;
        stacknode(char data){
            this->data = data;
            this->next = nullptr;
        }
};

bool is_empty1(stacknode *head)
{
    return (head == nullptr);
}

void push(stacknode **head , int key)
{
    stacknode *newnode = new stacknode(key);
    if(*head == nullptr){
        *head = newnode;
    }
    else{
        newnode->next = *head;
        *head = newnode;
    }
}

char pop(stacknode **head){
    stacknode *temp = *head;
    if(*head == nullptr){
        cout << "stack underflow"<<endl;
        // return CHAR_MIN;
        return '\0';
    }
    else{
        char x = temp->data;
        *head = temp->next;
        delete [] temp;
        return x;
    }
}

char peek(stacknode **head)
{
    if(*head == nullptr)
    {
        cout<< "empty heheh"<<endl;
        return '\0';
    }
    else
    {
        return ((*head)-> data);
    }
}

void display(stacknode **head)
{
    stacknode *temp = *head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool check_paranthesis(string str)
{
    stacknode *top = nullptr;
    for (int i = 0; i < str.length() ; i++)
    {
        if(str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            push(&top , str[i]);
        }
        else if(str[i] == ')')
        {
            if(!is_empty1(top)&& peek(&top) == '(')
            {
                pop(&top);
            }
            else
            {
                return false;
            }
        }
        else if(str[i] == '}')
        {
            if(!is_empty1(top) && peek(&top) == '{')
            {
                pop(&top);
            }
            else
            {
                return false;
            }
        }
        else if(str[i] == ']')
        {
            if(!is_empty1(top) && peek(&top) == '[')
            {
                pop(&top);
            }
            else
            {
                return false;
            }
        }
    }
    if(is_empty1(top))
        return true;
    else
        return false;
}

int main(){
    string str ;
    cin >> str;
    cout << check_paranthesis(str);
return 0;
}