#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std ;
class item{
	private:
		string code;
		int  input;
		int output;
		int price;
		int monney;
		int tax;
	public:
		item()=default;
		void anput();
		void butput();
		string getbegin();
		string getend();
		int gettax(){
			return tax;
		}
		friend bool cmp(  item&it1,  item&it2);
};
string item::getbegin(){
	string s =code;
	string res="";
	res=s[0];
	return res;
}
string item::getend(){
	string s=code;
	string res="";
	res=s[s.length()-1];
	return res;
	}
	void item::anput(){
		cin>>code;
		cin>>input;
	}
	void item::butput(){
		string begin=getbegin();
		string end=getend();
		if(begin=="A"){
			output=input*0.6;
		}else if(begin=="B"){
		    output=input*0.7;
		}
		if(end=="Y"){
			price=110000;
		}else if(end=="N"){
			price =135000;
		}
		if(begin=="A"&&end=="Y"){
			tax=(output*price)*0.08;
		}else if(begin=="A"&&end=="N"){
			tax=(output*price)*0.11;
		}else if(begin=="B"&&end=="Y"){
			tax=(output*price)*0.17;
		}else if(begin=="B"&&end=="N"){
			tax=(output*price)*0.22;
		}
		cout<<code<<" "<<input<<" "<<fixed<<setprecision(0)<<output<<" "<<price<<" "<<output*price<<" "<<tax<<endl;
	}
	bool cmp(  item&it1,  item&it2){
		return it1.tax>it2.tax;
	}
int main(){
	int n;
	cin>>n;
	item it[100];
	for(int i=0;i<n;i++){
		it[i].anput();
	}
	sort(it,it+n,cmp);
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
    	if(s==it[i].getbegin()){
    		it[i].butput();
		}
	}
	return 0;
}
