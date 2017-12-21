#include <iostream>    //pag22
#include <cmath>

using namespace std;

void resolver(int h)
{
    double a;
    double b;
    h = sqrt(a*a+b*b);
    cout<<h;
}
int main()
{
    double a,b;
    int h;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"ingrese b:";
    cin>>b;
    resolver(h);

    return 0;
}




#include <iostream>                 //pag 23
#include <cmath>

using namespace std;

void resolver(int a,int b)
{

}
int main()
{
    int a=5;
    int b=3;

    int r = a-(a/b)*b;
    cout<<"residuo es: "<<r;
    return 0;
}




#include <iostream>        /// pag   24

using namespace std;

void resolver(int millas)
{
    int unmilla = 1609;
    int km = unmilla*millas;
    cout <<km;
}
int main()
{
    int millas,km;
    cout<<"ingrese millas:";
    cin>>millas;
    resolver(millas);
    return 0;
}




#include <iostream>       ///  pag  25

using namespace std;

void resolver(int metros)
{
    int decam = metros/10;
    int hectom = metros/100;
    int kilom = metros/1000;
    cout <<"decametro:  "<<decam<<"\n"<<"hectometro:  "<<hectom<<"\n"<<"kilometro:  "<<kilom<<"\n";
}
int main()
{
    int metros;
    cout<<"ingrese metros:";
    cin>>metros;
    resolver(metros);
    return 0;
}




#include <iostream>       ///pag 27
#include <cmath>

using namespace std;

void resolver(int b,int c, int alpha)
{
    int ang = alpha*3.14159/180;;
    int a = sqrt(b*b+c*c-2*b*c*cos(ang));
    cout <<a;
}
int main()
{
    int b,c,alpha;
    cout<<"ingrese :";
    cin>>b;
    cout<<"ingrese :";
    cin>>c;
    cout<<"ingrese :";
    cin>>alpha;
    resolver(b,c,alpha);
    return 0;
}



#include <iostream>       ///  pag  29
using namespace std;

void resolver(int a)
{
    if(a%2==0)
        cout<<"es par ";
    else
        cout<<"es impar ";
}

int main()
{
    int a;
    cout<<"ingrese :";
    cin>>a;
    resolver(a);
    return 0;
}




#include <iostream>       ///  pag  30
using namespace std;

void resolver(int a)
{
    int valor;
    if(a>0)
        valor = a;
    else
        valor = -a;
        cout<<valor;
}

int main()
{
    int a;
    cout<<"ingrese :";
    cin>>a;
    resolver(a);
    return 0;
}




#include <iostream>       ///  pag  32
#include <cmath>
using namespace std;

void resolver(int x)
{
    int y;
    if(x!=3)
    {
        y = pow(x,5)/x-3;
        cout<<y;
    }
    else
        cout<<"no se puede evaluar";
}

int main()
{
    int x;
    cout<<"ingrese :";
    cin>>x;
    resolver(x);
    return 0;
}




#include <iostream>       ///  pag  34
#include <cmath>
using namespace std;

void resolver(int a, int b, int c)
{
    int x1,x2,y1,y2;
    int disc = pow(b,2)-4*a*c;
    if(disc >= 0)
    {
        x1 = -b+sqrt(disc)/2*a;
        x2 = -b-sqrt(disc)/2*a;
        y1 = 0;
        y2 = 0;
    }
    else
    {
       x1 = -b/2*a;
       x2 = -b/2*a;
       y1 = sqrt(-disc)/2*a;
       y2 = -sqrt(-disc)/2*a;
    }

    cout<<"parte real: "<<x1<<endl;
    cout<<"parte real: "<<x2<<endl;
    cout<<"parte imaginaria: "<<y1<<endl;
    cout<<"parte imaginaria: "<<y2<<endl;
}

int main()
{
    int a,b,c;
    cout<<"ingrese :";
    cin>>a;
    cout<<"ingrese :";
    cin>>b;
    cout<<"ingrese :";
    cin>>c;
    resolver(a,b,c);
    return 0;
}




#include <iostream>       ///  pag  36
#include <cmath>
using namespace std;

