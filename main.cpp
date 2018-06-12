#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
again:
    int answer,trry;
    string input;
    string pool;
    int length;
    cout<<"What Do You Want To Do :\n1) Cipher\n2) Decipher\n";
    cin>>answer;
    if(answer==1)
    {
        cout<<"Enter Your Phrase : \n";
        cin.ignore();
        getline (cin,pool);
        cout<<"The Phrase Is : \n";
        for(int c=0; c<pool.length(); c++)
        {
            if(pool[c]=='a')
                cout<<"aaaaa";
            if(pool[c]=='b')
                cout<<"aaaab";
            if(pool[c]=='c')
                cout<<"aaaba";
            if(pool[c]=='d')
                cout<<"aaabb";
            if(pool[c]=='e')
                cout<<"aabaa";
            if(pool[c]=='f')
                cout<<"aabab";
            if(pool[c]=='g')
                cout<<"aabba";
            if(pool[c]=='h')
                cout<<"aabbb";
            if(pool[c]=='i')
                cout<<"abaaa";
            if(pool[c]=='j')
                cout<<"abaab";
            if(pool[c]=='k')
                cout<<"ababa";
            if(pool[c]=='l')
                cout<<"ababb";
            if(pool[c]=='m')
                cout<<"abbaa";
            if(pool[c]=='n')
                cout<<"abbab";
            if(pool[c]=='o')
                cout<<"abbba";
            if(pool[c]=='p')
                cout<<"abbbb";
            if(pool[c]=='q')
                cout<<"baaaa";
            if(pool[c]=='r')
                cout<<"baaab";
            if(pool[c]=='s')
                cout<<"baaba";
            if(pool[c]=='t')
                cout<<"baabb";
            if(pool[c]=='u')
                cout<<"babaa";
            if(pool[c]=='v')
                cout<<"babab";
            if(pool[c]=='w')
                cout<<"babba";
            if(pool[c]=='x')
                cout<<"babbb";
            if(pool[c]=='y')
                cout<<"bbaaa";
            if(pool[c]=='z')
                cout<<"bbaab";
            if(pool[c]==' ')
                cout<<" ";
        }
    }
    else if(answer==2)
    {
        cout<<"Enter Your Phrase : \n";
        cin.ignore();
        getline (cin,input);
        cout<<"The Phrase Is : \n";
        for(int c=0; c<input.length(); c=c+5)
        {

            input[c]=towlower(input[c]);
            input[c+1]=towlower(input[c+1]);
            input[c+2]=towlower(input[c+2]);
            input[c+3]=towlower(input[c+3]);
            input[c+4]=towlower(input[c+4]);

            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"a";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"b";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='b' and input[c+4]=='a')
                cout<<"c";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='b' and input[c+4]=='b')
                cout<<"d";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"e";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"f";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='b' and input[c+4]=='a')
                cout<<"g";
            if(input[c]=='a' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='b' and input[c+4]=='b')
                cout<<"h";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"i";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"j";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='a' and input[c+3]=='b' and input[c+4]=='a')
                cout<<"k";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='a' and input[c+3]=='b' and input[c+4]=='b')
                cout<<"l";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='b' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"m";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='b' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"n";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='b' and input[c+3]=='b' and input[c+4]=='a')
                cout<<"o";
            if(input[c]=='a' and input[c+1]=='b' and input[c+2]=='b' and input[c+3]=='b' and input[c+4]=='b')
                cout<<"p";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"q";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"r";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='b' and input[c+4]=='a')
                cout<<"s";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='a' and input[c+3]=='b' and input[c+4]=='b')
                cout<<"t";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"u";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"v";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='b' and input[c+4]=='a')
                cout<<"w";
            if(input[c]=='b' and input[c+1]=='a' and input[c+2]=='b' and input[c+3]=='b' and input[c+4]=='b')
                cout<<"x";
            if(input[c]=='b' and input[c+1]=='b' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='a')
                cout<<"y";
            if(input[c]=='b' and input[c+1]=='b' and input[c+2]=='a' and input[c+3]=='a' and input[c+4]=='b')
                cout<<"z";

            if(input[c+5]==' ')
                 c=c+1;
                 cout<<" ";
        }
    }
    cout<<"\n\nDo You Want To Try Again :\n1) Yes\n2) No\n";
    cin>>trry;
    cout<<endl;
    if(trry==1)
    {
        goto again;
    }
    if(trry==2)
    {
        cout<<"The Program Finish :)\n";
    }
    return 0;
}
