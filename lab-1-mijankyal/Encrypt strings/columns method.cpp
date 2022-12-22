#include <iostream>

#include <string>

#include <math.h>

using namespace std;

 

string dCoder(string str, int n){

   int i, j, k = 0;

   char a[n + 1][n + 1];

   string ardyunq;

   for(i = 0; i < n; i++){

       for(j = 0; j < n; j++){

           a[i][j] = str[k];

           k++;

       }

   }

   k = 0;

   for(i = 0; i < n; i++){

       for(j = 0; j < n; j++){

           cout << a[i][j] << " ";

       }

       cout << endl;

   }

   for(j = 0; j < n; j++){

       for(i = 0; i < n; i++){

           ardyunq[k] = a[i][j];

           k++;

       }

   }

   return result;

}

 

int main()

{

   string s = "12345678 91234";

   int n = 4;

   string ardyunq = dCoder(s, n);

   cout << "Encrypt this text: ";

   for(int i = 0; i < s.length(); i++) {

       cout << s[i];

   }

   cout << endl;

   cout << "Encrypted text is: ";

   for(int i = 0; i < s.length(); i++) {

       cout << ardyunq[i];

   }

}

 

 
