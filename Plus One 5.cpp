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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int large[n];
    for(int i=0; i<n; i++){
        cin>>large[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(large[i] == 9)//99998+1 = 9999998
        {
            large[i] = 0;
        }
        else
        {
            large[i] = large[i] + 1;
            break;
        }
    }
    if(large[0] == 0)
    {
        cout<<1<<" ";
        for(int i=0;i<n;i++)
        {
            cout<<large[i]<<" ";  
        }
    }
    else
    {
         for(int i=0;i<n;i++)
        {
            cout<<large[i]<<" ";
        }
    }
    return 0;
}
