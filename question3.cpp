#include<iostream>
#include<string>
#include<cstring>
#include<fstream>

using namespace std;
int main( )
{
    string v1,v2,v3;
    char filename[20];
    cout<<"Enter the filename"<<endl;
    cout<<"Enter either q3_a.txt or q3_b.txt"<<endl;
    getline(cin,v2);
    ifstream fin(v2);
    ofstream fout("file.txt");
    if(fin)
    {
        cout<<"File Loaded"<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }
    int i=0,j=0,count=0;
     while(!fin.eof())
    {
        getline(fin,v1,' ');
        int length=v1.length();
        for(int i=0;i<length;i++)
        {
            if((v1[i] == 'A' || v1[i] == 'a') || (v1[i] == 'E' || v1[i] == 'e') ||
             (v1[i] == 'I' || v1[i] == 'i') || (v1[i] == 'O' || v1[i] == 'o') ||
            (v1[i] == 'U' || v1[i] == 'u'))
            {
                count++;
            }
        }    
        if(count>0)
        {
            for(int i=length-1;i>=0;i--)
            {
                fout<<v1[i];
            }
            fout<<' ';
        }
        else
        {
            for(int i=0;i<length;i++)
            {
                fout<<v1[i];
            }
            fout<<' ';
        }
        
    }
    
    return 0;
}