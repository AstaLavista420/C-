#include <bits/stdc++.h>

using namespace std;

int n, m;
int g=0;
int suma=0;
vector<string>b;
vector<pair<int,int>>koord;

void skaityk();
void skaiciuok();
void isvesk();





int main()
{
    skaityk();
    skaiciuok();
    isvesk();
    return 0;
}





void skaityk()
{
   ifstream fd ("U1.txt");
   string a;
   int x, y;
   fd >> n >> m;
   for(int i=0; i<n;i++)
   {
    fd >> a;
    b.push_back(a);
    fd >> x >> y;
    koord.push_back({x,y});
   }
    fd.close();
}

void skaiciuok()
{
    while(suma<=m)
    {
        if(suma+((fabs(koord[g].first)+fabs(koord[g].second))*2)>m)
            break;
        else
          suma+=((fabs(koord[g].first)+fabs(koord[g].second))*2);
        g++;
    }
}
void isvesk()
{
    ofstream fr("U1rez.txt");
    fr << g << " " << suma << " " << b[g-1];
    fr.close();
}
