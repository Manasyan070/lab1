#include <iostream>
using namespace std;
string array1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
string array2 = "ZABCDEFGHIGKLMNOPQRSTUVWXYzabcdefghijklmnopqrstuvwxy1234567890";

string ncoder(string str){
    int j;
    int i = 0;
    while(str[i]){
        j = 0;
        while(array2[j]){
            if(str[i] == array2[j]){
                str[i] = array1[j];
                break;
            }
            j++;
        }
        i++;
    }
    return str;
}

string dcoder(string str){
    int j;
    int i = 0;
    while(str[i]){
        j = 0;
        while(array1[j]){
            if(str[i] == array1[j]){
                str[i] = array2[j];
                break;
            }
            j++;
        }
        i++;
    }
    return str;
}

int main(){
    string str = "A big cat - 12";
    string decodedStr = dcoder(s);
    string old = ncoder(decodedStr);
    cout << decodedStr << endl << old;
   
}

 

 
