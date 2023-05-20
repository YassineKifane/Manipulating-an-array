#ifndef __fonctions__H__
#define __fonctions__H__
void afficher(int T[],int n);
void afficher_new(int T[],int n);
void permuter(int *a, int *b);
void tri_selection(int T[],int n);
void tri_insertion(int T[],int n);
void tri_rapide(int T[], int deb, int fin);
void rech_sequentiel(int T[],int n,int x);
void rech_dichotomique(int T[],int n,int x);
int insert_sequentiel(int *T,int N, int e);
int insert_dichotomique(int *T,int N, int e);
void suppression(int T[],int n,int e);
#endif
