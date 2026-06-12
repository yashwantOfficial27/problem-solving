def permute(str)
  str1 = str
  str = str1
  result = []
  used = [false] * str.length  # Track used chars
  current = []

  def backtrack(i)
    if i == str.length  # Base: Full perm
      result << current.dup  # Copy to avoid mutation
      return
    end

    (0...str.length).each do |j|
      puts "value of i is : #{i} and value of j : #{j}"
      if used[j]  # Prune: Skip used
        puts "next kr diya"
        next
      end
      puts used 
      used[j] = true
      puts "used changed to:"
      puts used 
      current << str[j]
      puts "current is : #{current}"
      backtrack(i + 1)  # Recurse
      current.pop      # Backtrack: Undo
      used[j] = false
      puts "at last used changed to : #{used}"
    end
  end
  puts "backtrack called "
  backtrack(0)
  result
end

puts permute("ABC").inspect  # [["A","B","C"], ["A","C","B"], ...] (6 total)