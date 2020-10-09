#include<iostream>
#include<string>
#include<locale>

using namespace std;
bool isPalindrome(int num);
bool isPalindrome(string str);
bool isPalindrome(int num)
{
  int rev=0;
  int n = num;
  int dig;
  do{
     dig = num % 10;
     rev = (rev * 10) + dig;
     num = num / 10;
    }while(num != 0);
    
    if( n  == rev)
      return true;
    else
      return false;
}

bool isPalindrome(string str)
{
 std::locale loc;
 int i=1;
 int len = str.length();
 char str1[len];
 for(i=0;i<len;i++){
 str1[i] = std::toupper(str[i],loc);
 }
 if(str1[i] != str1[len-i-1]){
    cout<<str1[i] <<"*"<<str[len-1]<<endl;
   return false;
 }
 return true;
}

int main()
{
 string str;
 cout<<"enter value"<<endl;
 getline(cin,str);
 if(isdigit(str[0])){
 if(isPalindrome(std::stoi(str)))
  cout<<str<<" is palindrome"<<endl;
  else
  cout<<str<<" is not palindrome";
 }
 else{
  if(isPalindrome(str))
   cout<<str<<" is palindrome";
   else
   cout<<str<<" is not palindrome";
 }
 return 0;
}
