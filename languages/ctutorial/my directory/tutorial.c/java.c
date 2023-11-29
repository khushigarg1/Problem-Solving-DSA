// datatype ;
/*
1. primitive 
   a. integer: byte(1 byte = 8 bits ) ,short(2 bytes) , int(4 bytes) , long(8 bytes) 
   b. floating point : float(4 bytes) , double(8 bytes) 
   c. boolean : (1 byte ) 1 bit use krega
//    ye aage ki 7 bits ko ignore krega or last 1 bits ko use krega 
//    boolean is true = true ;
//    jab apn boolean ka array bnaynge tab vo baki k 7 bits ko use krega usk phle vpo sirf ek tough ki trh rkhega ki bs rkha hua h 
   
   d. character : char(2 byte) , 
   e. String : 
2. non primitive data type    
*/
/*
binaryformat    0,1 
hexaddecimal fromat   0x isak prefix
decimal fromat 
   BYTE: 
   byte a,b;
   a=5;    //0000 1111 , 0x0F , 5 , 
   b=-5;
   
   //SIGNED OR UNSIGNED
   signed me - or + dono aa skte h or unsigned me sirf +
   is most significant bit is 0 -> positive 
   is most significant bit is 1 -> negative 
   0000000011001000        phle bit jo 8 bit me se h vo reserved hogi signed k lye 

   //ARITHMETIC SHIFT:
   <<< >>>   left shift or right shift 
   00001111
   00011111
   //LOGICAL SHIFT
   system.out.println("a<<1: "+(a<<1));            //10
   system.out.println("a<<1: "+(a>>1));            //2
   system.out.println("b<<1: "+(b<<1));           //-10
   system.out.println("b<<1: "+(b>>1));         //-3
  //ARITHMETIC SHIFT
   system.out.println("b<<1: "+(b>>>1));         //positive number

   arithmetic me sign change or logical m nh hota hai 
*/

/*  VARIABLES  -> CONTAINERS
    naming convention
    
    LITERALS -> constants which we in in variables
    int x = 4;
    datatype   variabless  assignment operator  constants i.e literal end;
    float var = 4;
    system.out.println(""+var);   //4.0
    float var = 4.5;        itbwill give error bcoz ye double value h or data type float bcoz ajva iso doubel treat krega
    float var = 4.5f;       it will not give error       
    
    short p=6 , q=4;       bcoz hume short chiye tha or ye int value de rha h sum 10 
    p = p + q;        error  bcoz here p is a short variable 
    p = (short) (p + q);        //10

    OPERATORS:
    arithmetic -> +,-,/,%,*
    logical -> (true or false) && || !(unary operator) 
    which operands on two operator 
    bitwise operator -> & | ~ ^ << >> >>>     it returns number and (least imp concept)
    
    if(condition)
    {
        //code
    }
    else
    {
        //code
    }
*/

/*
    int day ;
    scanner sc = new scanner(system.in);
    system.ot.println("enter the day you want top print: ") ;
    system.ot.print("enter the day you want top print: ") ;    //ln will emove if we dont want to inout in next line
    day = sc.nextint();
*/
/*
NORMAL SWITCH
int day ;
    scanner sc = new scanner(system.in);
    system.ot.println("enter the day you want to print: ") ;
switch (day)
{
    case 1 : system.out.println("monday");
             break;
    case 2 : system.out.println("tuesday");
             break;
    case 3 : system.out.println("wednesday");
            break;
    default : 
            system.out.println("others");
}
*/

/*INTEGRATED SWITCH
int day ;
    scanner sc = new scanner(system.in);
    system.ot.println("enter the day you want to print: ") ;
switch (day)
{
    case 1 ->
            system.out.println("monday");
            break;
    case 2 ->
            system.out.println("tuesday");
            break;
    case 3 ->
            system.out.println("wednesday");
            break;
    default ->            
            system.out.println("others");
}
*/

// random r=new random();
// int random_no = r.nextint(bound 10);