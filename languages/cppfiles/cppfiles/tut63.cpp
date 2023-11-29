/*-************CPP templates*************-*/
/*
class-->object       //object k lye template class hai
templates-->class   //class k lye template template hai
    |
    v
parameterized classes

//  why we use templates?
-->jo dry principle h usko bahut hi siddhat se istmeall krne vala aadmi hu so -->DRY
--> generic programming

T can be int float char etc
*/

/*
syntax for templates
template <claHTss T>
class vector
{
    T * arr;
    public:
        vector (T*arr)
        {
            //code
        }
    //and many other methods    
}

int main()
{
    vector<int>myvec(ptr);
    vector<float>myfvec(ptr);
}
//yha apn alg alg class use kr skte same template se yadi tempalte nh banate then apnko int float sbki alg alg classes bnani pdti
//yha class T bahut sari calsses ko represent kr rha hai

*/
