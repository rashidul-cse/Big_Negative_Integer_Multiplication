#include<cstdio>
#include<cstring>
using namespace std;
  int arr[1000][1000],arr1[10000];
int main(){
    char chup[1000],chdo[1000],ach2,ch1[10000],ch2[10000];

int len1,len2,i,j,len3,multi,carry=0,pos,l,le,zoog=0,beog=0;
scanf("%s%s",&ch1,&ch2);
l=1;
if(ch1[0]!='-'&&ch2[0]!='-'){
        strcpy(chup,ch1);
         strcpy(chdo,ch2);

 len1=strlen(chup);
len2=strlen(chdo);
len3=len1+len2;
pos=len3+1;
le=len3+1;
printf("Multiple=%d Multiplier=%d Total Number of Multiple & Multiplier=%d",len1,len2,len3);
for(int i=len2-1;i>=0;i--){

    for(int k=len1-1;k>=0;k--){
        multi=(chup[k]-48)*(chdo[i]-48)+carry;
        if(multi<10){
        arr[l][pos]=multi;
         pos--;
        carry=0;}
        else{
                if(k==0){
                arr[l][pos]=multi%10;
                pos--;
                 arr[l][pos]=multi/10;
                 carry=0;
                }else{
           arr[l][pos]=multi%10;
           carry=multi/10;
           pos--;}
        }

    }
    pos=len3--;
    l++;
}
}
else if(ch1[0]=='-'&&ch2[0]=='-'){
        zoog=1;
        strcpy(chup,ch1);
         strcpy(chdo,ch2);
len1=strlen(chup);
len2=strlen(chdo);
len3=len1+len2;
pos=len3+1;
le=len3+1;
printf("Multiple=%d Multiplier=%d Total Number of Multiple & Multiplier=%d",len1,len2,len3);
    for(int i=len2-1;i>=1;i--){

    for(int k=len1-1;k>=1;k--){
        multi=(chup[k]-48)*(chdo[i]-48)+carry;
        if(multi<10){
        arr[l][pos]=multi;
         pos--;
        carry=0;}
        else{
                if(k==1){
                arr[l][pos]=multi%10;
                pos--;
                 arr[l][pos]=multi/10;
                 carry=0;
                }else{
           arr[l][pos]=multi%10;
           carry=multi/10;
           pos--;}
        }

    }
    pos=len3--;
    l++;
}
}else if(ch1[0]=='-'||ch2[0]=='-'){
    beog=1;
    if(ch1[0]=='-'){
        strcpy(chdo,ch1);
        strcpy(chup,ch2);
    }else {
     strcpy(chup,ch1);
         strcpy(chdo,ch2);
    }
    len1=strlen(chup);
len2=strlen(chdo);
len3=len1+len2;
pos=len3+1;
le=len3+1;
printf("Multiple=%d Multiplier=%d Total Number of Multiple & Multiplier=%d",len1,len2,len3);
for(int i=len2-1;i>=1;i--){

    for(int k=len1-1;k>=0;k--){
        multi=(chup[k]-48)*(chdo[i]-48)+carry;
        if(multi<10){
        arr[l][pos]=multi;
         pos--;
        carry=0;}
        else{
                if(k==0){
                arr[l][pos]=multi%10;
                pos--;
                 arr[l][pos]=multi/10;
                 carry=0;
                }else{
           arr[l][pos]=multi%10;
           carry=multi/10;
           pos--;}
        }

    }
    pos=len3--;
    l++;
}
}
printf("\n");
 printf("\n");
 if(zoog==1||beog==1)
    len2=len2-1;
for(int d=1;d<=len2;d++){
    for(int dd=2;dd<=le;dd++){
            if(arr[d][dd]==0)
            printf(" ");
            else
        printf("%d",arr[d][dd]);
    }

    printf("\n\n");
}
printf("--------------------------------------------------------------\n");
int sum=0,carry1=0,sum2=0,last=2;
for(int k=le;k>=2;k--){
    for(int l=1;l<=len2;l++){
        sum=sum+arr[l][k];

    }
    sum2=sum+carry1;
    sum=0;
    if(sum2<10){
            arr1[k]=sum2;
     carry1=0;}
     else{
     arr1[k]=sum2%10;
        carry1=sum2/10;
     }

}
if(zoog==1){
    for(int k=4;k<=le;k++){
        if(arr1[k]==0&&k==4)
        printf("");
    else
      printf(" %d",arr1[k]);
}}
else if(beog==1){
        printf("-");
    for(int k=3;k<=le;k++){
        if(arr1[k]==0&&k==3)
        printf(" ");
    else
      printf("%d",arr1[k]);
}
}
else{
for(int k=2;k<=le;k++){
        if(arr1[k]==0&&k==2)
        printf("");
    else
      printf(" %d",arr1[k]);
}
}

}


