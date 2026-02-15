lista = [16,1,5,2,4,7,30,23,10,60,20,3]

def burbuila(lista):
    luzeera = len(lista)
    i =0
    while luzeera>i:
        
        e =0
        while i>e:
            
            if lista[i]<lista[e]:
                temp = lista[i]
                lista[i]=lista[e]
                lista[e]= temp
            e=e+1
        i=i+1
    return lista

print(burbuila(lista))

def burbuilaR(lista, n=None):
    if n == None:
        n = len(lista)
    if n == 1:
        return lista

    i =0
    while i<(n-1):
        
        if lista[i]> lista[i+1]:
            temp = lista[i]
            lista[i]=lista[i+1]
            lista[i+1]=temp
        i=1+i
    return burbuilaR(lista, n-1)

print(burbuilaR(lista))

