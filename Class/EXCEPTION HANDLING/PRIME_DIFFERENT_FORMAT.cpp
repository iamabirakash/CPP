int main(){
    int a,b;
    cin>>a>>b;
    int c = a*b;
    int cnt = 0;
    for(int i=2;i<c/2;i++){
        if(c%i==0){
            cnt++;
        }
    }
    try{
        if(cnt==0){
            throw(c);
        } else {
            cout<<"No Exception";
        }
    }
    catch(int c){
        cout<<"Excetion Occured: Prie Number";
    }
}
void multiply(int x,int y){
    int num = x*y;
    int cnt = 0;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            cnt++;
        }
    }
    if(cnt==0){
        throw(num);
    } else {
        cout<<"No Exception";
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    try{
        multiply(a,b);
    } catch(int i) {
        cout<<"Exception Occured";
    }
}
