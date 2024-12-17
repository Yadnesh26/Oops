#include<iostream>
using namespace std;

template<class T,class U>
class sort
{
public:
	//data_type arrayname[size];
	T a[50];
	U b[10];
	int n;
	void accept()
	{
		cout<<"\n Enter no. of elements in an array:=";
		cin>>n;
		cout<<"\n Enter elements:-";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
	}
	void selection_sort()
   {
   	T temp;
	 for(int i=0;i<n-1;i++)     // 7 5 4 2
	 {                          // 0 1 2 3
	 	int min=i;             // 2 5 4 7
	 	for(int j=i+1;j<n;j++)
	 	{
	 		if(a[min]>a[j])
	 		{
	 			min=j;
			 }
		 }
		 temp=a[min];
		 a[min]=a[i];
		 a[i]=temp;
		 
	 }
}
void display()
{
	cout<<"\nSorted Array is:=\n"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"   ";
	}
}
};
int main()
{
	sort <int,float> s1;
	sort <float> s2;
	sort <double>s3;
	int ch;
	do
	{
		cout<<"\n........Menu.......";
		cout<<"\n1.Intger array";
		cout<<"\n2.float array";
		cout<<"\n3.Double array";
		cout<<"\nExit";
		cout<<"\n\n Enter Your choice:-";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				s1.accept();
				s1.selection_sort();
				s1.display();
				break;
			case 2:
				s2.accept();
				s2.selection_sort(); 
				s2.display();
				break;
			case 3:
				s2.accept();
				s2.selection_sort(); 
				s2.display();
				break;
			case 4:
				cout<<"\nexit....";
				exit(0);
				break;
		}

		
		
	}while(ch!=3);
}

