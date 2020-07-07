def get_sum_of_multiples_of_below(max_number):
    multiples_sum = 0
    
    for i in range(max_number):
        if i % 3 == 0:
            multiples_sum += i
            continue
        
        if i % 5 == 0:
            multiples_sum += i
    
    print (multiples_sum)

    return multiples_sum

get_sum_of_multiples_of_below(10)
get_sum_of_multiples_of_below(1000)