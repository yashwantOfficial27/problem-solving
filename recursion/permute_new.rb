def permute(str)
  $result = []
  $used = [false] * str.length  # Track $used indices
  $current = []
  $str =  str
  def backtrack(i)  # Nested: Accesses str, $used, $current, $result from outer scope
    if i == $str.length  # Base case: Full permutation built
      $result << $current.dup  # Save a copy
      return
    end

    (0...$str.length).each do |j|  # Try each position
      puts "value of i is : #{i} and value of j : #{j}"
      if $used[j]  # Prune: Skip if already $used
        puts "next kr diya"
        next 
      end
      puts "used #{$used} "
      $used[j] = true
      puts "used changed to:"
      puts "used #{$used} "
      $current << $str[j]  # Choose: Add char
      puts "current is : #{$current}"
      backtrack(i + 1)  # Explore deeper
      $current.pop  # Backtrack: Undo choice
      $used[j] = false
      puts "at last used changed to : #{$used}"
    end
  end
  puts "backtrack called "
  backtrack(0)  # Start from position 0
  $result
end

# Tests
puts permute("ABC").inspect  # => [["A", "B", "C"], ["A", "C", "B"], ["B", "A", "C"], ["B", "C", "A"], ["C", "A", "B"], ["C", "B", "A"]] (6 perms)
# puts permute("A").inspect    # => [["A"]]
# puts permute("").inspect     # => [[]] (1 empty)
# puts permute("ABC").size     # => 6