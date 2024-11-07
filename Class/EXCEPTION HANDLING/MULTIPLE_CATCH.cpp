bool isPalindrome(int num){
    int temp = num;
    int mul = 0;
    while(temp>0){
        int rem = temp%10;
        mul = mul*10 + rem;
        temp /= 10;
    }
    if(mul==num){
        return true;
    } else {
        return false;
    }
}
void test(int x){
    try{
        // isPalindrome(x);
        if(isPalindrome(x)){
            throw 'x';
        } 
        if(x%2==0){
            throw x;
        } else {
            throw 1.0;
        }
        cout<<"Entry of TRY Block\n";
    }
    catch(char c){
        cout<<"Exception at Palindrome: CHARACTER\n";
    }
    catch(int m){
        cout<<"Exception at Even: EVEN\n";
    }
    catch(double d){
        cout<<"Exception at Odd: DOUBLE\n";
    }
    cout<<"Chall Geya Bhai\n";
}
int main(){
    int a;
    cin>>a;
    test(a);
    return 0;
}
