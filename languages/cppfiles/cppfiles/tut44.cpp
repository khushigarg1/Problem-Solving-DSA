/*---------------------virtual base class------------*/
/*                        class A
                            |
                          a |   grandfarher
     _______________________v_______________________________
    |                                                      |
    |                                                      |
    |                                                      |
    v                                                      v
  a class B                                              class C  a (father)
    |                                                      |
    |                                                      |
    |______________________________________________________|
                            |
                            |
                            |   
                            v
                          class D    (son)
    
                          */
/*
a data member sbse phele b or c ko milega phr wha se vo 2-2- party ko nhi mil jaye isle hum a ko virtual base class manenge
isk bd jab b or c se d bnega sirf ek br a data member jaygaor duplicity nd ambiguity resolve h jaygi
hum define kr denge b or c ko virtual base class bna denge
a sirf a pr inherit
class b: virtual public a
yha ydi hum inhrit kr rhe h a se mtlb virtual base clss k data mmbrs niche inherit then sirf ek bror ye ese mujh bachayg taki 2-2 duplcate
 members nh honge duplicity or ambiguity se b bachayga
 agr mene a k bna dya virtual base class b or c ko declare krte tiem 

 class B : virtual public A
 {

 };

 class C : virtual public A
 {

 }; 

 ese krk humne indirect a ko d se bna dya or ek hi copy aai a ki 

 ye abhi kam na aaye but bd me competitve m kafi kam aayga wha hum ise use krnge 
 2 br inherit krnge isse better 1 hi br inherit kra jayeis trh ki kabhi inheritance bnanai pdh jati hia

 */