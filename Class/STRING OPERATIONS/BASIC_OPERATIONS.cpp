#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "12345";
    cout<<"S1 = "<<s1<<endl;
    string s2 = "abcde";
    cout<<"S2 = "<<s2<<endl;
    cout<<"Size of S1: "<<s1.size()<<endl;
    cout<<"Size of S2: "<<s2.size()<<endl;
    s1.insert(4,s2);
    cout<<"After inserting at index 4 of S1: "<<s1<<endl;
    s1.erase(4,5);
    cout<<"After erasing from index 4 of S1: "<<s1<<endl;
    s2.replace(1,3,s1);
    cout<<"After replacing from index 1 with length 3 of S2 with S1: "<<s2<<endl;
    s2.append(s1,2,3);
    cout<<"After appending from index 2 with length 3 on S2 with S1: "<<s2<<endl;
    int res = s2.find("ab");
    if(res<s2.size()){
        cout<<"Finding ab in S2 : "<<res<<endl;
    } else {
        cout<<"Substring is not present"<<endl;
    }
    int result = s1.compare(s2);
    if(result==0){
        cout<<"Both strings are equal";
    } else if(result>0){
        cout<<"S1 is greater than S2";
    } else {
        cout<<"S2 is greater than S1";
    }
}
