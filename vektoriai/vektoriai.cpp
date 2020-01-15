#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>


using namespace std;

ifstream in("duom.txt");
ofstream out("rez.txt");
void readVector(vector<int> &A);
void printVector(vector<int> A, string txt);
void rikiavimas(vector<int> &A);
void rikiavimas2(vector<int> &A);

int main()
{
    vector<int> V;
        readVector(V);
        printVector(V, "\n Nerikiuotas \n");
        rikiavimas(V);
        printVector(V, "\n Surikiuotas \n");
        rikiavimas2(V);
        printVector(V, "\n Surikiuotas antraip \n");
    /*vector<int> V;
    V.push_back(100);
    V.push_back(-19);
    int a;
    cout<<"a="; cin>>a;
    V.push_back(a);
    spausdinti prieki
    cout<<V.front()<<endl;
    spausdinti gala
    cout<<V.back()<<endl;
    //pasirinkti ka spausdinti
    cout<<V.at(2)<<endl;



    for(int i=0; i<V.size(); i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
    V.insert(V.begin()+2, 15);

    for(int i=0; i<V.size(); i++){
        cout<<V[i]<<" ";
    }


    cout<<endl;
    V.erase(V.begin()+2);

    for(int i=0; i<V.size(); i++){
        cout<<V[i]<<" ";
    }

    cout<<endl;
    V.clear();

    for(int i=0; i<V.size(); i++){
        cout<<V[i]<<" ";
    }
    if(V.empty()){cout<<"Nieko Nera \n";}
        else{cout<<"Kazkas yra \n";}
    */
    in.close();
    out.close();
    return 0;
}
void readVector(vector<int> &A)
{
int a=0;
while(!in.eof()){
    in>>a;
    A.push_back(a);
}
}

void printVector(vector<int> A, string txt)
{
    out<<txt;
    for(int i=0; i<A.size(); i++){
        out<<A[i]<<" ";
    }
    out<<endl;
}

void rikiavimas(vector<int> &A)
{
    int did, maz;
    /*did = *max_element(A.begin(), A.end());
    maz = *min_element(A.begin(), A.end());
    cout<<did;
    cout<<maz;*/
    sort(A.begin(), A.end());
}
void rikiavimas2(vector<int> &A)
{
    sort(A.rbegin(), A.rend());
}