void resolver(int a, int b, int c)
{
    int max = a;
    int min = b;
    if(a<b)
    {
        max = b;
        min = a;
    }
    if(max<c)
    {
        max = c;
    }
    if(c<min)
    {
        min = c;
    }

    int inter = (a+b+c)-(max+min);

    cout<<"intermedio es:"<<inter<<endl;
}

int main()
{
    int a,b,c;
    cout<<"ingrese :";
    cin>>a;
    cout<<"ingrese :";
    cin>>b;
    cout<<"ingrese :";
    cin>>c;
    resolver(a,b,c);
    return 0;
}





#include <iostream>       ///  pag  38
#include <algorithm>

using namespace std;

void resolver(int a, int b, int c)
{
    int max;
    if( a<b )
        max = a;
    else
        max = b;
    if(max < c)
        max = c;
    int s = (a+b+c)/2;

    if(s>max)
        cout<<"FORMA TRIANGULO EQUILATERO";
    else
        cout<<"NO FORMA TRIANGULO EQUILATERO";
}

int main()
{
    int a,b,c;
    cout<<"ingrese :";
    cin>>a;
    cout<<"ingrese :";
    cin>>b;
    cout<<"ingrese :";
    cin>>c;
    resolver(a,b,c);
    return 0;
}



#include <iostream>       ///  pag  40
using namespace std;

void resolver(int n)
{
    int numero;
    char signo;
    int magnitud,entero,fraccion;
    if(numero>0)
        signo = "+";
    else if
        signo = " ";
    else
        signo = "-";
    magnitud = numero;
    entero = magnitud;
    fraccion = magnitud-entero

    cout<<"signo: "<<signo;
    cout<<"entero: "<<entero;
    cout<<"fraccion: "<<fraccion;

}

int main()
{
    int n;
    cout<<"ingrese valor:";
    cin>>n;
    resolver(n);
    return 0;
}



#include <iostream>       ///pag 44
using namespace std;

void resolver(int n)
{
    int suma = 0;
    int i = 1;
    while(i<=n)
    {
        suma = suma +(2*i-1);
        i = i +1;
    }
    cout<<suma;
}
int main()
{
    int n;
    cout<<"ingrese valor :";
    cin>>n;
    resolver(n);
    return 0;
}



#include <iostream>       ///pag 45

using namespace std;

void resolver(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a = a -b;
        else
            b = b -a;
    }
    cout<<b;
}
int main()
{
    int a,b;
    cout<<"ingrese valor :";
    cin>>a;
    cout<<"ingrese valor :";
    cin>>b;
    resolver(a,b);
    return 0;
}



#include <iostream>       ///pag 46
using namespace std;

void resolver(int a, int b)
{
    int r;
    while(a&&b!=0)
    {
        r = a,b;
        a = b;
        b = r;
    }
    cout<<b;
}
int main()
{
    int a,b;
    cout<<"ingrese valor n :";
    cin>>a;
    cout<<"ingrese valor n :";
    cin>>b;
    resolver(a,b);
    return 0;
}





#include <iostream>       ///pag 47        

using namespace std;

void resolver(int a, int b)
{
    int r;
    while(a%b!=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout<<b;
}
int main()
{
    int a,b;
    cout<<"ingrese valor n :";
    cin>>a;
    cout<<"ingrese valor n :";
    cin>>b;
    resolver(a,b);
    return 0
}




#include <iostream>       ///pag 48 
using namespace std;

void resolver(int n)
{
    int flag
    int i = n/2;
    flag = true;
    while(i>1&&true)
    {
        if(n%i==0)
            flag = false;
        i = i - 1;
    }
    if(true)
        cout<<"es primo";
    else
        cout<<"no es primo";
}
int main()
{
    int n;
    cout<<"ingrese valor n :";
    cin>>n;
    resolver(n);
    return 0;
}




#include <iostream>       ///pag 50
using namespace std;

void resolver(int a,int b)
{
    int suma = 0;
    while(b>0)
    {
        if(b%2)==1)
            suma = suma + a;
        a = 2*a;
        b = b/2;
    }
    cout<<"suma= "<<suma;
}
int main()
{
    int a,b;
    cout<<"ingrese valor n :";
    cin>>a;
    cout<<"ingrese valor n :";
    cin>>b;
    resolver(a,b);
    return 0;
}




