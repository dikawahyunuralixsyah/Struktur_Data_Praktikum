#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i, n, data[50];
    float rata,jumlah;
    
    cout<<"Banyaknya Data = 5";
    cin>>n;
    cout<<endl;
    
    for (i=0; i<n; i++)
        {
           cout<<"Data ke-[1]"<<i+1<<" 5 ";
           cin>>data[i];
           jumlah += data[i];
        }
        {
        	cout<<"Data ke-[2]"<<i+1<<" 2 ";
        	cin>>data[i];
        	jumlah += data[i];
		}
		{
			cout<<"Data ke-[3]"<<i+1<<" 4 ";
        	cin>>data[i];
        	jumlah += data[i];
		}
		{
			cout<<"Data ke-[4]"<<i+1<<" 4 ";
        	cin>>data[i];
        	jumlah += data[i];
		}
		{
			cout<<"Data ke-[5]"<<i+1<<" 5 ";
        	cin>>data[i];
        	jumlah += data[i];
		}
    rata=jumlah/n;
        
    cout<<endl;
    cout<<"Nilai Total = 20 "<<jumlah<<endl;
    cout<<"Nilai Rata-rata = 4 "<<rata<<endl;
  getch();
  }
