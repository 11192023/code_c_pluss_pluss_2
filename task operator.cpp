#include<iostream>
using namespace std;
class fraction{
	private:
		int number1;
		int number2;
	public:
	/*	fraction operator+(const fraction&res){
			fraction result;
			result.number1=number1+res.number1;
			result.number2=number2+res.number2;
			return result; 
		}*/
		friend fraction operator+(const fraction &std,const fraction&ctm);
		void input(){
			cin>>number1;
			cin>>number2;
		}
		void output(){
			cout<<number1<<" "<<number2;
		}
};
fraction operator+(const fraction &std,const fraction &ctm){
   fraction result;
   result.number1=std.number1+ctm.number1;
   result.number2=std.number2+ctm.number2;
   return result;
}
int main(){
	fraction std;
	std.input();
	fraction cmd;
	cmd.input();
	fraction ctm=std+cmd;
	ctm.output();
	return 0;
}
