// You are using GCC
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    //Type your code here
    int n = str.length();
    char arr[n];
    for(int i=0;i<n;i++){
        arr[i] = str[i];
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
