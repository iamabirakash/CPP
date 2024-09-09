#include<iostream>
using namespace std;
class binary{
    public:
        int n,target,a[];
        void get(){
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            cin>>target;
        }
        void search(){
            int loc = -1;
            int beg = 0;
            int end = n-1;
            while(beg<=end){
                int mid = (beg+end)/2;
                if(a[mid]==target){
                    loc = mid;
                    cout<<"Found at : "<<loc+1;
                    break;
                } else if(a[mid]>target){
                    end = mid - 1;
                } else {
                    beg = mid + 1;
                }
            }
            // cout<<"Found at : "<<loc;
        }
}b;
int main(){
    b.get();
    b.search();
}
