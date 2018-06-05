#include <iostream>
using namespace std;
template <class T>
void show(const T* array,int count){
	for(int i=0;i<count;i++){
		cout<<array[i]<<endl;
	}
} 
template <class t>
class data{
	public:
	data(){havein=false;}
	data(t i){
		item=i;
	}
	void putin(t i){
		item=i;
	}
	data<t>& operator = (t a){
		return data(a);
	}
	template <class r>
	friend ostream& operator<<(ostream& out,const data<r>& d);
	private:
	t item;
	bool havein;
};
template <class t>
ostream& operator<<(ostream& out,const data<t>& d){
	out<<"("<<d.item<<")";
	return out;
}
int main(){
	data<int> d[10]={1,2,3,4,5,6,7,8,9,0};
	show(d,10);
	
} 
