// You are using GCC
#include<iostream>
using namespace std;
class Base{
    public:
        virtual int game(char a,char b)=0;
    
};
class Derive : public Base {
    public:
        int game(char a,char b) override {
            int score = 0;
            if(isupper(a)){
                score += 10;
            } else {
                score -= 5;
            }
            if(isupper(b)){
                score += 10;
            } else {
                score -= 5;
            }
            return score;
        }
};
int main(){
    char a,b;
    cin>>a>>b;
    Derive d;
    int totalScore = d.game(a,b);
    cout<<"Score: "<<totalScore<<endl;
    return 0;
}
