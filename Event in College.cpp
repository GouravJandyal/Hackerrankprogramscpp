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
    int T;
    cin>>T;
    int enter[T];
    int exit[T];
    for(int i=0; i<T; i++){
        cin>>enter[i];
    }
    for(int i=0; i<T; i++){
        cin>>exit[i];
    }
    int ans = 0;
    int maxi = 0;
    for(int i=0;i<T;i++)
    {
        ans += enter[i] - exit[i];
        if(ans > maxi)maxi = ans;
    }
    cout<<maxi<<endl;
    return 0;
}
