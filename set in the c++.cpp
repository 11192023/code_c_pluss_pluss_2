#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
//multiset<int>
int maxi(int a,int b){
	if(a>b)return a;
	return b;
}
int main(){
  /* set<int>s;
   for(int i=0;i<10;i++){
   	s.insert(i);
   }
   s.erase(5);
   for(int x:s){
   	cout<<x<<" ";
   } 
   cout<<*s.begin()<<" ";
   cout<<*s.rbegin()<<" ";
   cout<<*s.end()<<" ";
   for(auto x:s){
      cout<<x<<" ";
   }
   cout<<endl;
   for(set<int>::iterator it =s.begin();it!=s.end();it++){
   	cout<<*it<<" ";
   }*/
   /*int n;
   cin>>n;
   set<int>s;
   for(int i=0;i<n;i++){
   	int a;cin>>a;
   	s.insert(a);
   }
   cout<<s.size();
   cout<<endl;
   for(int x:s){
   	cout<<x<<" ";
   }*/
  /* int n;cin>>n;
   set<string>s;
   for(int i=0;i<n;i++){
   	string a;
   	cin>>a;
   	s.insert(a);
   }
   cout<<s.size()<<endl;
   for(string x:s){
   	cout<<x<<" ";
   }*/
  /* multiset<int>s;
   s.insert(100);
   s.insert(100);
   s.insert(200);
   cout<<s.size()<<endl;
  // s.erase(100);
   cout<<s.size()<<endl;
   if(s.count(200)!=0){
   	cout<<"found";
   }else{
   	cout<<"not found";
   }
   cout<<endl;
   if(s.find(200)!=s.end()){
   	cout<<"found";
   }else{
   	cout<<"not found";
   }
   cout<<*s.begin();
   cout<<endl;
   s.erase(s.find(*s.begin()));
   for(int x:s){
   	cout<<x<<" ";
   }*/
   /*int n,k;
   cin>>n>>k;
   int a[100];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   int max=0;
   for(int i=0;i<n-k+1;i++){
   	max=a[i];
   	for(int j=0;j<k;j++){
   		max=maxi(max,a[i+j]);
	   }
	   cout<<max<<" ";
   }*/
   /*int n;
   cin>>n;
   int a[100];
   multiset<int>s;
   for(int i=0;i<n;i++){
   	cin>>a[i];
   	s.insert(a[i]);
   }
   for(int i=0;i<n;i++){
   	if(s.find(2)!=s.end()){
   		s.erase(*s.begin()+2);
	   }
   }
   for(int x:s){
   	cout<<x<<" ";
   }
   return 0;*/
   /*int n,k;
   cin>>n>>k;
   int a[100];
   multiset<int>s;
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   for(int i=0;i<k;i++){
   	s.insert(a[i]);
   }
   for(int i=k;i<n;i++){
   	cout<<*s.rbegin()<<" ";
   	s.erase(s.find(a[i-k]));
   	s.insert(a[i]);
   }
   cout<<*s.rbegin()<<endl;*/
   unordered_set<int>s;
   for(int i=0;i<30;i++){
   	s.insert(i);
   }
   for(int x:s){
   	cout<<x<<" ";
   }
   
	return 0;
}
