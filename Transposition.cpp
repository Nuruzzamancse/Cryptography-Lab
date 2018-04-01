#include<bits/stdc++.h>

using namespace std;

char singletranspositon[1000], doubletranspositon[1000],decipher[1000];

void trans_encipher(char arr[], int width){

    cout<<endl;

    int len = strlen(arr),cnt=0;

    for(int i=0;i<width;i++){

        for(int j=i;j<len; j+=width){
            if(arr[j]!='$'){
                cout<<arr[j];
                singletranspositon[cnt] = arr[j];

                cnt++;
            }
            else{
                singletranspositon[cnt] = arr[j];

                cnt++;

            }
        }
    }

    singletranspositon[cnt] = '\0';


    cout<<endl;

}

void trans_encipher_double(char arr[], int width){

    cout<<endl;

    int len = strlen(arr),cnt=0;

    for(int i=0;i<width;i++){

        for(int j=i;j<len; j+=width){
            if(arr[j]!='$'){
                cout<<arr[j];
                doubletranspositon[cnt] = arr[j];
                cnt++;
            }
            else{

                doubletranspositon[cnt] = arr[j];
                cnt++;

            }
        }
    }


    doubletranspositon[cnt] = '\0';

    cout<<endl;

}

void trans_decipher(char arr[], int row){
    int len = strlen(arr);
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=i;j<len;j+=row){
            if(arr[j]!='$')
               cout<<arr[j];
        }
    }

    cout<<endl;
}

void trans_decipher_double(char arr[], int row){
    int len = strlen(arr), cnt=0;
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=i;j<len;j+=row){
            if(arr[j])
               decipher[cnt++] = arr[j];
        }
    }

    decipher[cnt] = '\0';

    cout<<endl;
}

int main(){

    char msg[1000], tmpmsg[1000];
    cout<<"Enter plain text\n";

    gets(msg);

    strcpy(tmpmsg,msg);

    int len = strlen(msg), row, width;

    cout<<"Enter width\n";

    cin>>width;

    if(len%width==0)
        row = len/width;
    else{
        row = (len/width) + 1;

        int tmplen = row*width;
        int extrlen = tmplen - len;

        for(int i=len;i<len+extrlen;i++)
        {
            strcat(tmpmsg,"$");
        }
    }

    cout<<"Single Transposition Enciphered Message"<<endl;
    trans_encipher(tmpmsg,width);

    cout<<"Single Transposition Deciphered Message"<<endl;
    trans_decipher(singletranspositon,row);



    cout<<"Double Transposition Enciphered Message"<<endl;
    trans_encipher_double(singletranspositon,width);


    cout<<"Double Transposition Deciphered Message"<<endl;

    trans_decipher_double(doubletranspositon,row);

    cout<<decipher<<endl;

    trans_decipher(decipher,row);


}
