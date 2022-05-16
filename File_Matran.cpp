#include<iostream>
#include<fstream>
using namespace std;
void nhapmatran(int a[100][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}
}
void Out_file(int a[100][100],int n,int m){
	ofstream fo;
	fo.open("E:\\DTU\\C++\\All_File\\output.txt",ios_base::out);
	if(fo.is_open()){
		cout<<"Mo file thanh cong "<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				fo<<a[i][j]<<" ";
			}
		fo<<"\n";
		}fo.close();
	}else{
		cout<<"Mo file khong thanh cong"<<endl;
	}
}
void In_file(int a[100][100],int n,int m){
	ifstream fi;
	fi.open("E:\\DTU\\C++\\All_File\\output.txt",ios_base::in);
	if(fi.is_open()){
		while(!fi.eof()){
			fi>>a[n][m];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
		cout<<"\n";
		}
	}
	else{
		cout<<"Khong dc"<<endl;
	}
		fi.close();
}
void thaydoi(int a[100][100],int n,int m){
	In_file(a,n,m);
	int q,p,x;
	cout<<"Nhap q:";
	cin>>q;
	cout<<"Nhap p:";
	cin>>p;
	cout<<"Nhap x:";
	cin>>x;
	a[q][p]=x;
	Out_file(a,n,m);
	In_file(a,n,m);
}
int main(){
	int n,m;
	int a[100][100];
	cout<<"Nhap hang:";
	cin>>n;
	cout<<"Nhap cot:";
	cin>>m;
	nhapmatran(a,n,m);
	Out_file(a,n,m);
	thaydoi(a,n,m);
}
