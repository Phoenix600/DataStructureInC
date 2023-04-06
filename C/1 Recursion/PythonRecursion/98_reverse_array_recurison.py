# Utility Funciton
def swap(array,posA,posB):
    array[posA],array[posB] = array[posB], array[posA] 

# Reversed Array function 
def reverseArray(array,begin,last) :
    if(begin >= last):
        return
    swap(array,begin,last)
    reverseArray(array,begin+1,last-1)

LIST = [1,2,3,4,5,6,7]
print("[+]Original Array : ")
print(LIST)
print("[+]Reversed Array : ")
reverseArray(LIST,0,len(LIST)-1)
print(LIST)