#include <iostream>      ///pag 52
using namespace std;

void resolver(int x)
{
    int suma = 1;
    int i = 1;
    int t = 1;
    while(i<=15 && t>0.001)
    {
        t = (t*x)/i;
        suma = suma + t;
        i = i + 1;
    }
    cout<<"suma= "<<suma;
}
int main()
{
    int x;
    cout<<"ingrese valor n :";
    cin>>x;
    resolver(x);
    return 0;
}



///"ESTE PPROGRAMA ES PARA DETERMINAR LA RAIZ APLICANDO EL ALGORITMO DE NEWTON"
#include <iostream>         ///pag 54
#include <cmath>

using namespace std;

void resolver(int n)
{
    int x1;
    int x;
    x1 = 1;
    while (true)
    {
        x = x1;
        x1 = 0.5*(x+(n/x));
        if (abs(x-x1)<=0.001)
            break;
    }

    cout<<"la interseccion es "<<x1;
}
int main()
{
    int n;
    cout<<"ingrese valor n :";
    cin>>n;
    resolver(n);
    return 0;
}


///LA SUMA DE LOS N PRIMEROS ENTEROS
#include <iostream>     ///pag 55
#include <cmath>

using namespace std;

void resolver(int n)
{
    int suma = 0;
    for(int i = 0;i<n;i++)
    {
        suma = suma + i;
    }

    cout<<suma;
}
int main()
{
    int n;
    cout<<"ingrese valor n :";
    cin>>n;
    resolver(n);
    return 0;
}




///LA SUMA DE LOS PRIMEROS ENTEROS CUADRADOS
#include <iostream>     ///pag 56
#include <cmath>

using namespace std;

void resolver(int n)
{
    int suma = 0;
    for(int i = 0;i<n;i++)
    {
        suma = suma + pow(i,2);
    }

    cout<<suma;
}
int main()
{
    int n;
    cout<<"ingrese valor n :";
    cin>>n;
    resolver(n);
    return 0;
}



///LA SUMA DE LOS PRIMEROS ENTEROS CUADRADOS
#include <iostream>     ///pag 57
#include <cmath>

using namespace std;

void resolver(int n)
{
    int suma = 1;
    for(int i = 0;i<n;i++)
    {
        suma = 2*suma;
    }

    cout<<suma;
}
int main()
{
    int n;
    cout<<"ingrese valor n :";
    cin>>n;
    resolver(n);
    return 0;
}




#include <iostream>     ///pag 59
#include <cmath>

using namespace std;

int total = 0;
int contador = 0;
void resolver(int numero)
{

    while(contador<numero)
    {
        int pago;
        int horas;
        cout<<"ingrese horas   ";
        cin>>horas;
        int salario;
        cout<<"ingrese salario  ";
        cin>>salario,

        pago = horas*salario;
        contador = contador+1;
        cout<<"pago   "<<pago<<endl;
    }

    cout<<"total   "<<total;
}
int main()
{

    int numero;
    cout<<"ingrese valor n   ";
    cin>>numero;
    resolver(numero);
    return 0;
}




#include <iostream>     ///pag 61
#include <cmath>

using namespace std;

int total = 0;
int contador = 0;
void resolver(int n,int m)
{
    int x = 1;
    int y = 1;
    for(int i=0;i<n;i++)
    {
        x=x*(n+1-i);
        y=y*i;
    }
    int coef = x/y;
    cout<<"coeficiente  "<<coef;
}
int main()
{

    int n,m;
    cout<<"ingrese valor n   ";
    cin>>n;
    cout<<"ingrese valor m  ";
    cin>>m;
    resolver(n,m);
    return 0;
}




#include <iostream>     ///pag 63
#include <cmath>

using namespace std;


void pitagoras()
{
    for(int n=1;n<99;n++)
    {
        for(int m=n+1;m<100;m++)
        {
            int a = pow(m,2)-pow(n,2);
            int b = 2*m*n;
            int h = pow(m,2)+pow(n,2);

            if(h<=100)
                cout<<a<<" "<<b<<" "<<h<<endl;
        }
    }

}
int main()
{
    pitagoras();
}






