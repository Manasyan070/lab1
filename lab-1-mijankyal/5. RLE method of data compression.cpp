 

#include <cstdlib>

#include<iostream>

#include <string.h>

using namespace std;

 

int main() {

   string s = "aaaaabbbbbbNNNN";

   cout << "RLE is: ";

   for( int i = 0; i < s.length(); i++){

       int k = 1;

       while(s[i] == s[i + 1] && i < s.length() - 1){

           k++;

           i++;

       }

       cout << s[i] << k;

   }

   return 0;

}

 

 

 

 

 

 

 

 
