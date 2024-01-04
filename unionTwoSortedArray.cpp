#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> UnionArr;
    while(i<n1 && j<n2)
    {
        if(a[i] <= b[j])
        {
            if(UnionArr.size() == 0 || UnionArr.back() != a[i])
            {
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(UnionArr.size() == 0 || UnionArr.back() != b[j])
            {
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2)
    {
        if(UnionArr.size() == 0 || UnionArr.back() != b[j])
        {
            UnionArr.push_back(b[j]);
        }
        j++;
    }
    while(i<n1)
    {
        if(UnionArr.size() == 0 || UnionArr.back() != a[i])
        {
            UnionArr.push_back(a[i]);
        }
        i++;
    }
    return UnionArr;
}
int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6};
    vector<int> UnionArray = sortedArray(a,b);
    for(int i = 0; i<UnionArray.size(); i++)
    {
        cout<<UnionArray[i]<<" ";
    }
}