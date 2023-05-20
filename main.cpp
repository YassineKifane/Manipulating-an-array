#include <iostream>
#include "fonctions.h"
using namespace std;
int main()
{
	int *T,i,x,n,l,s,e,y,p,c,k;
	cout<<"Taper la taille du tableau:"<<endl;
	cin>>n;
	T=new int[n];
	cout<<"--------------------------------------"<<endl;
	for(i=0;i<n;i++)
	{

		cout<<"Taper les element du tableau: "<<i<<endl;
		cin>>T[i];
	}
	cout<<"--------------------------------------"<<endl;
	cout<<"Taper 1 pour trie par selection"<<endl;
	cout<<"Taper 2 pour trie par insertion"<<endl;
	cout<<"Taper 3 pour trie par rapide"<<endl;
	cin>>s;
	switch(s)
	{
		case 1:
			tri_selection(T,n);
			afficher(T,n);
			break;
		case 2:
			tri_insertion(T,n);
			afficher(T,n);
			break;
		case 3:
			tri_rapide(T,0,n-1);
			afficher(T,n);
			break;
			default:
			cout<<"Numero invalidee!"<<endl;
			break;
	}
	cout<<"--------------------------------------"<<endl;
	cout<<"Entrer l'element que vous vouler rechercher:"<<endl;
	cin>>l;
	cout<<"Taper 1 pour la recherche sequentiel"<<endl;
	cout<<"Taper 2 pour la recherche dichotomique"<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
			rech_sequentiel(T,n,l);
			break;
		case 2:
			rech_dichotomique(T,n,l);
			break;
			default:
			cout<<"Numero invalidee!"<<endl;
			break;
	}
	cout<<"--------------------------------------"<<endl;
	cout<<"Entrer l'element a inserer dans le tableau "<<endl;
	cin>>e;
	cout<<"Taper 1 pour l'insertion sequentiel"<<endl;
	cout<<"Taper 2 pour l'insertion dichotomique"<<endl;
	cin>>y;
	switch(y)
	{
		case 1:
			 p=insert_sequentiel(T,n,e);
			for(i=n-1;i>=p;i--)
			{
				T[i+1]=T[i];
			}
			T[p]=e;
			n++;
			afficher_new(T,n);
			break;
		case 2:
			 p=insert_dichotomique(T,n,e);
			for(i=n-1;i>=p;i--)
			{
				T[i+1]=T[i];
			}
			T[p]=e;
			n++;
			afficher_new(T,n);
			break;
			default:
			cout<<"Numero invalidee!"<<endl;
			break;
	}
	cout<<"Entrer l'element que vous vouler supprimer"<<endl;
	cin>>k;
	suppression(T,n,k);
	delete [] T;
	return 0;
}
