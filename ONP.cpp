#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;
   m['+']=1;
   m['-']=2;
   m['*']=3;
   m['/']=4;
   m['^']=5;

    int n;
    cin>>n;
    while(n--)
    {
        string s;
       // char priority[]={'+', '-','*', '/', '^'};
        cin>>s;
        stack <char> stk;
        int i,l=s.size();
        for(i=0;i<l;i++)
        {
            //cout<<"0\n";
            if(s[i]>='a' && s[i]<='z')
            cout<<s[i];
            
            else if(s[i]=='(')
            stk.push('(');
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*'|| s[i]=='/' || s[i]=='^')
            {
                

                while(m[stk.top()]>m[s[i]])
                {
                    char t=stk.top();
                    stk.pop();
                    
                    cout<<t;//stk.push(t);
                }
                stk.push(s[i]);

            }
            else if(s[i]==')')
            {
                
                while(stk.top()!='(')
                {
                    cout<<stk.top();
                    stk.pop();
                }
                stk.pop();
            }
            
        }
        while(stk.empty()==0)
        {
            cout<<stk.top();
            stk.pop();
        }
    }
}