// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int capacity = 10;
    int *arr = new int[capacity];
    int count = 0;
    int num;
    while(true){
        cin>>num;
        if(num<0) break;
        if(count == capacity){
            capacity *= 2;
            int *newarr = new int[capacity];
            for(int i=0;i<count;i++){
                newarr[i] = arr[i];
            }
            delete []arr;
            arr = newarr;
        }
        arr[count++] = num;
    }
    int sum = 0;
    for(int i=0;i<count;i++){
        sum += arr[i];
    }
    double average = count>0?static_cast<double>(sum)/count:0;
    cout<<"Sum: "<<sum<<endl;
    cout<<fixed<<setprecision(2)<<"Average: "<<average<<endl;
    delete []arr;
    return 0;
}
