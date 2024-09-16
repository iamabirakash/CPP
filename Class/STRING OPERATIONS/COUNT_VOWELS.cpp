int main(){
    string s;
    getline(cin,s);
    int v=0,c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            v++;
        } else {
            c++;
        }
    }
    cout<<v<<endl;
    cout<<c<<endl;
}
