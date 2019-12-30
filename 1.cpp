#include <iostream>

using namespace std;

int main()
{
  cout<<"If you insert 1 ,I will print 'Hello World!'"<<endl;
  bool flag;
  cin>>flag;
  if(flag)
  {
      cout<<"Hello World,"<<"I am C++  !!!";
  }  
  else
  {
      cout<<"Are you kidding me?"<<endl;
  }

  return 0;    
}
