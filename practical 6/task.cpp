#include<iostream>
#include<string.h>

using namespace std;

int main ()
{
  string s1;
  string s2;

  getline(cin,s1);
  getline(cin,s2);

  int c=s1.compare(s2);

  if(c==0)
  {
    cout<<"string are equal \n";
  }
  else if(c>0)
  {
    cout<<"string 1 is greater \n";
  }
  else 
  {
    cout<<"string 2 is greater \n";
  }

}

