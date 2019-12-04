//#include <iostream>
//#include < fstream >
//using namespace std;
//int main()
//{
//	int a[10];
//	ofstream outfile(" fl. dat", ios::out);
//	if (!outfile)
//	{
//		cerr << " open error!" << endl;
//		exit(1);
//	}
//	cout << "enter 10 integer numbers : " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//		outfile << a[i] << " ";
//	}
//	outfile.close();
//	return 0;
//}

//#include <iostream> 
//#include <fstream> 
//using namespace std;
//int main()
//{
//	ifstream fin("f5.txt");
//	char a[100][100] = { '\0' };
//	int i = 0;
//	while (fin.getline(a[i], 100)) i++;
//	ofstream fout("f6.txt");
//	for (int i = 0; i < 100; i++)
//	{
//		if (a[i][0] != '\0')
//		{
//			for (int j = 0; j < 100; j++)
//			{
//				if (a[i][j] == '/' && a[i][j + 1] == '/')
//					break;
//				fout << a[i][j];
//			}
//			fout << endl;
//		}
//	}
//	return 0;
//}

//# include <iostream>
//# include <fstream>
//using namespace std;
//int mintomax(double a[],int n)
//{	
//	double min=0,t=0;	int i=0,num=0;	
//	do	
//	{		
//		min=a[i];		
//		num=i;		
//		for(int j=i;j<n;j++)		
//		{			
//			if(a[j]<min)			
//			{				
//				min=a[j];				
//				num=j;		
//			}		
//		}		
//		t=a[i];		
//		a[i]=a[num];	
//		a[num]=t;	
//		i++;	
//	}while(i<n-1);	
//	return 0;
//}
//
//
//int main()
//{	
//	double f1[15],f2[11],f3[26];
//	int k1,k2;	
//	for(int i=0;i<15;i++)	
//	{		k1=i+1;		f1[i]=k1*k1+0.5;	}	
//	for(int i=0;i<10;i++)	{		k2=i+1;		f2[i]=10*k2+0.5;	}	
//	f2[10]=357.9;	
//	for(int i=0;i<15;i++)	{		f3[i]=f1[i];	}	
//	for(int i=0;i<11;i++)	{		f3[i+15]=f2[i];	}	
//	mintomax(f1,15);	mintomax(f2,11);	
//	mintomax(f3,26);	
//	fstream a("f1.txt",ios::out);
//	fstream b("f2.txt",ios::out);	
//	fstream c("f3.txt",ios::out);	
//
//		for(int i=0;i<15;i++)
//		{		a<<f1[i]<<" ";	}	
//		for(int i=0;i<11;i++)	{		b<<f2[i]<<" ";	}	
//		for(int i=0;i<26;i++)	{		c<<f3[i]<<" ";	}	
//		a.close();	b.close();	c.close();	
//		return 0;
//} 
