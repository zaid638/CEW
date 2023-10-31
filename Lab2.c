#include <stdio.h>

//### QS 01 ###
//int main() {
    
//int b,n,sum=0;    
//printf("Enter value: ");
//scanf("%d",&n);
//for(int a = 1; a <= n; a++ ){
//    b = 2*a - 1;
//    sum += b;
//    printf("%d ", b);
//    }
//printf("\nSum of num: %d",sum);

//    return 0;
//}




//int main() {
    
//int a=1,b,n,sum=0;    
//printf("Enter value: ");
//scanf("%d",&n);
//while(a <= n){
//    b = 2*a - 1;
//    sum += b;
//    printf("%d ", b);
//    a++;
//    }
//printf("\nSum of num: %d",sum);

//    return 0;
//}



//int main() {
    
//int a=1,b,n,sum=0;    
//printf("Enter value: ");
//scanf("%d",&n);
//do{
//    b = 2*a - 1;
//    sum += b;
//    printf("%d ", b);
//    a++;
//    }while(a <= n);
//printf("\nSum of num: %d",sum);

//    return 0;
//}




//### QS 02 ###
//int main() {
    
//int b,n;
//printf("Enter value: ");
//scanf("%d",&n);
//b = n-1;
//for(int a = 1; a<=n;a++){
//    for(int c = 1;c<=b;c++){
//        printf("%c", " ");
//    }    
//     for(int d = 1;d<=a;d++){
//         printf("%c ", "*");
//     }
//     printf("\n");
//     b--;
//     }
//     return 0;
// }



//### QS 03 ###
//int main() {
//    char str1[] = "javaa";
//    char str2[] = "java";
//
//   if (str1[0]!=str2[0])
//    {
//        printf("Not Equal");
//    }else {
//        for (int i = 0; i>=0; i++)
//        {
//            if (str1[i]!=str2[i])
//            {
//                printf("***Not Equal***");
//                break;
//            }
//            else if (str1[i]=='\0' && str2[i]=='\0')
//            {
//                printf("***Equal***");
//                break;
//            }       
//        }
//    }
//    return 0;
//}



//### QS 04 ###
//int main()
//{
//     char stat[]="I Am Zaid Ahamed";
//     for(int i=0;i<strlen(stat);i++){
//         if(stat[i]>='A' && stat[i]<='Z'){
//             stat[i]=stat[i]+32;
//         }
//         else if(stat[i]==' '){
//             continue;
//         }
//         else{
//             stat[i]=stat[i]-32;
//         }
//     };
//     printf("%s",stat);
//    return 0;
//}


//### QS 05 ###
//int main()
//{
//    int mynum[10] = {5,2,3,2,5,4,2,1,5,2};
//    int count = 0;
//    for (int i = 0; i < 10; i++){
//        count = 0;
//        for (int j = 0; j < 10; j++){
//            if (mynum[i]==mynum[j]){
//                count++;                
//            }
//        }
//        if (count==1)
//        {
//            printf("%d ",mynum[i]);
//        }        
//    }   
//    return 0;
//}



//### QS 06 ###
//int main()
//{   
//    struct Distance Dist1,Dist2;
//    printf("Enter the first distance:\n");
//    printf("Feet: ");
//    scanf("%d", &Dist1.feet);
//    printf("Inches: ");
//    scanf("%d", &Dist1.inch);

//    printf("\nEnter the second distance:\n");
//    printf("Feet: ");
//    scanf("%d", &Dist2.feet);
//    printf("Inches: ");
//    scanf("%d", &Dist2.inch);

//    printf("sum of two distances: %dfeet,%dinch", Dist1.feet+Dist2.feet,Dist1.inch+Dist2.inch);

//    return 0;
//}