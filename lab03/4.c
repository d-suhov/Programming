int main() {
int a=1234;
int n=5;
int result;
int a1=a/1000;
int a2=a/100%10;
int a3=a/10%10;
int a4=a%10;
result=a4+a3*n+a2*n*n+a1*n*n*n;
    return 0;
}