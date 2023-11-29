/*---------MULTI PARAMETER TEMPLATES----------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
/*
CLASS TEMPLATS WITH MULTIPLE PARAMETERS(ONE , TWO OR MORE THAN TWO)
TEMPLATE CLASS T1 ,CLASS T2 ............(COMA SEPARATED)
*******AFTER THIS WE CAN USE STL AND LEARN TOOOOO ONLY ******
template <class T1, class T2>
class nameofclass
{
    //body
}
*/

template <class t1,class t2>
//ye jo tempalte h bht sari classes k brabr hai yha ikso bht sarui luxary milti h isko apnn custom datatypes se separate b kr skte hai 
//ye jruri nh ki ye t1 t2 sirf int float hi rhe ye class bhi hi skti hai here a big felxibility somes when we use templates
//yha  apn t1 t2 ko use krk puri class bna dete hai or khw dete hai jab specify krunga jab object bnaunga
class myclass
{
    public :
        t1 data1;
        t2 data2;
        
        myclass(t1 a , t2 b)
        {
            data1= a;
            data2 = b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2;
        }
};

int main(){
    // myclass <int,char> obj(1,'c');
/*
    yha apn compiler ko bolte hai ja t1 likha hai int bhr dunga or jha t2 wha char bhr dunga is trh t1 o t2 me int char chle jate
    or prgrm usi trh se kam krta jse apnne ne use upr likha hota
*/
    myclass <int,float> obj(1,1.8);     //yhaapn bs ye templaate se kr skte hai apne manpas data type ko cosntructor ko bhje dya 
    //yha bht kam lih kr bhut jyada achieve small work but smart work
    obj.display();
return 0;
}