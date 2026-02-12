def potentzia(x, n, z, neg):
    
    temp=n
    if n<0:
        temp=abs(n)
        neg=1
        
    if(0>=temp):
        if neg==1:
            print("negativo")
            return 1/z
        return z
    z = z*x
    return potentzia(x, temp-1, z, neg)

print(potentzia(5,-4,1,0))

