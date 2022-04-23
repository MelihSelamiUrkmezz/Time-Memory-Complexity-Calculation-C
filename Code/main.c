#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
char cok_boyutlu_dizi[255];
char fonksiyon_ismi[255];
int index=1;
int toplam=0;
void dosyadan_oku(){

FILE *dosya=fopen("input.txt","r");

int maximum_uzunluk=255;

char satir[maximum_uzunluk];

while(fgets(satir,maximum_uzunluk,dosya)){

   yer_karmasikligi_hesapla(strlen(satir),satir);

}
fclose(dosya);
}
int recursive_kontrol_et(int uzunluk,char string[uzunluk]){
int flag=0;
for(int i=0;i<uzunluk;i++){

    if(string[i]=='i' && string[i+1]=='n' && string[i+2]=='t' && string[i+3]==' ' && string[i+4]!='m'){

        for(int j=i;j<uzunluk;j++){

            if(string[j]==')' || string[j]=='('){

                return 1;

            }


        }

    }
    else if(string[i]=='f' && string[i+1]=='l' && string[i+2]=='o' && string[i+3]=='a' && string[i+4]=='t'){

        for(int j=i;j<uzunluk;j++){

            if(string[j]==')' || string[j]=='('){

                return 1;

            }


        }


    }
    else if(string[i]=='c' && string[i+1]=='h' && string[i+2]=='a' && string[i+3]=='r'){


          for(int j=i;j<uzunluk;j++){

            if(string[j]==')' || string[j]=='('){

                return 1;

            }


        }



    }
    else if(string[i]=='d' && string[i+1]=='o' && string[i+2]=='u'&& string[i+3]=='b' && string[i+4]=='l' && string[i+5]=='e'){

        for(int j=i;j<uzunluk;j++){

            if(string[j]==')' || string[j]=='('){

                return 1;
            }
        }
    }
}

return 0;
}
void yer_karmasikligi_hesapla(int uzunluk,char string[uzunluk]){

int parantez_adedi=0;
// int kontrolu

for(int i=0;i<uzunluk;i++){

    if((string[i]=='i' && string[i+1]=='n' && string[i+2]=='t' && string[i+3]==' ') || (string[i]=='f' && string[i+1]=='l' && string[i+2]=='o' && string[i+3]=='a' && string[i+4]=='t' && string[i+5]==' ')){
        parantez_adedi=0;
        int flag=0;//Gorulen int'in int main olup olmadigi kontrol edilecektir.

        for(int j=i;j<uzunluk;j++){

            if(string[j]=='(' || string[j]==')'){
                flag=1;
                break;
            }
        }
        if(flag==0){

            int flag2=0; //Dizi parantezi gorulup gorulmeyecegi kontrol edilir.
            for(int k=0;k<uzunluk;k++){
                if(string[k]=='['){
                    parantez_adedi+=1;
                    flag2=1;
                    if(parantez_adedi==1){
                    cok_boyutlu_dizi[index]='4';
                    index++;
                    }
                    cok_boyutlu_dizi[index]=string[k+1];
                    index+=1;

                }
            }
            if(flag2==1){
            cok_boyutlu_dizi[index]='+';
            index++;
            }

            if(flag2==0){
                int adet=0;
                for(int n=0;n<uzunluk;n++){
                    if(string[n]==','){
                        adet+=1;
                    }
                }
                toplam+=(adet+1)*4;
            }

        }
    }
    else if(string[i]=='c' && string[i+1]=='h' && string[i+2]=='a' && string[i+3]=='r' && string[i+4]==' '){
            parantez_adedi=0;

            int flag2=0; //Dizi parantezi gorulup gorulmeyecegi kontrol edilir.
            for(int k=0;k<uzunluk;k++){
                if(string[k]=='['){
                    parantez_adedi+=1;
                    flag2=1;
                    if(parantez_adedi==1){
                    cok_boyutlu_dizi[index]='1';
                    index++;
                    }
                    cok_boyutlu_dizi[index]=string[k+1];
                    index+=1;

                }
            }
            if(flag2==1){
            cok_boyutlu_dizi[index]='+';
            index++;
            }

            if(flag2==0){
                int adet=0;
                for(int n=0;n<uzunluk;n++){
                    if(string[n]==','){
                        adet+=1;
                    }
                }
                toplam+=(adet+1)*1;
            }


    }
    else if(string[i]=='d' && string[i+1]=='o' && string[i+2]=='u'&& string[i+3]=='b' && string[i+4]=='l' && string[i+5]=='e' && string[i+6]==' '){

        parantez_adedi=0;

            int flag2=0; //Dizi parantezi gorulup gorulmeyecegi kontrol edilir.
            for(int k=0;k<uzunluk;k++){
                if(string[k]=='['){
                    parantez_adedi+=1;
                    flag2=1;
                    if(parantez_adedi==1){
                    cok_boyutlu_dizi[index]='8';
                    index++;
                    }
                    cok_boyutlu_dizi[index]=string[k+1];
                    index+=1;

                }
            }
            if(flag2==1){
            cok_boyutlu_dizi[index]='+';
            index++;
            }

            if(flag2==0){
                int adet=0;
                for(int n=0;n<uzunluk;n++){
                    if(string[n]==','){
                        adet+=1;
                    }
                }
                toplam+=(adet+1)*8;
            }
    }

}
}
int for_kontrol_et(int uzunluk,char string[uzunluk]){

for(int i=0;i<uzunluk;i++){

    if(string[i]=='f' && string[i+1]=='o' && string[i+2]=='r' && string[i+3]==' '){

        return 1;

    }

}

return 0;

}
int do_while_kontrol_et(int uzunluk,char string[uzunluk]){

for(int i=0;i<uzunluk;i++){

    if(string[i]=='d' && string[i+1]=='o' && string[i+2]=='{'){

        return 1;
    }
}
return 0;
}
int for_artis_kontrol_et(int uzunluk,char string[uzunluk]){

for(int i=0;i<uzunluk;i++){

    if(string[i]=='+' || string[i]=='-'){
        return 0;
    }
    if(string[i]=='*' || string[i]=='/'){
        return 1;
    }
}
}
int parantez_kontrol_et(int uzunluk,char string[uzunluk]){
for(int i=0;i<uzunluk;i++){

   if(string[i]=='}'){
    return 1;
   }
}
return 0;
}
int while_kontrol_et(int uzunluk,char string[uzunluk]){

for(int i=0;i<uzunluk;i++){
    if(string[i]=='w' && string[i+1]=='h' && string[i+2]=='i' && string[i+3]=='l' && string[i+4]=='e'){
        return 1;
    }
    if(string[i]==';'){
        return 0;
    }
}
return 0;
}
void zaman_karmasikligi_hesapla(){
//logn n
FILE *file=fopen("input.txt","r");

if(file==NULL){
    printf("This code not opening the file.!");
    return;
}
else{

    int maximum_uzunluk=255;
    char satir[maximum_uzunluk];
    char satir2[maximum_uzunluk][maximum_uzunluk];
    int index =0;
    while(fgets(satir,maximum_uzunluk,file)){

        for(int i=0;i<strlen(satir);i++){

            satir2[index][i]=satir[i];


        }
        index++;
    }

fclose(file);
//Dosyadan okuduklarini diziye aktar
//For icinde for olan bir suru dongu arasindan aralarinda en fazla ic ice olani alip onu hesaplar
int for_sayisi=0;//Parantez kapanana kadarki for sayisi
int forlar[20]={0};//For sayilarini tutacak dizi
int for_index=0;//Forlar dizisinin üzerinde gezinecek index
int matris[20][2]={{0,0}};//n ve logn sayilarini tutacak matris
int matris_index=0;//matris uzerinde gezinecek index
int acik_parantez=0;//acik parantez sayisi
int kapali_parantez=0;//kapali parantez sayisi
int flag4=0;
for(int i=0;i<index;i++){

    //For dongusu kontrol ediliyor.

    if(for_kontrol_et(strlen(satir2[i]),satir2[i])){
        for_sayisi++;
        flag4=1;
        if(for_artis_kontrol_et(strlen(satir2[i]),satir2[i])){
            matris[matris_index][0]+=1;
        }
        else{
            matris[matris_index][1]+=1;
        }
        acik_parantez+=1;
        while(1){
            i++;
            if(parantez_kontrol_et(strlen(satir2[i]),satir2[i])){
                kapali_parantez+=1;
            }
            if(kapali_parantez==acik_parantez){
                forlar[for_index]=for_sayisi;
                for_index++;
                matris_index++;
                kapali_parantez=0;
                acik_parantez=0;
                for_sayisi=0;
                break;
            }
            if(for_kontrol_et(strlen(satir2[i]),satir2[i])){
                acik_parantez+=1;
                for_sayisi++;
            if(for_artis_kontrol_et(strlen(satir2[i]),satir2[i])){
                matris[matris_index][0]+=1;
            }
            else{
                matris[matris_index][1]+=1;
            }
            }

        }

    }
       // Do while dongusu kontrol ediliyor.
    else if(do_while_kontrol_et(strlen(satir2[i]),satir2[i])){
        int kontrol=1;
      while(1){
      i++;
      if(parantez_kontrol_et(strlen(satir2[i]),satir2[i])){
        break;
      }
      else{

        for(int v=0;i<strlen(satir2[i]);v++){

            if(satir2[i][v]=='+' && satir2[i][v+1]=='+'){
                printf("n\n");
                kontrol=2;
                break;
            }
            else if(satir2[i][v]=='-' && satir2[i][v+1]=='-'){
                printf("n\n");
                kontrol=2;
                break;
            }
            else if(satir2[i][v]=='*' && satir2[i][v+1]=='='){
                printf("logn\n");
                kontrol=2;
                break;
            }
            else if(satir2[i][v]=='/' && satir2[i][v+1]=='='){
                printf("logn\n");
                kontrol=2;
                break;
            }
        }
        if(kontrol==2)
                break;
      }
      }

    }
    else if(while_kontrol_et(strlen(satir2[i]),satir2[i])){

    int index2=i;
    int flag3=0;
    while(!parantez_kontrol_et(strlen(satir2[index2]),satir2[index2])){


        for(int i=0;i<strlen(satir2[index2]);i++){

            if((satir2[index2][i]=='+' && satir2[index2][i+1]=='+') || (satir2[index2][i]=='-' && satir2[index2][i+1]=='-')){

                flag3=1;

                break;
            }

            else if((satir2[index2][i]=='*' || satir2[index2][i]=='/') && satir2[index2][i+1]=='='){

                flag3=2;

                break;

            }

        }

        if(flag3==0){
            index2++;
        }
        else{
            if(flag3==1){
                printf("n\n");
                break;
            }
            else{
                printf("logn\n");
                break;
            }
        }
    }
}
    else if(recursive_kontrol_et(strlen(satir2[i]),satir2[i])){
        int flagging=0;
        while(1){
        for(int j=0;j<strlen(satir2[i]);j++){

            if(satir2[i][j]=='r' && satir2[i][j+1]=='e' && satir2[i][j+2]=='t' && satir2[i][j+3]=='u' && satir2[i][j+4]=='r' && satir2[i][j+5]=='n'){
                int x=j+5;
                int index;
                for(;x<strlen(satir2[i]);x++){
                    if(satir2[i][x]=='('){
                        index=x;
                        break;
                    }
                }
                for(int m=index;m<strlen(satir2[i]);m++){

                    if(satir2[i][m]=='*' || satir2[i][m]=='/'){
                        flagging=1;
                        printf("logn\n");
                        break;
                    }
                    if(satir2[i][m]=='+' || satir2[i][m]=='-'){
                        flagging=1;
                        printf("n\n");
                        break;
                    }
                }
            }
        }
        if(flagging==0){
            i++;
        }
        else{
            break;
        }
    }
    }
}
if(flag4==1){
int max=0,index5;

for(int i=0;i<for_index;i++){
    if(forlar[i]>max){
        max=forlar[i];
        index5=i;
    }
}
for(int i=0;i<matris[index5][0];i++){
    printf("logn*");
}
for(int i=0;i<matris[index5][1];i++){
    printf("n*");
}
printf("\n");
}

}
}
void gecen_zamani_hesapla(){

FILE *file=fopen("input.txt","r");

if(file==NULL){
    printf("This code not opening the file!");
    return;
}
else{

    int uzunluk=255;
    char satir[uzunluk];
    char dosya_icerisi[uzunluk][uzunluk];
    int index=0;
    while(fgets(satir,uzunluk,file)){
        for(int i=0;i<uzunluk;i++){
            dosya_icerisi[index][i]=satir[i];
        }
        index++;
    }
    fclose(file);
    //Yukarida dosyadan satirlar okunup diziye atanma islemi yapildi.

    FILE *file2=fopen("gecenzaman.c","w");
    int kontrol2=0;
    for(int i=0;i<index;i++){
        int kontrol=0;

        for(int j=0;j<strlen(dosya_icerisi[i]);j++){

            if(dosya_icerisi[i][j]=='i' && dosya_icerisi[i][j+1]=='n' && dosya_icerisi[i][j+2]=='t' && dosya_icerisi[i][j+3]==' ' && dosya_icerisi[i][j+4]=='m' && dosya_icerisi[i][j+5]=='a' && dosya_icerisi[i][j+6]=='i' && dosya_icerisi[i][j+7]=='n'){
                kontrol=1;
                fprintf(file2,"%s\n",dosya_icerisi[i]);
                fprintf(file2,"time_t basla,bit;\n");
                fprintf(file2,"time(&basla);\n");

            }
           else if(dosya_icerisi[i][j]=='r' && dosya_icerisi[i][j+1]=='e' && dosya_icerisi[i][j+2]=='t' && dosya_icerisi[i][j+3]=='u' && dosya_icerisi[i][j+4]=='r' && dosya_icerisi[i][j+5]=='n' && dosya_icerisi[i][j+6]==' ' && dosya_icerisi[i][j+7]=='0' && dosya_icerisi[i][j+8]==';'){
                kontrol=1;
                fprintf(file2,"time(&bit);\n");
                fprintf(file2,"float deger=difftime(bit,basla);\n");
                char strings[255]="printf(\"%f\",deger);\n";
                fprintf(file2,"%s\n",strings);
                fprintf(file2,"%s\n",dosya_icerisi[i]);
            }
            else if(dosya_icerisi[i][j]=='#'){
                kontrol=1;
                if(kontrol2!=1){
                fprintf(file2,"%s\n",dosya_icerisi[i]);
                fprintf(file2,"#include <time.h>\n");
                fprintf(file2,"#include <conio.h>\n");
                }
                kontrol2=1;
            }
        }

        if(kontrol==0){

            fprintf(file2,"%s\n",dosya_icerisi[i]);
        }
}
fclose(file2);
}
}

