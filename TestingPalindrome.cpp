#include<iostream>
#include<string>

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
 if(str == string(str.rbegin(),str.rend()))
 return true;
 else
 return false;
}

int main()
{
 int num;
 string str;
 cout<<"enter number"<<endl;
 cin>>num;
 cout<<"enter string"<<endl;
 cin>>str;
 if(isPalindrome(num))
  cout<<num<<" is palindrome"<<endl;
  else
  cout<<num<<" is not palindrome";
  
  if(isPalindrome(str))
   cout<<str<<" is palindrome";
   else
   cout<<str<<" is not palindrome";
 return 0;
}
