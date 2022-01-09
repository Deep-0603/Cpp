#include <iostream>
#include <fstream>
#include <string>

using namespace std ;
 
int main(){
    string str,newline ;
    newline = "\n";
    cout<< "Enter your quote " <<endl;
    cin >> str;
    
    ofstream put("auto_text.txt"); 
    // opening a file in write mode
    put << str << newline <<str;
    put.close();
     
    ifstream get("auto_text.txt");
    string read;
    
    get >>read;
    cout << read ;
    
    get >>read;
    cout << read ;
    get >>read;
    cout << read ;
    

    getline(get,read);
    cout << read ;
    get.close();
    return 0 ;
}

/*
fstream is  a base class 
    ifstrem,ofstream and fstreambase are derived classes 
TO OPEN A FILE 
    1. using a constructor
    2. using the member function open() 
write mode - deletes previous data and add new one.
             Also works if file does not exists.
read mode -  
*/