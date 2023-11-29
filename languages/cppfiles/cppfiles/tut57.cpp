/*----------------virtual fxn examples ----------------*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

class CWH
{
protected:
    string title; //protected bcoz we want to inherit this but dont want ki koi isko directly access kr ske
    float rating;

public:
    CWH(string s, float r) //constructoor
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
    /* void display()
    {
        cout<<"heelo";              //it will give heelo if virtual functuon remove
    }*/
};

class cwhvideo : public CWH
{
    float videolength;

public:
    cwhvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amzing video with title " << title << endl;
        cout << "ratings " << rating << " out of 5 stars " << endl;
        cout << "length of this video is " << videolength << " minutes " << endl;
    }
};

class cwhtext : public CWH
{
    int words;

public:
    cwhtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amzing text tutorial with title " << title << endl;
        cout << "ratings of this text tutorial  " << rating << " out of 5 stars " << endl;
        cout << "numbers of words in this tutorial  is " << words << " words " << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    //for code with harry video
    title = "Dzango tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title, rating, vlen);
    //djvideo.display();

    title = "Dzango tutorial text";
    words = 433;
    rating = 4.69;
    cwhtext djtext(title, rating, words);
    djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    //upr virtua keyword lga hua h islye inka apna pan display run hoga ydi apn remove kr de vitual k then base class ka run hoga or helooo ru ho jayga
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/* rules for virtual fxn
1. they cant be static
2. they arre accessed by object pointers
3. virtual fxns can be a friend of another class
4. a virtual fxn in base class might not be used
5. if a virtual fxn defined in the base class ,then tere is no necessary of redifining  it in the derived class
*/