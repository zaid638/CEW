//Question 01

//int main() {
//    int ID;
//    float worked_hours;
//    float amount_per_hour;
//    printf("Enter employee ID: ");
//    scanf("%d",&ID);
//   printf("Enter worked hours: ");
//    scanf("%f",&worked_hours);    
//    printf("Enter amount per hour: ");
//    scanf("%f",&amount_per_hour);
//    
//    printf("ID is = %d\n",ID);
//    printf("Salary is = %.2f$",worked_hours*amount_per_hour);
//    
//    return 0;
//}


//Question 02

//int main() {
//    int height;
//    int width;
//    printf("Enter height: ");
//    scanf("%d",&height);
//    printf("Enter width: ");
//    scanf("%d",&width);    
//
//    printf("Perimtere of rectangle is = %d\n",(height+width));
//    printf("Area of rectangle is = %d",height*width);
//    
//    return 0;
//}



//Question 03

//int main() {
//    int height;
//    printf("Enter height in cm: ");
//    scanf("%d",&height);
//    
//    if(height < 150) {
//        printf("Dwarf");
//    }else if (height == 150) {
//        printf("Average");
//    }else if (height >= 165) {
//        printf("Tall");
//    }
//    
//    return 0;
//}


//Question 04

//int decimal_to_binary(num){
//    int dec = num,bin=0,rem=0,place=1;
//    while(dec){
//        rem=dec%2;
//        dec=dec/2;
//        bin=bin + (rem*place);
//        place=place*10;
//    }
//    return bin;
//}
//int main(){
//    printf("DECIMAL TO BINARY CONVERTER\n\n");
//    int num;
//    printf("ENTER A DECIMAL NUMBER: ");
//    scanf("%d",&num);
//    printf("BINARY EQUIVALENT: %d",decimal_to_binary(num));
//    return 0;
//}



//Question 05

//int fab(a,b,num){
//    int x=a,y=b,z,n=num;
//    if (n==0)
//        return 0;
//    else{
//        z=x+y;
//        printf("%d ",z);
//        return fab(y,z,n-1);
//    }    
//}
//int main(){
//    int a=0,b=1,num;
//    printf("Enter range  of fibonacci series: ");
//    scanf("%d",&num);
//    fab(a,b,num);
//        
//}