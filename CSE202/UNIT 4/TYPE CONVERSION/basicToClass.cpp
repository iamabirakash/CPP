// You are using GCC
#include<iostream>
using namespace std;
class Time{
	int m,h;
	public:
		Time(){
			h=m=0;
		}
		Time(int t){
			h=t/60;
			m=t%60;
		}
		void show_data(){
			cout<<h<<" Hrs"<<m<<" Mins";
		}
};
int main(){
	int min;
	cin>>min;
	Time t;//Time t(min);
	t = min;
	t.show_data();
}
