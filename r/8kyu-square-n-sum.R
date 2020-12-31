# Name: Square(n)Sum
# Link: https://www.codewars.com/kata/515e271a311df0350d00000f/train/r

library(purrr)
square_sum <- function(nums) {
  # Use map_dbl to loop over the numeric vector while applying the function to each element.
  # Use sum to total the elements. 
  return(sum(map_dbl(nums, function(x) (x ^ 2))))
  
}

square_sum(c(0,3,4,5))
