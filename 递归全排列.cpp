#include<bits/stdc++.h>
using namespace std;
void Swap(char *a,char *b)
{
     char tmp=*a;
     *a=*b;
     *b=tmp;
}

//��pszStr�����У�[nBegin,nEnd)���Ƿ����������±�ΪnEnd���������
bool IsSwap(char *pszStr, int nBegin, int nEnd)
{
    for (int i = nBegin; i < nEnd; i++)
        if (pszStr[i] == pszStr[nEnd])
            return false;
    return true;
}

//k��ʾ��ǰѡȡ���ڼ�����,m��ʾ���ж�����.
void AllRange(char *pszStr,int k,int m)
{
     if(k==m)
     {
         static int s_i=1;
         printf("��%d��������%s\n",s_i++,pszStr);
     }
     else
     {
         for(int i=k;i<=m;i++)
         {
             if (IsSwap(pszStr,k,i))
             {
                 Swap(pszStr+i,pszStr+k);
                 AllRange(pszStr,k+1,m);
                 Swap(pszStr+i,pszStr+k);
             }
         }
     }
}

void Foo(char *pszStr)
{
     AllRange(pszStr,0,strlen(pszStr)-1);
}

int main()
{
    printf("ȫ���еĵݹ�ʵ��:\n");
    char next[] = "abcd";
    printf("%s��ȫ��������:\n", next);
    Foo(next);
    system("pause");
    return 0;
}

