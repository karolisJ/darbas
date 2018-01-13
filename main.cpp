#include <iostream>
#include <fstream>

using namespace std;

const char MasDydis=10;
void rikiavimas(int M[MasDydis], ofstream& Fout);
void spauzdinimas(int Mas1[MasDydis], int Mas2[MasDydis], ofstream& Fout);
int main()
{
    int Mas[MasDydis]={0},
    sk;
    ifstream Fin ("Tekstas.txt");
    ofstream Fout ("Rezultatai.txt");

    while (Fin >> sk){

        switch (sk){
            case 0 :
                Mas[0]++;
                break;

            case 1 :
                Mas[1]++;
                break;

            case 2 :
                Mas[2]++;
                break;

            case 3 :
                Mas[3]++;
                break;

            case 4 :
                Mas[4]++;
                break;

            case 5 :
                Mas[5]++;
                break;

            case 6 :
                Mas[6]++;
                break;

            case 7 :
                Mas[7]++;
                break;

            case 8 :
                Mas[8]++;
                break;

            case 9 :
                Mas[9]++;
                break;
        }
    }

    rikiavimas(Mas, Fout);
    return 0;
}

void rikiavimas(int M[MasDydis], ofstream& Fout)
{
    int Ats[MasDydis];
    int j,i,num;
    for (i=0; i<=9; i++){
        if (i==0){
            Ats[i]=M[i];
        }
        else if (Ats[i-1]<M[i]){
            j=1;
            while (Ats[i-j]<M[i] && i-j>=0){
            if (j==1){
                num=M[i];
            }

            Ats [i]=Ats[i-j];
            Ats [i-j]=num;
            j++;
            }
        }
        else {
            Ats[i]=M[i];
        }

    }
    spauzdinimas(M, Ats, Fout);
}

void spauzdinimas(int Mas1[MasDydis], int Mas2[MasDydis], ofstream& Fout){

    Fout << "kiek tokiu duomenu faile pries sutvarkyma: \n";
    for (int i=0; i<=9; i++){
        Fout << i << " - " << Mas1[i]<<endl;
    }

    Fout << "kiek tokiu duomenu faile mazejancia tvarka: \n";
    for (int i=0; i<=9; i++){
        Fout << i << " - " << Mas2[i]<<endl;
    }
}




















