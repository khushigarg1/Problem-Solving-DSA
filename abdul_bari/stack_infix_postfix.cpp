#include<bits/stdc++.h>
using namespace std;

class stacknode{
    public :
        char data;
        stacknode *next;
        stacknode(char data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

bool isempty(stacknode *top)
{
    return (!top);    //if top == nullptr that is stack is empty
}

void pushstack(stacknode **top , char key)
{
    stacknode *newnode = new stacknode(key);
    // if(isempty(*top)){
    //     *top = newnode;
    // }
    // else{
        newnode ->next = *top;
        *top = newnode;
    // }
}

char popstack(stacknode **top)
{
    stacknode *temp = *top;
    if(isempty(*top))
    {
        return '\0';
    }
    else
    {
        char x = temp->data;
        *top = (*top)->next;
        delete [] temp;
        return x;
    }
}

char peek_top(stacknode **top){
    stacknode *temp = *top;
    if(isempty(*top)){
        return '\0';
    }
    else{
        char x = (*top)->data;
        return x;
    }
}

int precedence(char a)
{
    if(a == '^')
        return 3;
    else if(a == '/' || a == '*' || a == '%')
        return 2;
    else if(a == '+' || a == '-')
        return 1;
    else
        return -1;
}

bool  isoperand(char a){
    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
        return 1;
    else
        return 0;
}

string in_postfix(string str)
{
    string postfix;
    stacknode *stack = nullptr;
    for (int i = 0; i <= str.length(); i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            postfix += str[i];
        }
        else if(str[i] == '(')
        {
            pushstack(&stack , str[i]);
        }
        else if(str[i] == ')')
        {
            while (peek_top(&stack) != '(')
            {
                postfix += popstack(&stack);
            }
            popstack(&stack);
        }
        else{
            if(precedence(str[i]) > precedence(peek_top(&stack)))
            {
                pushstack(&stack , str[i]);
            }
            else
            {
                while(!isempty(stack) && (precedence(str[i]) <= precedence(peek_top(&stack)) ))
                {
                    postfix += popstack(&stack);
                }
                pushstack(&stack , str[i]);
            }
        }
    }
    while (!isempty(stack))
    {
        postfix += popstack(&stack);
    }
    return postfix;
}

void display(stacknode *root)
{
    while (root)
    { 
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
}

int main(){
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    // cout<<"Enter infix expression : ";
    // cin>>infix;
    string postfix = in_postfix(infix);
    cout<<endl<<"After conversion the expression is :\n"<<postfix;
return 0;
}

/*
Postfix to infix
bool isoperand(cahr x)
{
    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}
string infixtopostfix(string exp)
{
    stack <string> s;
    for(int i = 0 ; i != '\0' ; i++)
    {
        if isoperand(exp[i])
        {
            string op(1, exp[i]);
            s.push(op);
        }
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + exp[i] + op1 + ")");
        }
    }
    return s.top();
}
*/