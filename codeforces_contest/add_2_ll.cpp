#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data ;
    struct Node*next;
    Node(int x)
    {
        data =x;
        next = nullptr;
    }
};

struct Node *buildlist(int size)
{
    int val;
    cin >> val;
    Node *head = new Node(val);
    Node* tail = head;

    for (int i = 0; i < size-1; i++)
    {
        /* code */
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    return head;
}
void printlist(Node * n)
{
    while(n)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node * reverse(struct Node **head)
    {
        struct Node *curr = *head;
        struct Node *prev = nullptr;
        struct Node *last = nullptr;
        while(curr != nullptr)
        {
            last = curr->next;
            curr->next  = prev;
            prev = curr;
            curr = last;
        }
        *head = prev;
        return *head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //code here
        // struct Node *one = first;
        // struct Node *two = second;
        struct Node *fir = reverse(&first);
        struct Node *sec = reverse(&second);
        struct Node *res = NULL;
        struct Node *temp;
        int sum , carr =0;
        while(fir != NULL || sec != NULL)
        {
            sum = carr + (fir ? fir->data : 0) + (sec ? sec->data : 0);
            carr = (sum >=10) ? 1 : 0;
            sum = sum % 10;
            struct Node *newnode = new Node(sum);
            if(res == NULL)
            {
                res = newnode;
                temp = res;
                printlist(res);              
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
                // printlist(temp);           
                // printlist(*res);           
            }
            if(fir)
                fir = fir->next;
            if(sec)
                sec = sec->next;
            // sum =0;
        }
        // printlist(res);
        // while(fir!= nullptr)
        // {
        //     sum = first->data +carr;
        //     carr = (sum >=10) ? 1 : 0;
        //     sum = sum %10;
        //     struct Node * newnode = new Node(sum);
        //     temp->next = newnode;
        //     temp = newnode;
        //     fir = fir->next;
        // }
        //  printlist(res);
        // while(sec!= nullptr)
        // {
        //     sum = sec->data +carr;
        //     carr = (sum >=10) ? 1 : 0;
        //     sum = sum %10;
        //     struct Node * newnode = new Node(sum);
        //     temp->next = newnode;
        //     temp = newnode;
        //     sec= sec->next;
        // }
        //  printlist(res);
        if(carr > 0)
        {
            struct Node *newnode = new Node(carr);
            temp->next = newnode;
            temp = newnode;
        }
        // printlist(res);
        res = reverse(&res);
        return res;
    }
};

int main()
{
    int  t;
    cin >> t;
    while(t--)
    {
        int n ,m;
        cin >> n;
        Node *first = buildlist(n);
        cin >> m;
        Node *second = buildlist(m);
        Solution obj;
        Node *res= obj.addTwoLists(first , second);
        printlist(res);
    }
    return 0;

}

