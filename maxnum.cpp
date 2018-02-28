#include <iostream>
using namespace std;
int main()
{
   int i,a[10],max;
    cout<<"Enter the number:"<<endl;
        max=0;
        for(i=1;i<10;i++)
        {
            cin>>a[i];
            if(max<a[i])
            {
                max=a[i];
            }
        }
        cout<<max;    
}
