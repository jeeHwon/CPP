#include <iostream>
#include <algorithm>
#include <vector>
//STL sort()_pair

using namespace std;

int main(void){
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "äġ��"));
	v.push_back(pair<int, string>(85, "����ȣ"));
	v.push_back(pair<int, string>(82, "���븸"));
	v.push_back(pair<int, string>(98, "���¿�"));
	v.push_back(pair<int, string>(79, "���¼�"));	
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i].second << ' ';
	}
	return 0;
}
