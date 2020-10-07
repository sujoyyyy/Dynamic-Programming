/*Given a string, a partitioning of the string is a palindrome partitioning if every substring of the partition is a palindrome. 
Example:
“aba|b|bbabb|a|b|aba” is a palindrome partitioning of “ababbbabbababa”.*/
#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
bool ispalindrome(string s)
{
   string s1= s;
   reverse(s1.begin(),s1.end());
   if(s1.compare(s)==0)
   {
       return true;
   }
   else
   {
       return false;
   }    
}
int solve(string s,int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    string s1= s.substr(i,j+1);
    if(ispalindrome(s1))
    {
        return 0;
    }
    int min = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp =1+ solve(s,i,k)+solve(s,k+1,j);
        if(min>temp)
        {
            min=temp;
        }

    }
    return min;

}
int main()
{   
    string s= "ababbbabbababa";
    cout<<solve(s,0,s.length()-1);
    return 0;   
}