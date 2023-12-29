#include <iostream>

using namespace std;

int main(void){
	unsigned char x;
	for(x=0;x<255;x++){
		cout<<"|\t"<<x<<"|\t"<<(int)x<<"|\t"<<endl;
	}
	return 0;
}
