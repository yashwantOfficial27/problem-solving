def permute(str1)
  $str = str1
  $result = []
  $used = [false] * $str.length  # Track $used chars
  $current = []

  def backtrack(i)
    puts "****************************"
	  puts "Backtrack ho kr aaya hai. Value of i is #{i}"
    if i == $str.length  # Base: Full perm
		
      $result << $current.dup  # Copy to avoid mutation
	    puts "base condtion hit. $result << #{$current}"
	    puts "$result: #{$result}"
      return
    end

    (0...$str.length).each do |j|
      puts "j = #{j}"
      puts "$used: #{$used}"
      next if $used[j]  # Prune: Skip $used
      $used[j] = true
	    puts "$used value updated to T"
      $current << $str[j]
	    puts "$current : #{$current}"
      backtrack(i + 1)  # Recurse
	    puts "$current.pop: #{$current.last}"
      $current.pop      # Backtrack: Undo
      $used[j] = false
	    puts "$used resetted: #{$used}"
    end
	
  end

  backtrack(0)
  $result
end

puts permute("ABC").inspect  # [["A","B","C"], ["A","C","B"], ...] (6 total)