#include <iostream>
using namespace std;
int check(string s,int i,vector<int>v)
{
       vector<int>v;
       while(1)
       {
        int x,y;
        x=i%2;
        y=i/2;
        v.push_back(x);
        i=y;
        if(i==0)
        {
            break;
        }
        return (s,i,v);
       }
      
  
        
    
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       int i=1;
       while(1)
       {
           vector<int>v;
           if(check(s,i,v)==1)
           {
              break;
           }
           if(check(s,i,v)==0)
           {
                i++;
           }
       }
   }

    return 0;
}
