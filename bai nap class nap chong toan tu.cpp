#include<iostream>
using namespace std;
class fraction{
	private:
		int numerator;
		int denominator;
	public:
		fraction(){
			numerator=0;
			denominator=1;
		}
		fraction(int numerator,int denomimator){
			this ->numerator=numerator;
			this->denominator=denominator;
		}
		friend istream&operator>>(istream&in,fraction&a){
			in>>a.numerator;
			in>>a.denominator;
			return in;
		}
		friend ostream&operator<<(ostream&out,const fraction& a){
			out<<a.numerator<<"/"<<a.denominator;
			return out;
		}
	   	fraction operator+( const fraction &lhs) {
	   		fraction result;
	   		result.numerator=(numerator*lhs.denominator)+(lhs.numerator*denominator);
	   		result.denominator=denominator*lhs.denominator;
	   		return result;
	   	}
	   	fraction operator-(const fraction&lhs){
	   		fraction result;
	   	    result.numerator=(numerator*lhs.denominator)-(lhs.numerator*denominator);
	   		result.denominator=denominator*lhs.denominator;
	   		return result;
		   }
		fraction operator*(const fraction&lhs){
			fraction result;
			result.numerator=numerator*lhs.numerator;
			result.denominator=denominator*lhs.denominator;
			return result;
		}
		fraction operator/(const fraction&lhs){
			fraction result;
			result.numerator=numerator*lhs.denominator;
			result.denominator=denominator*lhs.numerator;
			return result;
		}
		bool operator ==(const fraction &lhs){
			return (numerator*lhs.denominator) ==(lhs.numerator*denominator);
		}
	    bool  operator >(const fraction &lhs){
			return (numerator*lhs.denominator) >(lhs.numerator*denominator);
		}
};
void bubbleSort(fraction fractions[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (fractions[j] > fractions[j + 1]) {
                fraction temp = fractions[j];
                fractions[j] = fractions[j + 1];
                fractions[j + 1] = temp;
            }
        }
    }
}

int main() {
     int size;
     cin>>size;
    fraction fractions[size];
    for (int i = 0; i < size; i++) {
        cin >> fractions[i];
    }
    bubbleSort(fractions, size);
    for (int i = 0; i < size; i++) {
        cout << fractions[i] << endl;
    }

    return 0;
}
