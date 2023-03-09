#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*typedef struct employe
{
    int code;
    char nom[20];
    char prenom[20];
    float salaire;
    int codedep;
    int codechef;

} employe;
typedef struct departement
{
    int cd;
    char nm1[20];
    char resp[20];
} departement;

void saisie_emp(employe *e)
{
    printf("donner le code");
    scanf("%d",&e->code);
    getchar();
    printf("donner le nom");
    gets(e->nom);
    printf("donner le prenom");
    gets(e->prenom);
    printf("donner le salaire");
    scanf("%f",&e->salaire);
    printf("donner le codedep");
    scanf("%d",&e->codedep);
    printf("donner le codechef");
    scanf("%d",&e->codechef);

}
void remplir_tab(employe *t,int n)
{
    employe *p;
    for(p=t; p<=t+n; p++)
    {
        saisie_emp(p);
    }
}

void afficher_details_employe(employe *t, int n, int cdd)
{
    employe *p;
    for(p=t;p<t+n; p++)
    {
        if(p->code == cdd)
        {
            printf("%d",p->code);
            printf("%s",p->nom);
            printf("%s",p->prenom);
            printf("%f",p->salaire);
            printf("%d",p->codedep);
        }
    }

}
void employee_nonaffect(employe*t,int n,employe*t_nonaffect)
{
    employe*p;
    employe*p1=t_nonaffect;
    for(p=t; p<t+n; p++)
    {
        if((p->codedep)==0)
            p1=p;
        p1++;
    }
}

departement*affiche_nomdepart(departement *d,char nomd)
{
    departement *p;
    p=d;
    if(strcmp(p->nm1,nomd)==0)
    {
        return p;
    }
}
int nbre_employe_dep(employe*t,int n,int cddd)
{
    employe *p;
    int s=0;
    for(p=t; p<t+n; p++)
    {
        if(p->code == cddd)
        {
            s=s+1;
        }
    }
    return s;
}
int main()
{
    int n=0,cdd,cddd;
    int nb;
    employe *t;
    employe *t1;
    departement *d;
    char nomd[20];
    t=malloc( n*sizeof(employe));
    remplir_tab(t,n);
    printf("donner le code de l'employee:");
    scanf("%d",&cdd);
    afficher_details_employe(t,n,cdd);
    t1=malloc(n*sizeof(employe));
    employee_nonaffect(t,n,t1);
    printf("donner le code de l'employee a chercher:");
    scanf("%d",&cddd);
    nb=nbre_employe_dep(t,n,cddd);
    printf("%d",nb);
    printf("donner le nom de departement a chercher ");
    scanf("%s",nomd);
    d=affiche_nomdepart(d,nomd);
    if(d!=NULL)
    {
        printf("%d",d->cd);
    }
    else
    {
        printf("impossible!!!!");
    }
}*/



