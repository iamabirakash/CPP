#include <iostream>
using namespace std;

class PermutationsAndCombinations {
private:
    int *n, *r;
    
    int factorial(int num) const {
        if (num == 0 || num == 1)
            return 1;
        return num * factorial(num - 1);
    }
    
public:
    PermutationsAndCombinations(int nVal, int rVal) {
        n = new int(nVal);
        r = new int(rVal);
    }

    ~PermutationsAndCombinations() {
        delete n;
        delete r;
    }
    
    int calculatePermutations() const {
        return factorial(*n) / factorial(*n - *r);
    }
    
    int calculateCombinations() const {
        return factorial(*n) / (factorial(*r) * factorial(*n - *r));
    }
};

int main() {
    int n, r;
    cin >> n >> r;
    
    if (n < 0 || r < 0 || n > 10 || r > 10 || n < r) {
        cout << "Invalid input" << endl;
    } else {
        PermutationsAndCombinations calc(n, r);
        cout << "Permutations (nPr): " << calc.calculatePermutations() << endl;
        cout << "Combinations (nCr): " << calc.calculateCombinations() << endl;
    }
    
    return 0;
}
