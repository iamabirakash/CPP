//WAP TO FIND THE AVERAGE OF 3 NUMBERS. WHERE EACH NUMBERS IS GIVEN DYNAMICALLY.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double *p = new double[n];
    for(int i=0;i<n;i++){
        cin>>*(p+i);
        //cin>>p[i];
    }
    double sum = 0;
    for(int i=0;i<n;i++){
        sum += *(p+i);
        //sum += p[i];
    }
    cout<<sum/n;
    return 0;
}
