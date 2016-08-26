#include<iostream>
using namespace std;
int main()
{
    int start,ending,mod,count123 = 0;
    cin>>start>>ending;
    for(int i = start; i <= ending; i++)
    {
        cout<<i<<"\n";
        int temp = i;
        while(temp!=0)
        {

         mod = temp % 10;
         // cout<<"Inside while"<<" "<<mod<<"\n";
         if(mod == 2){

            count123++;
             //  cout<<"\nInside if mod == 2"<<" "<<"count = "<<count123<<"\n";
         }
         temp = temp / 10;
        }
    }
    cout<<count123;
}
