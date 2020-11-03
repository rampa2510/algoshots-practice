#include <iostream>
#include <vector>

#define CAP 10

using namespace std;

bool push(size_t n,vector<int> &vec){
	if(vec.size()==CAP) return false;
	vec.push_back(n);
	return true;
}

bool isEmpty(vector<int> &vec){
	if(vec.size()==0){
		cout<<"Stack is empty operation cannot be perfomed"<<"\n";
		return true;
	}
	return false;
}

void display(vector<int> &vec){
	if(isEmpty(vec)) return;
	
	for(int i=vec.size()-1;i>=0;i--){
		cout<<vec[i]<<"\n";
	}
}

int pop(vector<int> &vec){
	if(isEmpty(vec)) return -1;
	size_t i = *(vec.end()-1);
	vec.pop_back();
	return i;	
}


int main(){
	vector<int> vec;
	display(vec);
	push(1,vec);
	push(2,vec);
	push(3,vec);
	push(4,vec);
	display(vec);
	size_t i = pop(vec);
	cout<<"Element popped "<<i<<"\n";
	i = pop(vec);
	cout<<"Element popped "<<i<<"\n";
	i = pop(vec);
	cout<<"Element popped "<<i<<"\n";
	display(vec);
	return 0;
}
