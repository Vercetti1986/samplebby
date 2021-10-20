#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> randNums(2);
    for(int i=0;i<20;i++)
    {
        randNums[i]=i+1;
        cout<<randNums[i]<<endl;
    }
    randNums.push_back(19);
    for(int i=0;i<randNums.size();i++)
        cout<<randNums[i];
    return 0;
}