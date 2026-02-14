lista = [1,2,3,4,5,6,7,8,9,10]


def bilaketa(lista, z):
    max = len(lista)
    min =0
    while max>min:
        pos = int((max+min)/2)
        if lista[pos] == z:
            return pos
        if lista[pos]<z:
            min= pos+1
        else:
            max = pos-1
    print("Ez da aurkitu zenbakia")
    return -1

print(bilaketa(lista, 10))

def bilaketaErrekurtsiboa(lista, z, min, max):
    
    if min > max:
        print ("Ez da aurkitu zenbakia")
        return -1
    pos = int((max+min)/2)
    if lista[pos]==z:
        return pos

    if lista[pos]<z:
       min = pos +1
    else:
        max = pos -1
    return bilaketaErrekurtsiboa(lista, z, min, max)

print(bilaketaErrekurtsiboa(lista, 10, 0, len(lista)-1))
