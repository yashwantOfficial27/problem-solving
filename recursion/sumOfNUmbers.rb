def sum(i)
  if i == 0
    return 0
  end
  
  return i + sum(i-1)
end

def sum_of_n_numbers
  return sum(12)
end

# puts sum_of_n_numbers

def sum_of_n_numbers_tail(n, acc = 1)
  return acc if n == 1 

  return sum_of_n_numbers_tail(n-1, acc + n)
end

puts sum_of_n_numbers_tail(0)