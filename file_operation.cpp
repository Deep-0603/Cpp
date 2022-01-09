#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main(){
    string test1,test2;
    ofstream put;
    put.open("simple_file.txt");
    test1 = "New file with first line .";
    test2 = "Old file with second line .";
    put << test1 <<endl <<test2;
    put.close();


    string read,temp;
    ifstream get;
    get.open("simple_file.txt");
    
    while(get.eof() == 0)
    {
        get >> temp ;
        if (temp == ".")
        {
            read = read + temp ;
            cout<<endl << read <<endl 
                <<"-----------";
            read = read + "\n";
        }
        else
        {
            read = read + " " + temp;
            cout <<endl << read ;
        }
        
        
    }
    /*
    get >>read ;
    cout << read <<" ";
    get >>read ;
    cout << read <<" ";
    */
    get.close();

    return 0 ;
}