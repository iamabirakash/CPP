// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class SilverStall {
public:
    SilverStall(string name, string detail, string owner, int cost)
        : name(name), detail(detail), owner(owner), cost(cost) {}

    string getName() { 
        return name; 
    }

    void setName(string na) { 
        name = na; 
    }

    string getDetail() { 
        return detail; 
    }

    void setDetail(string de) { 
        detail = de; 
    }

    string getOwner() { 
        return owner; 
    }

    void setOwner(string ow) { 
        owner = ow; 
    }

    int getCost() { 
        return cost; 
    }

    void setCost(int co) { 
        cost = co; 
    }

private:
    string name, detail, owner;
    int cost;
};

class GoldStall : public SilverStall {
public:
    GoldStall(string name, string detail, string owner, int cost, int tvSet)
        : SilverStall(name, detail, owner, cost), tvSet(tvSet) {}

    int getTvSet() { 
        return tvSet; 
    }

    void setTvSet(int tS) { 
        tvSet = tS; 
    }
    
    int calculateCost(){
        return getCost() + tvSet*100;
    }

private:
    int tvSet;
};

class PlatinumStall : public GoldStall {
public:
    PlatinumStall(string name, string detail, string owner, int cost, int tvSet, int projector)
        : GoldStall(name, detail, owner, cost, tvSet), projector(projector) {}

    int getProjector() { 
        return projector; 
    }

    void setProjector(int pr) { 
        projector = pr; 
    }
    int calculateCost(){
        return getCost() + getTvSet()*100+projector*500;
    }

private:
    int projector;
};

int main() {
    int n, projector, tvSet, cost;
    string name, detail, owner;
    cin >> n;

    if (n == 1) {
        cin >> name >> detail >> owner >> cost;
        SilverStall s1(name, detail, owner, cost);
        // Type your code here
        cout<<s1.getCost()<<endl;
    } 
    else if (n == 2) {
        cin >> name >> detail >> owner >> cost >> tvSet;
        GoldStall g1(name, detail, owner, cost, tvSet);
        // Type your code here
        cout<<g1.calculateCost()<<endl;
    } 
    else if (n == 3) {
        cin >> name >> detail >> owner >> cost >> tvSet >> projector;
        PlatinumStall p1(name, detail, owner, cost, tvSet, projector);
        // Type your code here
        cout<<p1.calculateCost()<<endl;
    } 
    else {
        cout << "Invalid Input";
    }

    return 0;
}
