
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Sales_data {
public:
Sales_data() = default;
Sales_data(const std::string &s): bookNo(s) {}
//Sales_data(std::istream&);
std::string isbn() const {
return bookNo;
}
//Sales_data &combine(const Sales_data&);
private:
//double avg_price() const;
std::string bookNo;
unsigned units_sold = 0;
double revenue = 0.0;

};
int main(){
fstream myfile1("sales_data.bin", ios::out | ios::binary);
Sales_data sale1("B1");
if (myfile1.is_open()){
myfile1.write((char *) &sale1, sizeof(Sales_data));
} else {
cout << "Unable to open file";
}
fstream myfile2("sales_data.bin", ios::in | ios::binary);
Sales_data sale2;
if (myfile2.is_open()){
myfile2.read((char *) &sale2, sizeof(Sales_data));
} else {
cout << "Unable to open file";
}
myfile2.close();
}
