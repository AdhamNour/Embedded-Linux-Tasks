#include <iostream>

using namespace std;

int main(void){
	unsigned char x =0;
	cout<<"Enter number to check if vowel: ";
	cin >>x;
	switch(x){
		case 'a':
		case 'o':
		case 'i':
		case 'e':
		case 'u':
			cout<<"vowel"<<endl;
			break;
		default:
			cout <<"not vowel"<<endl;
	}
}
