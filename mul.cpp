#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int res[3][3]={{0,0,0},{0,0,0},{0,0,0}};

for(int i=0;i<3;i++)
{
  for(int j=0;j<3;j++)
  {
   for(int k=0;k<3;k++)
   {
   res[i][k]=res[i][k]+(a[i][j]*b[j][k]);
   }
  }
}
for(int i=0;i<3;i++)
{
   for(int j=0;j<3;j++)
   {
   cout<<res[i][j]<<" ";
   }
   cout<<"\n";
}
return 0;
}
