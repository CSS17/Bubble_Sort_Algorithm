#include <stdio.h>
#include <stdlib.h>

int sorted(int dizi[],int boyut){

    for(int i=0;i<boyut-1;i++){
        if(dizi[i]>dizi[i+1]){
            printf("Sirali degil\n");
        for(int i=0;i<boyut;i++){
            printf("%d ",dizi[i]);

        }
        printf("\n");
            return 1;
        }

    }
    printf("Siralandi\n");
    return 0;

}


void Bubble_Sort(int dizi[],int boyut){
    int tmp;


         for(int i=0;i<boyut;i++){
            int sonuc=sorted(dizi,boyut);
                if(sonuc){
                for(int j=0;j<boyut-1;j++){
                if(dizi[j]>dizi[j+1]){
                tmp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=tmp;
            }
        }
                }
                else
                    break;
            }


      printf("Dizinin Siralanmis Hali\n");


        for(int i=0;i<boyut;i++){
            printf("%d ",dizi[i]);

        }




}




int main()
{
    int dizi[]={5,4,3,2,1};
    int boyut=sizeof(dizi)/sizeof(sizeof dizi[0]);
    printf("Dizinin ilk hali\n");
    for(int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    printf("\n");
    Bubble_Sort(dizi,boyut);

}
