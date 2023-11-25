#include<bits/stdc++.h>

using namespace std;
struct NhanVien{
	string ten;
	string gioitinh;
	string ngaysinh;
	string que;
	string mathue;
	string ngayki;
};
int z=0;
void nhap(NhanVien &a)
{
	if (z==0) cin.ignore();
	z++;
	getline(cin,a.ten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.que);
	getline(cin,a.mathue);
	getline(cin,a.ngayki);
}
void inds(NhanVien ds[],int n)
{
	for (int i=0;i<n;i++)
	{
		if (i<9){
			cout<< "0000";
		} else cout<<"000";
		cout<< i+1 <<" "<< ds[i].ten <<" "<<ds[i].gioitinh<<" "<< ds[i].ngaysinh <<" "<< ds[i].que <<" "<<ds[i].mathue<<" "<<ds[i].ngayki<< endl;
	}
}


int main()
{
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for (int i=0;i<N;i++) nhap(ds[i]);
	inds(ds,N);
	return 0;	
} 
