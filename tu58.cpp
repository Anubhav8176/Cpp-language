#include <cstring>
#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string t, float rt)
    {
        title = t;
        rating = rt;
    }
    virtual void display() = 0;
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string t, float rt, float vl) : CWH(t, rt)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "The video has the title " << title << endl;
        cout << "The ratings of the video is " << rating << endl;
        cout << "The length of the video is " << videolength << endl;
    }
};

class CWHtext : public CWH
{
    int wordscout;

public:
    CWHtext(string t, float rt, float wc) : CWH(t, rt)
    {
        wordscout = wc;
    }
    void display()
    {
        cout << "The document has the title " << title << endl;
        cout << "The ratings of the video is " << rating << endl;
        cout << "The number of words are " << wordscout << endl;
    }
};

int main()
{
    string s;
    float rating, vln;
    int words;

    // for CWHvideo
    s = "Django tutorial";
    rating = 4.89;
    vln = 28.36;
    CWHvideo django(s, rating, vln);
    //django.display();

    // for CWHtext
    s = "Django tutorial textual";
    rating = 4.29;
    words = 2836;
    CWHtext djangotext(s, rating, words);
    //djangotext.display();

    CWH *tut[2];
    tut[0] = &django;
    tut[1] = &djangotext;

    tut[0]->display();
    tut[1]->display();

    return 0;
}