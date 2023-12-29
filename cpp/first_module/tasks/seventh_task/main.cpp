#include <iostream>
#include <bitset>

using namespace std;

int main(void){
    unsigned char x;
    cout<<"Enter an 8 bit nubmer : ";
    cin >>x;
    cout<<bitset<8>(x)<<endl; //FIXME
    return 0;
}