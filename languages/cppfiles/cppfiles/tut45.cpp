#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

/*
student--->test
student---->result

test----->result
score---->result
*/

class student
{
    protected :
        int roll_no;
    public:
        void set_num(int a)
        {
            roll_no=a;
        }
        void print_number(void)
        {
            cout<<"your roll number is "<<roll_no<<endl;
        }
};

class test : virtual public student 
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1,float m2)
        {
            maths=m1;
            physics=m1;
        }
        void print_marks(void)
        {
            cout<<"your result is here: ";
            cout<<"your maths marks is "<<maths<<endl;
            cout<<"your physics marks is "<<physics<<endl;
        }
};

class sports : virtual  public student
{
    protected:
        float score;
    public:
        void set_score(float a)
        {
            score=a;
        }
        void print_score(void)
        {
            cout<<"your score is "<<score<<endl;
        }
};

class result : public test,public sports
{
    private :
        float total;
    public:
        void display(void)
        {
            total=maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"your final result is "<<total<<endl;
        }
};

int main(){
    result khushi;
    khushi.set_num(123);
    khushi.set_marks(89.2,99.5);
    khushi.set_score(9);
    khushi.display();
return 0;
}

/*
humme ek ambiguity resolve kr di jo rooll number tha vo 2 br flow ho rha tha niche ki trf ek test k through ek sports k through
ab sirf ek roll_number milega result ko sirf ek cpy virtual k bd
virtual ka phayda ye hua h ki ek to mne apne compiler ko bta dya bt esi h ki jo apn set_num fxn  h use ek br use krna chatha tha but inheri
tance esi h ki vo 2 bar aa skta h jisko ek new concept jism ek keyword lga dena virtual jisse m smj jaunga ki mujhe isko sirf ek br dena h nich
so j data mmbr h or fxn h v sirf ek br flow hota h niche ki trf
*/