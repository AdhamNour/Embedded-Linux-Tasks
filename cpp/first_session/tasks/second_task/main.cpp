#include <iostream>
#include <climits>
using namespace std;

void getValueAndCompare(int &max){
	static int i =0;
	static int x =0 ;
	cout<<"enter the number #"<<++i<<endl;
	cin>>x;
	if(x>max){
		max=x;
	}
	else{
		//Do no thing
	}

}

int main(void){
	int x=0;
	int y=0;
	int z=0;
	int max = INT_MIN;
	for(int i =0 ; i<3;i++){
		getValueAndCompare(max);
	}
	cout<<"The Maximum Number is : "<<max<<endl;
		return 0;
}