#include <iostream>     ///pag 65
#include <cmath>

using namespace std;
int calcArea(float radio)
{
    int a = 3.14159*pow(radio,2);
    cout<<a;
    return a;
}
int main()
{
    float radio;
    cout<<"ingrese radio  ";
    cin>>radio;
    calcArea(radio);
    return 0;
}



#include <iostream>     ///pag 67
#include <cmath>

using namespace std;
int calcArea(float r1, float r2)
{
    int as = r2-r1;
    cout<<as;
}
int main()
{
    float r1,r2;
    cout<<"ingrese r1 ";
    cin>>r1;
    cout<<"ingrese r2  ";
    cin>>r2;
    calcArea(r1,r2);
    return 0;
}



#include <iostream>     ///pag 68
#include <cmath>

using namespace std;
int esPerfecto(int n)
{
    int y;
    int suma = 0;
    for(int i=1;i<n/2;i++)
    {
        if(n,i==0)
            suma = suma + i;
    if(suma==n)
    {
        y =true;
    }
    else
        y =  false;

    return y;
    }

}
int main()
{
    int n ;
    for(int n=1;n<=100;n++)
    {
        if(n)
            cout<<n<<" ";
    }
    return 0;
}




#include <iostream>     ///pag 71

using namespace std;
int esBiciesto(int n)
{
    int y;
    if((n,4)==0 && (n,100)!= 0 || (n,400)==0)
        y = true;
    else
        y = false;
}
int main()
{
    for(int n=1;n<=2000;n++)
    {
        if(n)
            cout<<n<<" ";
    }
}




#include <iostream>     ///pag 73

using namespace std;
int clases(char c)
{
    if(c=='D')
        cout<<"destructor";
    else if(c=='F')
        cout<<"fragata";
    else if(c=='M')
        cout<<"misilera";
    else if(c=='B')
        cout<<"buque";
    else
        cout<<"no existe";
}
int main()
{
    char c;
    cin>>c;
    clases(c);
}



#include <iostream>     ///pag 75

using namespace std;
int factorial(int n)
{
    int producto = 1;
    for(int i=1;i<n;i++)
    {
        producto=producto*i;
    }
    return producto;
}
int main()
{
    int n;
    cout<<"ingrese un valor:";
    cin>>n;
    int f=factorial(n);
    cout<<"factorial:"<<f;
}




#include <iostream>     ///pag 78

using namespace std;
int fibonacci(int n)
{
    int y,x;
    if(n==0 || n==1)
        return n;
    else
        x=1;
        y=1;
        for(int i=2;i<n;i++)
        {
            y=y+x;
            x=y-x;
        }
    return y;
}
int main()
{
    int n;
    cout<<"ingrese un numero :  ";
    cin>>n;
    int f=fibonacci(n);
    cout<<"fibonacci:   "<<f;
}




#include <iostream>     ///pag 80  falta  resolverj

using namespace std;
int horner(int a,int k)
{
    int y = 1;
    int b;
    while(k>0)
    {
        if((k,2)==1)
            y=y*a;
        a=a*a;
        b=b/2;
    }
    return y;
}
int main()
{
    int a,k;
    cout<<"ingrese un numero :  ";
    cin>>a;
    cout<<"ingrese un numero :  ";
    cin>>k;
    int h = horner(a,k);
    cout<<"horner:  "<<h;
}



#include <iostream>     ///pag 82

using namespace std;
int inversa(int numero)
{
    int result =0;
    while(numero>0)
    {
        int digito = numero%10;
        result =result*10+digito;
        numero =numero/10;
    }
    cout<<result;
}
int main()
{
    int numero;;
    cout<<"ingrese un numero :  ";
    cin>>numero;
    inversa(numero);
}



#include <iostream>     ///pag 83
#include <cmath>

