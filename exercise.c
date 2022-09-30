def add_odd_even():
    counter = 0
    number = int(input("Please enter the upper bound"))
    while not isinstance(number, int) and counter < 3:
        counter += 1;
        continue
    print(number)
    
add_odd_even()
    
        
        

