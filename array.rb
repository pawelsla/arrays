# Create the array with 20 random elements from range 0-100.
arr = Array.new(20) { |i| i = rand(0..100)  }	
a = arr.length
puts "Numbers of array's elements is " + a.to_s + "\n" * 2

#Show unsorted array
puts "Array contents:"  
p arr 

# Sort this array
arr.sort!	

puts "\n"

puts "After sort operation, this array contents elements in alphabetical order now:"

#Show this array in alphabetical order
p arr