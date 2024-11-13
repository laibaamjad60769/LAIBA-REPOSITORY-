#include<iostream>
using namespace std;
int main()
{  
	int rows,cols;
	cout<<"enter the number of rows:";
	cin>>rows;
	cout<<"enter the number of cols:";
	cin>>cols;
	int array[rows][cols];
	cout<<"enter elements of the array:";
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<" element[" <<i<< "][" << j << "]: ";
			cin>>array[i][j];

	}
		}
			
			
			cout<<"the 2D array is:";
			for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<array[i][j] <<" ";
			cout<<"the sum is:";
		}
			
		
		cout<<endl;
	}
	
	
	int sum = 0;
	int totalelements=rows*cols;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			sum += array[i][j];
		}
	}
	double average=static_cast<double>(sum)/totalelements;
	
	cout<<"sum of all elements: "<<sum<<endl;
	cout<<"average of all elements: "<<average<<endl;
	
	
	return 0;

}