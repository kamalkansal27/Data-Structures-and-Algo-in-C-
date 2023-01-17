#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define pb       push_back
#define all(x)   x.begin(), x.end()


/* returns the vector contaning sizes of all the possible strings upto 10^18 
    by the following the rule of 2*prev_size + i  
*/
vector<ll> get_Sizes(int size) 
{
    vector<ll> sizes;
    const ll N = 1e18;

    ll c_size = size, i = 1;
    while (c_size <= N)
    {
        sizes.pb(c_size);
        c_size = 2*c_size  + i; 
        i++;
    }
    return sizes;
}


char get_Char(string& a, ll pos, vector<ll>& sizes) 
{
    while (pos > a.size())
    {
        auto it = lower_bound( all(sizes), pos );
        ll new_pos = (*it) - pos + 1;

        // identify consecutive occurence of '$' 
        if(new_pos >= pos) 
            return '$';
        else 
            pos = new_pos;
    }
    return a[pos - 1];
}


int main() 
{
    int n, q, pos;      // {n} = no of words, {q} = no of queires, {pos} = position of char. 
    string r;     
    cin >> n;  getline(cin >> ws, r); 
    
    r.erase(remove(all(r), ' '), r.end());  // to remove spaces..

    vector<ll> sizes = get_Sizes(r.size());
    cin >> q;
    while (q--) 
    {
        cin >> pos;
        cout << get_Char(r, pos, sizes) << endl;
    }

    return 0;
}