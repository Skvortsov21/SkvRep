#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    int i = 0;
    ifstream myfile("C:\\study\\numbers.txt");
    for (string a; getline(myfile, a); i++)
    {
        n = atoi(a.c_str());
        if(n > 0 && n < 32767)
        {
            v.push_back(n);
            sort(v.begin(), v.end());
            cout <<"Messages "<< v[0] << "-" << v[v.size()-1];
            int b = 0;
            for(int k = v[0]; k <= v[v.size()-1]; k++)
            {
                if(find(v.begin(), v.end(),k) == v.end())
                	{
                   		b++;
                   		if(b == 1)
                   			{
                     			cout<< " not enough packages";
                   			}
                    	cout<<" " << k;
                	}
            }
            if(b == 0)
            	{
                	cout<< " received completely";
            	}
           cout<<endl;
        }
     }
    return 0;
}
