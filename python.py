import math  #pag22

a=input("ingrese valor")
b=input("ingrese valor")

h = math.sqrt(a*a+b*b)

print h,




import math   #pag 23
a=input("ingrese valor")
b=input("ingrese valor")

r = a-(a/b)*b

print r,



#pag24

millas = input("ingrese valor")
kmpormilla = 1609
km =kmpormilla*millas
print km




#pag25

metros = input("ingrese valor")
decam =metros/10
hectom=metros/100
kilom=metros/1000

print "decametro:", decam
print "hectometro:", hectom
print "kilometro:", kilom



#pag 27

import math
b=input("ingrese valor")
c=input("ingrese valor")
alpha=input("ingrese valor")

ang =alpha*3.14159/180
a=math.sqrt(b*b+c*c-2*b*c*math.cos(ang))
print a,



#pag  29

a = input("ingrese valor")
if(a%2==0):
	print "es par"
else:
	print "es impar"
	
  
	
#pag 30

a = input("ingrese valor")
if(a>0):
	valor = a
else:
	valor = -a
print valor



#pag  31

c = input("ingrese valor")
if(c>=0 and c<=9):
	print "es digito"
else:
	print "no es digito"



#pag 33

x = input("ingrese valor x")
if(x!=3):
	y = pow(x,5)/(x-3)
	print y
else:
	print "no se puede calcular"



#pag 34
import math
a = input("ingrese valor ")
b = input("ingrese valor ")
c = input("ingrese valor ")
disc=pow(b,2)-4*a*c*c-2*b*c

if(disc >=0):
	x1=(-b+math.sqrt(disc))/2*a
	x2=(-b-math.sqrt(disc))/2*a
	y1=0
	y2=0
else:
	x1=-b/2*a
	x2=-b/2*a
	y1=math.sqrt(-disc)/2*a
	y2=-math.sqrt(-disc)/2*a
	
print "parte real", x1, "\t",x2
print "parte imaginaria", y1, "\t",y2,



#pag37

print  
print "ESTE PROGRAMA HALLA EL VALOR INTERMEDIO DE TRES VALORES"
a = input("ingrese a = ")
b = input("ingrese b = ")
c = input("ingrese c = ")
if a < b:
	max = b
	min = a
if max < c:
	max = c
if c < min:
	min = c
inter = (a+b+c)-(max + min)
print "intermedio es : ", inter



#pag39
print 
print "ESTE PROGRAMA TE DICE SI FORMAN UN TRIANGULO O NO"
a = input("ingrese a = ")
b = input("ingrese b = ")
c = input("ingrese c = ")
if a>b:
	max = a
else:
	max = b
if max < c:
	max = c
s = (a+b+c)/2
if s > max:
	print "FORMAN TRIANGULO"
else:
	print "NO FORMAN TRIANGULO"
  
  
  
  
#pag41

print     
print "ESTE PROGRAMA EDINTIFICA DE UN NUMERO REAL EL SIGNO LA MAGNITUD Y LA FRACCION"
n = input("ingrese n = ")
if n > 0:
	signo = '+'
elif n == 0:
	signo = ''
else:
	signo = '-'
magnitud = float(abs(n))
entero = int(abs(magnitud))
fraccion = magnitud - entero
print
print "el signo es: ",signo," el entero es: ",entero," la fraccion es: ",fraccion



#pag43

print   
print "ESTE PROGRAMA EVALUA EL CUADRADO DE N"
n = input("ingrese n = ")
suma = 0
i = 1
while i<=n:
	suma = suma + (2*i-1)
	i = i + 1
print "la suma de cuadrados es ",suma


print  #pag45
print "ESTE PROGRAMA SACA EL MAXIMO COMUN DIVISOR DE DOS NUMEROS"
a = input("ingrese a = ")
b = input("ingrese b = ")
while a != b:
	if a>b:
		a = a - b
	else:
		b = b -a
print "el MCD es ",b



#pag47

print 
print "ESTE PROGRAMA SACA EL RESIDUO DE DO NUMEROS"
a = input("ingrese a = ")
b = input("divido entre = ")
while (a % b)!= 0:
	r = (a % b)
	a=b
	b = r
print "el reciduo es ",b



#pag 56

print
print "ESTE PROGRAMA SUMA LOS PRIMERO N NUMEROS ENTEROS"
n = input("ingerse el valor de n = ")
suma = 0
for i in range(0,n+1):
	suma = suma + i
print "la suma es ",suma

#paG57
print
print "ESTE PROGRAMA SUMA LOS PRIMERO N NUMEROS elevados al cuadrado"
n = input("ingerse el valor de n = ")
suma = 0
for i in range(0,n+1):
	suma = suma + (i*i)
print "la suma es ",suma



#PAG 58
print
print "ESTE PROGRAMA EVAL. 2 ALA N ITERATIVAMENTE"
n = input("ingerse el valor de n = ")
suma = 1
for i in range(1,n+1):
	suma = 2*suma
print "la suma es ",suma



#PAG 60
print
print "ESTE PROGRAMA CALCULA EL SALARIO DE LOS N EMPLEADOS "
total = 0
contador = 0
numero = input("ingrese el numero de empleados: ")
while contador < numero:
	horas = input("ingrese horas: ")
	salario = input("ingrese salario: ")
	pago = horas * salario
	total = total + pago
	contador = contador + 1
	print "el pago es: ",pago
print "el total es: ",total



#PAG 62
n = input("ingrese n = ")
m = input("ingrese m = ")
x=1
y=1
for i in range(1,m):
	x = x*(n+1-i)
	y = y*i
coef = x/y
print "el coeficiente es: ",coef

