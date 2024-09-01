// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class item{
    public:
    int itemno,quantity;
    float cost;
        inline float price(int quantity, float cost){
            return quantity *  cost;
        }
};
int main(){
    item i;
    cin>>i.itemno;
    cin>>i.cost;
    cin>>i.quantity;
    cout<<"Total cost: "<< fixed << setprecision(2) <<i.price(i.quantity, i.cost);
    return 0;
}
