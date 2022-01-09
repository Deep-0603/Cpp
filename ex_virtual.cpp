#include <iostream>
#include <cstring>
using namespace std ;

class CWH  // Abstract base class 
{
    protected :
        string title;
        float rating;
    public :
        CWH(string s,float r)
        {
            title = s ;
            rating = r;
        }
        virtual void display() = 0 ;
        // pure virtual function.
};
class CWH_video : public CWH
{
    int video_length;
public :
    CWH_video(string s,float r,int vl) : CWH(s,r)
    {
        video_length = vl;
    }
    void display()
    {
        cout <<"This is a video with title " <<title <<endl;
        cout <<"Rating is " <<rating <<" out of 5" <<endl;
        cout <<"Average video time is " <<video_length <<endl;
    }
};

class CWH_text : public CWH
{
    int words;
    
public :
    CWH_text(string s,float r,int wc) : CWH(s,r)
    {
        words = wc;
    }
    void display()
    {
        cout <<"This is a text with title " <<title <<endl;
        cout <<"Rating is " <<rating <<" out of 5" <<endl;
        cout <<"Average word counts are is " <<words <<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int wcount;
    title = "Django Tutorial";
    rating = 4.89;
    vlen = 30;
    int words = 419;

    CWH_video djvideo(title,rating,vlen);
    djvideo.display();

    CWH_text djtext(title,rating,words);
    djtext.display();

    CWH * tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0] -> display();
    tuts[1] -> display();

    return 0 ;
}

/*
RULES OF VIRTUAL FUNCTIONS
     -> cannot be static
     -> can only be used with pointers
     -> can be friend functions in another class
    
     -> if pointing object class do not have a function
        to be invoked then base class function will be called. 
     -> if a function is defined in base class then no
        need to define again 
*/