#include<iostream>
#include <limits>

using namespace std;

int maxArr(int arr[],const int& size){
    int maxNumber =INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxNumber = arr[i]>maxNumber?arr[i]:maxNumber;
    }
    return maxNumber;
    
}

int searchArr(int arr[],const int& size,const int& search_Target){
    int a =-1;
    for (int i = 0; i < size; i++)
    {
        a = search_Target==arr[i]?i:a;
    }
    return a;
}

void deleteArr (int arr[],const int&size,const int& delete_target){
    int delete_target_index=searchArr(arr,size,delete_target);
    for (int i = delete_target_index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=0;
}

void mergeArrs(int arr1[],const int&size1,int arr2[],const int&size2,int arrR[],const int&sizeR){
    if(sizeR<size1+size2){
        return;
    }
    int iR=0;
    for (int j = 0; j < size1; j++)
    {
        arrR[iR]=arr1[j];
        iR++;
    }
    for (int j = 0; j < size2; j++)
    {
        arrR[iR]=arr2[j];
        iR++;
    }
}
void oddEvenDetect(int arr[],const int& size,int arrR[],const int&sizeR){
    if(sizeR<size){
        return;
    }
    for (int i = 0; i < size; i++)
    {   
        arrR[i]=arr[i]&1;
    }
    
}
int main(int argc, char const *argv[])
{
    int num[5]={1,2,3,4,7};
    int size = sizeof(num)/sizeof(num[0]);
    int maximum_number=maxArr(num,size);
    int maximum_number_index=searchArr(num,size,maximum_number);
    cout << maximum_number <<endl;
    cout<<maximum_number_index<<endl;
    deleteArr(num,size,maximum_number);

    for(int i:num){
        cout<<i<<' ';
    }
    cout<<endl;

    int nums[15]={-1};
    mergeArrs(num,size,num,size,nums,sizeof(nums)/sizeof(nums[0]));

    for(int i:nums){
        cout<<i<<' ';
    }
    cout<<endl;
    int oddEvens[15];
    oddEvenDetect(nums,sizeof(nums)/sizeof(nums[0]),oddEvens,sizeof(oddEvens)/sizeof(oddEvens[0]));
    for(int i:oddEvens){
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}
