#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

 string toBinary(int n){
     string ans = "";
     while(n){
         int rem = n % 2;
         ans += to_string(rem);
         
         n /= 2;
     }
      reverse(ans.begin(),ans.end());
      return ans;
 }
 
 int toDecimal(string s){
     int ans = 0;
     int l = s.length();
     for(int i = 0;i < l;i++ ){
         if(s[i] == '1'){
             ans += pow(2,l-i - 1);
         }
     }
     return ans;
 }
int main() {
  int n = 321;
  string binary = toBinary(n);
  cout<<"\n Convert Into Binary : "<<binary;
  int num = toDecimal(binary);
  cout<<"\n Convert Into Decimal : "<<num;
    return 0;
}
