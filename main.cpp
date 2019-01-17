#include "heap.h"
#include <iostream>
using namespace std;
class node{
	private:
	int data;
	static int number;
	public:
	node():data(number++){}
	bool operator<(const node& A){return data < A.getData();}
	int getData()const{return data;}
	friend ostream& operator<<(ostream& os, const node& a)  
	{  
    os << a.data;  
    return os;  
	}  
};
int node::number = 0; 

int main(){
	node a,b,c,d;
	node arr[] ={c,a,b,d}; 
	heap<node, minTreeComp<node> > minheap(arr,4,4);
	int number = 0;
	cin >> number;
	cout << minheap.remove(number)<< endl;
	return 0; 
}
