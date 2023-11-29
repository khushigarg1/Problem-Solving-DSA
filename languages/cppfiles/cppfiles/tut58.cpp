/*------------abstruct abse class and pure virtual function-------------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
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
    virtual void display()=0;   //do nothing ---> pure virtual function    overwrite 
 /*  use of pure virtual fxn -> if we want ki koi ise use na kr ske means ki apnko derived class me display fxn bnanna hi pdhega
 means ki esa virtual fxn jiskppo apnko derived class mebnanan hi pdhe banana hi pdhe
 jis class k islye bnaya jaata h ki hum uska derived version create kre usko abstruct base class khte hai isko abstruct class bnanan h to atleast 
 ek esa fxn dalna pdega jisko ovewite krna hi pdhe
 */
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