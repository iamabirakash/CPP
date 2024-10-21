//WAP TO FIND THE AVERAGE OF 3 NUMBERS. WHERE EACH NUMBERS IS GIVEN DYNAMICALLY.
//WAP TO SEARCH A ELEMENT IN A ARRAY WITH DYNAMIC MEMOERY ALLOCATION
#include<iostream>
using namespace std;
int main(){
    int *p = new int[5];
    int *key = new int;
    cin>>*key;
    for(int i=0;i<5;i++){
        cin>>*(p+i);
    }
    bool check = false;
    int pos = -1;
    for(int i=0;i<5;i++){
        if(*(p+i)==*key){
            check = true;
            pos = i;
        }
    }
    if(check){
        cout<<"Found at index: "<<pos+1;
    } else {
        cout<<"Not present ";
    }
    return 0;
}
