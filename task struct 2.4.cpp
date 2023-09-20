#include<iostream>
using namespace std;
class Invoice{
	private:
		string partnumber;
		string partdescription;
		int quantity;
		double a_price_per_item;
	public:
		Invoice(const string & partnumber,const string &partdescription,int quantity,double a_price_per_item){
			this->partnumber=partnumber;
			this->partdescription=partdescription;
			this->quantity=quantity;
			this->a_price_per_item=a_price_per_item;
		}
		void setpartnumber(const string &partnumber){
			this->partnumber=partnumber;
		}
		void setpartdescription(const string &partdescription){
			this->partdescription=partdescription;
		}
		void setquantity(int quantity){
			if(quantity>0){
				this->quantity=quantity;
			}else{
				this->quantity=0;
			}
		}
		void seta_price_per_item(double a_price_per_item){
			if(a_price_per_item>0){
				this->a_price_per_item=a_price_per_item;
			}
			else{
				this->a_price_per_item=0.0;
			}
		}
		string getpartnumber(){
			return partnumber;
		}
		string getpartdescription(){
			return partdescription;
		}
		int getquantity(){
			return quantity;
		}
		double geta_price_per_item(){
			return a_price_per_item;
		}
		double getInvoiceAmount(){
			return static_cast<double>(quantity)*a_price_per_item;
		}
};
int main(){
	Invoice invoice("1234","abcd",5,9.9);
	cout<<"list of the invoice and information inside an invoice"<<endl;
	cout<<"number: "<<invoice.getpartnumber()<<endl;
	cout<<"description: "<<invoice.getpartdescription()<<endl;
	cout<<"quantity: "<<invoice.getquantity()<<endl;
	cout<<"a_price_per_item: "<<invoice.geta_price_per_item()<<endl;
	cout<<"invoice amount: "<<invoice.getInvoiceAmount()<<endl;
	invoice.setquantity(10);
	invoice.seta_price_per_item(19.8);
	cout<<"update of quantity and a price per item"<<endl;
	cout<<"update of the quantity: "<<invoice.getquantity()<<endl;
	cout<<"update of the a price per item: "<<invoice.geta_price_per_item()<<endl;
	cout<<"update of the getinvoiceamount"<<endl;
	cout<<"getinvoiceamount: "<<invoice.getInvoiceAmount()<<endl;
	return 0;
}