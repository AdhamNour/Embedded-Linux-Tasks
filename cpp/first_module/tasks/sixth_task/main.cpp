#include <iostream>
#include <string>

using namespace std;

int main(void){
    int x;
    cout<<"Enter your target number :";
    cin >>x;
    string xx =to_string(x);
    int sum =0;
    for(auto digit : xx)
    {
        sum+= digit-'0';
    }
    cout<<sum<<endl;

}