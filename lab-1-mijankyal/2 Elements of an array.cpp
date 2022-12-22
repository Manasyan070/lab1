#include<iostream>

using namespace std;

 

int main() {

   int n, str1 = 1, str2 = 1, i, result;

   cin >> n;

   int a[n];

   for(i = 0; i < n; i++){

       cin >> a[i];

   }

   i = 0;

   while(i < n){

       str1 = str1 * a[i];

       i++;

   }

   i = 1;

   while(i <= n + 1){

       str2 = str2 * i;

       i++;

   }

   result= str2 / str1;

   cout << "Pakasox tarry: " << result;

}

 

 
