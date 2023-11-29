class node{
    public :
        int data ;
        node *next;

        node(int data ) //constructor so that it is necessary to implement one element in constructor and we dont want ki default constructor run ho
        {
            this-> data = data ;
            next = nullptr;
        }
};