int main()
{
    printf("\n\n******Time and Memory Complexity Calculating******\n");
    printf("* 1)Calculate to Time Complexity                 *\n");
    printf("* 2)Calculate to Memory Complexity               *\n");
    printf("* 3)Calculate the Elapsed Time                   *\n");
    printf("* 4)Exit                                         *\n");
    printf("**************************************************\n                     Melih Selami Urkmez 200202010\n\n");

    printf("\nThe file was read successfully. It contains code blocks.\n\n");
    while(1){
        int value;
        printf("Please choose your option:");
        scanf("%d",&value);

        switch(value){

        case 1:
            printf("This code's time complexity:");
            zaman_karmasikligi_hesapla();
                break;
        case 2:
            dosyadan_oku();
            printf("This code's memory complexity:");
            for(int i=0;i<index;i++){
            printf("%c*",cok_boyutlu_dizi[i]);
            }
            printf("%d\n",toplam);
            printf("BigO Memory Complexity:");
            for(int i=0;i<index;i++){
                if(isalpha(cok_boyutlu_dizi[i])){
                    printf("%c*",cok_boyutlu_dizi[i]);
                }
            }
            printf("\n");
            break;
        case 3: gecen_zamani_hesapla();
        printf("A .c file has been created for the elapsed time. See the elapsed time to compile!\n");
        printf("File name's:gecenzaman.c\n");
         break;
        case 4:
             printf("Exited the program! Good Bye!");
         return 0;
        default:
                printf("This option not defined!\n");

        }

    }

    return 0;
}
