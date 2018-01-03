#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
		double mc[5]={
		max(a1c[0],max(a2c[0],a3c[0])),
		max(a1c[1],max(a2c[1],a3c[1])),
		max(a1c[2],max(a2c[2],a3c[2])),
		max(a1c[3],max(a2c[3],a3c[3])),
		max(a1c[4],max(a2c[4],a3c[4]))
	};
	
double Ra1c[5]={ (a1c[0]/mc[0]),(a1c[1]/mc[1]),(a1c[2]/mc[2]),(a1c[3]/mc[3]),(a1c[4]/mc[4])};
	double Ra2c[5]={ (a2c[0]/mc[0]),(a2c[1]/mc[1]),(a2c[2]/mc[2]),(a2c[3]/mc[3]),(a2c[4]/mc[4])};
	double Ra3c[5]={ (a3c[0]/mc[0]),(a3c[1]/mc[1]),(a3c[2]/mc[2]),(a3c[3]/mc[3]),(a3c[4]/mc[4])};
	
	double w[5]={5,3,4,4,2};
	
	
	double RWa1c[5]={ (Ra1c[0]*w[0]) , (Ra1c[1]*w[1]) , (Ra1c[2]*w[2]) , (Ra1c[3]*w[3]) , (Ra1c[4]*w[4]) };
	double RWa2c[5]={ (Ra2c[0]*w[0]) , (Ra2c[1]*w[1]) , (Ra2c[2]*w[2]) , (Ra2c[3]*w[3]) , (Ra2c[4]*w[4]) };
	double RWa3c[5]={ (Ra3c[0]*w[0]) , (Ra3c[1]*w[1]) , (Ra3c[2]*w[2]) , (Ra3c[3]*w[3]) , (Ra3c[4]*w[4]) };
	
	double ha[3]={RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4],
			  	  RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4],
			 	  RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4],};
			 	  
			 	  	cout << "MATRIKS X :"<<endl;
	int i=0;
	do{
		cout<<a1c[i] << " | ";
		i++;

		}while(i<5);cout<< endl;
	int j=0;
	do{
		cout<<a2c[j] << " | ";
		j++;
		}while(j<5);cout << endl;
	int k=0;
	do{
		cout<<a3c[k] << " | ";
		k++;
		}while(k<5);cout << endl;
		
	cout << endl<<endl;
		cout << "MATRIKS R :"<<endl;
	int l=0;
	do{
		cout<<Ra1c[l] << " | ";
		l++;
		}while(l<5);cout<< endl;
	int m=0;
	do{
		cout<<Ra2c[m]<< " | ";
		m++;
		}while(m<5);cout<< endl;
	int n=0;
	do{
		cout<<Ra3c[n]<< " | ";
		n++;
		}while(n<5);cout<< endl;
		
			cout <<endl << endl;
	cout << "BOBOT W :"<<endl;
	int O=0;
	do{
		cout<<w[O] << " | ";
		O++;
		}while(O<5);cout<< endl;
		
			cout << endl << endl;
	cout << " MATRIKS R * W :" << endl;
	int p=0;
		do {
			cout <<RWa1c[p] << " | ";
			p++;
		}while(p<5);cout << endl;
	int q=0;
		do {
			cout <<RWa2c[q] << " | ";
			q++;
		}while(q<5);cout << endl;
	int r=0;
		do {
			cout <<RWa3c[r] << " | ";
			r++;
		}while(r<5);cout << endl;
		
			cout << endl << endl;
	cout << "NILAI AKHIR:   " << endl;
	cout <<"Nilai A1   :   "<<ha[0] << endl;
	cout <<"Nilai A2   :   "<<ha[1] << endl;
	cout <<"Nilai A3   :   "<<ha[2] << endl;
		
}	

		
	
	
	
	
