# cook your dish here
def sub(x, y):
    it = iter(y)
    return all(c in it for c in x)
for a0 in range(int(input())):
    z=input()
    M=len(z)+1 
    l=1 
    V1=[]
    f=False
     ##programe input while l<=M;
    while l<=M:
        i=0 
        V1=['0']*(max(1,l-1))
        if l>1:
            V1.insert(0,'1')
        while True:
            if "".join(V1) not in z and (not sub("".join(V1),z)):
                f=True 
                break
            else:
                if V1==['1']*l:
                    break
                else:
                    for i in range(l-1,-1,-1):
                        if V1[i]=='1':
                            V1[i]='0'
                        else:
                            V1[i]='1'
                            break
        if f==True:
            break
        l+=1
    print("".join(V1))
    #print(joinV1)