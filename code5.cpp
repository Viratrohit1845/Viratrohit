#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
 cin>>t;
 while(t--)
 {  
        int n,count=0;
       // bool flag=0;
        cin>>n;
        string str="",temp;
        cin>>temp;
        str+='0'+ temp +'0';
        int k=str.size();
        for(int i=1;i<=n;i++)
        {   
            if(str[i-1]=='0' && str[i] =='0' && str[i+1]=='0'){
                str[i] = '1';
                count++;
            }
        }
        cout<<count<<endl;
  
 }
	return 0;
}
