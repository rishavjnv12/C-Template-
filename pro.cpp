#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h> 
#define int int64_t
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define srt(a) sort(all(a))
#define rsrt(a) sort(rall(a))
#define mn(a) *min_element(all(a))
#define mx(a) *max_element(all(a))
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int,int>
#define usi unordered_set<int>
#define umi unordered_map<int,int>
#define rfor(a) for(auto x:a)
const int mod = 1e9+7;
using namespace std;

class p{
public:
    static void print(const vector<int> &v);
} h;
void solve(){
    
}

int32_t main(){
    int32_t t;
    scanf("%d",&t);
    while(t--) solve();
    return 0;
}


void p::print(const vector<int> &v){
    for(int a:v)
        printf("%ld ",a);
    printf("\n");
}
