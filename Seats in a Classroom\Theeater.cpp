#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
long long factorial(int n)
{
    long long ans = 1;
    for(int i=2;i<=n;i++){
    ans = ans*i;
    }
    return ans;
}
long long permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
}
int main(){
    int n,r;
    cin>>n>>r;
    
    if(n>r)cout<<"Cannot adjust n people on r seats";
    else cout<<permutation(r,n)<<endl;
    return 0;
}
