/**********STRUCTURES IN C********/
/*
-> structures are user defined data types in c
-> using structures allows us to combine daata of different types together
-> it is used to create a complex data type which contains diverse information
-> they are very similar to arrays but structure can store data of an ytype, which is practically more useful

SYNTAX
struct [structure _name]
{
    data_type var1
    data_type var2
    data_type var3.....
}
[structure_variables];

WE CAN DECLARE A STRUCTURE ALONG WITH STRUCTURE DEFINITION OR SEPARATELY
struct employee
{
    int id;
    char name[53];
    float marks;
};
struct employee e1,e2;
//data type just like int
int main()
{
    return 0;

}

struct employee
{
    int id;
    char name[53];
    float marks;
} e1,e2;
//user defined data types
int main()
{
    structure employee tt;
    return 0;
}
*/

/*
INITIAALIZING A STRUCTURE
struct employee
{
    int id;
    float marks;
};
int main()
{
    struct employee e1;
    e1.id=12;
    e1.marks = 34.12;
    return 0;
}
//data type created

struct employee
{
    int id;
    float marks;
};
int main()
{
    struct employee e1 = {12,34.12};
    return 0;
}

ACCESSING STTRUCTURES MEMBERS
-> array elements are accessed using the subscript variable
-> in a similar function,structure members are accessed using dot[.] operator
-> (.) is called as "structure member operator"
-> to access the number of the structure ,we use this operator in between "structure name" & "member name"

*/