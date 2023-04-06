def printSubSequence(index,array,container) : 
    if(index >= len(array)) :
        print(container)
        return
    container.append(array[index])
    printSubSequence(index+1, array, container)
    container.pop()
    printSubSequence(index+1, array,container)


container = list()
array = [3,1,2]
index = int(0)

printSubSequence(index,array,container)
