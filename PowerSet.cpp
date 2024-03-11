#include<bits/stdc++.h>
using namespace std;
void powerSet(string s, int n) 
{
    string substr="";
    for(int j = 0; j<= (1<<n)-1; j++)
    {
        substr="";
        for(int i = 0; i<= n-1; i++)
        {
            if(j&(1<<i))
            {
                substr+=s[i];
            }
        }
        cout<<substr<<endl;
    }
}
int main() 
{
    string s = "abc";
    int n = s.size();
    powerSet(s,n);
}