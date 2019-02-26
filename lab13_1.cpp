#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	

	int start, i, j=0;
	for(i=1; i<N; i++){
		start = d[i];
		j = i-1;
		for(int k = 0; k < i; k++) 
		cout << d[k] << " ";
        cout<<"["<<d[i]<<"]";
        for(int t = i+1; t < N; t++) 
		cout << d[t] << " ";
        cout<<"==>";
		while( j>=0 && d[j] < start){
			swap(d,j+1,j);
			j = j-1;
	}
	d[j+1] = start;
	for(int k = 0; k <= j; k++) 
	cout << d[k] << " ";
    cout<<"["<<d[j+1]<<"]";
    for(int u = j+2; u < N; u++) 
	cout << d[u] << " ";
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
