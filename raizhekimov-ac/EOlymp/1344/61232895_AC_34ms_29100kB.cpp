#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 3e5 + 9;
int sinif[sz];
char idx[sz];
string ad[sz], soyad[sz], il[sz];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> ad[i] >> soyad[i] >> sinif[i] >> idx[i] >> il[i];
    }

    for (int x = 0; x <= n; ++x)
    {
        for (int i = 1; i < n; ++i)
        {
            if (sinif[i] > sinif[i + 1])
            {
                swap(ad[i], ad[i + 1]);
                swap(soyad[i], soyad[i + 1]);
                swap(sinif[i], sinif[i + 1]);
                swap(idx[i], idx[i + 1]);
                swap(il[i], il[i + 1]);
            }
            else if (sinif[i] == sinif[i + 1])
            {
                if (idx[i] > idx[i + 1])
                {
                    swap(ad[i], ad[i + 1]);
                    swap(soyad[i], soyad[i + 1]);
                    swap(sinif[i], sinif[i + 1]);
                    swap(idx[i], idx[i + 1]);
                    swap(il[i], il[i + 1]);
                }
                else if (idx[i] == idx[i + 1])
                {
                    if (ad[i] > ad[i + 1])
                    {
                        swap(ad[i], ad[i + 1]);
                        swap(soyad[i], soyad[i + 1]);
                        swap(sinif[i], sinif[i + 1]);
                        swap(idx[i], idx[i + 1]);
                        swap(il[i], il[i + 1]);
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << sinif[i] << idx[i] << ' ' << ad[i] << ' ' << soyad[i] << ' ' << il[i] << '\n';
    }
}