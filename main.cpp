#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s; vector<char>v;
    cin>>s;

    int slen=s.length();

    for(int i=0;i<slen;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            char ch=toupper(s[i]);
            v.push_back(ch);
        }
        else if(s[i]>=65 && s[i]<=90)
        {
            char ch=tolower(s[i]);
            v.push_back(ch);
        }
    }
    /*char ch=toupper(s[0]);
    cout<<ch;*/
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

}
