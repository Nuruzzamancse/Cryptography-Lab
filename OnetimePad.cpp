#include<bits/stdc++.h>

using namespace std;

int main(){

    char msg[10000], pad[10000],encriptedmsg[10000], i=0, onti, mgi;

    queue<char> onetimepad,identicalOntimepad;

    cout<<"Enter Your message"<<endl;
    gets(msg);

    cout<<"Enter Onetime Pad"<<endl;
    gets(pad);


    for(i=0;pad[i];i++){
        onetimepad.push(pad[i]);
        identicalOntimepad.push(pad[i]);
        }

    for(i=0;msg[i];i++){

        char ont = onetimepad.front();

        if(!onetimepad.empty())
            onetimepad.pop();

        if(ont>='a'&&ont<='z')
             onti = ont - 96;
        else
             onti = ont - 64;

        char mg = msg[i];

        if(mg>='a'&&mg<='z')
              mgi = mg - 96;
        else
              mgi = mg - 64;


         int dc = (onti+mgi)%26;

         if(dc==0)
            dc+=26;






        if(mg>='a'&&mg<='z'){
            encriptedmsg[i]=dc+96;
            }
        else{
            encriptedmsg[i]=dc+64;

            }


    }



    cout<<endl;

    encriptedmsg[i]='\0';

    cout<<encriptedmsg<<endl;

    for(int i=0;encriptedmsg[i];i++)
    {
        char id = identicalOntimepad.front();
                    if(!identicalOntimepad.empty())
                        identicalOntimepad.pop();

    if(encriptedmsg[i]>='a'&&encriptedmsg[i]<='z')
            if((encriptedmsg[i]-id)<=0){

                        printf("%c",encriptedmsg[i]-id+26+96);

            }
            else
                printf("%c",encriptedmsg[i]-id+96);
    else if(encriptedmsg[i]>='A'&&encriptedmsg[i]<='Z')

            if((encriptedmsg[i]-id)<=0)
                printf("%c",encriptedmsg[i]-id+26+64);
            else
                printf("%c",encriptedmsg[i]-id+64);


    }



}
