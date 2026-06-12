def fibonacci(n)
  return n if n == 0 || n == 1
  return fibonacci(n-1) + fibonacci(n-2)
end

# puts fibonacci(7)

def fib_memo(n, memo = {})
  if n == 1 || n == 0    # base case 
    return n 
  end
  if memo.key?(n)  # cache hit
    return memo[n] 
  end

  memo[n] = fib_memo(n-1, memo) + fib_memo(n-2, memo)
  return memo[n]
end

puts fib_memo(7) # 13
puts fib_memo(10) # 55
puts fib_memo(12) # 144
puts fib_memo(0) # 0
puts fib_memo(1) # 1