arr = [2,6,9,10,13,16,19]

direction = 'right'
index = 0

while(len(arr)>=3): 
    if(direction=='left'):
        try:
            arr.pop(index)
            index = index -2
        except:
            direction ='right'
            index=0

    elif (direction=='right' and index<len(arr)):
        arr.pop(index)
        index = index + 2

    else:
        direction = 'left'
        index = -1
        
print(arr[0], arr[1], sep=',')
