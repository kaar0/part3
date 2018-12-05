#include <stdio.h>
#include <stdlib.h>
//void  threegreylevels(int image[]);
void fourgreylevels(int image[], int numar);
//void twogreylevels(int image[]);
int numar;
int p1, p2, p3, p4;
void calculpixeli(int image[]);
int gh, gp, gv, gn;
//void maxim(void);
int main(){
    
    FILE *img1;
    img1 = fopen("/Users/kb00709/Desktop/Balloon.run", "r");
    int greylevelvalue;
    int image[1600];
    
    //int a;
    int x;
    if (img1 == NULL){
        printf("Error Reading File\n");
        exit (0);
    }
    
    for (x= 0; x < 1600; x++){
        fscanf(img1, "%d", &image[x] );
        if (image[x]==0 && image[x+1]==0){
            x=1600;
        }
        numar++;
    }
    greylevelvalue=image[2];
    
    int i=3;
    
    while(i<numar-4){
        p1=image[i];
        p2=image[i+2];
        p3=image[i+4];
        p4=image[i+6];
        calculpixeli(image);
       // maxim();
        //printf("max este %d", maxim);
        printf("p1 este %d", p1);
        image[i]=p1;
        i+=2;
    }
   /* if (greylevelvalue==3){
        
        threegreylevels(image);
    }
    
    if (greylevelvalue==2){
        
        twogreylevels(image);
    }
    */
    
    if (greylevelvalue>3){
        
        fourgreylevels(image, numar);
        
    }
    return 0;
}
void fourgreylevels(int image[], int numar) {
    int a, j, count, i;
    count=0;
    i=3;
    for (i = 0; i < numar+1; i++){
        printf("%d", image[i]);
        
    }
    
    
    printf("\n");
   
    for (i=3; i<numar; i+=2){
        
        if(image[i]==0){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf("#");
                count++;
                
            } }
        if(image[i]==1){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(":");
                count++;
            } }
        if(image[i]==2){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(".");
                count++;
                
            }
            
        }
        if(image[i]==3){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(" ");
                count++;
                
            }
            
        }
        
        
        
    } }
void calculpixeli(int image[]){
        gh=abs((p1-p2+p3-p4)/2);
        gp=abs(p1-p4);
        gv=abs((p1-p3+p2-p4)/2);
        gn=abs(p2-p3);
    p1=gh;
    if(gp>p1){
        p1=gp;
    }
    if(gv>p1){
        p1=gv;
    }
    if(gn>p1){
        p1=gn;
    }
    }
    

