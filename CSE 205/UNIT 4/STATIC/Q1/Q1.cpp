// You are using GCC
#include <iostream>
using namespace std;

void moveDisks(int n, char source, char auxiliary, char destination,int &movecount) {
    //Type your code here
    if(n==1){
        cout<<"Move disk 1 from rod "<<source<<" to rod "<<destination<<endl;
        movecount++;
        return;
    }
    moveDisks(n-1,source,destination,auxiliary,movecount);
    cout<<"Move disk "<<n<<" from rod "<<source<<" to rod"<<destination<<endl;
    movecount++;
    moveDisks(n-1,auxiliary,source,destination,movecount);
}

int main() {
    int n;
    cin >> n;
    int movecount=0;
    
    moveDisks(n, '1', '2', '3',movecount);
    
    cout << movecount << endl;
    
    return 0;
}
