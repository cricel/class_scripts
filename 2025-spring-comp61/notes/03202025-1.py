couter = 10

def count_down(count):
    global couter
    if count == 0:  
        couter = count     
        print('Go!')                  
    else:                        
        print(count)             
        count_down(count-1) 

def count_up(count):
    global couter
    if count == 10: 
        couter = count            
        print('Go!')                  
    else:                        
        print(count)             
        count_up(count+1) 

count_down(couter)
count_up(couter) 
## count down from 10 to 0 and count up to 10