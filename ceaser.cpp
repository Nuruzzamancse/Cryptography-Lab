#include<bits/stdc++.h>

using namespace std;

int main(){

    char inpt[10000],opt[1000], i, dcpt[1000];
    int sft;

    cout<<"Please Enter Your Message."<<endl;
    gets(inpt);

    cout<<"Enter Number of Shifting."<<endl;
    cin>>sft;

    int len = strlen(inpt);

    for(i=0;inpt[i];i++){
        opt[(i+sft)%len] = inpt[i];
    }

    opt[i] = '\0';

    cout<<"Encrypted Message"<<endl;
    cout<<opt<<endl;

    for(i=0;opt[i];i++)
    {
        dcpt[i] = opt[(i+sft)%len];
    }

    dcpt[i] = '\0';

    cout<<"Decrypted Message."<<endl;
    cout<<dcpt<<endl;

}
