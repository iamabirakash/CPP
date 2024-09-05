//WAP TO CREATE A CLASS AND PRINT FIBONACCI SERIES IN A MEMBER FUNCTION
class fibo{
    int n;
    public:
        void get(){
            cin>>n;
        }
        void print(){
            int a = 0;
            int b = 1;
            cout<<a<<" ";
            cout<<b<<" ";
            for(int i=0;i<n-2;i++){
                int c = a + b;
                cout<<c<<" ";
                a = b;
                b = c;
            }
        }
};
int main(){
    fibo f;
    f.get();
    f.print();
}
