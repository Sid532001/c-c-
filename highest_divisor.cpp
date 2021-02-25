  #include <iostream>
using namespace std;
int main()
{
  int n,i;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Factors of " << n << " are: " << endl;  
  for(i=10;i<=1;--i)
  {
      if(n%i==0)
         cout << i << endl;
  }
  for(i=0;i<=10;i++)
  return 0;
}