// You are using GCC
#include<iostream>
using namespace std;
int main(){
    char stack[100];
    int top=-1;
    int choice=1;
    while(choice>=1 && choice<=3){
        cin>>choice;
        switch(choice){
            case 1:
                char t;
                cin>>t;
                cout<<"Typed character: "<<t<<endl;
                stack[++top] = t;
                break;
            case 2:
                if(top==-1){
                    cout<<"Text editor buffer is empty. Nothing to undo.";
                } else {
                    cout<<"Undo: Removed character "<<stack[top]<<endl;
                }
                top--;
                break;
            case 3:
                if(top==-1){
                    cout<<"Text editor buffer is empty.";
                    break;
                }
                cout<<"Current text: ";
                for(int i=top;i>=0;i--){
                    cout<<stack[i]<<" ";
                }
                cout<<endl;
                break;
            case 4:
                break;
            default:
                cout<<"Invalid choice";
        }
    }
}
