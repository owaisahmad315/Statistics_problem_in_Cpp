#include <iostream>
using namespace std;

int main() {
	int i,n;
	float array[50], sum =0, am;
	
	cout<<"how many numbers you want to add ?  ";
	
	cin>>n;
	
	cout<<"enter "<<n<<" numbers :";
	
	for (i=1; i<=n; i++){
		cin>>array[i];
		sum=sum+array[i];
	}
	am = sum/n;
	cout<<"the arithematic mean of " <<n<<" numbers is "<<am;
	
	return 0;
}
