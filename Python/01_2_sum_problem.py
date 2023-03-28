# Import your modules here 
import array as arr


def two_sum(arr,sum):

    arr.sort()
    left = 0
    right=len(arr)-1
    while(left<=right):
        if(arr[left]+arr[right]>sum):
            right=right-1
        elif(arr[left]+arr[right] < sum):
            left=left+1
        elif(arr[left]+arr[right]==sum):
            print("value of pairs are",arr[left],"and",arr[right])
            right=right-1
            left=left+1

# Brute-Force-Approach : 0(N^2)
def twoSumV1(LIST, K):
    """_summary_ The @twoSumV1() function takes two  
        arguments as list and K value, K is the sum 
        of pair of list elements
        Time-Complexity : 0(N^2)
        Space-Complexity : 0(1)
    """
    for i in range(0,len(LIST)-1) :
        for j in range(i+1,len(LIST)) :
            if(LIST[i] + LIST[j] == K):
                print(f'{LIST[i]} + {LIST[j]} = {K}') 

# Better Solution 
def twoSumV2(LIST,K):
    """_summary_
    The above function @twoSumV2() is a better solution 
    over the previous problems solution to reduce the 
    running time of algorithm
    Args:
        LIST (<list>): List of numerical elements 
        K (<int>): Integer values, which will be used to 
                    find the pair in array whose sum is K 
    """
    max_element = max(LIST)
    
    # Creating the HASH table 
    HASH = [0 for value in range(max_element+1)] 

    for i in range(0,len(LIST)):
        if(HASH[K-LIST[i]] != 0):
            print(f'{LIST[i]} + {K-LIST[i]} = {K}')
        HASH[LIST[i]] = 1


# Optimal Solution 
def twoSumV3(LIST, K):
    """ The above two methods works for both sorted and unsorted array
        If the give array is already sorted then , This will
        be the most optimal solution 
        Time-Complexity : 0(nlogn)    
    """
    LIST.sort() # Time complexity : 0(nlogn)
    
    i = 0               # First index in the list 
    j = len(LIST)-1     # Last index in the list 

    while(j>=i) :
        if(LIST[i] + LIST[j] == K) :
            print(f"{LIST[i]} + {LIST[j]} = {K}")
            i += 1 
            j -= 1
        elif(LIST[i] + LIST[j] < K) :
            i += 1
        else:
            j -= 1

         
    
    

if __name__ == '__main__' :
    # twoSumV1([5,7,8,9,12,4,5],21)
    # twoSumV2([5,7,8,9,12,4,5],21)
    # twoSumV3([5,7,8,9,12,17,16,4],21)
    two_sum([5,7,8,9,12,17,16,4],21)
