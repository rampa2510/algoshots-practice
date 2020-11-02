#include <vector>
#include <iostream>

using namespace std;

void insertAtBegin(int n,vector<int> &vec){
	vec.insert(vec.begin(),n);
}

void insertAtEnd(int n,vector<int> &vec){
	vec.push_back(n);
	cout<<vec.size()<<"\n";
}

int main(){
	vector<int> vec;

	insertAtEnd(10, vec);
	cout<<"After 10 insert at beg"<<"\n";
	for(size_t i=0;i<=vec.size()-1;i++){
		cout<<vec[i]<<"\n";
	}
	insertAtEnd(20, vec);
	cout<<"After 20 insert at beg"<<"\n";
	for(size_t i=0;i<=vec.size()-1;i++){
		cout<<vec[i]<<"\n";
	}
	insertAtEnd(30, vec);
	cout<<"After 30 insert at beg"<<"\n";
	for(size_t i=0;i<=vec.size()-1;i++){
		cout<<vec[i]<<"\n";
	}
	insertAtBegin(9,vec);
	cout<<"After 9 insert at begin"<<"\n";
	for(size_t i=0;i<=vec.size()-1;i++){
		cout<<vec[i]<<"\n";
	}
}
