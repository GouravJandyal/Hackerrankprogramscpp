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
    int n;
    cin>>n;
    string ans = to_string(n);
    int i=0;
    int temp = 0;
    while(i<ans.size())
    {
        int v = ans[i]-'0';
        if(v%2 == 1)
        {
            temp = temp*10 + v;
            i++;
        }
        else i++;
    }
    cout<<temp;
    return 0;
}
