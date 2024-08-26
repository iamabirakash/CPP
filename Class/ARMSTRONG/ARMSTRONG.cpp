#include <iostream>
#include<cmath>
using namespace std;

// create a class
class Armstrong {
  // private data member
 private:
  int number;
  int temp;

  // public function with an int type parameter
 public:
  int armstrong(int n) {
    number = temp = n;
    int index, remain, result, cnt = 0;
    
    while (temp) {
      remain = temp % 10;
      temp = temp / 10;
      cnt++;
    }
    

    while (number) {
      remain = number % 10;
      result = result + pow(remain,cnt);
      number = number / 10;
    }

    return result;
  }
};

int main() {
  Armstrong A;
  int n, result;

  cout << "Enter Number: ";
  cin >> n;

  result = A.armstrong(n);
  if (result == n) {
    cout << n << " is an Armstrong number." << endl;
  }
  else {
    cout << n << " is not an Armstrong number." << endl;
  }

  return 0;
}
