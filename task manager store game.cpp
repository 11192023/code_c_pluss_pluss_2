#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

class game {
private:
    string username;
    string pass;
    string name;
    string intime;
    string outtime;

public:
    game() = default;
    game(const string& username, const string& pass, const string& name, const string& intime, const string& outtime) {
        this->username = username;
        this->pass = pass;
        this->name = name;
        this->intime = intime;
        this->outtime = outtime;
    }

    friend istream& operator>>(istream& in, game& ga);
    friend ostream& operator<<(ostream& os, const game& ga);

    string getintime() {
        return intime;
    }

    string getouttime() {
        return outtime;
    }

    string getusername() {
        return username;
    }

    string optimalname();
    string consvert();
   friend  bool operator<(const game &ga_1,const game&ga_2);
};
bool operator<(const game&ga_1,const game&ga_2){
	
	if(ga_1.intime==ga_2.outtime){
		return ga_1.username>ga_2.username;
	}
	return ga_1.intime>ga_2.outtime;
}
/*bool operator<(const game&ga_1,const game&ga_2){
	game htm=ga_1;
	game hcm=ga_2;
	if(htm.consvert()==hcm.consvert()){
		return hcm.username>htm.username;
	}
	return htm.consvert()>hcm.consvert();
}*/
void optimal(string& s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}
string game::optimalname() {
    string s = name;
    stringstream ss(s);
    string token;
    const int max = 100;
    string word[max];
    int count = 0;
    while (ss >> token && count < max) {
        word[count] = token;
        count++;
    }
    for (int i = 0; i < count; i++) {
        optimal(word[i]);
    }
    name = "";
    for (int i = 0; i < count; i++) {
        name += word[i];
        if (name != word[count - 1]) {
            name += " ";
        }
    }
    return name;
}

istream& operator>>(istream& in, game& ga) {
    cout << "Enter the username: ";
    in >> ga.username;
    cout << "Enter the password: ";
    in >> ga.pass;
    cout << "Enter the name: ";
    in.ignore();
    getline(in, ga.name);
    cout << "Enter the intime: ";
    in >> ga.intime;
    cout << "Enter the outtime: ";
    in >> ga.outtime;
    return in;
}

string game::consvert(){
	string time1=getintime();
	string time2=getouttime();
    int hour1 = stoi(time1.substr(0, 2));
    int minute1 = stoi(time1.substr(3, 2));
    int hour2 = stoi(time2.substr(0, 2));
    int minute2 = stoi(time2.substr(3, 2));
    int totaltime1 = hour1 * 3600 + minute1 * 60;
    int totaltime2 = hour2 * 3600 + minute2 * 60;
    int totaltime = totaltime2 - totaltime1;
    int hour = totaltime / 3600;
    int minute = (totaltime % 3600) / 60;
    return to_string(hour) + " gio " + to_string(minute) + " phut";
}

ostream& operator<<(ostream& os, const game& ga) {
    os << "Username: " << ga.username << endl;
    os << "Password: " << ga.pass << endl;
    game ctm = ga;
    ctm.optimalname();
    os << "Name: " << ctm.name << endl;
    game cmp=ga;
    os << "Time: " << cmp.consvert() << endl;
    return os;
}
/*void bubble_sort(game ga[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(ga[j]>ga[j+1]){
				game tmp=ga[j];
				ga[j]=ga[j+1];
				ga[j+1]=tmp;
			}
		}
	}
}*/
/*bool cmp( game& ga_1,  game& ga_2) {
    if (ga_1.consvert() == ga_2.consvert()) {
        return ga_1.getusername() < ga_2.getusername();
    }
    return ga_1.consvert() > ga_2.consvert();
}*/

int main() {
    cout << "Enter the quantity: ";
    int n;
    cin >> n;
    game ga[30];
    for (int i = 0; i < n; i++) {
        cin >> ga[i];
    }
    sort(ga,ga+n);
   sort(ga, ga + n);
    for (int i = 0; i < n; i++) {
        cout << ga[i] << endl;
    }
    return 0;
}

