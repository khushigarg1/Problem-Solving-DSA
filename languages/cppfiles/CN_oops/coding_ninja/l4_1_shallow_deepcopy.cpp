#include<bits/stdc++.h>
using namespace std;

// class student{
//     int age;
//     char *name ;

//     public :
//         student(int age , char* name)
//         {
//             this-> age = age;
//             // shallow copy 
//             this-> name = name;
//         }

//         void dispaly(){
//             cout << name <<" "<< age <<endl ;
//         }
// };

// int main(){
//     char name[] = "abcd";
//     student s1(18 , name);
//     // here in name it will copy only address of zeroth element nd send this address in class that pointing to arrray name it is called shallow copy
//     //humne yha vese actual me kha tha nam ko copy krne ko but vo 0th element k index k address ko copy nd this copy is calledSHALLOW COPY
//     s1.dispaly();

//     name[3] = 'e';
//     student s2(24 , name);
//     s2.dispaly();
//     s1.dispaly(); 
//     // here it will not print abcd instead of this it will print abce bcoz we know name me address ki copy ja rhi phir apn us address pr ja kr value le rhe hai and print kr rhe or isme apn ek br change kr denge name[3] = e then ye dubara display krega or iske address pr jayga to isko e milega wha 

//     //both object pointing same addresss 
//     student s3( 18 , "khushi");
//     s3.dispaly();
// return 0;
// }

/*
ideally hume shallow copy nhi bnani chiye hume khuka ek new array bnana chiye nd usme pure name ko copy like
jab apn ek array m change then dusre array m nhi 
*/


class student{
    int age;
    char *name ;

    public :
// DEEP COPY
        student ( int age , char * name)
        {
            this-> age = age;
            this-> name = new char [strlen(name) + 1]; // we r making new char array size of array + 1 of null character
            strcpy(this-> name , name);   // nd here we r copying name to this-> name aray
            // yha humne new array bnaya  nd both objects pointing diff arrays but jaygi to 0th index ki value address hi 
        }
        void dispaly(){
            cout << name <<" "<< age <<endl ;
        }
};

int main(){
    char name[] = "abcd";
    student s1(18 , name);
    s1.dispaly();

    name[3] = 'e';
    student s2(24 , name);
    s2.dispaly();
    s1.dispaly(); 

    //both object pointing same addresss 
    // student s3( 18 , "khushi");
    // s3.dispaly();
return 0;
}