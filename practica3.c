//1.
//int main(){ 
//    int i,j; 
//    i = 1; 
//    j = 2; 
//    i++; 
//    j += i; 
//    return 0; 
//} 

//2.
//int main(){ 
//    short i,j; 
//    i = 1; 
//    j = 2; 
//    i++; 
//    j += i;
//    return 0; 
//} 

//3.
//int main(){
//    int a,b,c,d;
//    b = 2;
//    c = 3;
//    d = 4;
//    a = b+c*d;
//    a = (b+c)*d;
//    d = a;
//}

//4.
//int main(){
//    int x = 3;
//    char y = 'a';
//    int z;
//    z = x * y;
//}

//int main(){
//    int x = 3;
//    char y = 'a';
//    char z;
//    z = x * y;
//}

//5.
//int main(){
//    char a[3];
//    a[0] = 1;
//    a[1] = 2;
//    a[2] = 3;
//    return 0;
//}

//6.
int main() {
    int a[4] = {1, 2, 3, 4};
    int b[4] = {5, 6, 7, 8};
    int c[4]; 
    for (int i = 0; i < 4; i++) {
        c[i] = a[i] * b[i];
    }
}
