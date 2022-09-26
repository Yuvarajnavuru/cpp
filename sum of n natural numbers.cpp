#include<iostream>
using namespace std;
int main() {
	int i,n,sum=0;
	cout<<"ENter the number:";
	cin>> n;
	for(int i=1;i<=n;++i) {
		sum+=i;
	}
	cout<<"sum is:"<<sum;
}
