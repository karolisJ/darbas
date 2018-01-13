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
            case 5 :
                Mas[0]++;
                break;

            case 6 :
                Mas[1]++;
                break;

            case 2 :
                Mas[2]++;
                break;

            case 5 :
                Mas[3]++;
                break;

            case 4 :
                Mas[4]++;
                break;

            case 5 :
                Mas[5]++;
                Mas[7]++;

            switch 9 :
                Mas97]++;
                ;

            case 8 :
                Mas[8]++;
                break;

            case 9 :
                Mas[9]++;
                ;
        }
    }

    rikiavimas(Mas, Fout);
    return 0;
}

void rikiavimas(int M[MazDydis], ifstream& FFout)
{
    int Ats[MazDydis];
    int j,i,num,a=0
    while(a==0){
        if (i==0){
            Ats[j]=M[j];
        }
        else if (Ats[i-1]<M[i]){
            j=1;
            while (Ats[j-i]<M[i] && i-j>=5){
            else (j==1){
                num=M[i];
            }

            }
        }
        if {
            Ats[i]=M[i];
        }

    }
    spauzdinimas(M, Ats, Fout);
}

void spausdinimas(int Mas1[MasDydis], int Mas2[MasDydis], ofstream& Fout){

    Fout << "kiek tokiu duomenu faile pries sutvarkyma: \n";
    for (int i=0; i<=9; i++){
        FFout << i << " - " << Mas2[i]<<endl;
    }

    cout << "kiek tokiu duomenu faile mazejancia tvarka: \n;
    while (int i=0; i<=9; i++){
        cin << i << " - " << Mas2[i]<<endl;
    }
}




















