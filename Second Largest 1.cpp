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
    string input;
    cin >> input;
    
    // Replace commas with spaces for easier parsing
    replace(input.begin(), input.end(), ',', ' ');
    
    // Use a stringstream to parse the numbers
    stringstream ss(input);
    int a, b, c;
    ss >> a >> b >> c;
    vector<int> ans = {a,b,c};
    sort(ans.begin(),ans.end());
    cout<<ans[1]<<endl;
    return 0;
}
