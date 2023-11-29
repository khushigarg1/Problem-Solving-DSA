/*
llinked list :- if we want add elements in an array then we can use linked list like 
            new data structure - linked list
            like we will want ki memory me space create krna hai to we will create a new space in memory and 
            space will be add only for one element if we want ki spcae m esecond element k lye b space create krna hai then memory me space crate hoga second element k lye 
            and one problem is here ki hum randomly allocate kar re hai and we dont know ki kis element ke bad kons element hai 
        ab agar hume pane elements ko access krna thne how we can do this
            hume ek ek ke krk sbk elements k address ko save krna hoga but its a hectic
            ye to like a array ho jayga
            so we will do rather than saving ki 
            sirf frst ka element save kr lenge phr usk bad next element ka phr ek dusre k through ek dusre kko connect kr denge diff diff position pr 
            do thus we can access every element 

            frst elment k pas two cheeze hai ek to khud ka data and mnext ka address and last me null aa jayga ki ye null ko address

            node me isko save krnge jisme data and address aajayga 
            node is type of daata type like a class
            node is created by us which is called defined data types
            linked list 's element = node
            node = data of int type and address of next element 

            head will store address of frst element 
            yha jo address hai vonnoe k pointer me jayga bcoz ye complte m=node ka adress hai so it will point too node type 
            node *next; 
            node islye bcoz node ka type adn pointer islye bcoz address store kr rha 

*/

#include<bits/stdc++.h>
using namespace std;

class node{
    public :
        int data ;
        node *next;

        node(int data ) //constructor so that it is necessary to implement one elementin constructro adn we dont want ki default constructor run ho
        {
            this-> data = data ;
            next = nullptr;
        }
};
int main()
{
    //statically
    node n1(1);
    node * head = &n1;

    node n2(2);
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;
    return 0;
}