#PAG 64
for n in range(1,99):
	for m in range((n+1),100):
		a = (m*m)-(n*n)
		b = 2*m*n
		h = (m*m)+(n*n)
		if h <= 100:
			print "valores",a ,b ,h
		
		
#PAG 66
radio=input("ingrese radio: ")
a = 3.14159*radio**2
print a

#PAG 67

r1=input("ingrese radio: ")
r2=input("ingrese radio: ")
a = r2-r1
print a


# PAG 69
def es_perfecto(n):
	suma = 0
	for i in range(1,(n/2)):
		if (n%i==0):
			suma=suma+i
	if (suma==n):
	    return true
	else:
	    return false

def main():
	for n in range(1,101):
		if(es_perfecto(n)):
			print n,

			
#PAG 71
def es_biciesto(n):

	if (4==0 and 100!=0 or 400==0):
		y = true
	else:
		y = false	
	return y
def main():
	for n in range(2001):
		if(es_biciesto(n)):
			print es_biciesto(n),
			
			
#PAG 74

c=input("ingrese")
if c == 'D':
	print "Destructor"
elif c=='F':
	print "Fragata"
elif c=='M':
	print "Misilera"
elif c=='B':
	print "Buque"
else:
	print "no existe",
	
#PAG 76

def factorial(n):
	producto =1
	for i in range(1,n):
		producto =producto*i
	return producto
	
n = input("ingrese n")
f=factorial(n)
print f


#PAG 79
def fibonacci(n):
	if n==0 or n==1:
		return n
	else:
		x=1
		y=1
		for i in range(2,n):
			y=y+x
			x=y-x
		return y
		
n = input("ingrese valor")
f=fibonacci(n)
print f


#PAG 81
def horner(a,k):
	y=1
	while k>0:
		if k%2==1:
			y=y*a
		a=a*a
		b=b/2
	return y

a=input("ingre a")
k=input("ingre k")
h=horner(a,k)
print h,


#PAG 82
def inversa(numero):
	result = 0
	while numero>0:
		digito=numero%10
		result=result*10+digito
		numero=numero/10
	return result
	
numero=input("ingrese valor")
i=inversa(numero)
print i,

#PAG 84
import math

def cubic(a):
	x1=1
	while True:
		x=x1
		x1=((2*x+(a/pow(x,2)))/3)
		if abs(x-x1)<=0.001:
a=input("ingrese")				
c=cubic(a)
print c,

#PAG 85
import math

def power(a,b):
	n = abs(b)
	producto=1
	i=1
	while i<=n:
		producto=producto*a
		i=i+1
	if b<0:
		producto=1/producto
	return producto
	
a=input("ingrese valor")
b=input("ingrese valor")
p = power(a,b)
print p,

#PAG 87
def sociedad(n1,n2):
	x=n1*2
	x=x+5
	y=x*50
	y=y+n2
	z=y+365
	z=z-615
	return z
	
n1=input("ingrese")
n2=input("ingrese")

s=sociedad(n1,n2)
print s,

#PAG 89
import math
a=input("ingrese ")
b=input("ingrese ")
n=input("ingrese ")

rho=math.sqrt(a*a+b*b)
ang= math.asin(b/rho)
rhon = pow(rho,n)
angn=n*ang
an=rhon*math.cos(angn)
bn=rhon*math.sin(angn)
	
print an
print bn

#PAG 91
import math
x=input("ingrese ")
n=input("ingrese ")
a=0
b=3.14159
f=pow(x,2)*math.sin(x)
h=(b-a)/n
suma=0
for i in range(1,n-1):
	x=a+i*h
	suma=suma+f
t=0.5*h*(a+b+2*suma)
print t

#PAG 94
a=input("ingrese valor")
b=input("ingrese valor")
n=input("ingrese valor")
v=[]
for i in range(1,n):
	v.append(a)
for i in range(1,n):
	v.append(b)
suma=0
for i in range(1,n):
	suma=suma+(a)*(b)
	
print suma

#PAG 98
v=[]
def media(v,n):
	suma=0
	for i in range(1,n):
		suma= suma + v.append(i)
	prom=suma/n
	return prom
	
def dst(v,n):
	suma=0
	prom=media(x,n)
	for i in range(1,n):
		suma=suma+pow((v.append(i)-prom),2)
		
	desv=math.sqrt(suma/n)
	return desv
	
def main():
	n=input("ingrese valor n  ")
	v=input("ingrese x  ")
	print media(v,n)
	print dst(v,n)

	
	#PAG 103
n=input("tama+o de matriz   ")
matriz=[]
for i in range(1,n):
	for j in range(1,n):
		if i==j:
			matriz.append([i][j])=1
		else:
			matriz.append([i][j])=0



#pag 51
print 
print "ESTE PPROGRAMA HACE LA MULTIPLICACION RUSA"
a = input("ingrese valor de a = ")
b = input("ingrese valor de b = ")
suma = 0
while b>0:
	if b%2==1:
		suma = suma + a	
	a = 2*a
	b = abs(b/2)
print "la suma es ",suma


#pag 53
print 
print "ESTE PPROGRAMA EVALUA EL EXPONECIAL APLICANDO LA SERIE DE TAYLOR DEL 1 A 15"
x = input("ingrese valor de x = ")
suma = 1
i = 1
t = 1
while (i<=15) and (abs(t) > -1):
	t = t * (x/i)
	suma = suma + t
	i = i + 1
print "la suma exponecial es ",suma



#pag 55
print 
print "ESTE PPROGRAMA ES PARA DETERMINAR LA RAIZ APLICANDO EL ALGORITMO DE NEWTON"
n = input("ingrese valor de n = ")
x1 = 1

while True:
	x = x1
	x1 = 0.5*(x+(n/x))
	if abs(x-x1) <= 0.001:
		break
print "la interseccion es ",x1
