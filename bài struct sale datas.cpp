#include<iostream>
#include<string>
using namespace std;

struct Sales_data {
    string ISBN;
    unsigned units_sold = 0;
    double revenue = 0.0;
    string isbn() const { return ISBN; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};

istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.ISBN >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

double Sales_data::avg_price() const {
    if (units_sold != 0) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data& other) {
    units_sold += other.units_sold;
    revenue += other.revenue;
    return *this;
}

int main() {
    Sales_data book1, book2;
    
    // Nh?p d? li?u cho book1
    cout << "Nh?p thông tin cho book1:\n";
    read(cin, book1);
    cout << endl;
    
    // Xu?t d? li?u c?a book1
    cout << "Thông tin book1:\n";
    print(cout, book1);
    cout << endl;
    
    // Nh?p d? li?u cho book2
    cout << "Nh?p thông tin cho book2:\n";
    read(cin, book2);
    cout << endl;
    
    // Xu?t d? li?u c?a book2
    cout << "Thông tin book2:\n";
    print(cout, book2);
    cout << endl;
    
    // Tính toán t?ng sum và xu?t d? li?u
    Sales_data sum = add(book1, book2);
    cout << "T?ng c?a book1 và book2:\n";
    print(cout, sum);
    cout << endl;
    
    return 0;
}
//ve nha xem tai sao no tham chieu ve nha nghien cuu them dung cau hoi vi sao de hoi het tat ca doan code,phai hieu code chu dung hoc thuoc
