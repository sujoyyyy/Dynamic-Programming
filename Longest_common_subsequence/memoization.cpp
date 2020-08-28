#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int t[100][1000];
int LCS(string X,string Y, int m,int n)
{
    for (int i = 0; i < m+1; i++)
    {
        for (int j = 0; i < n+1; i++)
        {
            if(m==0||n==0)
                t[i][j]=0;
    
        }
        
    }      
   
 for (int i = 0; i < m+1; i++)
    {
        for (int j = 0; i < n+1; i++)
        {
            
            if(X[j-1]==Y[j-1])
            {
               t[i][j]= 1+LCS(X,Y,i-1,j-1);
            }
            else
            {
                t[i][j]= max(LCS (X,Y,i,j-1),LCS(X,Y, i-1, j-1));
            }
        }
        
    }      
return t[m][n];

}
int main()
{
    string X="sujoy";
    string Y="sujoyyyy";
    int m= X.length();
    int n = Y.length();
    memset(t,-1,sizeof(t));
    cout<<LCS(X,Y,m,n);
    return 0;
}