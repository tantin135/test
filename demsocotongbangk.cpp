#include<bits/stdc++.h>
using namespace std;
int *a, n, k;
void sinh1T(int *&a, int n){
	vector <int> b(n);
	a= new int[n];
	for(int i=0; i<n; i++) b[i] = i+1;
	for(int i=0; i<n; i++){
		int x = rand() % b.size();
		a[i] = b[x];
		b.erase(b.begin()+x);
	}
	cout<<"\n DAY SINH:n=\t"; for(int i=0; i<n;i++) cout<<a[i]<<" ";
}

void dem_cap(int*a, int n, int k){
	int dem=0;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]+a[j]==k) dem++;
	cout<<"\n co "<<dem<<" cap trong mang co tong = "<<k;
}

void in(int *a, int n){
	cout<<"\n Noi dung mang: ";
	for(int i=0; i<n-1; i++) cout<<a[i]<<" ";
}

int main(){
	n=10000,k=7832;
	sinh1T(a,n); in(a,n);
	dem_cap(a, n, k);
	return 0;
}
