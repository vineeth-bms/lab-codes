​#​include​ ​<​stdio.h​>​
​int​ ​main​()
{
    ​int​ m,n,j,i;
    ​int​ arr[​10​][​10​];
    ​int​ t[​10​][​10​];
    ​printf​(​"​Enter number of rows  : ​"​);
    ​scanf​(​"​%d​"​,&m);
    ​printf​(​"​Enter number of columns  : ​"​);
    ​scanf​(​"​%d​"​,&n);
    ​printf​(​"​Enter the elements ;​\n​"​);
    ​for​(i=​0​;i<m;i++)
        ​for​(j=​0​;j<n;j++)
            ​scanf​(​"​%d​"​,&arr[i][j]);
    ​for​(i=​0​;i<m;i++)
        ​for​(j=​0​;j<n;j++)
           t[j][i]=arr[i][j];
    ​printf​(​"​The transpose matrix is ;​\n​"​);
    ​for​(i=​0​;i<n;i++)
    {
        ​for​(j=​0​;j<m;j++)
            ​printf​(​"​%d​  ​"​,t[i][j]);
        ​printf​(​"​\n​"​);
    }
    ​return​ ​0​;

}
