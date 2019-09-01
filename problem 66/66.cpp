
/*Bismillahir Rahmanir Raheem*/

#include<bits/stdc++.h>
using namespace std;

//constant
#define PI acos(-1.0)

//typedef
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned un;
typedef pair<int,int>  pii;
typedef pair<ll,ll> pll;
typedef vector<int>  vi;
typedef vector<ll>  vll;
typedef vector<pii>  vii;
typedef map<int,int> mii;
typedef map<char,char> mcc;
typedef map<char, int> mci;
typedef map<string,int> msi;
typedef map<string,ull> msul;
typedef map<ll,ll> mll;

// defined for shortcut used
#define gl(x) getline(cin,x)
#define sf scanf
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfl(x) scanf("%lld",&x)
#define sfii(x,y) scanf("%d %d",&x,&y)
#define sfll(x,y) scanf("%lld %lld",&x,&y)
#define sfiii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sflll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define pf printf
#define pfn pf("\n")
#define even(x) if(!(x%2))
#define odd(x) if(x%2)
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d)  max(max3(a,b,c),d)
#define min3(a,b,c) min( min(a,b),c)
#define min4(a,b,c,d) min(min3(a,b,c),d)
#define loopi(i,j,k) for(int i=j;i<k;i++)
#define loopl(i,j,k) for(ll i=j;i<k;i++)
#define looplu(i,j,k) for(ull i=j;i<k;i++)
#define loopc(i,j,k) for(char i=j;i<k;i++)
#define testi(t) for(int cas=1;cas<=t;cas++)
#define testl(t) for(ll cas=1;cas<=t;cas++)
#define wa(t) while(t--)
#define pb push_back
#define ppb pop_back
#define mp make_pair
int main()
{
    string str1,str2;
    gl(str1);
    gl(str2);
    cout<<str2<<endl<<str1<<endl;
    string str;
    while(gl(str))
    {
        loopi(i,0,str.size())
        {
            if(str1.find(str.at(i))!=-1)
            {
                loopi(j,0,str1.size())
                {
                    if(str1.at(j)==str.at(i))
                    {
                        cout<<str2.at(j);
                    }

                }

            }
            else
            {
                cout<<str.at(i);
            }

        }
        cout<<endl;
    }

    return 0;
}


