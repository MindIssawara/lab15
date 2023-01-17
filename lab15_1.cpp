#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    int i,j;
    T value;
	for(i=1;i<N;i++){
		j=i-1;
		value = d[i];
		while(j>=0 && value>d[j]){
			d[j+1]=d[j];
			j--;
		}
		d[j+1]=value;
		cout<<"Pass "<<i<<":";
		for(j=0;j<N;j++){
		    cout<< d[j] << " ";
		}
		cout<<"\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
