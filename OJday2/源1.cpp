/*µ¹ÖÃ×Ö·û´®*/
#include <iostream>
#include <string>
using namespace std;
int main()
{    
	string s1, s2;    
	cin >> s2;    
	while (cin >> s1)
	{
		s2 = s1 + " " + s2;
	}
	cout << s2 << endl;    
	return 0;
}


#include <vector>
int main()
{    
	string s;  
	vector<string> v;
	while (cin >> s)
	{
		v.push_back(s);
	}
	for(int i = v.size() - 1; i >= 0; i--)
	{        
		if(i == 0) 
			cout<<v[i]<<endl;        
		else 
			cout<<v[i]<<" ";    
	}     
	return 0;
}