#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
class item{
	private:
		string code;
		string name;
		string unit; 
		double purchase;
		double price;
		static int dem;
	public:
		item()=default;
	   	item(const string &code,const string &name,const string &unit,double purchase,double price){
	   		this->code=code;
	   		this->name=name;
	   		this->unit=unit;
	   		this->purchase=purchase;
	   		this->price=price;
		   }
		friend istream &operator >>(istream&in,item&it);
		friend ostream &operator<<(ostream&os,const item&it);
		void name1();
		double profit()const;
		 bool operator >(const item&it_2)const;
		 bool cmp(const item &it_1,const item &it_2)const;
		 string getcode()const{
		 	return code;
		 }
};
bool cmp(const item &it_1,const item &it_2){
	if(it_1.profit()==it_2.profit()){
		return it_1.getcode()<it_2.getcode();
	}else{
	return it_1.profit()>it_2.profit();
}
}
bool item::operator>(const item&it_2)const{
   double profit2=profit();
   double profit3=it_2.profit();
   if(profit2==profit3){
   	return code<it_2.code;
   }
   return profit2>profit3;
}
int item::dem=0;
void optimal(string&s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
void item::name1()
{
	string res=name;
	for(int i=0;i<res.length();i++){
		res[i]=tolower(res[i]);
	}
	stringstream ss(res);
	string token;
	const int max=100;
	string word[max];
	int count =0;
	while(ss>>token&&count<max){
		word[count]=token;
		count++;
	}
	for(int i=0;i<count;i++){
		optimal(word[i]);
	}
	name="";
	for(int i=0;i<count;i++){
		name+=word[i];
		if(name!=word[count -1]){
			name+=" ";
		}
	}
}
istream&operator>>(istream&in,item&it){
	item::dem++;
	it.code="MH"+string(4-to_string(item::dem).length(),'0')+to_string(item::dem);
	cout<<"enter of the name item: ";
	in.ignore();
	getline(in,it.name);
	cout<<"enter of the unit: ";
	in>>it.unit;
	cout<<"enter of the purchase: ";
	in>>it.purchase;
	cout<<"enter of the price: ";
	in>>it.price;
	return in;
}
ostream&operator <<(ostream&os,const item&it){
	double profits=it.profit();
	os<<"code of the item: "<<it.code<<endl;
	os<<"name of the item: "<<it.name<<endl;
	os<<"purchase of the item: "<<it.purchase<<endl;
	os<<"price of the item: "<<it.price<<endl;
	os<<"profit of the item: "<<profits<<endl;
	return os;
}
double item::profit()const{
	double profit1=price-purchase;
	return profit1;
}
void bubble_sort(item a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				item tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main(){
	cout<<"enter of the quantity: ";
	int n;
	cin>>n;
	item it[100];
	for(int i=0;i<n;i++){
		cin>>it[i];
	} 
	sort(it,it+n,cmp);
	for(int i=0;i<n;i++){
		cout<<it[i];
	}
	return 0;
}