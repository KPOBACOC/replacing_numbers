#include <iostream>
#include <map>
#include <vector>

using namespace std;
//test
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		bool flag = true;
		cin >> n;
		vector<int> arr;
		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			arr.push_back(num);
		}
		string str;
		cin >> str;
		map<int, char> m;
		m[arr[0]] = str[0];
		for (int i = 1; i < n; i++)
		{
			if (m.find(arr[i]) == m.end())
				m[arr[i]] = str[i];
			else
				if (m[arr[i]] != str[i])
				{
					cout << "NO" << endl;
					flag = false;
					break;
				}
		}
		if (flag) cout << "YES" << endl;
	}


	return 0;
}