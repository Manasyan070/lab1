#include<iostream>

using namespace std;

 

int gcd(int n, int m){

   int i = 1, k;

   if(n < 0)

       n = -n;

   if(m < 0)

       m = -m;

   if(n < m) {

       while(i <= n) {

           if(n % i == 0 && m % i == 0)

               k = i;

           i++;

       }

   }

   else {

       while(i <= m) {

           if(n % i == 0 && m % i == 0)

               k = i;

           i++;

       }

   }

   return k;

}

 

int lcm(int n, int m){

   int k = gcd(n, m);

   int p = n * m / k;

   return p;

}

 

int main() {

   int n, m;

   cin >> n;

   cin >> m;

   // int k = gcd(n, m);

   // cout << k;

   cout << "GCD = " << gcd(n, m) << endl;

   cout << "LMC = " << lcm(n, m);

}
