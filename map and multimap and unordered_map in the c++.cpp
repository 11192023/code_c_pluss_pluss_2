 #include<bits/stdc++.h>
 using namespace std;
 //key,value
 int main(){
 	/*map<int,int>mp;
 	mp[100]=200;//(100,200)
 	mp.insert({300,400});
 	mp.insert({400,500});
 	cout<<mp.size()<<endl;
 	mp[100]=300;//(100,300)
 	cout<<mp.size()<<endl;
 	cout<<endl;
 	for(pair<int,int> x:mp){
 		cout<<x.first<<" "<<x.second<<endl;
	 }
	 cout<<endl;
	 for(auto x:mp){
	 	cout<<x.first<<" "<<x.second<<endl;
	 }
	 cout<<endl;
	 for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
	 	cout<<(*it).first<<" "<<(*it).second<<endl;
	 }
	 cout<<endl;
	 if(mp.count(100)!=0){
	 	cout<<"found";
	 }else{
	 	cout<<"not found";
	 }
	 cout<<endl;
	 if(mp.find(500)!=mp.end()){
	 	cout<<"found";
	 }else{
	 	cout<<"not found";
	 }
	 mp.erase(100);
	 for(auto x:mp){
	 	cout<<x.first<<" "<<x.second<<endl;
	 }*/
	 /*map<int,int>mp;
	 int n;
	 cin>>n;
	 int a[100];
	 for(int i=0;i<n;i++){
	 	cin>>a[i];
	 	mp[a[i]]++;
	 }
	 for(int i=0;i<n;i++){
	 	if(mp[a[i]]!=0){
	 		cout<<a[i]<<" "<<mp[a[i]]<<endl;
	 		mp[a[i]]=0;
		 }
	 }*/
	 map<string ,int>mp;
	 int n;
	 cin>>n;
	 for(int i=0;i<n;i++){
	 	string s;
	 	cin>>s;
	 	mp[s]++;
	 }
	 int max_fre=0;
	 string res;
	 for(auto it:mp){
	    if(it.second>max_fre||it.second==max_fre&&it.first<res){
	    	max_fre=it.second;
	    	res=it.first;
		}
	 }
	 cout<<res<<" "<<max_fre<<endl;
	 return 0;
 }
