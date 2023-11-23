#include<iostream>
using namespace std;
#include<math.h>
int main() {
	float deviation, variance_population, variance_sample, mean, add=0, sum=0, SD_population,
		coefficient_variation, SD_sample;
	int arr[30], n, i;
		cout<<"how many numbers you want to find the coefficient variation of ?  ";
			cin>>n;
	cout<<"enter the "<<n<<" numbers = ";	
		for(i=1; i<=n; i++) {
			cin>>arr[i];
				sum +=arr[i]; }
	mean = sum/n;
   	 	 cout<<"MEAN IS "<<mean<<endl;
   	  
		 cout<<"the deviations are = "<<endl;
		for ( i =1; i <= n; ++i) {
			cout<<"  the deviation of "<<arr[i]<<" is = "<<arr[i]-mean<<endl;
	}
	
	for(i=1; i<=n; i++){
	 		add = add + pow(arr[i]-mean,2);
	 }
	 
	 for (i=1; i<=n; i++) {
	 	cout<<"the squared deviation of "<<arr[i]<<" is equal to = "<<pow(arr[i]-mean,2)<<endl;
	 }
	
	variance_population =  add/n;
     	cout<<" THE VARIANCE FOR POPULATION DATA IS = " <<variance_population<<endl;
     	
	variance_sample = add/n-1;
    	cout<<"  THE VARIANCE FOR SAMPLE DATA IS = "<<variance_sample<<endl;
    	
   	SD_population = sqrt(variance_population);
       	cout<<"THE STANDARD DEVIATION FOR POPULATION DATA IS = "<<SD_population<<endl;
       	
	SD_sample = sqrt(variance_sample);
    	cout<<"THE STANDARD DEVIATION FOR SAMPLE DATA IS = "<<SD_sample<<endl;
    	
   	coefficient_variation = SD_population/mean;
    	cout<<" THE COEFFICIENT VARIATION IS= "<<coefficient_variation; 
	     	return 0;
}
