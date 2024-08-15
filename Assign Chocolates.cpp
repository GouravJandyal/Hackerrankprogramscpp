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
     
    int N1;
    cin>>N1;
    int arr1[N1];
    for(int i=0; i<N1; i++){
        cin>>arr1[i];
    }
    int N2;
    cin>>N2;
    int arr2[N2];
    for(int i=0; i<N2; i++){
        cin>>arr2[i];
    }
   // int ans = 0;
    sort(arr1,arr1+N1);
    sort(arr2,arr2+N2);
    int i=0;
    int j=0;
    int ans = 0;
    while(i<N1 && j<N2)
    {
        if(arr2[j] >= arr1[i])
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
