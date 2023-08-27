#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int n;
     cin>>n;

     int digit= n%10;
     while(n!=0)
     {
        if(digit==1)
        {
            ans=digit* pow(2,i)+ans;
            i++;
            n=n/10;
        }
        return ans;
     }
cout<<"answer is"<<ans<<endl;

}
