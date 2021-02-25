// program to solve hashcode version 1

#include <bits/stdc++.h>
using namespace std;
# define space " "
# define pii pair<int,int>
// D is duration
// I intersections
// S is number of streets
// V is number of cars
// F bonus points for each car that reaches the destination

int main(){
	freopen("a.txt","r",stdin);
	int D,I,S,V,F;
	cin>>D>>I>>S>>V>>F;
	
	// create a graph with I vertices
	vector <vector <int> > G(I+1,vector <int> (I+1,0));
	
	// make a map to store names of streets between two intersections
	unordered_map <string,pii> street_name;
	
	// input the streets
	int B,E,L;
	string name;
	for(int i=0;i<S;i++){
		cin>>B>>E>>name>>L;
		G[B][E]=L;
		street_name[name]=make_pair(B,E);
	}
	
	// store path of cars as a vector of vector of strings
	vector<vector <string> > cars_path;
	// can use reserve here
	
	// path of each car
	int streets;
	for(int i=0;i<V;i++){
		cin>>streets;
		string str_name;
		vector <string> path;
		for(int j=0;j<streets;j++){
			cin>>str_name;
			path.push_back(str_name);
		}
		cars_path.push_back(path);
	}
	
	cout<<"printing streets\n";
	for(auto x:street_name){
		cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
	}
	
	cout<<"printing paths\n";
	for(auto x:cars_path){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	
	cout<<"printing grid\n";
	for(int i=0;i<S;i++){
		for(int j=0;j<S;j++){
			cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
		
	
	
