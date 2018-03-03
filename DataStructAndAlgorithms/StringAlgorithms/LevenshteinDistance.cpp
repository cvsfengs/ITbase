#include <iostream>
#include <string>
using namespace std;

int minInThree(const int& a,const int& b,const int& c){
    return a<b?(a<c?a:c):(b<c?b:c);
}

int LevenshteinDistance(string s,int len_s,string t,int len_t){
	int cost;
	
	if(len_s==0)
		return len_t;
	if(len_t==0)
		return len_s;

	if(len_s==len_t){
		cost=1;
	}else{
		cost=0;
	}

	return minInThree(LevenshteinDistance(s,len_s-1,t,len_t)+1,LevenshteinDistance(s,len_s,t,len_t-1)+1,LevenshteinDistance(s,len_s-1,t,len_t-1)+cost);
}

int main()
{
	return 0;
}
