#include <string>
using namespace std;
#define FOR(i,n) for(long (i)=0;(i)<(n);((i)++))

int main() {
    int iNum; cin >> iNum;
    FOR(i,iNum){
        string sTest; cin >> sTest;
        string hr = "hackerrank";
        for(auto i : sTest){ if(i==hr[0]){hr.erase(0, 1); }}
        cout << (hr.empty() ? "YES" : "NO") << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
