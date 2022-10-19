#include <iostream>
using namespace std;

int main() {
  int j,b,n,i,s;
  char musor;
  cin >> b;
for(j=0;j<b;j++)
  {
    cin >> n;
    int a[n];
    for(i=0;i<2*n;i++)
    {
      if (i%2 == 0)
      cin.get(a[i]);
      else
      cin.get(musor);
    }
    if (a[i-2]+a[i] == 0)
      break;
      cout<<-1;
    if (a[i-2]+a[i] !=0)
      if(a[i-2]+a[i] == 1)
        if(a[i+2]==1)
          s=s+5;
        if(a[i+2] == 0)
          s=s+1;
    if(a[i-2]+a[i] == 2)
      s=s+5;
  }
  cout << s;
    
        
        
    
        
      
    
      
        
      
      


return 0;
}