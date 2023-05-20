#include <iostream>
#include "fonctions.h"
using namespace std;
void afficher(int T[],int n)
{
	int i;
	cout<<"----------------------"<<endl;
	cout<<"Affichage du tableau"<<endl;
	for(i=0;i<=n-1;i++)
	{
		cout<<"position"<<i<<"="<<T[i]<<endl;
	}
}
void afficher_new(int T[],int n)
{
	int i;
	cout<<"----------------------"<<endl;
	cout<<"Affichage du nouveau Tableau apres l'insertion"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"position"<<i<<"="<<T[i]<<endl;
	}
}
void permuter(int *a, int *b) {
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}
void tri_selection(int T[],int n)
{
	int i,j,posmin;
	for(i=0;i<n-1;i++)
		{   posmin=i;
			for(j=i+1;j<n;j++)
			{
				if(T[posmin]>T[j])
				{
					posmin=j;
				}
			}
			permuter(&T[i],&T[posmin]);
		}
}
void tri_insertion(int T[],int n)
{
	int i,x,y;
	for(i=1;i<n;i++)
	{
		y=T[i];
		x=i;
		while(x>0 && T[x-1]>y)
		{
			T[x]=T[x-1];
			x--;
		}
		T[x]=y;
	}
}
void tri_rapide(int T[], int deb, int fin)
{
    int pivot,i,j;
    if(deb<fin)
	{
        pivot=deb;
        i=deb;
        j=fin;
        while (i < j)
		{
            while(T[i]<=T[pivot] && i<fin)
            {
                i++;
            }
            while(T[j]>T[pivot])
			{
                j--;
            }
            if(i < j)
			{
                permuter(&T[i],&T[j]);
            }
        }
        permuter(&T[pivot],&T[j]);
        tri_rapide(T,deb,j-1);
        tri_rapide(T,j+1,fin);
    }
}
void rech_sequentiel(int T[],int n,int x)
{
int	i=0,pos=-1;
while((i<n)&&(T[i]!=x))
{
i=i+1;
}
if(T[i]==x) pos=i;
if(pos==- 1)
	{
		cout<<"Element introuvable.."<<endl;
	}else
		{
		cout<<"--------------------------------------"<<endl;
		cout<<"Remarque: la position de l'element est celle apres le tri!"<<endl;
		cout<<"il existe dans la position "<<pos<<endl;
		}
}
void rech_dichotomique(int T[],int n,int x)
{
	int pr,ml,de,tr;
	pr=0;
	de=n-1;
	tr=0;
	do
	{
		ml=(pr+de)/2;
		if(x<T[ml])
		{
			de=ml-1;
		} else {
		if(x>T[ml])
			{
				pr=ml+1;
			}else
			{
				tr=1;
			}
		}
	}while(tr==0 && pr<=de);
	if(tr==1)
	{
		cout<<"--------------------------------------"<<endl;
		cout<<"Remarque: la position de l'element est celle apres le tri!"<<endl;
		cout<<"il existe dans la position "<<ml<<endl;

	}else
	{
		cout<<"Element introuvable.."<<endl;
	}
}
int insert_sequentiel(int *T,int N, int e)
{ 	int pos_ins,i;
	if(T[0]>e) pos_ins=0;
	else
	{ i=N-1;
	while(T[i]>e)
		{
		i=i-1;
		}
	pos_ins=i+1;
	}
	return pos_ins;
}
int insert_dichotomique(int *T,int N, int e)
{	int pos_ins, sup, inf, m ;
	if(T[N-1]<=e) pos_ins=N;
	else
	{
		sup=N-1;
		inf=0;
		while(inf<sup)
		{
			m=(inf+sup)/2;
			if(T[m]>e)
			{
				sup=m;
			}
			else inf=m+1;
		}
		pos_ins=sup;
	}
	return pos_ins;
}
void suppression(int T[],int n,int e)
{
	int i,count=0;
for(i=0; i<n; i++)
	{
		if(T[i]==e)
		{
			for(int j=i; j<(n-1); j++)
			{
				T[j]=T[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element introuvable.."<<endl;
	}
	else
	{		cout<<"--------------------------------------"<<endl;
		cout<<"Affichage du nouveau tableau apres la supression"<<endl;
		for(i=0; i<(n-1); i++)
		{
			cout<<"position"<<i<<"="<<T[i]<<endl;
		}
	}
}
