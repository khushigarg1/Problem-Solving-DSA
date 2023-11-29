#include<bits/stdc++.h>
using namespace std;

class stack_arr{
    private:
        int size;
        int *arr;
        int top;
    public:
        stack_arr()
        {
            size = 10;
            arr = new int[size];
            top = -1;
        }
        stack_arr(int size)
        {
            this-> size = size;
            arr = new int[size];
            top = -1;
        }
        void push(int key);
        int pop();
        void display();
        int is_empty();
        int is_full();
        int peek();
};

void stack_arr :: push(int key)
{
    if(top + 1 == size)
    {
        cout << "sorry stack is full "<<endl;
    }
    else
    {
        // top++;
        arr[++top] = key;
    }
}

int stack_arr :: pop()
{
    if(top == -1){
        cout << "sorry stack is empty"<<endl;
        return INT_MIN;
    }
    else{
        int temp = arr[top--];
        // top--;
        return temp;
    }
}

void stack_arr :: display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] ;
        cout << endl;
    }
    cout << endl;
}

int stack_arr :: is_empty(){
    return (top == -1);
}                    

int stack_arr :: is_full(){
    return (top == size);
}

int stack_arr :: peek(){
    return arr[top];
}
int main(){
    stack_arr s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.display();

    cout << s1.pop();
    cout << endl;
    s1.display();

    cout << s1.is_empty();
    cout << endl;
    cout << s1.is_full();
    cout << endl;
    cout << s1.peek();
    cout << endl;
return 0;
}