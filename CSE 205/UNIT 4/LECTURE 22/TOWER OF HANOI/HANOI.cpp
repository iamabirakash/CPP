// You are using GCC
#include<iostream>
using namespace std;
void towerOfHanoi(int n,char source,char destination,char temp,int &moveCount){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,source,temp,destination,moveCount);
    
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    moveCount++;
    
    towerOfHanoi(n-1,temp,destination,source,moveCount);
}
int countMoves(int n){
    int moveCount = 0;
    towerOfHanoi(n,'A','C','B',moveCount);
    return moveCount;
}
int main(){
    int n;
    cin>>n;
    int totalMoves = countMoves(n);
    
    cout<<"Total number of moves: "<<totalMoves<<endl;
    return 0;
}
