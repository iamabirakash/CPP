// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class multiplicationGame{
    int n;
    string winner;
    public:
        void game(int n){
            if(n<=20){
                int turn = 1;
                int p = 1;
                while(p<n){
                    if((turn<=9)&&(turn%2!=0)){
                        p *= turn;
                        winner = "John";
                    } else {
                        p *= turn;
                        winner = "Michael";
                    }
                    turn++;
                }
                cout<<n<<" "<<winner<<" wins";
            }
            
        }
};
int main(){
    multiplicationGame m;
    int n;
    cin>>n;
    m.game(n);
}