using namespace std;
int cubic(int a)
{
    int x,x1;
    x1=1;
    do{
        x=x1;
        x1=(2*x+(a/pow(x,2)))/3;

      }while(abs(x-x1)<=0.001);

    return x1;
}
int main()
{
    int a;
    cout<<"ingrese un numero :  ";
    cin>>a;
    int c = cubic(a);
    cout<<c;
}




#include <iostream>     ///pag 85
#include <cmath>

using namespace std;
int power(int a,int b)
{
    int producto;
    int n=abs(b);
    producto =1;
    int i=1;
    while(i<=n)
    {
        producto=producto*a;
        i=i+1;
    }
    if(b<0)
        producto=1/producto;
        return producto;
}
int main()
{
    int a,b;
    cout<<"ingrese un numero a :  ";
    cin>>a;
    cout<<"ingrese un numero b :  ";
    cin>>b;
    int p = power(a,b);
    cout<<p;
}


#include <iostream>     ///pag 87

using namespace std;
int sociedad(int n1,int n2)
{
    int x,y,z;
    x=n1*2;
    x=x+5;
    y=x*50;
    y=y+n2;
    z=y+365;
    z=z-615;
    return z;
}
int main()
{
    int n1,n2;
    cout<<"ingrese un numero n1:  ";
    cin>>n1;
    cout<<"ingrese un numero n2:  ";
    cin>>n2;
    int s=sociedad(n1,n2);
    cout<<s;
}



#include <iostream>     ///pag 89
#include <cmath>

using namespace std;
int complejo(int a, int b,int n)
{
    int rho,ang,angn,rhon;

    rho = sqrt(pow(a,2)+pow(b,2));
    ang = asin(b/rho);
    rhon = pow(rho,n);
    angn =  n * ang;
    int an = rhon * cos(angn);
    int bn = rhon * sin(angn);

    cout<<an<<"\t"<<bn;
}
int main()
{
    int a,b,n;
    cout<<"ingrese un numero a:  ";
    cin>>a;
    cout<<"ingrese un numero b:  ";
    cin>>b;
    cout<<"ingrese un numero n:  ";
    cin>>n;
    complejo(a,b,n);
}




#include <iostream>     ///pag 91
#include <cmath>

using namespace std;
int trap(int a,int b,int n, double f)
{

    int h = (b-a)/n;
    int suma = 0;

    for(int i=0;i<n;i++)
    {
        int x=a+i*h;
        suma=suma+f;
    }

    int t=0.5*h*a+b+2*suma;
    return t;
}
int main()
{
    int a=0,b=3.14159,n;
    cout<<"ingrese un numero n:  ";
    cin>>n;
    double x;
    cout<<"ingrese x   ";
    cin>>x;
    double f = pow(x,2)*sin(x);////f(x)
    int t=trap(a,b,n,f);
    cout<<"area del trapezoide   "<<t;
}




#include <iostream>     ///pag95
#include <vector>

using namespace std;
void Vleer(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
    }
}
void Vlee(int b[],int n)
{
    for(int i=1;i<n;i++)
    {
        cin>>b[i];
    }
}
int Vproducto(int a[],int b[],int n)
{
    int suma =0;
    for(int i=1;i<n;i++)
    {
        suma = suma+a[i]*b[i];
    }
    return suma;
}
int main()
{
    int n,i;
    int a,b;
    cout<<"ingrese tama+o: ";
    cin>>n;
    Vleer(a,n);
    Vlee(b,n);
    int p = Vproducto(a[i],b[i],n);
    cout<<p;

    return 0;
}



#include <iostream>    /// //pag 97
#include <cmath>

using namespace std;
int prom;
int i;
int media(int x[],int n)
{
    int suma = 0;
    for(int i=1;i<n;i++)
    {
        suma=suma+x[i];
    }1
    prom = suma/n;
    return prom;
}

int dts(int x[],int n)
{
    int suma = 0;
    prom = media(x,n);

    for(int i=1;i<n;i++)
    {
        suma=suma+pow((x[i]-prom),2);
    }
    int desv = sqrt(suma/n);
    return desv;
}

int Vleer(int x,int n)
{
    for(int i=1;i<n;i++)
    {
        cout<<media(x,n);
        cout<<dts(x,n);
    }
}
int main()
{
    int n;
    cin>>n;

}



