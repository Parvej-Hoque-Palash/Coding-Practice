#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> intersectArray;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            intersectArray.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return intersectArray;
}
int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6};
    int n = a.size();
    int m = b.size();
    vector<int> IntersectArray = findArrayIntersection(a,n,b,m);
    for(int i = 0; i<IntersectArray.size(); i++)
    {
        cout<<IntersectArray[i]<<" ";
    }
}